/*
 * XREFs of DpiAcpiPrepareAcpiEnumChildCache @ 0x14025300C
 * Callers:
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0 (DpiAcpiPrepareDisplayMuxSupport.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140430744 (DpiAcpiPrepareAcpiChildNameList.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiEnumChildCache(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // rsi
  IRP *v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS Status; // eax
  ULONG OutputBufferLength; // ebx
  __int64 v8; // r14
  void *Pool2; // rax
  IRP *v10; // rax
  _DWORD *v11; // rax
  void *v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  _DWORD InputBuffer[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  size_t Size[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int v18; // [rsp+98h] [rbp+2Fh]

  result = 0LL;
  v16 = 0LL;
  v18 = 0;
  *(_OWORD *)Size = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( *(_QWORD *)(a1 + 3424) )
    return result;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 1214866753;
  InputBuffer[1] = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, Size, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 710;
    goto LABEL_27;
  }
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 733;
      goto LABEL_24;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 750;
LABEL_10:
    v5 = -1072431089;
    goto LABEL_27;
  }
  if ( LODWORD(Size[0]) != 1198089537 || (OutputBufferLength = HIDWORD(Size[0]), HIDWORD(Size[0]) < 0x14) )
  {
    v5 = -1072431089;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 773;
    goto LABEL_27;
  }
  v8 = HIDWORD(Size[0]);
  Pool2 = (void *)ExAllocatePool2(256LL, HIDWORD(Size[0]), 1953656900LL);
  *(_QWORD *)(a1 + 3424) = Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 793;
    goto LABEL_27;
  }
  memset(Pool2, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v10 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3424),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v10 )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 826;
    goto LABEL_27;
  }
  v5 = IofCallDriver(v3, v10);
  if ( v5 == 259 )
  {
    v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 849;
      goto LABEL_24;
    }
    v5 = IoStatusBlock.Status;
  }
  v11 = *(_DWORD **)(a1 + 3424);
  if ( *v11 != 1198089537 || !v11[1] || IoStatusBlock.Information != v8 )
    goto LABEL_10;
LABEL_24:
  if ( v5 < 0 )
  {
LABEL_27:
    v12 = *(void **)(a1 + 3424);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(a1 + 3424) = 0LL;
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v5;
}
