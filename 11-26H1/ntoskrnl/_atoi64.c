/*
 * XREFs of _atoi64 @ 0x140535D30
 * Callers:
 *     KiMatchLoadOption @ 0x140BF4B7C (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x140535ABC (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
