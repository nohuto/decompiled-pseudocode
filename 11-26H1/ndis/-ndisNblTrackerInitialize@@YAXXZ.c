/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018F098
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A48E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     WPP_RECORDER_SF_i @ 0x1400A4D7C (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x14013B260 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 */

void __fastcall ndisNblTrackerInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  struct _GUID *v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration(a1, a2, a3);
  qword_14011E5A0 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v5 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      v8[0] = 0LL;
      v8[1] = -1LL;
      if ( v5 > 0x7FFFFFFF )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v5, v4, (int)v6);
        }
        v5 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v5, v5, v8, v6, v7);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        ndisNblTrackerHistoryBuffer = (unsigned __int64 *)ExAllocatePool2(
                                                            64LL,
                                                            8LL * ndisNblTrackerHistorySize,
                                                            1802781774LL);
        if ( !ndisNblTrackerHistoryBuffer )
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          1,
          13,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids);
      }
    }
  }
}
