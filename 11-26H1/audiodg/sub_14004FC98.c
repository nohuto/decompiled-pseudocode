/*
 * XREFs of sub_14004FC98 @ 0x14004FC98
 * Callers:
 *     sub_14004FD10 @ 0x14004FD10 (sub_14004FD10.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14004FC98(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BB740;
  if ( *(_DWORD *)(a1 + 40) )
  {
    sub_1400B6010(*(_QWORD *)(a1 + 24));
    *(_DWORD *)(a1 + 40) = 0;
  }
  sub_140003238((__int64 *)(a1 + 32));
  sub_140003238((__int64 *)(a1 + 24));
  sub_140008C08((void **)(a1 + 16), 0LL);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
