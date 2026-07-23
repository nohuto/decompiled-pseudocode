/*
 * XREFs of _atoi64 @ 0x1405381B0
 * Callers:
 *     KiMatchLoadOption @ 0x140BFAB7C (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x140537F3C (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
