/*
 * XREFs of ?Provider@MeetNowTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803BB868
 * Callers:
 *     ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x1803B7168 (--$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1803B7AE0 (--1-$_TlgActivityBase@V-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x1803B8674 (-CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x1803B86D4 (-CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x1803B8734 (-CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?FlyoutHidden@MeetNowTelemetry@@SAXXZ @ 0x1803B8894 (-FlyoutHidden@MeetNowTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803B9CF0 (-NotifyFailure@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefl.c)
 *     ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x1803BC9D8 (-StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803BCAF0 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ @ 0x1803BCBE0 (-StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x1803BD4D4 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

const struct _tlgProvider_t *__fastcall MeetNowTelemetryLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                                             a1,
                                             _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                                         + 8);
}
