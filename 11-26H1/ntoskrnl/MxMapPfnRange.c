/*
 * XREFs of MxMapPfnRange @ 0x140CFE128
 * Callers:
 *     MxCreatePfnsForDescriptor @ 0x140CFC444 (MxCreatePfnsForDescriptor.c)
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 */

__int64 __fastcall MxMapPfnRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, unsigned int a4)
{
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rbx
  __int64 v9; // rbx
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // r15
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  int v16; // eax
  unsigned __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+2Ch] [rbp-4Ch]
  int v21; // [rsp+34h] [rbp-44h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  ULONG_PTR v23; // [rsp+40h] [rbp-38h]

  v20 = 0LL;
  v21 = 0;
  v6 = a2;
  v7 = BugCheckParameter2;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( v8 == (v8 & 0xFFFFFFFFFFE00000uLL) )
    v9 = 0LL;
  else
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 == -1LL
    || 48 * (BugCheckParameter2 + a2) - 0x220000000000LL == ((48 * (BugCheckParameter2 + a2) - 0x220000000000LL) & 0xFFFFFFFFFFE00000uLL) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (((48 * (BugCheckParameter2 + a2) - 0x220000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v22 = v9;
  v23 = v10;
  while ( v6 )
  {
    v11 = v6;
    if ( v6 == -1LL )
    {
      v12 = qword_140E2D890 - 1;
      v6 = 0LL;
    }
    else
    {
      v11 = MiRestrictRangeToNode(v7, v6);
      v12 = 48 * (v7 + v11) - 0x220000000001LL;
      v6 -= v11;
    }
    v19 = MiPageToNode(v7);
    v13 = (48 * v7 - 0x220000000000LL) >> 9;
    v7 += v11;
    v14 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = (__int64)(v14 << 25) >> 16;
    while ( v14 <= v15 )
    {
      if ( v14 == v9 || (v16 = a3, v14 == v10) )
        v16 = 1;
      v20 = __PAIR64__(a4, v16);
      if ( !(unsigned int)MxMapVa(&v18) )
        return 0LL;
      v14 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  return 1LL;
}
