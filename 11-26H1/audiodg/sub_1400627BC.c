/*
 * XREFs of sub_1400627BC @ 0x1400627BC
 * Callers:
 *     sub_140061EC0 @ 0x140061EC0 (sub_140061EC0.c)
 *     sub_140062080 @ 0x140062080 (sub_140062080.c)
 *     sub_140062200 @ 0x140062200 (sub_140062200.c)
 *     sub_140062990 @ 0x140062990 (sub_140062990.c)
 *     sub_140062A20 @ 0x140062A20 (sub_140062A20.c)
 *     sub_140062AB0 @ 0x140062AB0 (sub_140062AB0.c)
 *     sub_1400B21E8 @ 0x1400B21E8 (sub_1400B21E8.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_140061228 @ 0x140061228 (sub_140061228.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400627BC(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( !a2 )
    sub_14004639C(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 32) % *(_DWORD *)(a1 + 16));
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 24); i != a2; i = *(_QWORD *)(i + 24) )
      v6 = i;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( v6 )
    *(_QWORD *)(v6 + 24) = v8;
  else
    *(_QWORD *)(v5 + 8 * v4) = v8;
  return sub_140061228(a1, a2);
}
