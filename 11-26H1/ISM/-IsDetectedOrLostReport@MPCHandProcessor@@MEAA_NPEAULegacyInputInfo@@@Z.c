/*
 * XREFs of ?IsDetectedOrLostReport@MPCHandProcessor@@MEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C01D0
 * Callers:
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C11B4 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCHandProcessor::IsDetectedOrLostReport(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  return *((_DWORD *)a2 + 16) == 4 || *((_DWORD *)a2 + 16) == 5;
}
