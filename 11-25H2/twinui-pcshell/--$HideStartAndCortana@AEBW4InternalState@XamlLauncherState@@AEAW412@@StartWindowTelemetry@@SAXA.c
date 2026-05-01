/*
 * XREFs of ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180046A98
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___::_ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___ @ 0x180046838 (wil--details--ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___--_ScopeExitFn__lambda_f0af.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180252010 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004738C (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        _DWORD *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  const struct _tlgProvider_t *v5; // r10
  int v6; // eax
  int v8; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  _DWORD *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v4 = LauncherTelemetryLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v6 = *a2;
    v20 = 0;
    v17 = 0;
    v8 = v6;
    v9[0] = *a1;
    v18 = &v8;
    v15 = v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    v19 = 4;
    v16 = 4;
    EventDescriptor.Keyword = 0x200000000000LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v12 = &unk_1807D08C9;
    UserData.Reserved = 2;
    v13 = 52;
    v14 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
