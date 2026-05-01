/*
 * XREFs of ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F0A54
 * Callers:
 *     wil::details::ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___::_ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___ @ 0x1801F09B0 (wil--details--ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___--_ScopeExitFn__lambda_1a1b.c)
 *     ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801F09E0 (-OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004738C (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180047AD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

int __fastcall StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        int *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = LauncherTelemetryLogging::Provider((__int64)a1);
  v6 = (__int64)v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x200000000000LL) == *(_QWORD *)(v6 + 24) )
    {
      v8 = *a2;
      v9 = *a1;
      LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v6,
                      byte_1807D0A61,
                      0LL,
                      v5,
                      (__int64)&v9,
                      (__int64)&v8);
    }
  }
  return (int)v4;
}
