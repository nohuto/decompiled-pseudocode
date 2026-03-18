/*
 * XREFs of PspFreeRateControl @ 0x1409E0A08
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1407F9160 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1407F987C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409E0694 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1409E0978 (PspRemoveCpuRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1409E0BA0 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1409E0EF4 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(PVOID *P, unsigned int a2)
{
  PVOID v3; // rcx

  PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P);
  v3 = P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
