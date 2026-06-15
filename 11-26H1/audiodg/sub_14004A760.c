/*
 * XREFs of sub_14004A760 @ 0x14004A760
 * Callers:
 *     sub_14005E604 @ 0x14005E604 (sub_14005E604.c)
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     _o___stdio_common_vswprintf_s @ 0x14004A552 (_o___stdio_common_vswprintf_s.c)
 */

__int64 sub_14004A760()
{
  __int64 result; // rax

  sub_140048FD4();
  result = o___stdio_common_vswprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
