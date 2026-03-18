/*
 * XREFs of ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14023A9B4
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C1AD8 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

void __fastcall IVContainerForegroundSync::xxxIVSyncForeground(IVContainerForegroundSync *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // di
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *ShellSpecialWindow; // rsi
  bool v16; // bp
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int16 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = 1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      116,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  v9 = W32GetUserSessionState(v2, a2);
  v10 = *(_QWORD *)(v9 + 19496);
  if ( v10 )
  {
    ShellSpecialWindow = (__int64 *)ValidateHwnd(*(_QWORD *)(v9 + 19496));
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v3 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      v24 = v10;
      v23 = 118;
      goto LABEL_27;
    }
  }
  else
  {
    if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = W32GetUserSessionState(v12, v11);
      ShellSpecialWindow = (__int64 *)ShellWindowManagement::GetShellSpecialWindow(*(_QWORD *)(v13 + 19144), 0LL);
    }
    else
    {
      ShellSpecialWindow = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19144) + 296LL);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v3 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = *ShellSpecialWindow;
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      v24 = v17;
      v23 = 117;
LABEL_27:
      LOBYTE(v20) = v16;
      LOBYTE(v19) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v20,
        *(_QWORD *)(v18 + 69160),
        4,
        2,
        v23,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        v24);
    }
  }
  if ( ShellSpecialWindow )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
      BugCheckParameter3,
      (__int64)ShellSpecialWindow);
    xxxSetForegroundWindowWithOptions(ShellSpecialWindow, 31LL, 128LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v22);
  }
}
