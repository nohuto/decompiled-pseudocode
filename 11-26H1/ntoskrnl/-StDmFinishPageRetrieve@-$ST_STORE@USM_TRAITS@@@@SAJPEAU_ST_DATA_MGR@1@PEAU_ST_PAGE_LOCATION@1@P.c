/*
 * XREFs of ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140641514 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 * Callees:
 *     SmMapPage @ 0x14035F070 (SmMapPage.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x140391D08 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140641F60 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r10
  bool v7; // zf
  _DWORD *v8; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r15
  __int64 *v14; // r12
  __int64 v15; // r13
  unsigned int v16; // r14d
  int v17; // edx
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rax
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  v5 = (_QWORD *)(a2 + 8);
  v6 = a3;
  v7 = (*(_DWORD *)(a1 + 776) & 0x20000) == 0;
  v8 = (_DWORD *)(a2 + 20);
  v26 = 0;
  if ( !v7 && (*v5 == 2LL || (*v8 & 0x18) != 0) )
  {
    v13 = (_DWORD *)(a1 + 804);
    v14 = (__int64 *)(a1 + 792);
    v22 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(
            *(_QWORD *)(a1 + 792),
            *(_DWORD *)a2 >> *(_DWORD *)(a1 + 804),
            16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 800)),
            a4,
            2);
    v23 = *(_QWORD *)(a4 + 16);
    v27 = v22;
    v24 = (char *)SmMapPage(v23, &v26);
    v12 = v27;
    v6 = v28;
    v15 = (__int64)&v24[4096 * (unsigned __int64)*(unsigned __int16 *)(a2 + 6)];
  }
  else
  {
    v12 = 0LL;
    v13 = (_DWORD *)(a1 + 804);
    v27 = 0LL;
    v14 = (__int64 *)(a1 + 792);
    v15 = 0LL;
  }
  if ( *v5 == 2LL )
  {
    v20 = v15 | 1;
    if ( (*(_DWORD *)(a4 + 8) & 0x400) == 0 )
      v20 = v15;
    v21 = ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, *(_QWORD *)(v6 + 16), v12, v20, a2, v6);
    v12 = v27;
    v16 = v21;
    LODWORD(v6) = v28;
  }
  else
  {
    v16 = a5;
  }
  if ( (*v8 & 0x18) != 0 )
  {
    v25 = v6;
    v16 = ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, v15, a2);
    v8 = (_DWORD *)(a2 + 20);
    v13 = (_DWORD *)(a1 + 804);
    v14 = (__int64 *)(a1 + 792);
    v5 = (_QWORD *)(a2 + 8);
  }
  if ( (*v8 & 1) == 0 )
  {
    *v5 = 0LL;
    return v16;
  }
  v17 = *(_DWORD *)a2 >> *v13;
  v18 = *v14;
  if ( (*(_BYTE *)(*v14 + 2469) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v18, v17, 0, a4, v25, 0);
    *v5 = 0LL;
    return v16;
  }
  SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v18, v17, 0, a4, v25, 0);
  result = v16;
  *v5 = 0LL;
  return result;
}
