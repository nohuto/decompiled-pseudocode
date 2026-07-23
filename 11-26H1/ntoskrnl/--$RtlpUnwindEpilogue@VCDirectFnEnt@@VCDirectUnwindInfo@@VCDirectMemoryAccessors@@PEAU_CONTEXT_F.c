/*
 * XREFs of ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140623718
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x140445AF0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v6; // rdx
  _QWORD *v7; // r15
  unsigned int v8; // ecx
  _BYTE *v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  unsigned int v12; // esi
  int v13; // r15d
  unsigned __int16 v14; // cx
  char v15; // al
  unsigned int v17; // r12d
  unsigned int v18; // r8d
  unsigned int v19; // r10d
  _QWORD *v20; // r9
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  int v27; // [rsp+20h] [rbp-A8h]
  _QWORD *v28; // [rsp+60h] [rbp-68h]
  __int16 v30; // [rsp+D0h] [rbp+8h]
  unsigned int v33; // [rsp+E8h] [rbp+20h]

  v6 = a1;
  v7 = a5;
  v8 = 0;
  v33 = 0;
  v27 = 0;
  while ( 1 )
  {
    v9 = (_BYTE *)(v6 + *((unsigned int *)a4 + 2));
    v10 = (unsigned __int8)v9[2];
    v11 = v10;
    v12 = 0;
    if ( v9[2] )
    {
      v13 = v27;
      do
      {
        v14 = *(_WORD *)&v9[2 * v12 + 4];
        v15 = HIBYTE(v14) & 0xF;
        if ( (v14 & 0xF00) == 0 || v15 == 10 )
          break;
        if ( v15 != 2 || (v14 & 0xF000u) != 0 )
        {
          if ( v11 != v10 )
            v11 = -1;
        }
        else
        {
          v11 = v12;
        }
        if ( (unsigned __int8)(v15 - 1) <= 1u )
          ++v13;
        v12 += RtlpUnwindOpSlots(v14);
      }
      while ( v12 < v10 );
      v27 = v13;
      v7 = a5;
      v8 = v33;
      v6 = a1;
    }
    if ( v12 < v10 || (*v9 & 0x20) == 0 )
      break;
    v33 = ++v8;
    if ( v8 > 0x20 )
      return 3221225727LL;
    a4 = &v9[2 * (unsigned __int8)v9[2] + 4 + 2 * (v9[2] & 1)];
  }
  if ( v11 < v10 && v27 == 2 && v12 == v10 )
    v12 = v11;
  v17 = 0;
  while ( 1 )
  {
    v18 = v17;
    if ( v12 >= v10 )
      goto LABEL_59;
    v30 = *(_WORD *)&v9[2 * v12 + 4];
    v19 = HIBYTE(v30) >> 4;
    if ( (v30 & 0xF00) != 0 )
      break;
    if ( v17 >= a3 )
    {
      v20 = (_QWORD *)v7[1];
      v28 = v20;
      if ( a2 < 0x7FFFFFFF0000LL )
      {
        ProbeForRead(v20, 1uLL, 4u);
        v20 = v28;
        v19 = HIBYTE(v30) >> 4;
      }
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v20 < **(_QWORD **)a6 || (unsigned __int64)v20 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      v7[1] += 8LL;
      RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v7, v19, *v20);
      v22 = *(_QWORD *)(a6 + 16);
      v18 = v17;
      if ( v22 )
        *(_QWORD *)(v22 + 8LL * v19 + 128) = v21;
    }
    ++v17;
    if ( v19 >= 8 )
      v17 = v18 + 2;
    ++v12;
  }
  if ( v12 >= v10 )
    goto LABEL_59;
  if ( (HIBYTE(v30) & 0xF) == 2 && !v19 )
  {
    if ( v17 >= a3 )
      v7[1] += 8LL;
    ++v12;
  }
  if ( v12 >= v10 || (v9[2 * v12 + 5] & 0xF) != 0xA )
  {
LABEL_59:
    v26 = (_QWORD *)v7[1];
    if ( a2 < 0x7FFFFFFF0000LL )
      ProbeForRead(v26, 1uLL, 4u);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v26 >= **(_QWORD **)a6 && (unsigned __int64)v26 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *a5 = *v26;
      v7[1] += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v7, 1);
      return 0LL;
    }
    return 3221225512LL;
  }
  v23 = (_QWORD *)v7[1];
  v24 = v23 + 3;
  if ( a2 < 0x7FFFFFFF0000LL )
    ProbeForRead(v23, 1uLL, 4u);
  v25 = (_QWORD *)a6;
  if ( *(_QWORD *)a6 )
  {
    if ( (unsigned __int64)v23 >= **(_QWORD **)a6 && (unsigned __int64)v23 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      v25 = (_QWORD *)a6;
      goto LABEL_53;
    }
    return 3221225512LL;
  }
LABEL_53:
  if ( a2 < 0x7FFFFFFF0000LL )
  {
    ProbeForRead(v23 + 3, 1uLL, 4u);
    v25 = (_QWORD *)a6;
  }
  if ( *v25 && ((unsigned __int64)v24 < *(_QWORD *)*v25 || (unsigned __int64)v24 > **(_QWORD **)(a6 + 8) - 8LL) )
    return 3221225512LL;
  *a5 = *v23;
  v7[1] = *v24;
  return 0LL;
}
