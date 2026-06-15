/*
 * XREFs of sub_14000E8B8 @ 0x14000E8B8
 * Callers:
 *     sub_14000E88C @ 0x14000E88C (sub_14000E88C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14000E8B8(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) && *(_DWORD *)a1 )
  {
    sub_1400B6010(*(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  sub_14000EE10(a1 + 56);
  sub_140003238((__int64 *)(a1 + 56));
  return sub_140003238((__int64 *)(a1 + 48));
}
