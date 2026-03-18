/*
 * XREFs of __report_rangecheckfailure @ 0x1404F290C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     strtok_s @ 0x140501DF0 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x1405C8F58 (PopDetermineBucketFrequencies.c)
 *     LdrpGetResourceFileName @ 0x1405DB868 (LdrpGetResourceFileName.c)
 *     inflate_table @ 0x1405F6054 (inflate_table.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407202A8 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x140772CB0 (RtlUnicodeStringToInt64.c)
 *     WdipSemLoadNextEndEvent @ 0x140791F28 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 *     _CmGetDeviceChildren @ 0x1409A839C (_CmGetDeviceChildren.c)
 *     LocalGetStringForControl @ 0x1409E9658 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x140A904FC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140A91310 (RtlCultureNameToLCID.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140B73504 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140B9E468 (HdlspPutWideString.c)
 *     InitLoadDebuggerSymbols @ 0x140BFA7D0 (InitLoadDebuggerSymbols.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C38240 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140C39838 (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, RtlCopyFromUser__fo_, _security_cookie_complement, 0LL);
}
