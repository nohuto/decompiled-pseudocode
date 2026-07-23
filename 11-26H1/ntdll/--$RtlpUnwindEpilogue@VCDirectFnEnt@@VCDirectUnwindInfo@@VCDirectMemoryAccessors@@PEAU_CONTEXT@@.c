/*
 * XREFs of ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014A528
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 * Callees:
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1800BCD34 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r12d
  int v7; // r13d
  _BYTE *v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned int i; // esi
  unsigned __int16 v12; // cx
  char v13; // al
  unsigned int v15; // r9d
  unsigned int v16; // r14d
  __int16 v17; // ax
  unsigned int v18; // r11d
  _QWORD *v19; // r10
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // r9
  _QWORD *v23; // rdx
  __int64 v24; // [rsp+90h] [rbp+8h]

  v24 = a1;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v9 = (unsigned __int8)v8[2];
    v10 = v9;
    for ( i = 0; i < v9; i += RtlpUnwindOpSlots(v12) )
    {
      v12 = *(_WORD *)&v8[2 * i + 4];
      v13 = HIBYTE(v12) & 0xF;
      if ( (v12 & 0xF00) == 0 || v13 == 10 )
        break;
      if ( v13 != 2 || (v12 & 0xF000u) != 0 )
      {
        if ( v10 != v9 )
          v10 = -1;
      }
      else
      {
        v10 = i;
      }
      if ( (unsigned __int8)(v13 - 1) <= 1u )
        ++v7;
    }
    if ( i < v9 || (*v8 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v6 > 0x20 )
      return 3221225727LL;
    a4 = &v8[2 * (unsigned __int8)v8[2] + 4 + 2 * (v8[2] & 1)];
    a1 = v24;
  }
  if ( v10 < v9 && v7 == 2 && i == v9 )
    i = v10;
  v15 = 0;
  while ( 1 )
  {
    v16 = v15;
    if ( i >= v9 )
      goto LABEL_50;
    v17 = *(_WORD *)&v8[2 * i + 4];
    v18 = HIBYTE(v17) >> 4;
    if ( (v17 & 0xF00) != 0 )
      break;
    if ( v15 >= a3 )
    {
      v19 = *(_QWORD **)(a5 + 152);
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v19 < **(_QWORD **)a6 || (unsigned __int64)v19 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 8LL * v18 + 120) = *v19;
      v20 = *(_QWORD *)(a6 + 16);
      if ( v20 )
        *(_QWORD *)(v20 + 8LL * v18 + 128) = v19;
    }
    ++v15;
    if ( v18 >= 8 )
      v15 = v16 + 2;
    ++i;
  }
  if ( i >= v9 )
    goto LABEL_50;
  if ( (HIBYTE(v17) & 0xF) == 2 && !v18 )
  {
    if ( v15 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++i;
  }
  if ( i >= v9 || (v8[2 * i + 5] & 0xF) != 0xA )
  {
LABEL_50:
    v23 = *(_QWORD **)(a5 + 152);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v23 >= **(_QWORD **)a6 && (unsigned __int64)v23 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v23;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT *>(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v21 = *(_QWORD **)(a5 + 152);
  v22 = v21 + 3;
  if ( *(_QWORD *)a6 && ((unsigned __int64)v21 < **(_QWORD **)a6 || (unsigned __int64)v21 > **(_QWORD **)(a6 + 8) - 8LL)
    || *(_QWORD *)a6 && ((unsigned __int64)v22 < **(_QWORD **)a6 || (unsigned __int64)v22 > **(_QWORD **)(a6 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v21;
  *(_QWORD *)(a5 + 152) = *v22;
  return 0LL;
}
