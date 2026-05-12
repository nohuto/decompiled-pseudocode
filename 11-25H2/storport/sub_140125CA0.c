/*
 * XREFs of sub_140125CA0 @ 0x140125CA0
 * Callers:
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 * Callees:
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 */

char __fastcall sub_140125CA0(__int64 a1, __int64 a2, _DWORD *a3)
{
  char result; // al
  int v5; // r11d

  result = sub_1400BD6D8(a1);
  if ( !result || !v5 )
    v5 = 0;
  *a3 = v5;
  return result;
}
