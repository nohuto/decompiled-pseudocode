/*
 * XREFs of RtlIsPatchMachineApplicable @ 0x1408B178C
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14087450C (MiApplyHotPatchToDriver.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
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
