/*
 * XREFs of ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C
 * Callers:
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_SetFallbackForeground@@YAHPEAUtagWND@@K@Z @ 0x140293C40 (-_SetFallbackForeground@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall NtUserSetFallbackForeground(HWND a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  struct tagWND *v12; // r9
  __int64 v13; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v15[0] = 0;
  v16 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v15, v5);
  v8 = PtiCurrent(v7, v6);
  LOBYTE(v9) = IAMThreadAccessGranted(v8);
  if ( v9 )
  {
    if ( a1 )
    {
      v11 = ValidateHwnd(a1);
      if ( !v11 || (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF) == 0x29D || !IsTopLevelWindow(v11) || !a2 )
        goto LABEL_9;
    }
    else
    {
      v12 = 0LL;
      if ( a2 )
      {
LABEL_9:
        v10 = 87;
        goto LABEL_3;
      }
    }
    v4 = _SetFallbackForeground(v12, a2);
    goto LABEL_12;
  }
  v10 = 5;
LABEL_3:
  UserSetLastError(v10);
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v13);
  return v4;
}
