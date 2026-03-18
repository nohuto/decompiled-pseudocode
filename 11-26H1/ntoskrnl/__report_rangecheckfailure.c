/*
 * XREFs of __report_rangecheckfailure @ 0x140522044
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     PopDetermineBucketFrequencies @ 0x140600DEC (PopDetermineBucketFrequencies.c)
 *     LdrpGetResourceFileName @ 0x1406182E8 (LdrpGetResourceFileName.c)
 *     inflate_table @ 0x140635550 (inflate_table.c)
 *     RtlCultureNameToLCID @ 0x140779FB0 (RtlCultureNameToLCID.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407ABB48 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x140804AD0 (RtlUnicodeStringToInt64.c)
 *     WdipSemLoadNextEndEvent @ 0x14081FA3C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     LocalGetStringForControl @ 0x140A627D4 (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x140A92F7C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140C21A10 (VfUtilPrintCheckinString.c)
 *     InitLoadDebuggerSymbols @ 0x140CAB410 (InitLoadDebuggerSymbols.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140CEE48C (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
