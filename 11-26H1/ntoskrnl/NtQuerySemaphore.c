/*
 * XREFs of NtQuerySemaphore @ 0x140B47AD0
 * Callers:
 *     DifNtQuerySemaphoreWrapper @ 0x140685860 (DifNtQuerySemaphoreWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQuerySemaphore(HANDLE Handle, int a2, int *a3, int a4, unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int *v10; // rbx
  int ULongFromUser; // eax
  NTSTATUS v13; // esi
  int v14; // r15d
  int v15; // r12d
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, 8uLL, 4u);
    v10 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  else
  {
    v10 = a5;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v14 = *((_DWORD *)Object + 1);
    v15 = *((_DWORD *)Object + 6);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
      RtlWriteULongToUser(a3, v14);
    else
      *a3 = v14;
    if ( PreviousMode )
      RtlWriteULongToUser(a3 + 1, v15);
    else
      a3[1] = v15;
    if ( v10 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v10, 8);
      else
        *v10 = 8;
    }
  }
  return (unsigned int)v13;
}
