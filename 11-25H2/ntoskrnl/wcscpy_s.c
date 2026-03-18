/*
 * XREFs of wcscpy_s @ 0x140502060
 * Callers:
 *     HalpQueryProfileSourceList @ 0x140377670 (HalpQueryProfileSourceList.c)
 *     HalSetEnvironmentVariableEx @ 0x1404425C0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     PnprGetPluginDriverImagePath @ 0x140723638 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1407AC084 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1407AC48C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407AC584 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407AC74C (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1407ACA88 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x1407C2CD8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407C411C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x1407FA2A4 (AslPathToNetworkPathNt.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802C54 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiCreateFileDeviceElement @ 0x140803728 (BiCreateFileDeviceElement.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertAclToString @ 0x1409E6840 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1409E8690 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1409E9658 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1409EA58C (LocalGetStringForSid.c)
 *     BcdGetSystemStorePath @ 0x140A28A88 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x140A35D60 (NtLockProductActivationKeys.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A5CCE8 (BiConvertNtDeviceToBootEnvironment.c)
 *     ExpTranslateEfiPath @ 0x140A6183C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x140A61DF4 (ExpCreateOutputNT.c)
 *     HalpQueryDebuggerInformation @ 0x140B65B70 (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140B65C94 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140B9DD70 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
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
