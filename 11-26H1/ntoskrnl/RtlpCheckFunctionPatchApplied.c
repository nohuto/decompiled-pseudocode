/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140C087EC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x140725A0C (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
