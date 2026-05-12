/*
 * XREFs of WPP_SF_iD @ 0x1400AC954
 * Callers:
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x14009BD04 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_iD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_25fa594137633db1985de5dda85c818b_Traceguids);
}
