/*
 * XREFs of _vsnwprintf @ 0x180030A4C
 * Callers:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800049D0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800248B4 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     StringVPrintfWorkerW @ 0x1800271C8 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18002F41C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1800308FA (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
