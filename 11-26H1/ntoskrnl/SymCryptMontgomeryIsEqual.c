/*
 * XREFs of SymCryptMontgomeryIsEqual @ 0x140565F90
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14055C5D0 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x14055C82C (SymCryptModMul.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055C9C0 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptMontgomeryIsEqual(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rbp
  __int64 *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rsi
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]

  v6 = *(_DWORD **)(a1 + 616);
  v16 = a3;
  v15[1] = 0LL;
  v10 = v15;
  v11 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v6);
  v12 = 2LL;
  do
  {
    a5 += v11;
    *v10 = SymCryptModElementCreate();
    a6 -= v11;
    ++v10;
    --v12;
  }
  while ( v12 );
  v13 = v16;
  SymCryptModMul(v6, a2 + 32);
  SymCryptModMul(v6, v13 + 32);
  return SymCryptModElementIsEqual();
}
