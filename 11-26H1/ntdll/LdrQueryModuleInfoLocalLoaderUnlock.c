/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x18007DC70
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 10, 0);
}
