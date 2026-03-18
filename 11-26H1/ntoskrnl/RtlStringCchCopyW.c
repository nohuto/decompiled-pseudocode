/*
 * XREFs of RtlStringCchCopyW @ 0x14046AD84
 * Callers:
 *     PopLogNotifyDevice @ 0x14046AC48 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x140649670 (CarCopyRuleViolationDetails.c)
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140714630 (SdbpGetPathAppPatchPreRS3.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14077EDD0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1407E5D30 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140889530 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140889860 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslpEnvResolveVars @ 0x14088B994 (AslpEnvResolveVars.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140898D70 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14089A3A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140909B98 (_CmGetDeviceContainerIdFromBase.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140987604 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     SdbpCreateSearchDBContext @ 0x1409E2F54 (SdbpCreateSearchDBContext.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x140A0C2B0 (WmipMangleInstanceName.c)
 *     GetPrintableOperandValue @ 0x140A63E28 (GetPrintableOperandValue.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x140B0D03C (AslPathSplit.c)
 *     RtlFormatMessageEx @ 0x140B0FF70 (RtlFormatMessageEx.c)
 *     RtlpInitNlsFileName @ 0x140B29D74 (RtlpInitNlsFileName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B41E80 (DbgkWerCaptureLiveKernelDump2.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6A658 (AslEnvGetSystem32DirPathBuf.c)
 *     IopStoreSystemPartitionInformation @ 0x140CBE34C (IopStoreSystemPartitionInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v4);
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
