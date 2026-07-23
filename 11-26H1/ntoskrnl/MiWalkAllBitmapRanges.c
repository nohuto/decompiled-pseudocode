/*
 * XREFs of MiWalkAllBitmapRanges @ 0x140443A20
 * Callers:
 *     MiMirrorBrownPhasePartition @ 0x14044341C (MiMirrorBrownPhasePartition.c)
 *     MiReplacePageOfProtoPool @ 0x140443530 (MiReplacePageOfProtoPool.c)
 *     MiDeleteEmptyPageTableTail @ 0x140443810 (MiDeleteEmptyPageTableTail.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiWalkAllHugeRanges @ 0x140534FF0 (MiWalkAllHugeRanges.c)
 *     MiEnumerateBadHugeRangePages @ 0x1406F0104 (MiEnumerateBadHugeRangePages.c)
 *     MiBlackRemoveChildPartitionHugeRanges @ 0x1406F4200 (MiBlackRemoveChildPartitionHugeRanges.c)
 *     MiFinishResume @ 0x1406F4600 (MiFinishResume.c)
 *     MiMirrorPerformBlackWrites @ 0x1406F4A58 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1406F4B60 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407056BC (MiApplyLazyStampToAwePtes.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     MiCachedPageNotifyPf @ 0x140A69B20 (MiCachedPageNotifyPf.c)
 *     MiMirrorVerify @ 0x140C0722C (MiMirrorVerify.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkAllBitmapRanges(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // r11
  _QWORD *v11; // rdi
  __int64 j; // r8
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 k; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r11
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  __int64 result; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi

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
LABEL_34:
      v24 = 0LL;
      goto LABEL_23;
    }
    v17 = v9 + 8 * ((v16 - 1) >> 6);
    v18 = *(_QWORD *)(v9 + 8 * (v13 >> 6)) | ((1LL << v13) - 1);
    v19 = v9 + 8 * (v13 >> 6);
    for ( k = v19 + 8; ; k += 8LL )
    {
      v21 = ~v18;
      if ( v21 )
        break;
      if ( k > v17 )
        goto LABEL_34;
      v18 = *(_QWORD *)(v19 + 8);
      v19 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v22, v21);
    v23 = (unsigned int)v22 + ((__int64)(v19 - v9) >> 3 << 6);
    if ( v23 > v16 )
    {
      v24 = 0LL;
      goto LABEL_23;
    }
    v27 = ~(v21 | ((1LL << v22) - 1));
    while ( !v27 )
    {
      if ( v19 + 8 > v17 )
      {
        LODWORD(v28) = 64;
        goto LABEL_36;
      }
      v27 = *(_QWORD *)(v19 + 8);
      v19 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v28, v27);
LABEL_36:
    v29 = ((__int64)(v19 - v9) >> 3 << 6) + (unsigned int)v28;
    if ( v29 > v16 )
      v29 = *a1;
    v24 = v29 - v23;
    if ( !v24 )
LABEL_23:
      v23 = *a1;
    v25 = v23 - v13;
    result = guard_dispatch_icall_no_overrides(a3, v13);
    v4 = result;
    if ( (int)result < 0 )
      break;
    v5 = v25 + v24 + v13;
  }
  while ( v5 < *a1 );
  return result;
}
