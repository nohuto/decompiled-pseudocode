/*
 * XREFs of sub_18001874C @ 0x18001874C
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 *     sub_1800C9B50 @ 0x1800C9B50 (sub_1800C9B50.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001BCDC @ 0x18001BCDC (sub_18001BCDC.c)
 */

__int64 __fastcall sub_18001874C(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    sub_1800129D0(a1);
    sub_18001BCDC(a1, a2);
  }
  return a1;
}
