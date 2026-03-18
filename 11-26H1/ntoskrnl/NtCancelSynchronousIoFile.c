/*
 * XREFs of NtCancelSynchronousIoFile @ 0x140797050
 * Callers:
 *     DifNtCancelSynchronousIoFileWrapper @ 0x14066E480 (DifNtCancelSynchronousIoFileWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x14052AAA4 (IopCancelApcRequired.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     IopCancelIrpsInThreadList @ 0x140956D60 (IopCancelIrpsInThreadList.c)
 */

NTSTATUS __fastcall NtCancelSynchronousIoFile(HANDLE Handle, __int64 a2, unsigned int *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int Src; // [rsp+48h] [rbp-B0h] BYREF
  int v15; // [rsp+4Ch] [rbp-ACh]
  __int64 v16; // [rsp+50h] [rbp-A8h]
  _BYTE v17[96]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-38h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-30h] BYREF
  char v20; // [rsp+E0h] [rbp-18h]

  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    memset_0(v17, 0, 0x88uLL);
    v10 = Object;
    v11 = IopCancelApcRequired((__int64)Object, 0LL, a2);
    if ( v11 )
    {
      v18 = a2;
      v20 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v11 = IopCancelIrpsInThreadList(v10, v17);
    }
    v12 = v11 == 0 ? 0xC0000225 : 0;
    v15 = 0;
    Src = v12;
    v16 = 0LL;
    if ( PreviousMode )
      RtlCopyToUser(a3, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a3, &Src, 0x10uLL);
    ObfDereferenceObject(v10);
    return v12;
  }
  return result;
}
