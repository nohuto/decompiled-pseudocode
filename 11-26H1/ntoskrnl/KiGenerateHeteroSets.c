/*
 * XREFs of KiGenerateHeteroSets @ 0x140409CD0
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140409AA4 (KiEvaluatePreemptionSwapTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGenerateHeteroSets(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, int a5, __int64 *a6)
{
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rdx

  v7 = a3 + (unsigned int)*(unsigned __int8 *)(a1 + 185) * (a5 + 2 * a4);
  v8 = *(_QWORD *)(a1 + 192);
  v9 = *(_QWORD *)(v8 + 24 * v7 + 16);
  v10 = v9 & *(_QWORD *)(v8 + 24 * v7 + 8);
  v11 = v10 & *(_QWORD *)(v8 + 24 * v7);
  v12 = a2 & v10;
  v13 = a2 & v11;
  v14 = a2 & v9;
  if ( v14 )
  {
    if ( v12 )
    {
      a6[1] = v12;
      a6[2] = v14;
      if ( !v13 )
        v13 = v12;
      *a6 = v13;
      return 0LL;
    }
    else
    {
      *a6 = v14;
      result = 0LL;
      a6[1] = v14;
      a6[2] = v14;
    }
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 128) & a2;
    *a6 = v16;
    result = 1LL;
    a6[1] = v16;
    a6[2] = v16;
  }
  return result;
}
