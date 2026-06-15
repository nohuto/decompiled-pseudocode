/*
 * XREFs of sub_1400109C4 @ 0x1400109C4
 * Callers:
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_140010920 @ 0x140010920 (sub_140010920.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_1400109C4(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *i; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = sub_140011318(a1 + 24, *(unsigned int *)(a1 + 40), 24LL);
    if ( !v2 )
      sub_14004639C(2147942414LL, v3);
    v4 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)(v2 + 8 * (2LL * (unsigned int)v4 + 1 + (unsigned int)v4)); v4 >= 0; --v4 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
}
