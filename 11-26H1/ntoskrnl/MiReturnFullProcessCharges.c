/*
 * XREFs of MiReturnFullProcessCharges @ 0x1404C3598
 * Callers:
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     MiSectionProtectReturnCharges @ 0x140A86D54 (MiSectionProtectReturnCharges.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140A05C20 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140A7C890 (PsReturnProcessPageFileQuota.c)
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
