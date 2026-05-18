/*
 * XREFs of sub_18000CF78 @ 0x18000CF78
 * Callers:
 *     sub_18001DB38 @ 0x18001DB38 (sub_18001DB38.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     _o___acrt_iob_func @ 0x18000CD06 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18000CD2A (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18000CF78()
{
  o___acrt_iob_func();
  sub_18000BBA4();
  return o___stdio_common_vfprintf();
}
