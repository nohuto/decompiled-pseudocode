/*
 * XREFs of sub_180031F38 @ 0x180031F38
 * Callers:
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_180055FB0 @ 0x180055FB0 (sub_180055FB0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800D0F08 @ 0x1800D0F08 (sub_1800D0F08.c)
 *     sub_1800D1CE8 @ 0x1800D1CE8 (sub_1800D1CE8.c)
 *     sub_1800D2C04 @ 0x1800D2C04 (sub_1800D2C04.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 */

__int64 __fastcall sub_180031F38(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = (const void *)sub_1800141BC(a2);
    sub_18001F9C0(a1, v3, *(_QWORD *)(v4 + 16));
  }
  return a1;
}
