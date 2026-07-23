/*
 * XREFs of MiUpdateLargePageBitMap @ 0x1403CF324
 * Callers:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1403D3884 (MiFindLargeNodePage.c)
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     MiDeleteDynamicPfns @ 0x1406ECE7C (MiDeleteDynamicPfns.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiCreatePartitionPages @ 0x140881FEC (MiCreatePartitionPages.c)
 *     MiFreeBootPageTable @ 0x140CF8EB0 (MiFreeBootPageTable.c)
 *     MiMarkLargePagePte @ 0x140CF9EA0 (MiMarkLargePagePte.c)
 *     MiMarkLargePageRanges @ 0x140CF9F2C (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x140D032F4 (MiCreateEnclaveRegions.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r13
  int v6; // r12d
  char v7; // r10
  BOOL v10; // r9d
  __int64 v11; // rsi
  unsigned __int64 *v12; // r14
  int v13; // ecx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // r10
  __int64 *v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  bool v25; // zf
  bool i; // zf
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r9
  __int64 *v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // rbp
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r10
  unsigned __int8 v38; // al
  __int64 v39; // rcx
  __int64 *v40; // r9
  __int64 v41; // r10
  __int64 *v42; // rdx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  bool j; // zf
  __int64 v46; // rdx
  unsigned __int64 v47; // rbp
  __int64 *v48; // r9
  __int64 v49; // rsi
  __int64 *v50; // rdi
  bool k; // zf
  int v52; // [rsp+20h] [rbp-48h]
  char v53; // [rsp+24h] [rbp-44h]
  KIRQL OldIrql; // [rsp+80h] [rbp+18h]

  LODWORD(v5) = 2;
  v6 = a4 & 1;
  v7 = a4;
  if ( a3 < 0x200 )
    return;
  v52 = 0;
  OldIrql = 17;
  v10 = (a4 & 2) != 0;
  while ( 1 )
  {
    v5 = (unsigned int)(v5 - 1);
    v11 = 16LL * (unsigned int)v5;
    v12 = (unsigned __int64 *)(v11 + a1 + 16712);
    if ( !*v12 )
      break;
    v13 = MiLargePageShifts[v5];
    v14 = a2 >> v13;
    v53 = v13;
    v15 = (~(MiPageSizes[v5] - 1) & (a3 + a2 + MiPageSizes[v5] - 1)) >> v13;
    v16 = v15 - (a2 >> v13);
    if ( v10 )
      goto LABEL_35;
    v17 = *v12;
    if ( v6 )
    {
      if ( v14 >= v17 )
        goto LABEL_7;
      if ( v16 > 1 )
      {
        if ( v17 - v14 < v16 )
          goto LABEL_7;
        v19 = *(_QWORD *)(v11 + a1 + 16720);
        v20 = (__int64 *)(v19 + 8 * (v14 >> 6));
        v21 = *v20;
        v22 = (__int64 *)(v19 + 8 * ((v15 - 1) >> 6));
        if ( v20 != v22 )
        {
          for ( i = (v21 & (-1LL << v14)) == -1LL << v14; i; i = *v20 == -1 )
          {
            if ( ++v20 == v22 )
            {
              v23 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1);
              v24 = *v20 & v23;
              goto LABEL_14;
            }
          }
          goto LABEL_28;
        }
        v23 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v14;
        v24 = v21 & v23;
LABEL_14:
        v25 = v24 == v23;
        goto LABEL_32;
      }
      if ( v16 != 1 )
        goto LABEL_7;
      v18 = _bittest64((const signed __int64 *)(*(_QWORD *)(v11 + a1 + 16720) + 8 * (v14 >> 6)), (a2 >> v13) & 0x3F);
    }
    else
    {
      if ( v14 >= v17 )
        goto LABEL_7;
      if ( v16 > 1 )
      {
        if ( v17 - v14 < v16 )
        {
LABEL_7:
          v18 = 0;
          goto LABEL_34;
        }
        v27 = *(_QWORD *)(v11 + a1 + 16720);
        v28 = (__int64 *)(v27 + 8 * (v14 >> 6));
        v29 = *v28;
        v30 = (__int64 *)(v27 + 8 * ((v15 - 1) >> 6));
        if ( v28 == v30 )
        {
          v25 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v14) & v29) == 0;
          goto LABEL_32;
        }
        if ( ((-1LL << v14) & v29) != 0 )
        {
LABEL_28:
          v18 = 0;
LABEL_33:
          v7 = a4;
          goto LABEL_34;
        }
        while ( ++v28 != v30 )
        {
          if ( *v28 )
            goto LABEL_28;
        }
        v25 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1)) & *v28) == 0;
LABEL_32:
        v18 = v25;
        goto LABEL_33;
      }
      if ( v16 != 1 )
        goto LABEL_7;
      v18 = !_bittest64(
               (const signed __int64 *)(*(_QWORD *)(v11 + a1 + 16720) + 8 * (a2 >> v13 >> 6)),
               (a2 >> v13) & 0x3F);
    }
LABEL_34:
    if ( v18 )
      break;
LABEL_35:
    if ( !v52 )
    {
      v52 = 1;
      if ( (v7 & 4) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2DAB0.CurrentRunTime);
      else
        OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2DAB0.CurrentRunTime);
    }
    v31 = v11 + a1 + 16712;
    if ( v6 )
      RtlSetBitsEx(v31, v14, v16);
    else
      RtlClearBitsEx(v31, v14, v16);
    if ( !(_DWORD)v5 )
      break;
    v32 = (unsigned __int64)MiPageSizes[(unsigned int)(v5 - 1)] >> v53;
    v33 = ~(v32 - 1);
    v34 = v33 & v14;
    v35 = v33 & (v32 + v15 - 1);
    v36 = v35 - v34;
    if ( v6 )
    {
      if ( v34 >= *v12 )
        goto LABEL_48;
      if ( v32 > 1 )
      {
        if ( *v12 - v34 < v32 )
          goto LABEL_48;
        v39 = *(_QWORD *)(v11 + a1 + 16720);
        v40 = (__int64 *)(v39 + 8 * (v34 >> 6));
        v41 = *v40;
        v42 = (__int64 *)(v39 + 8 * ((v34 + v32 - 1) >> 6));
        if ( v40 == v42 )
        {
          v43 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v32) << v34;
          v44 = v41 & v43;
LABEL_57:
          if ( v44 == v43 )
            goto LABEL_50;
        }
        else
        {
          for ( j = ((-1LL << v34) & v41) == -1LL << v34; j; j = *v40 == -1 )
          {
            if ( ++v40 == v42 )
            {
              v43 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v34 + (unsigned __int8)v32 - 1);
              v44 = *v40 & v43;
              goto LABEL_57;
            }
          }
        }
LABEL_48:
        v36 -= v32;
        if ( !v36 )
          break;
        v34 += v32;
      }
      else if ( v32 != 1
             || !_bittest64((const signed __int64 *)(*(_QWORD *)(v11 + a1 + 16720) + 8 * (v34 >> 6)), v34 & 0x3F) )
      {
        goto LABEL_48;
      }
LABEL_50:
      v37 = v35 - v32;
      if ( v35 - v32 < *v12 )
      {
        if ( v32 > 1 )
        {
          if ( *v12 - v37 >= v32 )
          {
            v46 = *(_QWORD *)(v11 + a1 + 16720);
            v47 = v35 - 1;
            v48 = (__int64 *)(v46 + 8 * (v37 >> 6));
            v49 = *v48;
            v50 = (__int64 *)(v46 + 8 * (v47 >> 6));
            if ( v48 == v50 )
            {
              v38 = (v49 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v32) << v37)) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v32) << v37;
              goto LABEL_67;
            }
            for ( k = (v49 & (-1LL << v37)) == -1LL << v37; k; k = *v48 == -1 )
            {
              if ( ++v48 == v50 )
              {
                if ( (*v48 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v47)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v47 )
                  goto LABEL_75;
                break;
              }
            }
          }
        }
        else if ( v32 == 1 )
        {
          v38 = _bittest64(
                  (const signed __int64 *)(*(_QWORD *)(v11 + a1 + 16720) + 8 * (v37 >> 6)),
                  ((_BYTE)v35 - 1) & 0x3F);
LABEL_67:
          if ( v38 )
            goto LABEL_75;
        }
      }
      v36 -= v32;
      if ( !v36 )
        break;
    }
LABEL_75:
    v7 = a4;
    v10 = v6;
    a2 = v34 << v53;
    a3 = v36 << v53;
  }
  if ( v52 )
  {
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2DAB0.CurrentRunTime);
    else
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2DAB0.CurrentRunTime, OldIrql);
  }
}
