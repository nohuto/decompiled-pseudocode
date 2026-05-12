/*
 * XREFs of sub_14009FC80 @ 0x14009FC80
 * Callers:
 *     sub_140056120 @ 0x140056120 (sub_140056120.c)
 *     sub_1400BED78 @ 0x1400BED78 (sub_1400BED78.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14009FC80(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 504);
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    *(_BYTE *)(a1 + 504) = v1;
  }
  return (v1 & 2) != 0;
}
