/*
 * XREFs of sub_14000D9B8 @ 0x14000D9B8
 * Callers:
 *     sub_14000A5C4 @ 0x14000A5C4 (sub_14000A5C4.c)
 *     sub_14000E0B4 @ 0x14000E0B4 (sub_14000E0B4.c)
 *     sub_14000E3A4 @ 0x14000E3A4 (sub_14000E3A4.c)
 *     sub_14000E7B8 @ 0x14000E7B8 (sub_14000E7B8.c)
 *     sub_14000EDE0 @ 0x14000EDE0 (sub_14000EDE0.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 *     sub_14003ED90 @ 0x14003ED90 (sub_14003ED90.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14000E3A4 @ 0x14000E3A4 (sub_14000E3A4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_14000D9B8(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rax

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      sub_14004639C(2147500037LL, 0LL);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    sub_14000E3A4(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = sub_14000DA4C();
      sub_14000DA94(v2, v4);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
