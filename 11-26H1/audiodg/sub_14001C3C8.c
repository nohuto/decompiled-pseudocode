/*
 * XREFs of sub_14001C3C8 @ 0x14001C3C8
 * Callers:
 *     sub_14001C364 @ 0x14001C364 (sub_14001C364.c)
 * Callees:
 *     sub_14001C3EC @ 0x14001C3EC (sub_14001C3EC.c)
 */

__int64 sub_14001C3C8()
{
  __int64 v0; // r11
  __int64 result; // rax

  sub_14001C3EC();
  result = v0;
  *(_QWORD *)(v0 + 40) = 1LL;
  return result;
}
