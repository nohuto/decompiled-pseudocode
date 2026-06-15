/*
 * XREFs of sub_14005FBC8 @ 0x14005FBC8
 * Callers:
 *     sub_14005FA28 @ 0x14005FA28 (sub_14005FA28.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 * Callees:
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 */

__int64 *__fastcall sub_14005FBC8(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  sub_14005F890(a3, a3);
  return a3;
}
