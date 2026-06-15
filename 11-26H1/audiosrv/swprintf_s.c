/*
 * XREFs of swprintf_s @ 0x1800B335C
 * Callers:
 *     ?IsValidContainerType@@YAJU_GUID@@@Z @ 0x18002C4DC (-IsValidContainerType@@YAJU_GUID@@@Z.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180052FF4 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800B1C14 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x1800B30FA (__stdio_common_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
