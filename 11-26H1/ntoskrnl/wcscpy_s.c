/*
 * XREFs of wcscpy_s @ 0x14053CB00
 * Callers:
 *     HalpQueryProfileSourceList @ 0x140426230 (HalpQueryProfileSourceList.c)
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     PnprGetPluginDriverImagePath @ 0x1407AF130 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14083AF04 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14083B318 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x14083B414 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14083B5E0 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14083BA78 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x1408514B8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14085294C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x1408896D4 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140891908 (BiCreateFileDeviceElement.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x1409D39D8 (BcdGetSystemStorePath.c)
 *     LocalConvertAclToString @ 0x140A607C4 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A61D64 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A626A0 (LocalGetStringForSid.c)
 *     LocalGetStringForControl @ 0x140A627D4 (LocalGetStringForControl.c)
 *     ExpTranslateEfiPath @ 0x140A9512C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x140A956C0 (ExpCreateOutputNT.c)
 *     NtLockProductActivationKeys @ 0x140AE5D90 (NtLockProductActivationKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4AF80 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5B170 (BiConvertNtDeviceToBootEnvironment.c)
 *     HalpQueryDebuggerInformation @ 0x140C128B0 (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140C129D4 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140C4CD84 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
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
