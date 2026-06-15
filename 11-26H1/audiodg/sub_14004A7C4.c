/*
 * XREFs of sub_14004A7C4 @ 0x14004A7C4
 * Callers:
 *     sub_14001FC5C @ 0x14001FC5C (sub_14001FC5C.c)
 *     sub_140026C6C @ 0x140026C6C (sub_140026C6C.c)
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     _o___stdio_common_vsprintf @ 0x14004A52E (_o___stdio_common_vsprintf.c)
 */

__int64 sub_14004A7C4()
{
  __int64 result; // rax

  sub_140048FD4();
  result = o___stdio_common_vsprintf();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
