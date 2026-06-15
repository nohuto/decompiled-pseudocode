/*
 * XREFs of sub_14000DD74 @ 0x14000DD74
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000DCA4 @ 0x14000DCA4 (sub_14000DCA4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000E81C @ 0x14000E81C (sub_14000E81C.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_14000DD74(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // r8d
  _QWORD *i; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return;
  v3 = *(unsigned int *)(a1 + 40);
  if ( v3 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v3;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 0x18 )
      goto LABEL_10;
    v3 *= 24LL;
  }
  v4 = (_QWORD *)_o_malloc(v3 + 8, a2);
  if ( !v4 )
LABEL_10:
    sub_14004639C(2147942414LL, a2);
  *v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_DWORD *)(a1 + 40) - 1;
  for ( i = &v4[2 * v5 + 1 + (unsigned int)v5]; v5 >= 0; --v5 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
    i -= 3;
  }
}
