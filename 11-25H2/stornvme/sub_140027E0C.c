/*
 * XREFs of sub_140027E0C @ 0x140027E0C
 * Callers:
 *     sub_140027360 @ 0x140027360 (sub_140027360.c)
 * Callees:
 *     sub_14000D6D0 @ 0x14000D6D0 (sub_14000D6D0.c)
 */

char __fastcall sub_140027E0C(__int64 a1)
{
  char result; // al
  int v2; // r10d
  _DWORD *v3; // r11

  result = sub_14000D6D0(a1);
  if ( !result || !v2 )
    v2 = 0;
  *v3 = v2;
  return result;
}
