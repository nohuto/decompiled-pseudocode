/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140202D0C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x140391D08 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140396AB0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140396C10 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     SmWorkQueueGetDepth @ 0x140491FB8 (SmWorkQueueGetDepth.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404EAAB4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, __int64 a3)
{
  int v5; // r12d
  int v6; // edi
  __int64 v7; // rbp
  char v8; // bl
  unsigned int v9; // r9d
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  _DWORD *v12; // rdx
  int v13; // r8d
  _DWORD *i; // rax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  unsigned __int64 j; // rax
  unsigned int *v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  int v24; // ecx
  __int64 v25; // rdi
  void *v26; // rbx
  __int16 v27; // ax
  int v28; // [rsp+70h] [rbp+8h]
  char v29; // [rsp+78h] [rbp+10h]

  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  LODWORD(v7) = 0;
  v8 = a2 & 1;
  v29 = a2 & 1;
LABEL_4:
  v9 = *(_DWORD *)(a1 + 832);
  if ( v9 > (unsigned int)v7 )
  {
    v10 = *(_QWORD *)(a1 + 840);
    v11 = v10 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
    v12 = (_DWORD *)(v10 + 4 * ((unsigned __int64)(unsigned int)v7 >> 5));
    v13 = *v12 | ((1 << (v7 & 0x1F)) - 1);
    for ( i = v12 + 1; ; ++i )
    {
      v15 = ~v13;
      if ( v15 )
        break;
      if ( (unsigned __int64)i > v11 )
        goto LABEL_28;
      v13 = *++v12;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
    v7 = (unsigned int)v16 + 32 * (unsigned int)(((__int64)v12 - v10) >> 2);
    if ( (unsigned int)v7 <= v9 )
    {
      for ( j = ~(v15 | ((1 << v16) - 1)); ; j = *v18 )
      {
        if ( (_DWORD)j )
        {
          _BitScanForward64(&j, j);
          goto LABEL_15;
        }
        v18 = v12 + 1;
        if ( (unsigned __int64)(v12 + 1) > v11 )
          break;
        ++v12;
      }
      LODWORD(j) = 32;
LABEL_15:
      v19 = 32 * (((__int64)v12 - v10) >> 2) + j;
      if ( v19 > v9 )
        v19 = *(_DWORD *)(a1 + 832);
      if ( v19 != (_DWORD)v7 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v7 >= v19 )
            goto LABEL_4;
          v28 = ++v6;
          if ( (v6 & 0xF) == 0
            && a3
            && (unsigned int)SmWorkQueueGetDepth(
                               *(_DWORD **)(a1 + 792),
                               *(_BYTE *)(*(_QWORD *)(a1 + 792) + 2470LL) == 0) )
          {
            v24 = 1;
            v5 = 1;
            goto LABEL_41;
          }
          if ( (_DWORD)v7 == *(_DWORD *)(a1
                                       + 16
                                       * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2 * v7) >> 13)
                                        + 89)) )
          {
            *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + *(_QWORD *)(a1 + 840)) |= 1 << (v7 & 7);
            goto LABEL_27;
          }
          v20 = *(_QWORD *)(a1 + 792);
          if ( (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v7) & 0x1FFF) != 0 )
          {
            if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(v20, v7)
              && SMKM_STORE<SM_TRAITS>::SmStMapRegion(v21, v7, 0, v22, 8) == 3 )
            {
              v5 = 1;
              goto LABEL_27;
            }
          }
          else if ( (*(_BYTE *)(v20 + 2469) & 4) != 0 )
          {
            if ( (int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v20, v7, v8 | 2u) < 0 )
            {
              v5 = 1;
              goto LABEL_27;
            }
          }
          else
          {
            v25 = *(_QWORD *)(v20 + 2648);
            v26 = (void *)(*(_QWORD *)(v25 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL);
            MiFreePagesFromMdl((ULONG_PTR)v26, 0, 0, 0);
            ExFreePoolWithTag(v26, 0);
            v8 = v29;
            *(_QWORD *)(v25 + 8 * v7) = 0LL;
            v6 = v28;
          }
          ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v7, 0LL);
LABEL_27:
          v7 = (unsigned int)(v7 + 1);
        }
      }
    }
  }
LABEL_28:
  if ( a3 )
  {
    v24 = 0;
LABEL_41:
    v27 = *(_WORD *)(a3 + 12) & 1;
    if ( v27 || v5 )
    {
      if ( v24 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v27 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
