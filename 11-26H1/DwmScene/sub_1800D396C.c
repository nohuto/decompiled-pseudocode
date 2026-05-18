/*
 * XREFs of sub_1800D396C @ 0x1800D396C
 * Callers:
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_1800D396C(__int64 a1)
{
  __int64 result; // rax

  result = 0x155555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x155555555555555LL )
    sub_18001DF68();
  return result;
}
