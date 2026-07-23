/*
 * XREFs of MiDereferencePageChains @ 0x1403CD5A4
 * Callers:
 *     MiRevertThreadAffinity @ 0x1403CD44C (MiRevertThreadAffinity.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140711F9C (MiChangePageAttributeAndZeroBatch.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 23, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
