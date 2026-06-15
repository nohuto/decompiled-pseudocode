/*
 * XREFs of sub_14006A86C @ 0x14006A86C
 * Callers:
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_1400307E0 @ 0x1400307E0 (sub_1400307E0.c)
 *     sub_140030AB0 @ 0x140030AB0 (sub_140030AB0.c)
 * Callees:
 *     <none>
 */

__int64 sub_14006A86C(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
