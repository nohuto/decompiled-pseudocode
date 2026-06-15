/*
 * XREFs of sub_14002A8F8 @ 0x14002A8F8
 * Callers:
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_14002A6F8 @ 0x14002A6F8 (sub_14002A6F8.c)
 *     sub_14002A84C @ 0x14002A84C (sub_14002A84C.c)
 *     sub_14005FA28 @ 0x14005FA28 (sub_14005FA28.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 * Callees:
 *     sub_140047AFC @ 0x140047AFC (sub_140047AFC.c)
 */

__int64 __fastcall sub_14002A8F8(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_140047AFC();
  return 8 * a1;
}
