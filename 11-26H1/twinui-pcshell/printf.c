/*
 * XREFs of printf @ 0x1802CA1E0
 * Callers:
 *     EnumerateAndIssueToXInputDevice @ 0x1806CC698 (EnumerateAndIssueToXInputDevice.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802C8AB4 (__local_stdio_printf_options.c)
 *     _o___acrt_iob_func_0 @ 0x1802C9CC6 (_o___acrt_iob_func_0.c)
 *     _o___stdio_common_vfprintf_0 @ 0x1802C9CF6 (_o___stdio_common_vfprintf_0.c)
 */

int printf(const char *const Format, ...)
{
  FILE *v1; // rbx
  unsigned __int64 *v2; // rax
  va_list va; // [rsp+68h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = o___acrt_iob_func_0(1u);
  v2 = _local_stdio_printf_options();
  return o___stdio_common_vfprintf_0(*v2, v1, Format, 0LL, va);
}
