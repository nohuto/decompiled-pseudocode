/*
 * XREFs of NLS_UPCASE @ 0x14041C340
 * Callers:
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1408079A0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     RtlIsValidOemCharacter @ 0x14097E350 (RtlIsValidOemCharacter.c)
 *     PipFindDeviceOverrideEntry @ 0x1409DAC70 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x1409DBCCC (PnpGenerateDeviceIdsHash.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     RtlSuffixUnicodeString @ 0x140AE1D90 (RtlSuffixUnicodeString.c)
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
