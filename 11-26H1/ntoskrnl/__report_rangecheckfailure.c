/*
 * XREFs of __report_rangecheckfailure @ 0x1405246B0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     PopDetermineBucketFrequencies @ 0x14060389C (PopDetermineBucketFrequencies.c)
 *     LdrpGetResourceFileName @ 0x14061B338 (LdrpGetResourceFileName.c)
 *     inflate_table @ 0x140638558 (inflate_table.c)
 *     RtlCultureNameToLCID @ 0x14077CEE0 (RtlCultureNameToLCID.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x14080A570 (RtlUnicodeStringToInt64.c)
 *     WdipSemLoadNextEndEvent @ 0x140825C4C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     LocalGetStringForControl @ 0x140A6F7A4 (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x140A97ACC (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 *     InitLoadDebuggerSymbols @ 0x140CB1450 (InitLoadDebuggerSymbols.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140CF4808 (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
