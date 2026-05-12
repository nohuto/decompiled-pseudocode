/*
 * XREFs of sub_14008F0E0 @ 0x14008F0E0
 * Callers:
 *     sub_1400BDE7C @ 0x1400BDE7C (sub_1400BDE7C.c)
 *     sub_1400EA44C @ 0x1400EA44C (sub_1400EA44C.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1401176D0 @ 0x1401176D0 (sub_1401176D0.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_140120CDC @ 0x140120CDC (sub_140120CDC.c)
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

bool sub_14008F0E0()
{
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    return 0;
  if ( WatchdogInformation.DpcWatchdogLimit
    && 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount < 5
                                                                    * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit )
  {
    return 1;
  }
  return WatchdogInformation.DpcTimeLimit
      && 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount < 10
                                                                  * (unsigned __int64)WatchdogInformation.DpcTimeLimit;
}
