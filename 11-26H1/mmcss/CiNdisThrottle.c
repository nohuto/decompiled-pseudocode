/*
 * XREFs of CiNdisThrottle @ 0x14000DD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 *     Feature_229060921__private_IsEnabledDeviceUsageNoInline @ 0x140004D38 (Feature_229060921__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 */

void __fastcall CiNdisThrottle(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  NTSTATUS v2; // edi
  bool i; // bl
  int DpcData; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF

  InputBuffer[0] = 1048577LL;
  InputBuffer[1] = -1LL;
  v2 = 0;
  IoStatusBlock = 0LL;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
  for ( i = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0;
        (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) != CiNdisThrottledDown;
        i = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0 )
  {
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    DpcData = -1;
    if ( i )
      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
    HIDWORD(InputBuffer[0]) = DpcData;
    v2 = ZwDeviceIoControlFile(CiNdisDeviceHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
    if ( v2 >= 0 )
      CiNdisThrottledDown = i;
    if ( i == (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) )
      break;
  }
  CiNdisThrottleInProgress = 0;
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  if ( (unsigned int)Feature_229060921__private_IsEnabledDeviceUsageNoInline() )
    ExUnblockOnAddressPushLockEx(&CiNdisThrottleInProgressPushLock, 0LL);
  if ( v2 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_89c284160bb53783ce2da67874a87e3c_Traceguids,
      v2);
}
