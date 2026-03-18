/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1403938C0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210E90 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  __int64 v6; // rbp
  _WORD *v7; // r12
  _WORD *v8; // r15
  bool v9; // zf
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int16 *v24; // r8
  __int64 v25; // r9
  _WORD *v26; // r10
  unsigned __int64 v27; // rbx
  unsigned int v28; // r9d
  _WORD *i; // rdx
  _WORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r10
  _WORD *v33; // r11
  unsigned int v34; // r10d
  unsigned __int16 v35; // cx
  int v36; // ecx
  _WORD v38[28]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 792) + 3040LL) )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1412);
    v5 = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
  }
  v6 = *(unsigned int *)(a1 + 848);
  v7 = v38;
  v8 = *(_WORD **)(a1 + 1368);
  v9 = *(_DWORD *)(a1 + 1408) == 0;
  v38[0] = (*(_WORD *)(a1 + 808) - *(_WORD *)(a1 + 812) + 1) & 0x1FFF;
  if ( !v9 && v5 )
  {
    v10 = *(_DWORD *)(a1 + 1392);
    LODWORD(v11) = 0;
    while ( v10 > (unsigned int)v11 )
    {
      v12 = *(_QWORD *)(a1 + 1400);
      v13 = (unsigned __int64)(unsigned int)v11 >> 5;
      v14 = 0;
      v15 = *(_DWORD *)(v12 + 4 * v13) | ((1 << (v11 & 0x1F)) - 1);
      v16 = v12 + 4 * v13;
      v17 = v16 + 4;
      v18 = v12 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
      while ( 1 )
      {
        v19 = ~v15;
        if ( v19 )
          break;
        if ( v17 > v18 )
          goto LABEL_28;
        v15 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
        v17 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v20, v19);
      v11 = (unsigned int)v20 + 32 * (unsigned int)((v16 - v12) >> 2);
      if ( (unsigned int)v11 > v10 )
        break;
      v21 = ~(v19 | ((1 << v20) - 1));
      while ( 1 )
      {
        if ( v21 )
        {
          _BitScanForward64((unsigned __int64 *)&v22, v21);
          goto LABEL_17;
        }
        v14 += 32;
        if ( v16 + 4 > v18 )
          break;
        v21 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
      }
      LODWORD(v22) = 32;
LABEL_17:
      v23 = 32 * ((v16 - v12) >> 2) + v22;
      if ( v23 > v10 )
        v23 = v10;
      if ( v23 == (_DWORD)v11 )
        break;
      v24 = &v8[v11];
      while ( (unsigned int)v11 < v23 )
      {
        if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0
          || (v25 = *(_QWORD *)(a1 + 792), v26 = (_WORD *)(*(_QWORD *)(v25 + 2648) + 8 * v11), (*v26 & 0x7FFF) == 0)
          && *(_WORD **)(v25 + 3048) != v26 )
        {
          if ( *v24 >> 13 == a2 )
          {
            v7 = v24;
            goto LABEL_43;
          }
        }
        v11 = (unsigned int)(v11 + 1);
        ++v24;
      }
    }
  }
LABEL_28:
  v27 = (unsigned __int64)&v8[v6];
  v28 = 0;
  for ( i = &v8[v4]; ; ++i )
  {
    v30 = i;
    if ( v28 >= (unsigned int)v6 )
      break;
    if ( (unsigned __int64)i >= v27 )
      i = v8;
    v31 = 0LL;
    if ( (unsigned __int64)v30 < v27 )
      v31 = v4;
    if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0
      || (v32 = *(_QWORD *)(a1 + 792), v33 = (_WORD *)(*(_QWORD *)(v32 + 2648) + 8 * v31), (*v33 & 0x7FFF) == 0)
      && *(_WORD **)(v32 + 3048) != v33 )
    {
      v34 = (unsigned __int16)*i >> 13;
      v35 = *i & 0x1FFF;
      if ( v35 < (unsigned __int16)(*v7 & 0x1FFF) )
      {
        if ( v34 == a2 )
        {
          v7 = i;
          if ( !v35 )
            goto LABEL_43;
        }
        else if ( !v35 && i != &v8[*(unsigned int *)(a1 + 16 * (v34 + 89LL))] )
        {
          v7 = i;
          goto LABEL_43;
        }
      }
    }
    v4 = v31 + 1;
    ++v28;
  }
  if ( v7 == v38 )
    return 0LL;
LABEL_43:
  v36 = v7 - v8 + 1;
  *(_DWORD *)(a1 + 1412) = v36;
  if ( v36 == *(_DWORD *)(a1 + 848) )
    *(_DWORD *)(a1 + 1412) = 0;
  return v7;
}
