/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpLookupUserFunctionTable @ 0x1402CB950 (RtlpLookupUserFunctionTable.c)
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned int *v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned int ULongFromUser; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d

  v4 = (unsigned __int64 *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( a1 >= v5 && a1 < v5 + *(unsigned int *)(a2 + 16) )
  {
    v6 = *(_QWORD *)a2;
    v7 = (_QWORD *)(a2 + 8);
    goto LABEL_11;
  }
  if ( a1 < 0x7FFFFFFF0000LL )
  {
    v8 = RtlpLookupUserFunctionTable(a1);
LABEL_9:
    v6 = v8;
    goto LABEL_10;
  }
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    v8 = RtlpxLookupFunctionTable(a1, a2);
    goto LABEL_9;
  }
  *(_OWORD *)a2 = xmmword_141200030;
  *(_QWORD *)(a2 + 16) = qword_141200040;
  v6 = *(_QWORD *)a2;
LABEL_10:
  v7 = (_QWORD *)(a2 + 8);
LABEL_11:
  if ( !v6 )
  {
    if ( HvlpHypercallCodeVa )
    {
      if ( v4 )
        *v4 = (unsigned __int64)HvlpHypercallCodeVa;
      if ( a1 >= *v4 && a1 < *v4 + 4096 )
      {
        *(_DWORD *)(a2 + 16) = 4096;
        return 0LL;
      }
    }
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_40:
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
  v9 = *(_DWORD *)(a2 + 20);
  if ( !v9 )
  {
LABEL_44:
    *v7 = 0LL;
    goto LABEL_40;
  }
  v10 = v9 / 0xC;
  if ( v9 != 12 * (v9 / 0xC) )
  {
    v7 = (_QWORD *)(a2 + 8);
    goto LABEL_44;
  }
  v11 = 0LL;
  if ( v10 )
  {
    v12 = a1 - *(_QWORD *)(a2 + 8);
    v13 = (unsigned int *)(v6 + 12LL * (v10 - 1));
    if ( v12 < *v13 )
    {
      v16 = 0;
      v17 = v10 - 2;
      while ( v17 >= v16 )
      {
        v18 = (v16 + v17) >> 1;
        v13 = (unsigned int *)(v6 + 12LL * v18);
        if ( v12 < *v13 )
        {
          v17 = v18 - 1;
        }
        else
        {
          if ( v12 < v13[3] )
            break;
          v16 = v18 + 1;
        }
      }
    }
    if ( v12 >= *v13 && v12 < v13[1] )
      v11 = v13;
  }
  if ( v11 )
  {
    v14 = *(_QWORD *)(a2 + 8);
    if ( v14 < 0x7FFFFFFF0000LL )
      ULongFromUser = RtlReadULongFromUser(v11 + 2);
    else
      ULongFromUser = v11[2];
    if ( (ULongFromUser & 1) != 0 )
    {
      v11 = (unsigned int *)(v14 + ULongFromUser - 1LL);
      if ( v14 < 0x7FFFFFFF0000LL )
        ProbeForRead((volatile void *)(v14 + ULongFromUser - 1LL), 1uLL, 4u);
    }
  }
  return v11;
}
