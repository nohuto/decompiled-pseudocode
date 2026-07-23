/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x180110140
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
