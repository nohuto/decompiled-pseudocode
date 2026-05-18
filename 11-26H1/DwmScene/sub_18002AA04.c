/*
 * XREFs of sub_18002AA04 @ 0x18002AA04
 * Callers:
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18002AA04(unsigned __int64 a1)
{
  if ( a1 > 0x1AF286BCA1AF286LL )
    sub_180012970();
  return 152 * a1;
}
