/*
 * XREFs of ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014A914
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x1800E41F0 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x1800FC988 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 */

__int64 __fastcall RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  int v7; // r13d
  _BYTE *v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // esi
  int v12; // r14d
  unsigned __int16 v13; // cx
  char v14; // al
  unsigned int v16; // r9d
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  __int64 *v19; // r11
  __int64 v20; // r11
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // [rsp+90h] [rbp+8h]
  __int16 v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]

  v25 = a1;
  v6 = a5;
  v7 = 0;
  v27 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v9 = (unsigned __int8)v8[2];
    v10 = v9;
    v11 = 0;
    if ( v8[2] )
    {
      v12 = v27;
      do
      {
        v13 = *(_WORD *)&v8[2 * v11 + 4];
        v14 = HIBYTE(v13) & 0xF;
        if ( (v13 & 0xF00) == 0 || v14 == 10 )
          break;
        if ( v14 != 2 || (v13 & 0xF000u) != 0 )
        {
          if ( v10 != v9 )
            v10 = -1;
        }
        else
        {
          v10 = v11;
        }
        if ( (unsigned __int8)(v14 - 1) <= 1u )
          ++v12;
        v11 += RtlpUnwindOpSlots(v13);
      }
      while ( v11 < v9 );
      v27 = v12;
      v6 = a5;
    }
    if ( v11 < v9 || (*v8 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v7 > 0x20 )
      return 3221225727LL;
    a4 = &v8[2 * (unsigned __int8)v8[2] + 4 + 2 * (v8[2] & 1)];
    a1 = v25;
  }
  if ( v10 < v9 && v27 == 2 && v11 == v9 )
    v11 = v10;
  v16 = 0;
  while ( 1 )
  {
    v17 = v16;
    if ( v11 >= v9 )
      goto LABEL_52;
    v26 = *(_WORD *)&v8[2 * v11 + 4];
    v18 = HIBYTE(v26) >> 4;
    if ( (v26 & 0xF00) != 0 )
      break;
    if ( v16 >= a3 )
    {
      v19 = (__int64 *)v6[1];
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v19 < **(_QWORD **)a6 || (unsigned __int64)v19 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      v6[1] += 8LL;
      RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v18, *v19);
      v21 = *(_QWORD *)(a6 + 16);
      if ( v21 )
        *(_QWORD *)(v21 + 8LL * v18 + 128) = v20;
    }
    ++v16;
    if ( v18 >= 8 )
      v16 = v17 + 2;
    ++v11;
  }
  if ( v11 >= v9 )
    goto LABEL_52;
  if ( (HIBYTE(v26) & 0xF) == 2 && !v18 )
  {
    if ( v16 >= a3 )
      v6[1] += 8LL;
    ++v11;
  }
  if ( v11 >= v9 || (v8[2 * v11 + 5] & 0xF) != 0xA )
  {
LABEL_52:
    v24 = (_QWORD *)v6[1];
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v24 >= **(_QWORD **)a6 && (unsigned __int64)v24 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *a5 = *v24;
      v6[1] += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v6);
      return 0LL;
    }
    return 3221225512LL;
  }
  v22 = (_QWORD *)v6[1];
  v23 = v22 + 3;
  if ( *(_QWORD *)a6 && ((unsigned __int64)v22 < **(_QWORD **)a6 || (unsigned __int64)v22 > **(_QWORD **)(a6 + 8) - 8LL)
    || *(_QWORD *)a6 && ((unsigned __int64)v23 < **(_QWORD **)a6 || (unsigned __int64)v23 > **(_QWORD **)(a6 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  *a5 = *v22;
  v6[1] = *v23;
  return 0LL;
}
