/*
 * XREFs of fprintf @ 0x1802D328C
 * Callers:
 *     EnumerateAndIssueToXInputDevice @ 0x1806A45C8 (EnumerateAndIssueToXInputDevice.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802D1E34 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vfprintf_0 @ 0x1802D2E26 (_o___stdio_common_vfprintf_0.c)
 */

int fprintf(FILE *const Stream, const char *const Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = _local_stdio_printf_options();
  return o___stdio_common_vfprintf_0(*v4, Stream, Format, 0LL, va);
}
