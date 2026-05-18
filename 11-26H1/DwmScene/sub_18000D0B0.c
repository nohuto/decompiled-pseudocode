/*
 * XREFs of sub_18000D0B0 @ 0x18000D0B0
 * Callers:
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000CD42 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000D0B0()
{
  __int64 result; // rax

  sub_18000BBA4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
