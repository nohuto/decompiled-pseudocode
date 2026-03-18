/*
 * XREFs of sub_14001A0C0 @ 0x14001A0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_14001A0C0(__int64 a1, char a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 21);
  *(_BYTE *)(a1 + 21) = result ^ (a2 ^ result) & 1;
  return result;
}
