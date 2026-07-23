/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14064256C
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x140820888 (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x14047671C (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmGetStoreOwnerProcessId @ 0x140642A78 (SmGetStoreOwnerProcessId.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  _WORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  _DWORD *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  _DWORD *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  _DWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  int StoreOwnerProcessId; // eax
  _DWORD *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  _DWORD *v65; // rdx
  __int64 result; // rax
  __int64 v67; // rcx
  int v68; // [rsp+40h] [rbp+8h] BYREF
  int v69; // [rsp+48h] [rbp+10h] BYREF

  v3 = (_QWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  v68 = 0;
  v69 = 0;
  *v3 = a1;
  v5 = *a2;
  v6 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v5 + 8 * v6) = v3;
  *(_QWORD *)(v5 + 8 * v6 + 8) = 8LL;
  ++*((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) += 8;
  v7 = (_QWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v7 = 0LL;
  v8 = *a2;
  v9 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v8 + 8 * v9) = v7;
  *(_QWORD *)(v8 + 8 * v9 + 8) = 8LL;
  *((_DWORD *)a2 + 6) += 8;
  ++*((_DWORD *)a2 + 4);
  v10 = (_QWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v10 = a1 + 64;
  v11 = *a2;
  v12 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v11 + 8 * v12) = v10;
  *(_QWORD *)(v11 + 8 * v12 + 8) = 8LL;
  *((_DWORD *)a2 + 6) += 8;
  ++*((_DWORD *)a2 + 4);
  v13 = (_QWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v13 = 0LL;
  v14 = *a2;
  v15 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v14 + 8 * v15) = v13;
  *(_QWORD *)(v14 + 8 * v15 + 8) = 8LL;
  *((_DWORD *)a2 + 6) += 8;
  v16 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  ++*((_DWORD *)a2 + 4);
  if ( a1 != -2640 )
    *v16 = *(_DWORD *)(a1 + 2640);
  v17 = *a2;
  v18 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v17 + 8 * v18) = v16;
  *(_QWORD *)(v17 + 8 * v18 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v19 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v19 = *(_DWORD *)(a1 + 912);
  v20 = *a2;
  v21 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v20 + 8 * v21) = v19;
  *(_QWORD *)(v20 + 8 * v21 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v22 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v22 = 4096;
  v23 = *a2;
  v24 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v23 + 8 * v24) = v22;
  *(_QWORD *)(v23 + 8 * v24 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v25 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v25 = 0;
  v26 = *a2;
  v27 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v26 + 8 * v27) = v25;
  *(_QWORD *)(v26 + 8 * v27 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v28 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v28 = 0;
  v29 = *a2;
  v30 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v29 + 8 * v30) = v28;
  *(_QWORD *)(v29 + 8 * v30 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v31 = (_WORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v31 = *(unsigned __int8 *)(a1 + 2468);
  v32 = *a2;
  v33 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v32 + 8 * v33) = v31;
  *(_QWORD *)(v32 + 8 * v33 + 8) = 2LL;
  *((_DWORD *)a2 + 6) += 2;
  v34 = (_WORD *)(a2[1] + *((unsigned int *)a2 + 6));
  ++*((_DWORD *)a2 + 4);
  if ( a1 != -2464 )
    *v34 = *(_WORD *)(a1 + 2464);
  v35 = *a2;
  v36 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v35 + 8 * v36) = v34;
  *(_QWORD *)(v35 + 8 * v36 + 8) = 2LL;
  *((_DWORD *)a2 + 6) += 2;
  v37 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  ++*((_DWORD *)a2 + 4);
  if ( a1 != -72 )
    *v37 = *(_DWORD *)(a1 + 72);
  v38 = *a2;
  v39 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v38 + 8 * v39) = v37;
  *(_QWORD *)(v38 + 8 * v39 + 8) = 4LL;
  ++*((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) += 4;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 64, &v68, &v69);
  v40 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v40 = v68;
  v41 = *a2;
  v42 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v41 + 8 * v42) = v40;
  *(_QWORD *)(v41 + 8 * v42 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v43 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v43 = v69;
  v44 = *a2;
  v45 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v44 + 8 * v45) = v43;
  *(_QWORD *)(v44 + 8 * v45 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v46 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v46 = *(_DWORD *)(a1 + 840);
  v47 = *a2;
  v48 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v47 + 8 * v48) = v46;
  *(_QWORD *)(v47 + 8 * v48 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v49 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v49 = 0;
  v50 = *a2;
  v51 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v50 + 8 * v51) = v49;
  *(_QWORD *)(v50 + 8 * v51 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v52 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v52 = 0;
  v53 = *a2;
  v54 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v53 + 8 * v54) = v52;
  *(_QWORD *)(v53 + 8 * v54 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  ++*((_DWORD *)a2 + 4);
  v55 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v55 = 0;
  v56 = *a2;
  v57 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v56 + 8 * v57) = v55;
  *(_QWORD *)(v56 + 8 * v57 + 8) = 4LL;
  *((_DWORD *)a2 + 6) += 4;
  v58 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  ++*((_DWORD *)a2 + 4);
  if ( a1 != -1484 )
    *v58 = *(_DWORD *)(a1 + 1484);
  v59 = *a2;
  v60 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v59 + 8 * v60) = v58;
  *(_QWORD *)(v59 + 8 * v60 + 8) = 4LL;
  ++*((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) += 4;
  StoreOwnerProcessId = SmGetStoreOwnerProcessId(a1);
  v62 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v62 = StoreOwnerProcessId;
  v63 = *a2;
  v64 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(v63 + 8 * v64 + 8) = 4LL;
  *(_QWORD *)(v63 + 8 * v64) = v62;
  ++*((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) += 4;
  v65 = (_DWORD *)(a2[1] + *((unsigned int *)a2 + 6));
  *v65 = ***(unsigned __int16 ***)(*(_QWORD *)(a1 + 3200) + 2208LL);
  result = *a2;
  v67 = 2LL * *((unsigned int *)a2 + 4);
  *(_QWORD *)(result + 8 * v67 + 8) = 4LL;
  *(_QWORD *)(result + 8 * v67) = v65;
  ++*((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) += 4;
  return result;
}
