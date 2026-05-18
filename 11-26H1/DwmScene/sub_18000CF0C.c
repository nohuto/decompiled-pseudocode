/*
 * XREFs of sub_18000CF0C @ 0x18000CF0C
 * Callers:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     _o___stdio_common_vswprintf @ 0x18000CD4E (_o___stdio_common_vswprintf.c)
 */

__int64 sub_18000CF0C()
{
  __int64 result; // rax

  sub_18000BBA4();
  result = o___stdio_common_vswprintf();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
