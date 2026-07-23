/*
 * XREFs of RtlStringCchCopyW @ 0x140464504
 * Callers:
 *     PopLogNotifyDevice @ 0x1404643C8 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x14064D250 (CarCopyRuleViolationDetails.c)
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140719320 (SdbpGetPathAppPatchPreRS3.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407818D0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1407EB890 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x14088F92C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14088FC5C (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     AslpEnvResolveVars @ 0x140891D90 (AslpEnvResolveVars.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14089F170 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x140A0B280 (WmipMangleInstanceName.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140A4235C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x140B0E78C (AslPathSplit.c)
 *     RtlFormatMessageEx @ 0x140B119B0 (RtlFormatMessageEx.c)
 *     RtlpInitNlsFileName @ 0x140B2BDF4 (RtlpInitNlsFileName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 *     SdbpCreateSearchDBContext @ 0x140B59B58 (SdbpCreateSearchDBContext.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6D868 (AslEnvGetSystem32DirPathBuf.c)
 *     IopStoreSystemPartitionInformation @ 0x140CC441C (IopStoreSystemPartitionInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
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
