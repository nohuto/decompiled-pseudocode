/*
 * XREFs of HalpQueryVirtualRtc @ 0x140585330
 * Callers:
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140576AC0 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140594834 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x140451D40 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpQueryVirtualRtc(_QWORD *a1, bool *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( HalpDeviceBlockUnblockPushLock.NextProcessor == 2 )
    return 0;
  while ( 1 )
  {
    v4 = VrtcTime;
    v5 = qword_140FBB30C;
    v10 = qword_140FBB30C;
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( v4 == qword_140FBB318 )
      break;
    _mm_pause();
  }
  RtlpTimeToTimeFields(&v10, &v8);
  if ( (__int16)v8 <= 1601 )
    return 0;
  *a1 = v5 + 10000000 * (v6.QuadPart - v4) / PerformanceFrequency.QuadPart;
  if ( a2 )
    *a2 = HalpVrtcTimeStale == 0;
  return 1;
}
