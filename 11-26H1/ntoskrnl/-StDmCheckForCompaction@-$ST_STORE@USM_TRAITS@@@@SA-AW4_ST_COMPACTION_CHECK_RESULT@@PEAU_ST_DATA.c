/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14042F938 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmEtwLogCompactionOp @ 0x140529FD0 (SmEtwLogCompactionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, char a2, _DWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // r13d
  BOOL v6; // ebp
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // r9d
  unsigned int v10; // edi
  int v11; // r11d
  unsigned int *v12; // rbp
  unsigned int v13; // r12d
  int v14; // r8d
  int v15; // ecx
  int v16; // eax
  int *v17; // r15
  unsigned int v18; // esi
  int v19; // r14d
  unsigned int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // edi
  int v25; // ebx
  int v26; // ecx
  int v27; // edx
  int v28; // esi
  int v29; // r14d
  unsigned int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // edi
  int v34; // ebx
  int v35; // ecx
  int v36; // edx
  unsigned int v37; // esi
  int v38; // ebp
  unsigned int v39; // r10d
  unsigned int v40; // eax
  int v41; // edi
  int v42; // ebx
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // esi
  int v46; // r14d
  unsigned int v47; // r10d
  unsigned int *v48; // rbp
  unsigned int v49; // eax
  unsigned int v50; // eax
  bool v51; // zf
  __int64 v52; // rax
  unsigned int v53; // esi
  __int64 v54; // rax
  int v56; // [rsp+60h] [rbp-68h]
  int v57; // [rsp+64h] [rbp-64h]
  int v58; // [rsp+68h] [rbp-60h]
  unsigned int *v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  _DWORD *v63; // [rsp+E0h] [rbp+18h]
  char v64; // [rsp+E8h] [rbp+20h]

  v63 = a3;
  v3 = *(_BYTE *)(a1 + 2060) & 3;
  v4 = 0;
  v56 = v3;
  LOBYTE(v6) = 0;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  LOBYTE(a3) = 0;
  v10 = 0;
  v11 = 0;
  if ( (a2 & 3) == 0 && v3 == 2 )
  {
    v53 = 0;
    goto LABEL_50;
  }
  v12 = (unsigned int *)(a1 + 1456);
  v13 = *(_DWORD *)(a1 + 808);
  v14 = 1;
  v15 = *(_DWORD *)(a1 + 812);
  v16 = v13 - v15 + 1;
  v58 = v16;
  v17 = (int *)(v7 + 2004);
  v57 = v15;
  v59 = (unsigned int *)(v7 + 1456);
  v60 = 2LL;
  do
  {
    v18 = *(v17 - 2);
    v19 = *(v17 - 3);
    v20 = v19 * v16;
    v21 = v20 - v18;
    if ( v20 < v18 || v21 < v13 )
    {
      v24 = v19 + v10;
      v25 = v18 + v8;
      v26 = v24;
      v27 = v25;
    }
    else
    {
      v22 = *(v12 - 8);
      if ( v22 != -1 )
        v21 = v57 + (*(_WORD *)(*(_QWORD *)(v7 + 1368) + 2LL * v22) & 0x1FFF) - v13 + v21 - 1;
      v23 = 0;
      if ( v21 >= v13 )
        v23 = v21;
      v24 = v19 + v10;
      v25 = v18 + v8;
      v26 = v24;
      v27 = v25;
      if ( v23 )
      {
        v9 += v23;
        v11 |= v14;
      }
    }
    v28 = *v17;
    v29 = *(v17 - 1);
    v30 = v29 * v58 - *v17;
    if ( v29 * v58 < (unsigned int)*v17 || v30 < v13 )
    {
      v33 = v29 + v26;
      v34 = v27 + v28;
      v35 = v29 + v26;
      v36 = v27 + v28;
    }
    else
    {
      v31 = *(v12 - 4);
      if ( v31 != -1 )
        v30 = v57 + (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * v31) & 0x1FFF) - v13 + v30 - 1;
      v32 = 0;
      if ( v30 >= v13 )
        v32 = v30;
      v33 = v29 + v24;
      v34 = v28 + v25;
      v35 = v33;
      v36 = v34;
      if ( v32 )
      {
        v9 += v32;
        v11 |= __ROL4__(v14, 1);
      }
    }
    v37 = v17[2];
    v38 = v17[1];
    v39 = v38 * v58 - v37;
    if ( v38 * v58 < v37 || v39 < v13 )
    {
      v41 = v35 + v38;
      v42 = v37 + v36;
      v43 = v35 + v38;
      v44 = v37 + v36;
    }
    else
    {
      if ( *v59 != -1 )
        v39 += v57 + (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * *v59) & 0x1FFF) - v13 - 1;
      v40 = 0;
      if ( v39 >= v13 )
        v40 = v39;
      v41 = v38 + v33;
      v42 = v37 + v34;
      v43 = v41;
      v44 = v42;
      if ( v40 )
      {
        v9 += v40;
        v11 |= __ROL4__(v14, 2);
      }
    }
    v45 = v17[4];
    v46 = v17[3];
    v47 = v46 * v58 - v45;
    if ( v46 * v58 < v45 || v47 < v13 )
    {
      v48 = v59;
      v10 = v46 + v43;
      v8 = v45 + v44;
    }
    else
    {
      v48 = v59;
      v49 = v59[4];
      if ( v49 != -1 )
        v47 += v57 + (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * v49) & 0x1FFF) - v13 - 1;
      v50 = 0;
      if ( v47 >= v13 )
        v50 = v47;
      v10 = v46 + v41;
      v8 = v45 + v42;
      if ( v50 )
      {
        v9 += v50;
        v11 |= __ROL4__(v14, 3);
      }
    }
    v16 = v58;
    v12 = v48 + 16;
    v7 = a1;
    v17 += 8;
    v14 = __ROL4__(v14, 4);
    v51 = v60-- == 1;
    v59 = v12;
  }
  while ( !v51 );
  if ( v63 )
    *v63 = v11;
  LODWORD(v7) = a1;
  v52 = *(_QWORD *)(a1 + 792);
  if ( (a2 & 2) != 0 )
  {
    if ( !*(_BYTE *)(v52 + 2470) && v10 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
    {
      v3 = v56;
      LOBYTE(a3) = 0;
      v53 = 2;
      LOBYTE(v6) = 0;
      goto LABEL_50;
    }
LABEL_63:
    v3 = v56;
    v53 = 0;
    LOBYTE(a3) = 0;
    LOBYTE(v6) = 0;
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v52 + 3040) || v10 < 3 )
    goto LABEL_63;
  v3 = v56;
  v6 = (a2 & 1) == 0
    && (v56 == 1
     || *(_DWORD *)(*(_QWORD *)(a1 + 792) + 2552LL)
      + *(_DWORD *)(*(_QWORD *)(a1 + 792) + 3064LL)
      + (*(_DWORD *)(*(_QWORD *)(a1 + 792) + 2556LL) >> 8));
  LODWORD(a3) = v8 >> `ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem[2 * v6];
  v64 = (char)a3;
  if ( v56 == 3 )
  {
    LODWORD(a3) = (_DWORD)a3
                - (v8 >> `ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem[2 * v6 + 1]);
    v64 = (char)a3;
  }
  if ( v9 <= (unsigned int)a3 )
  {
    if ( v56 != 1 && v6 )
      LOBYTE(v4) = v9 > v8 >> `ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem[0];
    LODWORD(v7) = a1;
    v53 = v4;
  }
  else
  {
    LODWORD(v7) = a1;
    v53 = 2;
    v54 = *(_QWORD *)(a1 + 792);
    if ( !*(_BYTE *)(v54 + 2470) )
    {
      if ( *(_DWORD *)(v54 + 2552) + *(_DWORD *)(v54 + 3064) + *(_DWORD *)(v54 + 2556) )
        v53 = !v56 || v56 == 3;
      LODWORD(v7) = a1;
    }
    LOBYTE(a3) = v64;
  }
LABEL_50:
  if ( (WORD2(stru_140E27C48.InitialStack) & 0x200) != 0 )
    SmEtwLogCompactionOp((unsigned int)&stru_140E27C48.QuantumTarget, 11, v7, v3, v6, v53, v9, (char)a3, v8, v10, v11);
  return v53;
}
