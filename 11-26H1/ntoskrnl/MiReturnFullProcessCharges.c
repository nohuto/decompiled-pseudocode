/*
 * XREFs of MiReturnFullProcessCharges @ 0x1404C9B60
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14095FDBC (MiDecommitRegion.c)
 *     MiCommitExistingVad @ 0x1409C7300 (MiCommitExistingVad.c)
 *     MiSectionProtectReturnCharges @ 0x140A80EE4 (MiSectionProtectReturnCharges.c)
 *     MiReturnFullProcessCommitment @ 0x140A82B94 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140A6B260 (PsReturnProcessPageFileQuota.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 496) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 984), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
