/*
 * XREFs of sub_1400B1218 @ 0x1400B1218
 * Callers:
 *     sub_1400B174C @ 0x1400B174C (sub_1400B174C.c)
 *     sub_1400B620C @ 0x1400B620C (sub_1400B620C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400B1218(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9

  v2 = *(_WORD *)(a2 + 78);
  v3 = *(_WORD *)(a1 + 78);
  return ((v3 ^ v2) & 0x1FE) == 0 && ((v3 ^ v2) & 0xE00) == 0 && *(_BYTE *)a2 == *(_BYTE *)a1;
}
