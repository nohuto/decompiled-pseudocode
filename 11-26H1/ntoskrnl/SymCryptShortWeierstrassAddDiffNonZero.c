/*
 * XREFs of SymCryptShortWeierstrassAddDiffNonZero @ 0x1405742E0
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x140574120 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptModAdd @ 0x14055E9D4 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x14055EDF0 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x14055EE24 (SymCryptModSub.c)
 */

__int64 __fastcall SymCryptShortWeierstrassAddDiffNonZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  _DWORD *v6; // r14
  __int64 *v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rbx
  _DWORD *v19; // [rsp+30h] [rbp-89h]
  __int64 v20; // [rsp+38h] [rbp-81h]
  __int64 v21; // [rsp+48h] [rbp-71h]
  __int64 v22; // [rsp+50h] [rbp-69h]
  __int64 v23; // [rsp+58h] [rbp-61h]
  __int64 v24; // [rsp+68h] [rbp-51h]
  __int64 v25; // [rsp+70h] [rbp-49h]
  __int128 v26; // [rsp+80h] [rbp-39h] BYREF
  __int128 v27; // [rsp+90h] [rbp-29h]
  __int128 v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+B0h] [rbp-9h]

  v5 = *(unsigned int *)(a1 + 36);
  v6 = *(_DWORD **)(a1 + 616);
  v8 = (__int64 *)&v26;
  v21 = a2 + 32;
  v19 = v6;
  v24 = v5 + a2 + 32;
  v10 = (unsigned int)(2 * v5);
  v11 = v10 + a2 + 32;
  v22 = a3 + 32;
  v23 = v11;
  v25 = v5 + a3 + 32;
  v20 = v10 + a3 + 32;
  v26 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v12 = 7LL;
  v28 = 0LL;
  do
  {
    *v8++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v12;
  }
  while ( v12 );
  SymCryptModSquare(v6);
  SymCryptModMul(v6, v11);
  v13 = v29;
  SymCryptModSquare(v6);
  v14 = v27;
  SymCryptModMul(v6, v21);
  v15 = *((_QWORD *)&v27 + 1);
  SymCryptModMul(v19, v22);
  v16 = *((_QWORD *)&v28 + 1);
  SymCryptModSub(v19, v15);
  SymCryptModAdd(v19, v16);
  v17 = v28;
  SymCryptModMul(v19, v23);
  SymCryptModMul(v19, v20);
  SymCryptModMul(v19, v17);
  SymCryptModMul(v19, v24);
  SymCryptModMul(v19, v25);
  SymCryptModSub(v19, v17);
  SymCryptModAdd(v19, v17);
  SymCryptModSquare(v19);
  SymCryptModMul(v19, v15);
  SymCryptModMul(v19, v14);
  SymCryptModSquare(v19);
  SymCryptModSub(v19, v14);
  SymCryptModSub(v19, v14);
  SymCryptModSub(v19, v14);
  SymCryptModSub(v19, v15);
  SymCryptModMul(v19, v15);
  SymCryptModMul(v19, v13);
  SymCryptModAdd(v19, v13);
  return SymCryptModSub(v19, v15);
}
