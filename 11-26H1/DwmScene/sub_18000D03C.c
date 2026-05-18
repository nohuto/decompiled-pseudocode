/*
 * XREFs of sub_18000D03C @ 0x18000D03C
 * Callers:
 *     sub_18001DB38 @ 0x18001DB38 (sub_18001DB38.c)
 *     sub_1800CFAC0 @ 0x1800CFAC0 (sub_1800CFAC0.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18000CD36 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18000D03C()
{
  __int64 result; // rax

  sub_18000BBA4();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
