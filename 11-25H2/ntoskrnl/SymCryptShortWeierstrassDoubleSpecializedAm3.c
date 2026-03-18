/*
 * XREFs of SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052B4B0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModAdd @ 0x1405213BC (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x1405216FC (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1405217D8 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x14052180C (SymCryptModSub.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptShortWeierstrassDoubleSpecializedAm3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r9
  _DWORD *v6; // r15
  __int64 *v8; // rbx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]

  v5 = *(unsigned int *)(a1 + 36);
  v6 = *(_DWORD **)(a1 + 616);
  v16 = a2 + 32;
  v8 = &v18;
  v17 = v5 + a2 + 32;
  v10 = v5 + a3 + 32;
  v11 = 3LL;
  v19 = 0LL;
  do
  {
    *v8++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v11;
  }
  while ( v11 );
  v12 = v18;
  SymCryptModAdd(v6, v17);
  v13 = v19;
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v17);
  SymCryptModMul(v6, v12);
  SymCryptModAdd(v6, v10);
  v14 = *((_QWORD *)&v19 + 1);
  SymCryptModAdd(v6, v16);
  SymCryptModMul(v6, v12);
  SymCryptModSub(v6, v16);
  SymCryptModMul(v6, v12);
  SymCryptModMul(v6, v14);
  SymCryptModAdd(v6, v14);
  SymCryptModAdd(v6, v12);
  SymCryptModAdd(v6, v13);
  SymCryptModSquare(v6);
  SymCryptModSub(v6, v14);
  SymCryptModSub(v6, v12);
  SymCryptModMul(v6, v13);
  return SymCryptModSub(v6, v12);
}
