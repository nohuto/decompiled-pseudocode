/*
 * XREFs of atol @ 0x1404FB480
 * Callers:
 *     atoi @ 0x1404FB460 (atoi.c)
 *     HvlDebuggerSupportInitialize @ 0x14057EC70 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140C4D308 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1404FAF38 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
