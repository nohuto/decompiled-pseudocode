/*
 * XREFs of ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401DD818
 * Callers:
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::HdrPowerPolicyChangeCallout(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5[3]; // [rsp+50h] [rbp-18h] BYREF
  DXGGLOBAL *v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = this;
  LOBYTE(v6) = 0;
  v1 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v6, 1);
  if ( v1 >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 123) + 144LL) == -1 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76306) = 1;
    }
    else
    {
      LOBYTE(v5[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v5, 0LL, 0x3Fu, 0);
      v3 = DxgkRequestAsyncDisplaySwitchCallout(0LL, v5[1]);
      if ( v3 < 0 )
      {
        v4 = v3;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 7404;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v5);
    }
  }
  else
  {
    v2 = v1;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7393;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v6);
}
