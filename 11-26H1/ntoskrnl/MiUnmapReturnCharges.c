/*
 * XREFs of MiUnmapReturnCharges @ 0x140AC855C
 * Callers:
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MiReturnSystemImageCommitment @ 0x140AC7F80 (MiReturnSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

void __fastcall MiUnmapReturnCharges(__int64 a1, unsigned __int64 *a2)
{
  MiReturnResident(a1, *a2);
  MiReturnCommit(a1, a2[3] - a2[1], 0);
}
