/*
 * XREFs of MiChargeCommitSlow @ 0x1402D6E68
 * Callers:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x14045BAD8 (MiReplenishLocalCommit.c)
 *     MiUpdateCommitCounts @ 0x14045BB84 (MiUpdateCommitCounts.c)
 *     MiFreeExcessSegments @ 0x14046E490 (MiFreeExcessSegments.c)
 *     MiExtendPageFilesIfNecessary @ 0x14049E4D0 (MiExtendPageFilesIfNecessary.c)
 *     MiCauseOverCommitPopup @ 0x1404B61B4 (MiCauseOverCommitPopup.c)
 *     MiCreateCommit @ 0x1404C9260 (MiCreateCommit.c)
 *     MiApplyCommitDelay @ 0x1404EF674 (MiApplyCommitDelay.c)
 *     MiConsumeOverCommit @ 0x1405024A0 (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x140503364 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommitSlow(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // edi
  ULONG *v7; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  signed __int64 v13; // rax
  signed __int64 v14; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  int Commit; // eax

  v4 = 0;
  v5 = a3 | 2;
  v7 = &MiSystemPartition;
  if ( (a3 & 4) == 0 )
    v5 = a3;
  if ( (v5 & 8) == 0 )
  {
    if ( (v5 & 7) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 17280);
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v5 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v5 |= 4u;
LABEL_7:
    v10 = 0LL;
    goto LABEL_10;
  }
  v10 = 64LL;
  if ( (ULONG *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 22288) >> 6 < 0x40uLL )
    v10 = *(_QWORD *)(a1 + 22288) >> 6;
LABEL_10:
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 23104);
    v12 = v11 + a2;
    if ( v11 + a2 <= v11 || v10 + v12 < v12 )
      break;
    if ( v10 + v12 <= *(_QWORD *)(a1 + 23448) )
    {
      if ( !v4 && v12 >= *(_QWORD *)(a1 + 17256) )
      {
        MiApplyCommitDelay(a1, v5);
        v4 = 1;
      }
      goto LABEL_16;
    }
    v21 = *(_QWORD *)(a1 + 17248);
    if ( v12 >= v21 && v11 < v21 )
      MiPulseCommitSignal(a1, v7);
    if ( (v5 & 4) != 0 )
    {
      if ( !v10 )
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E2ED08.AffinityVersion);
      goto LABEL_22;
    }
    Commit = MiCreateCommit(a1, a2, v5, v11, (int)v11 + (int)a2, v10);
    if ( Commit >= 0 )
    {
LABEL_16:
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23104), v12, v11);
      v14 = v13;
      if ( v11 == v13 )
      {
        MiUpdateCommitCounts(a1, v13, a2, v5);
        if ( (v5 & 2) == 0 )
        {
          v16 = a2 + v14;
          v17 = *(_QWORD *)(a1 + 23448);
          MiExtendPageFilesIfNecessary(a1, v16, v17);
          if ( (v5 & 1) == 0 && v16 >= *(_QWORD *)(a1 + 17248) && v17 == *(_QWORD *)(a1 + 17224) )
            MiFreeExcessSegments(a1);
          if ( (ULONG *)a1 == &MiSystemPartition )
          {
            v18 = *(unsigned int *)(a4 + 35800);
            if ( (unsigned int)v18 >= 0x80 )
              return 1LL;
            v19 = v16;
            v20 = 256 - v18 + v16;
            if ( v20 > v19 && v10 + v20 > v19 && v10 + v20 <= v17 )
              MiReplenishLocalCommit(a1, a4);
          }
        }
        return 0LL;
      }
    }
    else if ( Commit == -1073741523 )
    {
      return 3221225773LL;
    }
  }
  if ( (v5 & 4) != 0 )
  {
    if ( !v10 )
      _InterlockedIncrement((_DWORD *)&stru_140E2ED08.AffinityVersion + 1);
LABEL_22:
    if ( a2 )
      return (unsigned int)MiConsumeOverCommit(a1, a2, v10) == 0 ? 0xC000022D : 0;
    goto LABEL_16;
  }
  if ( (v5 & 2) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 23548));
    if ( (v5 & 1) == 0 )
      MiCauseOverCommitPopup(a1, v7);
    MiPulseCommitSignal(a1, v7);
  }
  return 3221225773LL;
}
