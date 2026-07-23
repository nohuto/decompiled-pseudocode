/*
 * XREFs of NtDebugContinue @ 0x140B077A0
 * Callers:
 *     DifNtDebugContinueWrapper @ 0x1406792B0 (DifNtDebugContinueWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     EtwTraceDebuggerEvent @ 0x1404DF0EC (EtwTraceDebuggerEvent.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     DbgkpWakeTarget @ 0x14091D3BC (DbgkpWakeTarget.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  char v8; // r15
  char *v9; // rsi
  char *v10; // r14
  char *i; // rcx
  char *v12; // rdx
  void **v13; // rax
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(Object) = PreviousMode;
  if ( PreviousMode )
    RtlCopyFromUser(&v14, ClientId, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v14, ClientId, 0x10uLL);
  if ( ContinueStatus != 65538
    && ContinueStatus != -2147418111
    && ContinueStatus != 65537
    && ContinueStatus != 1073807361
    && ContinueStatus != 1073807363
    && ContinueStatus != 1073807364 )
  {
    return -1073741811;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(DebugObjectHandle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v7 = result;
  if ( result >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = (char *)Object;
    ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)Object + 24));
    for ( i = (char *)*((_QWORD *)v10 + 10); i != v10 + 80; i = *(char **)i )
    {
      if ( *((_QWORD *)i + 5) == (_QWORD)v14 )
      {
        if ( v8 )
        {
          *((_DWORD *)i + 19) &= ~4u;
          KeSetEvent((PRKEVENT)v10, 0, 0);
          break;
        }
        if ( *((_QWORD *)i + 6) == *((_QWORD *)&v14 + 1) && (*((_DWORD *)i + 19) & 1) != 0 )
        {
          v12 = *(char **)i;
          v13 = (void **)*((_QWORD *)i + 1);
          if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v13 != i )
            __fastfail(3u);
          *v13 = v12;
          *((_QWORD *)v12 + 1) = v13;
          v9 = i;
          v8 = 1;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 24));
    ObfDereferenceObject(v10);
    if ( !v8 )
      return -1073741811;
    if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
      EtwTraceDebuggerEvent(*((_QWORD *)v9 + 7), *((_QWORD *)v9 + 8), 2);
    *((_DWORD *)v9 + 33) = ContinueStatus;
    *((_DWORD *)v9 + 18) = 0;
    DbgkpWakeTarget(v9);
    return v7;
  }
  return result;
}
