/*
 * XREFs of atol @ 0x140535D80
 * Callers:
 *     atoi @ 0x140535D60 (atoi.c)
 *     HvlDebuggerSupportInitialize @ 0x1405B83B0 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x140535824 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
