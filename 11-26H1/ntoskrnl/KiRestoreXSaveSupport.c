/*
 * XREFs of KiRestoreXSaveSupport @ 0x140BEF008
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1405322F4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140BEF020 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
