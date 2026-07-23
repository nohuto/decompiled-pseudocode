/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140998924
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiComputeProcessUserVa @ 0x140A086A0 (MiComputeProcessUserVa.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x140457600 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x14047EE9C (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140A05C20 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140A7C890 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140B64818 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  unsigned int v6; // ebp
  ULONG *ProcessPartition; // rax
  unsigned int v9; // edi

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v6 = 3;
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 496) & 0x10) == 0 )
      {
LABEL_5:
        ProcessPartition = (ULONG *)MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v6 = 4;
        goto LABEL_12;
      }
      if ( (unsigned __int8)PspChangeJobMemoryUsageByProcess(2LL, a2, a1) )
      {
        v5 = 7;
        goto LABEL_5;
      }
    }
    else
    {
      v6 = 2;
    }
LABEL_12:
    v9 = -1073741523;
    PsReturnProcessPageFileQuota(a1, a2);
    if ( (v5 & 2) != 0 )
      MiReturnProcessCommitment(a1, a2);
    if ( (unsigned __int8)v5 >= 4u )
      PspChangeJobMemoryUsageByProcess(2LL, -(__int64)a2, a1);
    goto LABEL_16;
  }
  v9 = -1073741524;
  v6 = 1;
LABEL_16:
  MiCommitRequestFailed(a1, v4, a2, v6);
  return v9;
}
