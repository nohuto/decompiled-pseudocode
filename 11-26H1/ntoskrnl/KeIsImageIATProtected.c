/*
 * XREFs of KeIsImageIATProtected @ 0x1405E73F4
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     VfUtilIsProtectedDriver @ 0x140C279E8 (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}
