/*
 * XREFs of PpInitSystem @ 0x140CC9AC4
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnpInitPhase0 @ 0x140CC97F8 (PnpInitPhase0.c)
 */

char PpInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return PnpInitPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return 1;
}
