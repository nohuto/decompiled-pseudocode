/*
 * XREFs of sub_140049A50 @ 0x140049A50
 * Callers:
 *     sub_140063688 @ 0x140063688 (sub_140063688.c)
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     _o___stdio_common_vsprintf_s @ 0x14004A53A (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_140049A50(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD *v6; // rax
  __int64 result; // rax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = sub_140048FD4();
  result = o___stdio_common_vsprintf_s(*v6, a1, a2, a3, 0LL, (__int64 *)va, 0LL);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
