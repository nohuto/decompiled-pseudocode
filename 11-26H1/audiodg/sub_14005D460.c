/*
 * XREFs of sub_14005D460 @ 0x14005D460
 * Callers:
 *     sub_14005D4B0 @ 0x14005D4B0 (sub_14005D4B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400481F8 @ 0x1400481F8 (sub_1400481F8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

__int64 __fastcall sub_14005D460(__int64 a1)
{
  __int64 result; // rax

  sub_1400481F8((struct _TP_TIMER **)(a1 + 56));
  sub_140003238((__int64 *)(a1 + 48));
  sub_140056130((__int64 *)(a1 + 40));
  result = sub_140003238((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 20) = -1073741823;
  return result;
}
