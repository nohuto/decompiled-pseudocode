/*
 * XREFs of PpInitSystem @ 0x140CC39F0
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 */

char PpInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return PnpInitPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return 1;
}
