/*
 * XREFs of HalQueryRealTimeClock @ 0x140451480
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x140594734 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C08734 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140C0A6E0 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140CAA5C4 (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpReadCmosTime @ 0x140451878 (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x140451B58 (HalpSetVirtualRtc.c)
 *     RtlpTimeToTimeFields @ 0x140451D40 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x1404522F8 (RtlpTimeFieldsToTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalpQueryVirtualRtc @ 0x140585330 (HalpQueryVirtualRtc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x1407801E4 (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B26A10 (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  volatile unsigned int NextProcessor; // ebx
  int v8; // eax
  unsigned __int8 CurrentIrql; // di
  int Time; // ebx
  _BYTE v11[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 OutputBuffer; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v11[0] = 0;
  v2 = 0;
  OutputBuffer = 0LL;
  v13 = 0LL;
  HalpSetVirtualRtc(0LL);
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    HalpReadCmosTime(&v13);
    v5 = 1;
    if ( (unsigned __int8)RtlpTimeFieldsToTime(&v13, &v12) )
    {
      if ( !ExpRealTimeIsUniversal )
        v12 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
      goto LABEL_5;
    }
  }
  NextProcessor = HalpDeviceBlockUnblockPushLock.NextProcessor;
  if ( KeGetCurrentIrql() < 2u && !HalpDeviceBlockUnblockPushLock.NextProcessor )
  {
    v8 = HalpQueryAcpiRealTimeClock(&OutputBuffer);
    if ( v8 < 0 )
    {
      if ( v8 == -1073740651 )
      {
        v2 = 1;
      }
      else if ( v8 != -1073741822 )
      {
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
      }
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(&OutputBuffer, &v12) >= 0 )
    {
LABEL_15:
      v5 = 1;
LABEL_5:
      if ( MEMORY[0xFFFFF78000000014] > v12 + 864000000000LL )
      {
        v12 = MEMORY[0xFFFFF78000000014];
        _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
      }
      if ( !ExpRealTimeIsUniversal )
        v12 -= (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
      RtlpTimeToTimeFields(&v12, a1);
      return v5;
    }
  }
  if ( HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] && NextProcessor && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&v12);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = 2;
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4, v3);
      }
      Time = HalEfiGetTime(&v12);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( Time >= 0 )
      goto LABEL_15;
    if ( Time != -1073741822 )
      _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
  }
  v5 = HalpQueryVirtualRtc(&v12, v11);
  if ( v5 )
  {
    if ( !v11[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
    goto LABEL_5;
  }
  if ( !v2 )
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  return v5;
}
