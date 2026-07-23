/*
 * XREFs of HalpSetVirtualRtc @ 0x140449C88
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 *     HalpSetResumeTime @ 0x140596FB4 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(LARGE_INTEGER *a1)
{
  LARGE_INTEGER SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v6 = *a1;
  }
  else
  {
    if ( LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v6 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v6, &v5);
  if ( (__int16)v5 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140FBB6C0 = PerformanceCounter.HighPart;
  qword_140FBB6B8 = PerformanceCounter.QuadPart;
  dword_140FBB6B4 = v6.HighPart;
  qword_140FBB6AC = SystemTimePrecise.QuadPart;
  dword_140FBB6A8 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
