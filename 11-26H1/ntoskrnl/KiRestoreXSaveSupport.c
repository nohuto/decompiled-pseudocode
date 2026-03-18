/*
 * XREFs of KiRestoreXSaveSupport @ 0x140BE9008
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14052FDF4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140BE9020 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
