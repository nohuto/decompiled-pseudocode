/*
 * XREFs of NVMeIceConfigureExclusionAddress @ 0x1400315BC
 * Callers:
 *     ScsiModeSenseRequest @ 0x140005450 (ScsiModeSenseRequest.c)
 *     FirmwareGetInfo @ 0x140005A10 (FirmwareGetInfo.c)
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     ControllerAllocateUncachedExtension @ 0x140011CE0 (ControllerAllocateUncachedExtension.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 *     NVMeIceInitPart2 @ 0x140031A48 (NVMeIceInitPart2.c)
 * Callees:
 *     NVMeIceAddExclusionRanges @ 0x1400312E8 (NVMeIceAddExclusionRanges.c)
 *     NVMeIceRemoveExclusionRanges @ 0x140031F54 (NVMeIceRemoveExclusionRanges.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeIceConfigureExclusionAddress(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v7[1] = a2;
  v7[0] = 2097153LL;
  v7[2] = a3;
  v7[3] = a4 & 1 | (unsigned __int64)(2 * (a5 & 1u));
  if ( a6 )
    return NVMeIceAddExclusionRanges(a1, (__int64)v7);
  else
    return NVMeIceRemoveExclusionRanges(a1, v7);
}
