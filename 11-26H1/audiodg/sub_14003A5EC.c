/*
 * XREFs of sub_14003A5EC @ 0x14003A5EC
 * Callers:
 *     sub_14003A5B0 @ 0x14003A5B0 (sub_14003A5B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000A4C0 @ 0x14000A4C0 (sub_14000A4C0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 *     sub_140033CBC @ 0x140033CBC (sub_140033CBC.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14003A5EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 **v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx

  *(_QWORD *)a1 = &off_1400BC5F0;
  v3 = a1 + 8;
  *(_QWORD *)(a1 + 8) = off_1400BC530;
  *(_QWORD *)(a1 + 16) = off_1400BADF8;
  *(_QWORD *)(a1 + 24) = off_1400BC580;
  *(_BYTE *)(a1 + 208) = 1;
  while ( *(_QWORD *)(a1 + 128) )
  {
    v4 = (__int64 **)sub_14000E590((_QWORD *)(a1 + 112), a2);
    sub_14000F170(v3, **v4);
  }
  v5 = a1 + 160;
  while ( *(_QWORD *)(a1 + 176) )
  {
    if ( !*(_QWORD *)v5 )
      sub_14004639C(2147500037LL, 0LL);
    sub_14000A4C0(v3, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 16LL) + 16LL));
  }
  sub_140033CBC((__int64 *)(a1 + 160));
  sub_14000D938(a1 + 112, v6);
  sub_140003238((__int64 *)(a1 + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_140003238((__int64 *)(a1 + 56));
  sub_140003238((__int64 *)(a1 + 48));
  return sub_14001DBC0(a1);
}
