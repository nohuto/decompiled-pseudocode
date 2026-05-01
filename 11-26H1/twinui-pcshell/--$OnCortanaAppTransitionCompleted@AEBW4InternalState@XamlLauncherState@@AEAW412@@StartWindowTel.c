/*
 * XREFs of ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FA04
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___::_ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___ @ 0x180460A6C (wil--details--ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___--_ScopeExitFn__lambda_f2aa.c)
 *     ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180461B60 (-OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experienc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180097004 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180097A14 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        int *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = LauncherTelemetryLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *a2;
      v8 = *a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v5,
                     byte_18080626F,
                     0LL,
                     v5,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v4;
}
