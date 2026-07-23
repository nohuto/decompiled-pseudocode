/*
 * XREFs of NtCancelSynchronousIoFile @ 0x140799B80
 * Callers:
 *     DifNtCancelSynchronousIoFileWrapper @ 0x140672060 (DifNtCancelSynchronousIoFileWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x14052CFC4 (IopCancelApcRequired.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopCancelIrpsInThreadList @ 0x14094A788 (IopCancelIrpsInThreadList.c)
 */

NTSTATUS __cdecl NtCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v10; // rsi
  int v11; // eax
  NTSTATUS v12; // ebx
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  NTSTATUS Src; // [rsp+48h] [rbp-B0h] BYREF
  int v15; // [rsp+4Ch] [rbp-ACh]
  __int64 v16; // [rsp+50h] [rbp-A8h]
  _BYTE v17[96]; // [rsp+60h] [rbp-98h] BYREF
  PIO_STATUS_BLOCK v18; // [rsp+C0h] [rbp-38h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-30h] BYREF
  char v20; // [rsp+E0h] [rbp-18h]

  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    memset_0(v17, 0, 0x88uLL);
    v10 = Object;
    v11 = IopCancelApcRequired((__int64)Object, 0LL, (__int64)IoRequestToCancel);
    if ( v11 )
    {
      v18 = IoRequestToCancel;
      v20 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v11 = IopCancelIrpsInThreadList(v10, v17);
    }
    v12 = v11 == 0 ? 0xC0000225 : 0;
    v15 = 0;
    Src = v12;
    v16 = 0LL;
    if ( PreviousMode )
      RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
    ObfDereferenceObject(v10);
    return v12;
  }
  return result;
}
