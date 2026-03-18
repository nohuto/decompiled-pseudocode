/*
 * XREFs of HalpSetVirtualRtc @ 0x140451B58
 * Callers:
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140576AC0 (HalCalibratePerformanceCounter.c)
 *     HalSetRealTimeClock @ 0x140578300 (HalSetRealTimeClock.c)
 *     HalpSetResumeTime @ 0x140594834 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     RtlpTimeToTimeFields @ 0x140451D40 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(__int64 *a1)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( HalpDeviceBlockUnblockPushLock.NextProcessor == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v6 = *a1;
  }
  else
  {
    if ( HalpDeviceBlockUnblockPushLock.NextProcessor )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v6 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v6, &v5);
  if ( (__int16)v5 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140FBB320 = PerformanceCounter.HighPart;
  qword_140FBB318 = PerformanceCounter.QuadPart;
  dword_140FBB314 = HIDWORD(v6);
  qword_140FBB30C = SystemTimePrecise;
  dword_140FBB308 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
