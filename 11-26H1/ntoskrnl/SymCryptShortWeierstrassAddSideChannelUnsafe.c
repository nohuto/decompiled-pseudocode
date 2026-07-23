/*
 * XREFs of SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x140574120 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptModAdd @ 0x14055E9D4 (SymCryptModAdd.c)
 *     SymCryptModElementCopy @ 0x14055EA54 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x14055EDF0 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x14055EE24 (SymCryptModSub.c)
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall SymCryptShortWeierstrassAddSideChannelUnsafe(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  _DWORD *v5; // rdi
  __int64 v8; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  int IsZero; // ebx
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // [rsp+30h] [rbp-79h] BYREF
  __int64 v23; // [rsp+38h] [rbp-71h]
  __int64 v24; // [rsp+40h] [rbp-69h]
  __int64 v25; // [rsp+48h] [rbp-61h]
  __int64 v26; // [rsp+50h] [rbp-59h]
  __int64 v27; // [rsp+58h] [rbp-51h]
  __int64 v28; // [rsp+60h] [rbp-49h]
  __int64 v29; // [rsp+68h] [rbp-41h]
  _BYTE *v30; // [rsp+70h] [rbp-39h]
  _BYTE *v31; // [rsp+78h] [rbp-31h]
  _BYTE *v32; // [rsp+80h] [rbp-29h]
  _BYTE *v33; // [rsp+88h] [rbp-21h]
  _BYTE *v34; // [rsp+90h] [rbp-19h]
  _BYTE *v35; // [rsp+98h] [rbp-11h]
  _BYTE *v36; // [rsp+A0h] [rbp-9h]

  v5 = *(_DWORD **)(a1 + 616);
  v31 = a2 + 32;
  v8 = *(unsigned int *)(a1 + 36);
  v34 = a4;
  v12 = (unsigned int)(2 * v8);
  v32 = &a2[v8 + 32];
  v33 = &a3[v12 + 32];
  v30 = &a2[v12 + 32];
  v35 = a3 + 32;
  v36 = &a3[v8 + 32];
  memset_0(&v22, 0, 0x40uLL);
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v13 = a3;
    return SymCryptEcpointCopy(a1, v13, a4);
  }
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v13 = a2;
    return SymCryptEcpointCopy(a1, v13, a4);
  }
  v15 = &v22;
  v16 = 8LL;
  do
  {
    *v15++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v16;
  }
  while ( v16 );
  SymCryptModSquare(v5);
  SymCryptModMul(v5, (__int64)v30);
  SymCryptModSquare(v5);
  v17 = v24;
  SymCryptModMul(v5, (__int64)v31);
  v18 = v25;
  SymCryptModMul(v5, (__int64)v35);
  SymCryptModSub(v5, v18);
  SymCryptModMul(v5, (__int64)v36);
  SymCryptModMul(v5, (__int64)v33);
  SymCryptModMul(v5, (__int64)v32);
  SymCryptModSub(v5, v29);
  IsZero = SymCryptModElementIsZero();
  v20 = (IsZero & (unsigned int)SymCryptModElementIsZero()) == 0;
  v21 = v26;
  if ( v20 )
  {
    SymCryptModAdd(v5, (__int64)v30);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v21);
    SymCryptModSub(v5, v21);
    SymCryptModMul(v5, v21);
    SymCryptModAdd(v5, v29);
    SymCryptModAdd(v5, v27);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v18);
    SymCryptModMul(v5, v17);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v18);
    SymCryptModMul(v5, v18);
    SymCryptModMul(v5, v23);
    SymCryptModAdd(v5, v28);
    SymCryptModSub(v5, v18);
  }
  else
  {
    SymCryptModElementCopy();
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModAdd(v5, (__int64)v31);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v23);
    SymCryptModSub(v5, v23);
    SymCryptModAdd(v5, v23);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v17);
    SymCryptModAdd(v5, v17);
    SymCryptModAdd(v5, v22);
    SymCryptModAdd(v5, v17);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v22);
    SymCryptModSub(v5, v22);
    SymCryptModSub(v5, v23);
    SymCryptModMul(v5, v17);
    SymCryptModAdd(v5, v27);
    SymCryptModAdd(v5, v27);
    SymCryptModAdd(v5, v27);
    SymCryptModSub(v5, v23);
    SymCryptModAdd(v5, (__int64)v32);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
  }
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return (void *)SymCryptModElementCopy();
}
