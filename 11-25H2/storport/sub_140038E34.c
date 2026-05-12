/*
 * XREFs of sub_140038E34 @ 0x140038E34
 * Callers:
 *     sub_140038CC0 @ 0x140038CC0 (sub_140038CC0.c)
 *     Callback @ 0x140045BD0 (Callback.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140038E34(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
