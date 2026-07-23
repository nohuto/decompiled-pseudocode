/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x1405302EC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140BEF360 (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
