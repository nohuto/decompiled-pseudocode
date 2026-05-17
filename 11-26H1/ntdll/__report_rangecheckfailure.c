/*
 * XREFs of __report_rangecheckfailure @ 0x180126B60
 * Callers:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     inflate_table @ 0x1801560C0 (inflate_table.c)
 * Callees:
 *     __report_securityfailure @ 0x180126B7C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
