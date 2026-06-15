/*
 * XREFs of sub_1400B48E0 @ 0x1400B48E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140041CD8 @ 0x140041CD8 (sub_140041CD8.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_140045560 @ 0x140045560 (sub_140045560.c)
 */

__int64 __fastcall sub_1400B48E0(__int64 a1)
{
  if ( sub_140045508(a1) )
    return sub_140045560((__int64)&dword_1400E7BC8);
  else
    return sub_140041CD8((__int64)&dword_1400E7BC8);
}
