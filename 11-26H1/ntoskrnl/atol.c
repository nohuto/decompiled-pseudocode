/*
 * XREFs of atol @ 0x140538200
 * Callers:
 *     atoi @ 0x1405381E0 (atoi.c)
 *     HvlDebuggerSupportInitialize @ 0x1405BAC20 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x140537CA4 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
