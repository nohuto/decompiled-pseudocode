/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140395650
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  __int64 v6; // rbp
  _WORD *v7; // r15
  _WORD *v8; // r14
  bool v9; // zf
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned __int16 *v23; // r8
  __int64 v24; // r9
  _WORD *v25; // r10
  unsigned __int64 v26; // rbx
  unsigned int v27; // r9d
  _WORD *i; // rdx
  _WORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r10
  _WORD *v32; // r11
  unsigned int v33; // r10d
  unsigned __int16 v34; // cx
  int v35; // ecx
  _WORD v37[28]; // [rsp+0h] [rbp-38h] BYREF

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
  v7 = v37;
  v8 = *(_WORD **)(a1 + 1368);
  v9 = *(_DWORD *)(a1 + 1408) == 0;
  v37[0] = (*(_WORD *)(a1 + 808) - *(_WORD *)(a1 + 812) + 1) & 0x1FFF;
  if ( !v9 && v5 )
  {
    v10 = *(_DWORD *)(a1 + 1392);
    LODWORD(v11) = 0;
    while ( v10 > (unsigned int)v11 )
    {
      v12 = *(_QWORD *)(a1 + 1400);
      v13 = (unsigned __int64)(unsigned int)v11 >> 5;
      v14 = *(_DWORD *)(v12 + 4 * v13) | ((1 << (v11 & 0x1F)) - 1);
      v15 = v12 + 4 * v13;
      v16 = v15 + 4;
      v17 = v12 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
      while ( 1 )
      {
        v18 = ~v14;
        if ( v18 )
          break;
        if ( v16 > v17 )
          goto LABEL_28;
        v14 = *(_DWORD *)(v15 + 4);
        v15 += 4LL;
        v16 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v19, v18);
      v11 = (unsigned int)v19 + 32 * (unsigned int)((v15 - v12) >> 2);
      if ( (unsigned int)v11 > v10 )
        break;
      v20 = ~(v18 | ((1 << v19) - 1));
      while ( 1 )
      {
        if ( v20 )
        {
          _BitScanForward64((unsigned __int64 *)&v21, v20);
          goto LABEL_17;
        }
        if ( v15 + 4 > v17 )
          break;
        v20 = *(_DWORD *)(v15 + 4);
        v15 += 4LL;
      }
      LODWORD(v21) = 32;
LABEL_17:
      v22 = 32 * ((v15 - v12) >> 2) + v21;
      if ( v22 > v10 )
        v22 = v10;
      if ( v22 == (_DWORD)v11 )
        break;
      v23 = &v8[v11];
      while ( (unsigned int)v11 < v22 )
      {
        if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0
          || (v24 = *(_QWORD *)(a1 + 792), v25 = (_WORD *)(*(_QWORD *)(v24 + 2648) + 8 * v11), (*v25 & 0x7FFF) == 0)
          && *(_WORD **)(v24 + 3048) != v25 )
        {
          if ( *v23 >> 13 == a2 )
          {
            v7 = v23;
            goto LABEL_43;
          }
        }
        v11 = (unsigned int)(v11 + 1);
        ++v23;
      }
    }
  }
LABEL_28:
  v26 = (unsigned __int64)&v8[v6];
  v27 = 0;
  for ( i = &v8[v4]; ; ++i )
  {
    v29 = i;
    if ( v27 >= (unsigned int)v6 )
      break;
    if ( (unsigned __int64)i >= v26 )
      i = v8;
    v30 = 0LL;
    if ( (unsigned __int64)v29 < v26 )
      v30 = v4;
    if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0
      || (v31 = *(_QWORD *)(a1 + 792), v32 = (_WORD *)(*(_QWORD *)(v31 + 2648) + 8 * v30), (*v32 & 0x7FFF) == 0)
      && *(_WORD **)(v31 + 3048) != v32 )
    {
      v33 = (unsigned __int16)*i >> 13;
      v34 = *i & 0x1FFF;
      if ( v34 < (unsigned __int16)(*v7 & 0x1FFF) )
      {
        if ( v33 == a2 )
        {
          v7 = i;
          if ( !v34 )
            goto LABEL_43;
        }
        else if ( !v34 && i != &v8[*(unsigned int *)(a1 + 16 * (v33 + 89LL))] )
        {
          v7 = i;
          goto LABEL_43;
        }
      }
    }
    v4 = v30 + 1;
    ++v27;
  }
  if ( v7 == v37 )
    return 0LL;
LABEL_43:
  v35 = v7 - v8 + 1;
  *(_DWORD *)(a1 + 1412) = v35;
  if ( v35 == *(_DWORD *)(a1 + 848) )
    *(_DWORD *)(a1 + 1412) = 0;
  return v7;
}
