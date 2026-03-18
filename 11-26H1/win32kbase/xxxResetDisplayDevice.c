/*
 * XREFs of xxxResetDisplayDevice @ 0x14007F460
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401EA874 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x14007F20C (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x14007F244 (DwmAsyncNotifyDisplayModeChange.c)
 *     IsCreateBitmapStripSupported @ 0x14007F288 (IsCreateBitmapStripSupported.c)
 *     PostIAMShellHookMessageEx @ 0x14007F2C0 (PostIAMShellHookMessageEx.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x14007F318 (-ResetSystemColors@@YAXXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x14007F3A8 (IsPostIAMShellHookMessageExSupported.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14007F3E0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     DestroyMonitorDCs @ 0x14007F970 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1400D0920 (PopAndFreeW32ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1401903D0 (zzzResetSharedDesktops.c)
 *     CreateBitmapStrip @ 0x140190818 (CreateBitmapStrip.c)
 *     ApiSetEditionGetCurrentMonitorTopology @ 0x14019847C (ApiSetEditionGetCurrentMonitorTopology.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14019936C (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     CacheRotationInfo @ 0x14019CBCC (CacheRotationInfo.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported @ 0x140249328 (IsxxxBroadcastDisplaySettingsChangeSupported.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x14024955C (xxxBroadcastDisplaySettingsChange.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // r15
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  int (*v14)(void); // rax
  __int64 v15; // rcx
  void (*v16)(void); // rax
  __int64 v17; // rcx
  int updated; // ebx
  __int64 v19; // rcx
  int (*v20)(void); // rax
  void (*v21)(void); // rax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int (*v25)(void); // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  CMonitorTopology *v29; // rcx
  int (*v30)(void); // rax
  void (__fastcall *v31)(__int64); // rax
  __int64 v32; // rcx
  int (*v33)(void); // rax
  __int64 v34; // r9
  __int64 v35; // rcx
  int (*v36)(void); // rax
  __int64 v37; // rcx
  void (__fastcall *v38)(__int64, __int64, __int64); // rax
  int (*v40)(void); // rax
  void (*v41)(void); // rax
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // edi
  __int64 UserSessionState; // rax
  int (*v46)(void); // rax
  unsigned int (__fastcall *v47)(__int64); // rax
  __int64 v48; // rcx
  volatile signed __int32 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  _BYTE v52[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v53; // [rsp+48h] [rbp-28h]
  _QWORD v54[4]; // [rsp+50h] [rbp-20h] BYREF
  int CurrentProcessSessionId; // [rsp+A8h] [rbp+38h] BYREF
  volatile signed __int32 *v56; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 19904);
  v10 = *a2;
  v11 = *(_WORD *)(v9 + 6996);
  v56 = 0LL;
  if ( (v10 & 1) == 0 )
  {
    if ( a1 && (v6 = *(_QWORD *)(a1 + 264)) != 0 )
    {
      v56 = *(volatile signed __int32 **)(a1 + 264);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    else
    {
      ApiSetEditionGetCurrentMonitorTopology(&v56);
      v6 = (__int64)v56;
    }
  }
  v12 = PtiCurrent(v8, v7);
  v54[0] = *((_QWORD *)v12 + 47);
  *((_QWORD *)v12 + 47) = v54;
  v54[2] = _lambda_fd77beed04b6b1a39114e0f43ae1b0ce_::_lambda_invoker_cdecl_;
  v54[1] = v6;
  DestroyMonitorDCs();
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 48) + 4600LL);
  if ( v14 )
  {
    if ( v14() >= 0 )
    {
      v16 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 48) + 4608LL);
      if ( v16 )
        v16();
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck(v52);
  updated = zzzUpdateUserScreen();
  if ( updated >= 0 )
  {
    v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48);
    v40 = *(int (**)(void))(v17 + 3264);
    if ( v40 )
    {
      if ( v40() >= 0 )
      {
        v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48);
        v41 = *(void (**)(void))(v17 + 3272);
        if ( v41 )
          v41();
      }
    }
  }
  if ( v52[0] )
    --*(_DWORD *)(v53 + 28);
  v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48);
  v20 = *(int (**)(void))(v19 + 4616);
  if ( v20 )
  {
    if ( v20() >= 0 )
    {
      v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48);
      v21 = *(void (**)(void))(v19 + 4624);
      if ( v21 )
        v21();
    }
  }
  if ( updated < 0 )
  {
    PopAndFreeW32ThreadLock(v54);
    return (unsigned int)updated;
  }
  else
  {
    v23 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48);
    v25 = *(int (**)(void))(v23 + 3280);
    if ( v25 && v25() >= 0 )
    {
      v43 = -__CFSHR__(*a2, 4);
      v44 = -__CFSHR__(*a2, 2);
      UserSessionState = W32GetUserSessionState(v23, v22, v24);
      zzzResetSharedDesktops(a1, v11 != *(_WORD *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL), v44, v43);
    }
    ResetSystemColors(v23, v22, v24);
    if ( (int)IsCreateBitmapStripSupported(v26) >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported(v27) >= 0 )
    {
      v42 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v42);
    }
    v29 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v28) + 48);
    v30 = (int (*)(void))*((_QWORD *)v29 + 416);
    if ( v30 )
    {
      if ( v30() >= 0 )
      {
        v29 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v29) + 48);
        v31 = (void (__fastcall *)(__int64))*((_QWORD *)v29 + 417);
        if ( v31 )
          v31(a1);
      }
    }
    if ( a1 )
    {
      v29 = *(CMonitorTopology **)(a1 + 264);
      if ( v29 )
      {
        CMonitorTopology::Release(v29);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( (*a2 & 2) != 0
      && (v29 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v29) + 48),
          (v46 = (int (*)(void))*((_QWORD *)v29 + 418)) != 0LL)
      && v46() >= 0
      && (v29 = *(CMonitorTopology **)(W32GetWin32kBaseApiSetTable(v29) + 48),
          (v47 = (unsigned int (__fastcall *)(__int64))*((_QWORD *)v29 + 419)) != 0LL)
      && v47(a1) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer((__int64)v29, &ChangeDisplayModeDeferral, 0LL);
      v48 = **(_QWORD **)(a1 + 8);
      *(_DWORD *)(v48 + 64) |= 2u;
      v49 = v56;
      if ( v56 )
      {
        *(_QWORD *)(a1 + 264) = v56;
        _InterlockedIncrement(v49);
      }
      if ( (int)IsPostIAMShellHookMessageExSupported(v48) >= 0 )
        PostIAMShellHookMessageEx(a1, 0x23u, 1LL);
      if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
        xxxBroadcastDisplaySettingsChange(a1, v50, v51, 2LL);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported((__int64)v29) >= 0 )
        PostIAMShellHookMessageEx(a1, 0x23u, 0LL);
      v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v32) + 48) + 3392LL);
      if ( v33 && v33() >= 0 )
        xxxDesktopsRecalcAndBroadcastDisplayChange(a1, (__int64)v56, v11, v34, (__int64)a2, a3);
    }
    PopAndFreeW32ThreadLock(v54);
    v36 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35) + 48) + 3408LL);
    if ( v36 )
    {
      if ( v36() >= 0 )
      {
        v38 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48)
                                                               + 3416LL);
        if ( v38 )
          v38(a1, 1LL, 1LL);
      }
    }
    if ( (*a2 & 2) == 0 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
    return 0LL;
  }
}
