/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x14024C760 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMessageOnlyWindow @ 0x14014CE90 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x140151CF0 (IsIAMThread.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018163C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14021AFAC (-Registered@ShellWindowManagement@@YA_NXZ.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140227D84 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C (Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2)
{
  int v2; // esi
  __int64 *v4; // rdi
  ShellWindowManagement *v5; // rbp
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // eax
  __int64 v9; // rdx
  ShellWindowManagement *v10; // rcx
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  struct tagWND *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  struct tagWND *v23; // r8

  v2 = a2;
  v4 = (__int64 *)PtiCurrent((__int64)a1, a2);
  v5 = (ShellWindowManagement *)v4[62];
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
    goto LABEL_21;
  LOBYTE(v8) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v4);
  if ( !v8 )
    goto LABEL_21;
  v11 = ShellWindowManagement::Registered(v10, v9);
  if ( !v2 )
  {
    if ( !v11 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1
      && *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v13, v12) + 62) + 328LL) + 16LL) == v4 )
    {
      _UnregisterHotKey(a1, 61536LL);
      ShellWindowManagement::SetWindow(v5, 0LL, v23);
      return 1LL;
    }
    goto LABEL_21;
  }
  if ( !v11 )
  {
    if ( *((__int64 **)a1 + 2) == v4 && (unsigned int)IsShellProcess(v4[58]) && IsIAMThread((__int64)v4) )
    {
      LOBYTE(v15) = IsMessageOnlyWindow((__int64)a1);
      if ( !v15 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      {
        v14 = 87;
        goto LABEL_22;
      }
      ShellWindowManagement::SetWindow(v5, a1, v16);
      if ( !(unsigned int)Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v18, v17, v19) )
      {
        v22 = PtiCurrent(v21, v20);
        _RegisterHotKey(*(struct tagWND **)(*((_QWORD *)v22 + 62) + 328LL), 0LL, -17, 0x6001u, 0x73u, 0LL);
      }
      return 1LL;
    }
LABEL_21:
    v14 = 5;
    goto LABEL_22;
  }
  v14 = 1242;
LABEL_22:
  UserSetLastError(v14);
  return 0LL;
}
