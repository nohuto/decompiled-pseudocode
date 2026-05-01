/*
 * XREFs of _o___stdio_common_vfprintf_0 @ 0x1802D2E26
 * Callers:
 *     fprintf @ 0x1802D328C (fprintf.c)
 *     printf @ 0x1802D32D8 (printf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vfprintf_0(
        unsigned __int64 Options,
        FILE *Stream,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vfprintf(Options, Stream, Format, Locale, ArgList);
}
