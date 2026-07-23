/*
 * XREFs of NtCancelIoFileEx @ 0x140949ED0
 * Callers:
 *     DifNtCancelIoFileExWrapper @ 0x140671D70 (DifNtCancelIoFileExWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopCancelIoFile @ 0x14094A544 (IopCancelIoFile.c)
 */

NTSTATUS __cdecl NtCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PVOID v8; // rdi
  NTSTATUS v9; // ebx
  int ULongFromUser; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  NTSTATUS Src; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+50h] [rbp-18h]

  Object = 0LL;
  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = IopCancelIoFile(Object, IoRequestToCancel);
    v13 = 0;
    Src = v9;
    v14 = 0LL;
    if ( PreviousMode )
      RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
    ObfDereferenceObject(v8);
    return v9;
  }
  return result;
}
