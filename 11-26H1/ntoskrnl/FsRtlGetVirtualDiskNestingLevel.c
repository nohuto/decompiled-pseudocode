/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x1404CA410
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x1404CA600 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // ebx
  signed __int8 v9; // r12
  IRP *v10; // rax
  int Status; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  ULONG v15; // edx
  struct _KEVENT Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  __int128 OutputBuffer; // [rsp+80h] [rbp+7h] BYREF
  ULONG v20; // [rsp+90h] [rbp+17h]

  DeviceType = DeviceObject->DeviceType;
  Object.Header.Reserved1 = 0;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  IoStatusBlock = 0LL;
  if ( (_DWORD)DeviceType != 7 )
  {
    if ( (unsigned int)DeviceType > 0x24 )
      return -1073741808;
    v14 = 0x100000010CLL;
    if ( !_bittest64(&v14, DeviceType) )
      return -1073741808;
  }
  LOWORD(Object.Header.Lock) = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.SignalState = 0;
  v9 = _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  InputBuffer = 1LL;
  v20 = 0;
  OutputBuffer = 0LL;
  v10 = IoBuildDeviceIoControlRequest(
          0x2D1190u,
          DeviceObject,
          &InputBuffer,
          8u,
          &OutputBuffer,
          0x14u,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v10 )
  {
    Status = -1073741670;
    goto LABEL_8;
  }
  Status = IofCallDriver(DeviceObject, v10);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( IoStatusBlock.Information >= 0x14 && (_DWORD)OutputBuffer == 1 )
    {
      if ( v20 <= FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        if ( v20 )
          MaximumVirtualDiskNestingLevel = v20;
      }
      else
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      if ( BYTE4(OutputBuffer) )
        v8 = 0;
      v15 = v8;
      v8 |= 2u;
      if ( (BYTE12(OutputBuffer) & 2) == 0 )
        v8 = v15;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( Status != -1073741670 )
LABEL_7:
    Status = 0;
LABEL_8:
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  CurrentThread = KeGetCurrentThread();
  if ( v9 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return Status;
}
