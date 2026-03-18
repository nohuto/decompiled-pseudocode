/*
 * XREFs of MiDereferencePageChains @ 0x1403C36A4
 * Callers:
 *     MiRevertThreadAffinity @ 0x1403C354C (MiRevertThreadAffinity.c)
 *     MiProcessPageGroupInfo @ 0x1403C3B34 (MiProcessPageGroupInfo.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406EE130 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiGroupZeroHugeRange @ 0x140705024 (MiGroupZeroHugeRange.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x14070D2EC (MiChangePageAttributeAndZeroBatch.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 23, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
