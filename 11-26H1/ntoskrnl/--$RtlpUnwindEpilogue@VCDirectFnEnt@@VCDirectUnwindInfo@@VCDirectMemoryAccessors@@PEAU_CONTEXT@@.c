/*
 * XREFs of ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062320C
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 * Callees:
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403DB1B0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r12d
  _BYTE *v7; // rbx
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // esi
  int v11; // edi
  unsigned __int16 v12; // cx
  char v13; // al
  unsigned int v15; // r12d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  _QWORD *v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rsi
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+C0h] [rbp+8h]
  __int16 v26; // [rsp+C0h] [rbp+8h]
  int v29; // [rsp+D8h] [rbp+20h]

  v25 = a1;
  v6 = 0;
  v29 = 0;
  while ( 1 )
  {
    v7 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v8 = (unsigned __int8)v7[2];
    v9 = v8;
    v10 = 0;
    if ( v7[2] )
    {
      v11 = v29;
      do
      {
        v12 = *(_WORD *)&v7[2 * v10 + 4];
        v13 = HIBYTE(v12) & 0xF;
        if ( (v12 & 0xF00) == 0 || v13 == 10 )
          break;
        if ( v13 != 2 || (v12 & 0xF000u) != 0 )
        {
          if ( v9 != v8 )
            v9 = -1;
        }
        else
        {
          v9 = v10;
        }
        if ( (unsigned __int8)(v13 - 1) <= 1u )
          ++v11;
        v10 += RtlpUnwindOpSlots(v12);
      }
      while ( v10 < v8 );
      v29 = v11;
    }
    if ( v10 < v8 || (*v7 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v6 > 0x20 )
      return 3221225727LL;
    a4 = &v7[2 * (unsigned __int8)v7[2] + 4 + 2 * (v7[2] & 1)];
    a1 = v25;
  }
  if ( v9 < v8 && v29 == 2 && v10 == v8 )
    v10 = v9;
  v15 = 0;
  while ( 1 )
  {
    v16 = v15;
    if ( v10 >= v8 )
      goto LABEL_60;
    v26 = *(_WORD *)&v7[2 * v10 + 4];
    v17 = HIBYTE(v26) >> 4;
    if ( (v26 & 0xF00) != 0 )
      break;
    if ( v15 >= a3 )
    {
      v18 = *(_QWORD **)(a5 + 152);
      v24 = v18;
      if ( a2 < 0x7FFFFFFF0000LL )
      {
        ProbeForRead(v18, 1uLL, 4u);
        v18 = v24;
        v17 = HIBYTE(v26) >> 4;
      }
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v18 < **(_QWORD **)a6 || (unsigned __int64)v18 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 8LL * v17 + 120) = *v18;
      v19 = *(_QWORD *)(a6 + 16);
      if ( v19 )
        *(_QWORD *)(v19 + 8LL * v17 + 128) = v18;
      v16 = v15;
    }
    ++v15;
    if ( v17 >= 8 )
      v15 = v16 + 2;
    ++v10;
  }
  if ( v10 >= v8 )
    goto LABEL_60;
  if ( (HIBYTE(v26) & 0xF) == 2 && !v17 )
  {
    if ( v15 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++v10;
  }
  if ( v10 >= v8 || (v7[2 * v10 + 5] & 0xF) != 0xA )
  {
LABEL_60:
    v23 = *(_QWORD **)(a5 + 152);
    if ( a2 < 0x7FFFFFFF0000LL )
      ProbeForRead(v23, 1uLL, 4u);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v23 >= **(_QWORD **)a6 && (unsigned __int64)v23 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v23;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT *>(a5, 1, 1);
      return 0LL;
    }
    return 3221225512LL;
  }
  v20 = *(_QWORD **)(a5 + 152);
  v21 = v20 + 3;
  if ( a2 < 0x7FFFFFFF0000LL )
    ProbeForRead(v20, 1uLL, 4u);
  v22 = (_QWORD *)a6;
  if ( *(_QWORD *)a6 )
  {
    if ( (unsigned __int64)v20 >= **(_QWORD **)a6 && (unsigned __int64)v20 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      v22 = (_QWORD *)a6;
      goto LABEL_54;
    }
    return 3221225512LL;
  }
LABEL_54:
  if ( a2 < 0x7FFFFFFF0000LL )
  {
    ProbeForRead(v20 + 3, 1uLL, 4u);
    v22 = (_QWORD *)a6;
  }
  if ( *v22 && ((unsigned __int64)v21 < *(_QWORD *)*v22 || (unsigned __int64)v21 > **(_QWORD **)(a6 + 8) - 8LL) )
    return 3221225512LL;
  *(_QWORD *)(a5 + 248) = *v20;
  *(_QWORD *)(a5 + 152) = *v21;
  return 0LL;
}
