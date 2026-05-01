/*
 * XREFs of ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1804FE4C4
 * Callers:
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1804FDF40 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018A14 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18014CEEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall TabletModeTelemetry::WindowArrangementView_Show::StartActivity(__int64 a1, int a2, int a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdi
  const GUID *v8; // rax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v6 = WindowManagementLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    v11 = a3;
    v12 = a2;
    v10[0] = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      byte_1807E0D73,
      (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL),
      v8,
      (__int64)v10,
      (__int64)&CurrentThreadId,
      (__int64)&v12,
      (__int64)&v11);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
