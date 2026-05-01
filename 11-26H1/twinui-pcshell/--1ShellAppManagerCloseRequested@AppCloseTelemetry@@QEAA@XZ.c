/*
 * XREFs of ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x18022F0A0
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$1 @ 0x1806D7638 (_CApplicationFrameService--OnCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802BD94C (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this)
{
  *(_QWORD *)this = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
