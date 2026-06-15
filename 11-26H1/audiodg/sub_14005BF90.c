/*
 * XREFs of sub_14005BF90 @ 0x14005BF90
 * Callers:
 *     sub_14005BEA4 @ 0x14005BEA4 (sub_14005BEA4.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_14005C130 @ 0x14005C130 (sub_14005C130.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_14005BF90(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v8; // rcx
  int v9; // edx
  _QWORD *i; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_140011318((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x20uLL);
    if ( !v8 )
      sub_14004639C(-2147024882);
    v9 = *(_DWORD *)(a1 + 52) - 1;
    for ( i = &v8[4 * (unsigned int)v9 + 1]; v9 >= 0; --v9 )
    {
      i[2] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
      i -= 4;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_14004639C(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 16);
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = (unsigned int)sub_14005C090(a1, v12);
    sub_14005C130(a1, v13);
  }
  return v11;
}
