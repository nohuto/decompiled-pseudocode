/*
 * XREFs of SymCryptTwistedEdwardsIsEqual @ 0x140576440
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14055EAB8 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptModNeg @ 0x14055ED50 (SymCryptModNeg.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 */

unsigned __int64 __fastcall SymCryptTwistedEdwardsIsEqual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v6; // r12
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rsi
  int IsEqual; // r12d
  int v16; // edi
  char v17; // bl
  _DWORD *v20; // [rsp+38h] [rbp-60h]
  _QWORD v23[9]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *(_DWORD **)(a1 + 616);
  v23[1] = 0LL;
  v20 = v6;
  v11 = v23;
  v12 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v6);
  v13 = 2LL;
  do
  {
    a5 += v12;
    *v11 = SymCryptModElementCreate();
    a6 -= v12;
    ++v11;
    --v13;
  }
  while ( v13 );
  v14 = *(unsigned int *)(a1 + 36);
  SymCryptModMul(v6, a2 + 32);
  SymCryptModMul(v6, a3 + 32);
  IsEqual = SymCryptModElementIsEqual();
  SymCryptModNeg(v20);
  v16 = SymCryptModElementIsEqual();
  SymCryptModMul(v20, v14 + a2 + 32);
  SymCryptModMul(v20, v14 + a3 + 32);
  v17 = a4 | ((-(__int64)a4 & 0x100000000LL) == 0);
  return (IsEqual & ((unsigned __int64)-(__int64)(v17 & 1) >> 32) | v16 & (unsigned int)((unsigned __int64)-(__int64)(v17 & 2) >> 32)) & (unsigned int)SymCryptModElementIsEqual();
}
