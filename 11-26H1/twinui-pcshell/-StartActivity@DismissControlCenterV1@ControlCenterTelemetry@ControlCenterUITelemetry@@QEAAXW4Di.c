/*
 * XREFs of ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@_N@Z @ 0x18036E47C
 * Callers:
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@$$QEA_N@Z @ 0x18036A9FC (--$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@Contr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003114 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180019994 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18020E680 (-zInternalStart@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflec.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(__int64 a1)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r8

  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v3 = ControlCenterLogging::Provider(v2);
  v4 = (__int64)v3;
  if ( *(_DWORD *)v3 > 5u && tlgKeywordOn((__int64)v3, 0x400000000000LL) )
  {
    GetCurrentThreadId();
    v5 = *(_QWORD *)(a1 + 272);
    if ( *(_BYTE *)(v5 + 4) )
      _tlgGuidIsZero((const struct _GUID *)(v5 + 24));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v4,
      (__int64)&unk_1807F0146);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
