/*
 * XREFs of sub_18000CFD4 @ 0x18000CFD4
 * Callers:
 *     sub_18001D1F0 @ 0x18001D1F0 (sub_18001D1F0.c)
 *     sub_18001D228 @ 0x18001D228 (sub_18001D228.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000CD42 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000CFD4()
{
  __int64 result; // rax

  sub_18000BBA4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
