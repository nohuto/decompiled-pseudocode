/*
 * XREFs of NtDebugContinue @ 0x140987410
 * Callers:
 *     DifNtDebugContinueWrapper @ 0x1406756D0 (DifNtDebugContinueWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     EtwTraceDebuggerEvent @ 0x1404E5B4C (EtwTraceDebuggerEvent.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     DbgkpWakeTarget @ 0x140985E88 (DbgkpWakeTarget.c)
 */

NTSTATUS __fastcall NtDebugContinue(HANDLE Handle, void *a2, int a3)
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
    RtlCopyFromUser(&v14, a2, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v14, a2, 0x10uLL);
  if ( a3 != 65538 && a3 != -2147418111 && a3 != 65537 && a3 != 1073807361 && a3 != 1073807363 && a3 != 1073807364 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
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
    *((_DWORD *)v9 + 33) = a3;
    *((_DWORD *)v9 + 18) = 0;
    DbgkpWakeTarget(v9);
    return v7;
  }
  return result;
}
