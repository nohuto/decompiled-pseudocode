/*
 * XREFs of sub_140050034 @ 0x140050034
 * Callers:
 *     sub_1400501F0 @ 0x1400501F0 (sub_1400501F0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140050034(__int64 a1)
{
  __int64 result; // rax

  result = sub_140003238((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
