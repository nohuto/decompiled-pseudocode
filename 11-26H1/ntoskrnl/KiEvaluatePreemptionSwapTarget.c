/*
 * XREFs of KiEvaluatePreemptionSwapTarget @ 0x140409AA4
 * Callers:
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x140236B50 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     KiHeteroComputeThreadImportance @ 0x140409C30 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x140409C7C (KiHeteroIsSwapBeneficialForPerformance.c)
 *     KiGenerateHeteroSets @ 0x140409CD0 (KiGenerateHeteroSets.c)
 */

bool __fastcall KiEvaluatePreemptionSwapTarget(__int64 a1, __int64 a2, char *a3)
{
  bool v3; // zf
  __int64 v5; // rsi
  char *v7; // r14
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  unsigned __int8 v13; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rdx
  __int64 v18; // rdx
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v3 = (*(_BYTE *)(a1 + 35) & 0x10) == 0;
  v19 = 0LL;
  v20 = 0LL;
  v5 = a2;
  if ( !v3 )
    return 0;
  v7 = *(char **)(a1 + 56);
  if ( *v7 < 0 )
    return 0;
  v8 = *a3;
  v9 = *v7 & 0x7F;
  if ( v9 > v8 )
    return 0;
  if ( v9 == v8 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    if ( !v15 )
      v15 = *(_QWORD *)(a1 + 8);
    v16 = *(unsigned __int8 *)(a2 + 208);
    v17 = *(_WORD **)(v15 + 576);
    v18 = (unsigned __int16)v16 >= *v17 ? 0LL : *(_QWORD *)&v17[4 * v16 + 4];
    if ( (v18 & *(_QWORD *)(v5 + 200)) == 0 )
      return 0;
    KiGenerateHeteroSets(
      *(_QWORD *)(v5 + 192),
      v18,
      ((unsigned __int8)v7[64] >> 3) & 7,
      v7[64] & 7,
      ((unsigned __int8)v7[64] >> 6) & 1,
      (__int64)&v19);
    if ( (*(_QWORD *)(v5 + 200) & v20) == 0 )
      return 0;
    a2 = (unsigned int)(1 << *a3);
    if ( ((unsigned int)a2 & *(_DWORD *)(a1 + 33752)) != 0
      || ((unsigned int)a2 & *(_DWORD *)(*(_QWORD *)(a1 + 36488) + 8LL)) != 0 )
    {
      return 0;
    }
  }
  v10 = v7[64] & 7;
  if ( (_DWORD)v10 != 5 && (unsigned int)v10 > 2 && (_DWORD)v10 != 6 )
    return 0;
  LOBYTE(a2) = *v7 & 0x7F;
  v11 = KiHeteroComputeThreadImportance(v10, a2);
  if ( v11 > *((_WORD *)a3 + 9) )
    return 0;
  if ( v11 < *((_WORD *)a3 + 9) )
    return 1;
  LOBYTE(v12) = (v13 >> 3) & 7;
  return (unsigned int)KiHeteroIsSwapBeneficialForPerformance(a1, v12, v5) != 0;
}
