/*
 * XREFs of SymCryptMontgomeryIsEqual @ 0x140529EB0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1405214A0 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1405216FC (SymCryptModMul.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140521890 (SymCryptSizeofModElementFromModulus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMontgomeryIsEqual(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rbp
  __int64 *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r15
  _QWORD v15[2]; // [rsp+38h] [rbp-50h] BYREF

  v6 = *(_DWORD **)(a1 + 616);
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
  SymCryptModMul(v6, a2 + 32);
  SymCryptModMul(v6, a3 + 32);
  return SymCryptModElementIsEqual();
}
