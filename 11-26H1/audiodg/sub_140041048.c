/*
 * XREFs of sub_140041048 @ 0x140041048
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 * Callees:
 *     sub_140013550 @ 0x140013550 (sub_140013550.c)
 *     sub_140013D10 @ 0x140013D10 (sub_140013D10.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140041048(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx

  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013D10(a1, (int)&unk_1400C5660, a1);
  sub_1400B6010(*(_QWORD *)(a1 + 208));
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013550(v3, v2, a1, 0LL, 0LL);
  return sub_1400B6010(*(_QWORD *)(a1 + 80));
}
