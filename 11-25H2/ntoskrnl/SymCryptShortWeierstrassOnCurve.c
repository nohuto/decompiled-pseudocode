/*
 * XREFs of SymCryptShortWeierstrassOnCurve @ 0x14052BC50
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModAdd @ 0x1405213BC (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x1405214A0 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x1405216FC (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1405217D8 (SymCryptModSquare.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptShortWeierstrassOnCurve(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r12
  __int64 *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]

  v3 = *(_DWORD **)(a1 + 616);
  v4 = &v12;
  v13 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = SymCryptModElementCreate();
    a3 += *(unsigned int *)(a1 + 36);
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v12;
  SymCryptModSquare(v3);
  v10 = v13;
  SymCryptModSquare(v3);
  SymCryptModMul(v3, v9);
  SymCryptModMul(v3, v9);
  SymCryptModMul(v3, v10);
  SymCryptModMul(v3, v10);
  SymCryptModAdd(v3, v9);
  SymCryptModSquare(v3);
  SymCryptModMul(v3, v9);
  SymCryptModAdd(v3, v9);
  SymCryptModSquare(v3);
  return SymCryptModElementIsEqual();
}
