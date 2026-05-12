/*
 * XREFs of WPP_SF_qdddD @ 0x1400703B4
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids);
}
