/*
 * XREFs of sub_140061CB0 @ 0x140061CB0
 * Callers:
 *     sub_140062830 @ 0x140062830 (sub_140062830.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_140062380 @ 0x140062380 (sub_140062380.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_140061CB0(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v8; // rax
  int v9; // r8d
  _QWORD *i; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_140011318((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x28uLL);
    if ( !v8 )
      sub_14004639C(-2147024882);
    v9 = *(_DWORD *)(a1 + 52) - 1;
    for ( i = &v8[4 * v9 + 1 + (unsigned int)v9]; v9 >= 0; --v9 )
    {
      i[3] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
      i -= 5;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_14004639C(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 24);
  *(_DWORD *)v11 = a2;
  *(_DWORD *)(v11 + 32) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 24) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = (unsigned int)sub_14005C090(a1, v12);
    sub_140062380(a1, v13);
  }
  return v11;
}
