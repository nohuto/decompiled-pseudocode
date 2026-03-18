/*
 * XREFs of RtlIsPatchMachineApplicable @ 0x1408AB31C
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14086E13C (MiApplyHotPatchToDriver.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140ABFFE4 (MiFindHotPatchRecord.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsPatchMachineApplicable(int a1, unsigned int a2)
{
  if ( a1 == 332 )
    return a2 & 1;
  if ( a1 != 34404 )
  {
    if ( a1 != 43620 )
      return 0;
    a2 >>= 2;
    return a2 & 1;
  }
  return (a2 & 2) != 0 || (a2 & 8) != 0;
}
