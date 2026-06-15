/*
 * XREFs of sub_1400873B0 @ 0x1400873B0
 * Callers:
 *     sub_140087550 @ 0x140087550 (sub_140087550.c)
 * Callees:
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 */

BOOL __fastcall sub_1400873B0(__int64 a1)
{
  BOOL result; // eax

  sub_140016F18((void **)(a1 + 24));
  result = sub_140016F18((void **)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
