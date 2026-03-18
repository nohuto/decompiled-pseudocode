/*
 * XREFs of NLS_UPCASE @ 0x14042F430
 * Callers:
 *     RtlUpcaseUnicodeToCustomCPN @ 0x140801F00 (RtlUpcaseUnicodeToCustomCPN.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     _CmIsRootDevice @ 0x140991F84 (_CmIsRootDevice.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     RtlIsValidOemCharacter @ 0x140A6B160 (RtlIsValidOemCharacter.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     PipFindDeviceOverrideEntry @ 0x140AA773C (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x140AA8798 (PnpGenerateDeviceIdsHash.c)
 *     RtlSuffixUnicodeString @ 0x140AE4280 (RtlSuffixUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NLS_UPCASE(__int64 a1, int a2)
{
  if ( (unsigned __int16)a2 >= 0x61u )
  {
    if ( (unsigned __int16)a2 <= 0x7Au )
      return (unsigned int)(a2 - 32);
    if ( a1 )
    {
      if ( (unsigned __int16)a2 >= 0xC0u )
        LOWORD(a2) = *(_WORD *)(a1
                              + 2LL
                              * ((a2 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(a1
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a2 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)(unsigned __int16)a2 >> 8))))))
                   + a2;
    }
  }
  return (unsigned __int16)a2;
}
