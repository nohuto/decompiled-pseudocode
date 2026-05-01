/*
 * XREFs of ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1802CD9F0
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$2 @ 0x1806A7B84 (_CApplicationFrameService--OnCommand_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800D5D44 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CAppManagerTelemetry::TitleBarButtonCloseRequested::~TitleBarButtonCloseRequested(
        CAppManagerTelemetry::TitleBarButtonCloseRequested *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
