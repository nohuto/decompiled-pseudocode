/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x14025CB70 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsIAMThread @ 0x140059A4C (IsIAMThread.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468 (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     IsMessageOnlyWindow @ 0x14019D910 (IsMessageOnlyWindow.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14023F5B0 (-Registered@ShellWindowManagement@@YA_NXZ.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140261368 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  __int64 *v4; // rdi
  ShellWindowManagement *v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // eax
  ShellWindowManagement *v9; // rcx
  bool v10; // al
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  struct tagWND *v14; // r8
  struct tagDESKTOP *v15; // rdx

  v4 = (__int64 *)PtiCurrent((__int64)a1);
  v5 = (ShellWindowManagement *)v4[61];
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
    goto LABEL_21;
  LOBYTE(v8) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v4);
  if ( !v8 )
    goto LABEL_21;
  v10 = ShellWindowManagement::Registered(v9);
  if ( !a2 )
  {
    if ( !v10 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1
      && *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v11) + 61) + 328LL) + 16LL) == v4 )
    {
      _UnregisterHotKey(a1, 61536);
      v15 = 0LL;
LABEL_19:
      ShellWindowManagement::SetWindow(v5, v15, v14);
      return 1LL;
    }
LABEL_21:
    v12 = 5;
    goto LABEL_22;
  }
  if ( !v10 )
  {
    if ( *((__int64 **)a1 + 2) == v4 && (unsigned int)IsShellProcess(v4[57]) && IsIAMThread((__int64)v4) )
    {
      LOBYTE(v13) = IsMessageOnlyWindow((__int64)a1);
      if ( !v13 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      {
        v12 = 87;
        goto LABEL_22;
      }
      v15 = a1;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
  v12 = 1242;
LABEL_22:
  UserSetLastError(v12);
  return 0LL;
}
