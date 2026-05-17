/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x1800868D0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18008EE40 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 10, 0);
}
