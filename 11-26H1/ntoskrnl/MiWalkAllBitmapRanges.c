/*
 * XREFs of MiWalkAllBitmapRanges @ 0x14044B8F0
 * Callers:
 *     MiMirrorBrownPhasePartition @ 0x14044B2EC (MiMirrorBrownPhasePartition.c)
 *     MiReplacePageOfProtoPool @ 0x14044B400 (MiReplacePageOfProtoPool.c)
 *     MiDeleteEmptyPageTableTail @ 0x14044B6E0 (MiDeleteEmptyPageTableTail.c)
 *     MiFinishPteChangesInPageTable @ 0x140527D9C (MiFinishPteChangesInPageTable.c)
 *     MiWalkAllHugeRanges @ 0x140532B50 (MiWalkAllHugeRanges.c)
 *     MiEnumerateBadHugeRangePages @ 0x1406EB464 (MiEnumerateBadHugeRangePages.c)
 *     MiBlackRemoveChildPartitionHugeRanges @ 0x1406EF560 (MiBlackRemoveChildPartitionHugeRanges.c)
 *     MiFinishResume @ 0x1406EF990 (MiFinishResume.c)
 *     MiMirrorPerformBlackWrites @ 0x1406EFDE8 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1406EFEF0 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407009EC (MiApplyLazyStampToAwePtes.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     MiCachedPageNotifyPf @ 0x140A5CB60 (MiCachedPageNotifyPf.c)
 *     MiMirrorVerify @ 0x140C0101C (MiMirrorVerify.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkAllBitmapRanges(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 i; // r11
  _QWORD *v11; // rdi
  __int64 j; // r8
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  unsigned __int64 v18; // r11
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 k; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  __int64 result; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi

  v4 = 0;
  v5 = 0LL;
  do
  {
    v7 = *a1;
    v8 = 0LL;
    v9 = a1[1];
    if ( v5 < *a1 )
      v8 = v5;
    for ( i = v7 - 1; ; i = v14 - 1 )
    {
      if ( i - v8 == -1LL )
      {
LABEL_9:
        v13 = -1LL;
        goto LABEL_10;
      }
      v11 = (_QWORD *)(v9 + 8 * (v8 >> 6));
      for ( j = ~*v11 | ((1LL << v8) - 1); j == -1; j = ~*v11 )
      {
        if ( (unsigned __int64)++v11 > v9 + 8 * (i >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&v15, ~j);
      v13 = v15 + ((__int64)((__int64)v11 - v9) >> 3 << 6);
      if ( v13 <= i )
        break;
      v13 = -1LL;
LABEL_10:
      if ( !v8 )
        goto LABEL_16;
      v14 = v5 + 1;
      v8 = 0LL;
      if ( v5 + 1 > v7 )
        v14 = *a1;
    }
    if ( v13 == -1LL )
      goto LABEL_10;
LABEL_16:
    if ( v13 < v5 || v13 == -1LL )
      return v4;
    v16 = *a1;
    if ( *a1 <= v13 )
    {
LABEL_39:
      v25 = 0LL;
      goto LABEL_23;
    }
    v17 = 0LL;
    v18 = v9 + 8 * ((v16 - 1) >> 6);
    v19 = *(_QWORD *)(v9 + 8 * (v13 >> 6)) | ((1LL << v13) - 1);
    v20 = v9 + 8 * (v13 >> 6);
    for ( k = v20 + 8; ; k += 8LL )
    {
      v22 = ~v19;
      if ( v22 )
        break;
      if ( k > v18 )
        goto LABEL_39;
      v19 = *(_QWORD *)(v20 + 8);
      v20 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v23, v22);
    v24 = (unsigned int)v23 + ((__int64)(v20 - v9) >> 3 << 6);
    if ( v24 > v16 )
    {
      v25 = 0LL;
      goto LABEL_23;
    }
    v28 = ~(v22 | ((1LL << v23) - 1));
    while ( !v28 )
    {
      v17 += 64LL;
      if ( v20 + 8 > v18 )
      {
        LODWORD(v29) = 64;
        goto LABEL_35;
      }
      v28 = *(_QWORD *)(v20 + 8);
      v20 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v29, v28);
LABEL_35:
    v30 = ((__int64)(v20 - v9) >> 3 << 6) + (unsigned int)v29;
    if ( v30 > v16 )
      v30 = *a1;
    v25 = v30 - v24;
    if ( !v25 )
LABEL_23:
      v24 = *a1;
    v26 = v24 - v13;
    result = guard_dispatch_icall_no_overrides(a3, v13);
    v4 = result;
    if ( (int)result < 0 )
      break;
    v5 = v26 + v25 + v13;
  }
  while ( v5 < *a1 );
  return result;
}
