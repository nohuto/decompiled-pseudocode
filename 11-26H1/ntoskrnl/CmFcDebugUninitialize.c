/*
 * XREFs of CmFcDebugUninitialize @ 0x1406E7244
 * Callers:
 *     CmFcShutdownSystem @ 0x14085AFA4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1404D5620 (KeDeregisterBugCheckReasonCallback.c)
 */

BOOLEAN CmFcDebugUninitialize()
{
  return KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)(&stru_140E62450.SwapListEntry + 1));
}
