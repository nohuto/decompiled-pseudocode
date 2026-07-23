/*
 * XREFs of MiUnmapReturnCharges @ 0x140ACA14C
 * Callers:
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiReturnSystemImageCommitment @ 0x140AC9B70 (MiReturnSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

void __fastcall MiUnmapReturnCharges(__int64 a1, unsigned __int64 *a2)
{
  MiReturnResident(a1, *a2);
  MiReturnCommit(a1, a2[3] - a2[1], 0);
}
