/*
 * XREFs of PspFreeRateControl @ 0x1409B8C78
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1407FEC60 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1407FF37C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409B8904 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1409B8BE8 (PspRemoveCpuRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1409B9164 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
