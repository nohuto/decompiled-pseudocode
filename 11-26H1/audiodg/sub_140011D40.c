/*
 * XREFs of sub_140011D40 @ 0x140011D40
 * Callers:
 *     sub_140011CD4 @ 0x140011CD4 (sub_140011CD4.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_1400625D8 @ 0x1400625D8 (sub_1400625D8.c)
 */

__int64 __fastcall sub_140011D40(__int64 a1, _QWORD *i, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v6; // r14
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned int v13; // eax

  v5 = a3;
  v6 = i;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_140011318((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x30uLL);
    if ( !v8 )
      sub_14004639C(2147942414LL, 0LL);
    v9 = (unsigned int)(*(_DWORD *)(a1 + 52) - 1);
    for ( i = &v8[6 * v9 + 1]; (int)v9 >= 0; LODWORD(v9) = v9 - 1 )
    {
      i[4] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
      i -= 6;
    }
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    sub_14004639C(2147500037LL, i);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v10 + 32);
  *(_QWORD *)v10 = *v6;
  *(_DWORD *)(v10 + 40) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v10 + 32) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v10;
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = sub_14005C090(a1, v11);
    sub_1400625D8(a1, v13);
  }
  return v10;
}
