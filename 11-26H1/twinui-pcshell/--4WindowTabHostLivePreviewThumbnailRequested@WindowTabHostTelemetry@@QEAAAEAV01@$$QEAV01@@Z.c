/*
 * XREFs of ??4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180581368
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x180582510 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805373CC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1805373CC.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180537A6C (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x18058133C (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 */

_QWORD *__fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::operator=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)v5);
  return a1;
}
