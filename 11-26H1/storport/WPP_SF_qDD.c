/*
 * XREFs of WPP_SF_qdd @ 0x14006F4AC
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x140037780 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
}
