/*
 * XREFs of sprintf_s @ 0x1802CA31C
 * Callers:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180168CDC (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802C8AB4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x1802C9D26 (_o___stdio_common_vsprintf_s_0.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
