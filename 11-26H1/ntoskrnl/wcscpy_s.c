/*
 * XREFs of wcscpy_s @ 0x14053EF80
 * Callers:
 *     HalpQueryProfileSourceList @ 0x140433340 (HalpQueryProfileSourceList.c)
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     PnprGetPluginDriverImagePath @ 0x1407B2190 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x140841144 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x140841558 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x140841654 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x140841820 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140841CB8 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140858C5C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x14088FAD0 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140897D04 (BiCreateFileDeviceElement.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x1409A49B8 (BcdGetSystemStorePath.c)
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x140A2DF10 (ExpCreateOutputNT.c)
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 *     LocalGetStringForControl @ 0x140A6F7A4 (LocalGetStringForControl.c)
 *     NtLockProductActivationKeys @ 0x140AE3B50 (NtLockProductActivationKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 *     HalpQueryDebuggerInformation @ 0x140C188B0 (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140C189D4 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140C52D84 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v5 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v6 = *Src;
        *(const wchar_t *)((char *)Src + v5) = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
