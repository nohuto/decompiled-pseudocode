/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14050BB44 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14064107C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140642260 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int64 v9; // r14
  unsigned int *v10; // r13
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rax
  unsigned int j; // ecx
  unsigned __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-B8h]
  unsigned __int64 Buf2; // [rsp+60h] [rbp-78h]
  void *Buf1; // [rsp+68h] [rbp-70h]
  unsigned __int64 v20; // [rsp+70h] [rbp-68h]
  unsigned int *i; // [rsp+78h] [rbp-60h]
  _QWORD v22[10]; // [rsp+88h] [rbp-50h]
  unsigned int v23; // [rsp+E0h] [rbp+8h]
  unsigned int *v24; // [rsp+E8h] [rbp+10h]

  v5 = 0;
  v6 = 0LL;
  v7 = a1 - 2664;
  v8 = 0;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 3068));
    if ( (*(_BYTE *)(v7 + 2469) & 4) == 0 )
    {
      v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v7 + 2648) + 8LL * *(unsigned int *)a2) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_4;
    }
    v9 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v7, *(_DWORD *)a2, 0, (__int64)a4, 64);
    if ( v9 > 4 )
    {
LABEL_4:
      v10 = (unsigned int *)(a2 + 4);
      v11 = (unsigned int *)((char *)a2 + a2[3]);
      for ( i = v11; ; v11 = i )
      {
        if ( v10 >= v11 )
          goto LABEL_31;
        Buf1 = (void *)(v9 + *v10);
        *((_BYTE *)v10 + 7) = 16;
        v12 = (unsigned __int64)&v10[2 * *((unsigned __int8 *)v10 + 6) + 2];
        v20 = v12;
        v13 = v10 + 2;
        while ( 1 )
        {
          v24 = v13;
          if ( (unsigned __int64)v13 >= v12 )
            break;
          if ( v6 )
          {
            if ( v8 == *v13 )
              goto LABEL_10;
            if ( v6 != v9 )
            {
              if ( (*(_BYTE *)(v7 + 2469) & 4) != 0 )
                SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, a3, a4, v17, 8u);
              else
                SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v7, v8, a3, (_DWORD)a4);
              v13 = v24;
            }
          }
          v8 = *v13;
          if ( *v13 == *(_DWORD *)a2 )
          {
            v6 = v9;
          }
          else
          {
            if ( (*(_BYTE *)(v7 + 2469) & 4) != 0 )
              v15 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v7, v8, 0, (__int64)a4, 64);
            else
              v15 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v7, v8, 0, (_DWORD)a4, 64);
            v6 = v15;
            if ( v15 <= 4 )
              goto LABEL_30;
            v13 = v24;
          }
LABEL_10:
          Buf2 = v6 + v13[1];
          v22[0] = 0LL;
          v22[2] = 0LL;
          v22[1] = (Buf2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v23 = (*((unsigned __int16 *)v10 + 2) + 4095 + (Buf2 & 0xFFF)) >> 12;
          if ( (int)MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 16LL * v23, 0LL, 0) >= 0 )
          {
            for ( j = 0; j < v23; ++j )
            {
              if ( (v22[2 * j] & 1) == 0 && (v22[2 * j] & 0xC00000LL) != 0x400000 )
                goto LABEL_20;
            }
            if ( !memcmp(Buf1, (const void *)Buf2, *((unsigned __int16 *)v10 + 2)) )
              *((_BYTE *)v10 + 7) = ((char *)v24 - (char *)(v10 + 2)) >> 3;
            if ( *((_BYTE *)v10 + 7) != 16 )
              break;
          }
LABEL_20:
          v13 = v24 + 2;
          v12 = v20;
        }
        v10 += 2 * *((unsigned __int8 *)v10 + 6) + 2;
      }
    }
LABEL_30:
    v5 = -1073741670;
LABEL_31:
    if ( ((*(unsigned __int8 *)(v7 + 2469) >> 2) & 1) != 0 && v9 > 4 )
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, *(_DWORD *)a2, a3, a4, v17, 8u);
    if ( v6 > 4 && v6 != v9 )
    {
      if ( (*(_BYTE *)(v7 + 2469) & 4) != 0 )
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, a3, a4, v17, 8u);
      else
        SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v7, v8, a3, (_DWORD)a4);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 3068));
    return v5;
  }
}
