/*
 * XREFs of ?Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008FFA8
 * Callers:
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x18008DCA8 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x18008EB5C (--1-$_TlgActivityBase@V-$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008FB90 (-NotifyFailure@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180090510 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x180090760 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x180090D58 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090E40 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x180090F20 (-StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z @ 0x1800914A8 (-get@-$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CDMUtilsUnlockLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CDMUtilsUnlockLogging>::get(
                                             a1,
                                             _lambda_fcb9b5ef2ad8bfd832238adf5d8bb457_::_lambda_invoker_cdecl_)
                                         + 8);
}
