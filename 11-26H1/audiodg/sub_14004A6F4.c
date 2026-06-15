/*
 * XREFs of sub_14004A6F4 @ 0x14004A6F4
 * Callers:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_140031D84 @ 0x140031D84 (sub_140031D84.c)
 *     sub_140033E70 @ 0x140033E70 (sub_140033E70.c)
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     _o___stdio_common_vswprintf @ 0x14004A546 (_o___stdio_common_vswprintf.c)
 */

__int64 sub_14004A6F4()
{
  __int64 result; // rax

  sub_140048FD4();
  result = o___stdio_common_vswprintf();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
