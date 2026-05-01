/*
 * XREFs of _vsnprintf_s @ 0x1802CA2A8
 * Callers:
 *     ?WilStringVPrintfWorkerA@details@wil@@YAJPEAD_KPEA_KPEBD0@Z @ 0x18031B8F0 (-WilStringVPrintfWorkerA@details@wil@@YAJPEAD_KPEA_KPEBD0@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802C8AB4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x1802C9D0E (_o___stdio_common_vsnprintf_s_0.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
