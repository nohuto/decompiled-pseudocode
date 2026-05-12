/*
 * XREFs of WPP_SF_Lq @ 0x140097DC8
 * Callers:
 *     RaidUnlockContiguousPhysicalPagesList @ 0x1400465C4 (RaidUnlockContiguousPhysicalPagesList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Lq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids);
}
