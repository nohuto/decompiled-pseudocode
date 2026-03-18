/*
 * XREFs of UpdateKeyLights @ 0x14021CBA0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     UpdateToggleKeyAndLights @ 0x1401B0C10 (UpdateToggleKeyAndLights.c)
 */

__int64 __fastcall UpdateKeyLights(int a1, int a2, int a3)
{
  return UpdateToggleKeyAndLights(a1 != 0, a2, a3);
}
