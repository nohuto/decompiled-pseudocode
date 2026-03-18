/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1409C7944
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1406FBFCC (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiComputeProcessUserVa @ 0x140962818 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1409C6018 (MiCommitPageTablesForVad.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiCreateLargePageEvent @ 0x140B3C9EC (MiCreateLargePageEvent.c)
 * Callees:
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14045DA60 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x14048552C (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140A6B260 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140B61778 (MiCommitRequestFailed.c)
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
      if ( PspChangeJobMemoryUsageByProcess(2, a2, a1, 0LL) )
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
      PspChangeJobMemoryUsageByProcess(2, -(__int64)a2, a1, 0LL);
    goto LABEL_16;
  }
  v9 = -1073741524;
  v6 = 1;
LABEL_16:
  MiCommitRequestFailed(a1, v4, a2, v6);
  return v9;
}
