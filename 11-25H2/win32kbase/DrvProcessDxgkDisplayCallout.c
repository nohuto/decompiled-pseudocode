/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1400F76B4
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400F7A70 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7AD0 (DrvQueryMDEVPowerState.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F7B3C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F7E48 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x14015F3B8 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct tagDESKTOP *a1,
        unsigned __int8 *a2,
        bool *a3,
        bool *a4,
        _BYTE *a5)
{
  __int64 DxgkWin32kInterface; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // rbx
  int updated; // eax
  unsigned int v16; // eax
  __int64 UserSessionState; // rax
  __int64 v18; // rcx
  unsigned int v19; // esi
  int v20; // eax
  CDisplayScenarioContextScope *v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v26[4]; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int CurrentProcessSessionId; // [rsp+44h] [rbp-9Dh] BYREF
  char v28[8]; // [rsp+48h] [rbp-99h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // [rsp+50h] [rbp-91h] BYREF
  char v30[8]; // [rsp+58h] [rbp-89h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+60h] [rbp-81h] BYREF
  char v32[8]; // [rsp+68h] [rbp-79h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33; // [rsp+70h] [rbp-71h]
  _WORD v34[2]; // [rsp+80h] [rbp-61h] BYREF
  unsigned int v35[3]; // [rsp+84h] [rbp-5Dh]
  __int64 v36; // [rsp+90h] [rbp-51h]
  char v37[8]; // [rsp+98h] [rbp-49h] BYREF
  struct _GUID *v38; // [rsp+A0h] [rbp-41h]
  __int128 v39; // [rsp+A8h] [rbp-39h]
  __int128 v40; // [rsp+B8h] [rbp-29h]
  __int64 v41; // [rsp+C8h] [rbp-19h]
  unsigned int *v42; // [rsp+D0h] [rbp-11h]

  *(_QWORD *)v35 = 0LL;
  v36 = 0LL;
  v37[0] = 0;
  v34[0] = 128;
  v38 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL);
  v10 = (*(__int64 (__fastcall **)(_WORD *))(DxgkWin32kInterface + 240))(v34);
  v13 = v10;
  if ( v10 >= 0 )
  {
    LOBYTE(v12) = v34[0];
    *a3 = (v34[0] & 0x20) != 0;
    *a4 = (v12 & 0x10) != 0;
    *a5 = v12 & 1;
    if ( (v12 & 2) != 0 )
    {
      v30[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v30, v38, 0, 0);
      v14 = v31;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, v14, 16LL, 0LL, &CurrentProcessSessionId);
      v13 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry2(2LL, updated, CurrentProcessSessionId);
        WdLogGlobalForLineNumber = 17450;
        v13 = 0;
      }
      if ( v30[0] )
        DisplayScenarioContextDissociate(&v31);
      LOBYTE(v12) = v34[0];
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 17409;
    *(_QWORD *)v35 = 0LL;
    v12 = 4LL;
    v42 = 0LL;
    v34[0] = 4;
    v39 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
  }
  if ( (v12 & 4) != 0 )
  {
    v16 = v35[0];
    if ( !v35[0] )
      v16 = 2191;
    v35[0] = v16;
    if ( (v12 & 8) != 0 )
      v35[0] = v16 | 0x100;
    UserSessionState = W32GetUserSessionState(v12, v11);
    if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL)) )
    {
      v28[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v28, v38, 0, 0);
      v26[0] = 0;
      v22 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v34,
              v35[0],
              a1,
              v26,
              v29);
      if ( v22 < 0 )
      {
        v13 = v22;
        WdLogSingleEntry2(2LL, v22, 1LL);
        v21 = (CDisplayScenarioContextScope *)v28;
        WdLogGlobalForLineNumber = 17547;
        goto LABEL_18;
      }
      if ( v26[0] )
      {
        v23 = W32GetUserSessionState(v12, v11);
        DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v23 + 56968) + 16LL), a2);
        HIBYTE(v34[0]) &= ~1u;
      }
      if ( v28[0] )
        DisplayScenarioContextDissociate(&v29);
    }
    else
    {
      v19 = v35[0];
      if ( (v35[0] & 0x200) != 0 )
      {
        CDisplayScenarioContextScope::CDisplayScenarioContextScope(
          (CDisplayScenarioContextScope *)v32,
          (struct CDisplayScenarioContextCarrier *)v37);
        v20 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v34,
                v35[0] & 0xFFFFFF7F,
                a1,
                0LL,
                v33);
        if ( v20 < 0 )
        {
          v13 = v20;
          WdLogSingleEntry2(2LL, v20, 0LL);
          v21 = (CDisplayScenarioContextScope *)v32;
          WdLogGlobalForLineNumber = 17506;
LABEL_18:
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v21);
          goto LABEL_31;
        }
        v35[0] = v35[0] & 0x1100 | 0x88F;
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v32);
        v19 = v35[0];
      }
      else if ( (v35[0] & 0xF) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 17523;
        goto LABEL_31;
      }
      *(_DWORD *)(W32GetUserGdiSessionState(v18) + 16) = v19;
    }
  }
  if ( (v34[0] & 0x100) != 0 )
  {
    v24 = W32GetUserSessionState(v12, v11);
    DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v24 + 56968) + 16LL), a2);
  }
LABEL_31:
  if ( v42 )
    *v42 = v13;
  _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v34);
  return v13;
}
