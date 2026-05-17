/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x1801105B0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18008EE40 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
