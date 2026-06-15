/*
 * XREFs of sub_14005A0F8 @ 0x14005A0F8
 * Callers:
 *     sub_1400487B4 @ 0x1400487B4 (sub_1400487B4.c)
 * Callees:
 *     <none>
 */

__int64 sub_14005A0F8(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_1400C8AF0, 10LL, (__int64 *)va);
}
