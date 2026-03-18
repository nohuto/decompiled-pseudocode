/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404CC380
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C5B0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403F0504 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14063D5EC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140202C34 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14038FF58 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140394D30 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140394E90 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     SmWorkQueueGetDepth @ 0x140498468 (SmWorkQueueGetDepth.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F14D4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, __int64 a3)
{
  int v5; // r12d
  char v6; // r15
  __int64 v7; // rbp
  char v8; // di
  unsigned int v9; // r9d
  int v10; // r10d
  __int64 v11; // rbx
  unsigned __int64 v12; // r11
  _DWORD *v13; // rdx
  int v14; // r8d
  _DWORD *i; // rax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned __int64 j; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r9d
  int v25; // ecx
  __int64 v26; // rdi
  void *v27; // rbx
  __int16 v28; // ax
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
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 840);
    v12 = v11 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
    v13 = (_DWORD *)(v11 + 4 * ((unsigned __int64)(unsigned int)v7 >> 5));
    v14 = *v13 | ((1 << (v7 & 0x1F)) - 1);
    for ( i = v13 + 1; ; ++i )
    {
      v16 = ~v14;
      if ( v16 )
        break;
      if ( (unsigned __int64)i > v12 )
        goto LABEL_28;
      v14 = *++v13;
    }
    _BitScanForward64((unsigned __int64 *)&v17, v16);
    v7 = (unsigned int)v17 + 32 * (unsigned int)(((__int64)v13 - v11) >> 2);
    if ( (unsigned int)v7 <= v9 )
    {
      for ( j = ~(v16 | ((1 << v17) - 1)); ; j = *v19 )
      {
        if ( (_DWORD)j )
        {
          _BitScanForward64(&j, j);
          goto LABEL_15;
        }
        v10 += 32;
        v19 = v13 + 1;
        if ( (unsigned __int64)(v13 + 1) > v12 )
          break;
        ++v13;
      }
      LODWORD(j) = 32;
LABEL_15:
      v20 = 32 * (((__int64)v13 - v11) >> 2) + j;
      if ( v20 > v9 )
        v20 = *(_DWORD *)(a1 + 832);
      if ( v20 != (_DWORD)v7 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v7 >= v20 )
            goto LABEL_4;
          if ( ((v6 + 1) & 0xF) == 0
            && a3
            && (unsigned int)SmWorkQueueGetDepth(
                               *(_DWORD **)(a1 + 792),
                               *(_BYTE *)(*(_QWORD *)(a1 + 792) + 2470LL) == 0) )
          {
            v25 = 1;
            v5 = 1;
            goto LABEL_39;
          }
          if ( (_DWORD)v7 == *(_DWORD *)(a1
                                       + 16
                                       * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2 * v7) >> 13)
                                        + 89)) )
          {
            *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + *(_QWORD *)(a1 + 840)) |= 1 << (v7 & 7);
          }
          else
          {
            v21 = *(_QWORD *)(a1 + 792);
            if ( (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v7) & 0x1FFF) != 0 )
            {
              if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(v21, v7)
                && SMKM_STORE<SM_TRAITS>::SmStMapRegion(v22, v7, 0, v23, 8) == 3 )
              {
LABEL_26:
                v5 = 1;
                goto LABEL_27;
              }
            }
            else if ( (*(_BYTE *)(v21 + 2469) & 4) != 0 )
            {
              if ( (int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v21, v7, v8 | 2u) < 0 )
                goto LABEL_26;
            }
            else
            {
              v26 = *(_QWORD *)(v21 + 2648);
              v27 = (void *)(*(_QWORD *)(v26 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL);
              MiFreePagesFromMdl((ULONG_PTR)v27, 0, 0, 0);
              ExFreePoolWithTag(v27, 0);
              *(_QWORD *)(v26 + 8 * v7) = 0LL;
              v8 = v29;
            }
            ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v7, 0LL);
          }
LABEL_27:
          ++v6;
          v7 = (unsigned int)(v7 + 1);
        }
      }
    }
  }
LABEL_28:
  if ( a3 )
  {
    v25 = 0;
LABEL_39:
    v28 = *(_WORD *)(a3 + 12) & 1;
    if ( v28 || v5 )
    {
      if ( v25 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v28 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
