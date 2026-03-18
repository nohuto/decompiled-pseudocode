/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140C025DC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x140720DEC (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
