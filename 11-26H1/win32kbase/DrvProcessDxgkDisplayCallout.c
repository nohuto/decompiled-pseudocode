/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x14013D67C
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14013DA64 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14013DABC (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     DrvQueryMDEVPowerState @ 0x14013DBA0 (DrvQueryMDEVPowerState.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1401A24DC (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v16; // rbx
  int updated; // eax
  unsigned int v18; // eax
  __int64 UserSessionState; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26[8]; // [rsp+40h] [rbp-81h] BYREF
  char v27[8]; // [rsp+48h] [rbp-79h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // [rsp+50h] [rbp-71h] BYREF
  unsigned int CurrentProcessSessionId; // [rsp+58h] [rbp-69h] BYREF
  _WORD v30[2]; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v31[3]; // [rsp+64h] [rbp-5Dh]
  __int64 v32; // [rsp+70h] [rbp-51h]
  char v33[8]; // [rsp+78h] [rbp-49h] BYREF
  struct _GUID *v34; // [rsp+80h] [rbp-41h]
  __int128 v35; // [rsp+88h] [rbp-39h]
  __int128 v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A8h] [rbp-19h]
  unsigned int *v38; // [rsp+B0h] [rbp-11h]

  *(_QWORD *)v31 = 0LL;
  v32 = 0LL;
  v33[0] = 0;
  v30[0] = 128;
  v34 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL, a2);
  v10 = (*(__int64 (__fastcall **)(_WORD *))(DxgkWin32kInterface + 240))(v30);
  v14 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 17259;
    *(_QWORD *)v31 = 0LL;
    v12 = 4;
    v38 = 0LL;
    v30[0] = 4;
    v35 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
  }
  else
  {
    LOBYTE(v12) = v30[0];
    *a3 = (v30[0] & 0x20) != 0;
    *a4 = (v12 & 0x10) != 0;
    *a5 = v12 & 1;
    if ( (v12 & 2) != 0 )
    {
      v27[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v27, v34, 0, 0);
      v16 = v28;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(
                  &WNF_DX_MONITOR_CHANGE_NOTIFICATION,
                  v16,
                  16LL,
                  0LL,
                  &CurrentProcessSessionId,
                  0,
                  0);
      v14 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry2(2LL, updated, CurrentProcessSessionId);
        WdLogGlobalForLineNumber = 17300;
        v14 = 0;
      }
      if ( v27[0] )
        DisplayScenarioContextDissociate(&v28);
      LOBYTE(v12) = v30[0];
    }
  }
  if ( (v12 & 4) == 0 )
    goto LABEL_4;
  v18 = v31[0];
  if ( !v31[0] )
    v18 = 2191;
  v31[0] = v18;
  if ( (v12 & 8) != 0 )
    v31[0] = v18 | 0x100;
  UserSessionState = W32GetUserSessionState(v12, v11, v13);
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL)) )
  {
    v27[0] = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v27, v34, 0, 0);
    v26[0] = 0;
    v21 = DrvProcessSetDisplayConfigParameters((struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v30, v31[0], a1, v26, v28);
    if ( v21 >= 0 )
    {
      if ( v26[0] )
      {
        v24 = W32GetUserSessionState(v12, v11, v13);
        DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v24 + 56968) + 16LL), a2);
        HIBYTE(v30[0]) &= ~1u;
      }
      if ( v27[0] )
        DisplayScenarioContextDissociate(&v28);
      goto LABEL_4;
    }
    v14 = v21;
    WdLogSingleEntry2(2LL, v21, 1LL);
    WdLogGlobalForLineNumber = 17397;
LABEL_29:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v27);
    goto LABEL_6;
  }
  v22 = v31[0];
  if ( (v31[0] & 0x200) != 0 )
  {
    CDisplayScenarioContextScope::CDisplayScenarioContextScope(
      (CDisplayScenarioContextScope *)v27,
      (struct CDisplayScenarioContextCarrier *)v33);
    v23 = DrvProcessSetDisplayConfigParameters(
            (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v30,
            v31[0] & 0xFFFFFF7F,
            a1,
            0LL,
            v28);
    if ( v23 < 0 )
    {
      v14 = v23;
      WdLogSingleEntry2(2LL, v23, 0LL);
      WdLogGlobalForLineNumber = 17356;
      goto LABEL_29;
    }
    v31[0] = v31[0] & 0x1100 | 0x88F;
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v27);
    v22 = v31[0];
  }
  else if ( (v31[0] & 0xF) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 17373;
    goto LABEL_6;
  }
  *(_DWORD *)(W32GetUserGdiSessionState(v20) + 16) = v22;
LABEL_4:
  if ( (v30[0] & 0x100) != 0 )
  {
    v25 = W32GetUserSessionState(v12, v11, v13);
    DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v25 + 56968) + 16LL), a2);
  }
LABEL_6:
  if ( v38 )
    *v38 = v14;
  _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v30);
  return v14;
}
