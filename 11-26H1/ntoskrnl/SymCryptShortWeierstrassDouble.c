/*
 * XREFs of SymCryptShortWeierstrassDouble @ 0x140567220
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModAdd @ 0x14055C4EC (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x14055C82C (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x14055C908 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x14055C93C (SymCryptModSub.c)
 */

__int64 __fastcall SymCryptShortWeierstrassDouble(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  _DWORD *v6; // r12
  __int64 *v8; // rbx
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  __int128 v18; // [rsp+60h] [rbp-48h]

  v5 = *(unsigned int *)(a1 + 36);
  v6 = *(_DWORD **)(a1 + 616);
  v8 = &v17;
  v10 = v5 + a3 + 32;
  v11 = 3LL;
  v16 = v5 + a2 + 32;
  v18 = 0LL;
  do
  {
    *v8++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v11;
  }
  while ( v11 );
  v12 = v17;
  SymCryptModAdd(v6, v16);
  v13 = v18;
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v12);
  SymCryptModMul(v6, v16);
  SymCryptModAdd(v6, v10);
  SymCryptModMul(v6, v12);
  SymCryptModMul(v6, v12);
  SymCryptModSquare(v6);
  v14 = *((_QWORD *)&v18 + 1);
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v13);
  SymCryptModAdd(v6, v14);
  SymCryptModAdd(v6, v14);
  SymCryptModAdd(v6, v12);
  SymCryptModAdd(v6, v14);
  SymCryptModSquare(v6);
  SymCryptModSub(v6, v14);
  SymCryptModSub(v6, v12);
  SymCryptModMul(v6, v13);
  return SymCryptModSub(v6, v12);
}
