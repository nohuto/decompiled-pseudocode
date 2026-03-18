/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1406DC6E8
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetImplementedPhysicalBits @ 0x1406DC850 (HviGetImplementedPhysicalBits.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14080F35C (RtlpInitFunctionOverrideCapabilities.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
