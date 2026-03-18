/*
 * XREFs of ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x1402AE210
 * Callers:
 *     NtUserSetShellSpecialWindow @ 0x1402BDD00 (NtUserSetShellSpecialWindow.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserSetFallbackForeground(HWND a1, int a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  v5 = PtiCurrent(v4);
  LOBYTE(v6) = IAMThreadAccessGranted(v5);
  v8 = 0LL;
  if ( v6 )
  {
    if ( a1 )
    {
      v10 = ValidateHwnd(a1);
      if ( v10 && (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) != 0x29D && IsTopLevelWindow(v10) && a2 )
      {
        v12 = *(_QWORD *)(v11 + 24) + 296LL;
        v18[1] = v11;
        v18[0] = v12;
        HMAssignmentLock(v18, 0LL);
        if ( a2 == 1 )
        {
LABEL_15:
          v8 = 1LL;
          goto LABEL_16;
        }
LABEL_14:
        *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18936) = 0LL;
        goto LABEL_15;
      }
    }
    else if ( !a2 )
    {
      v15 = PtiCurrent(v7);
      HMAssignmentUnlock(*((_QWORD *)v15 + 61) + 296LL);
      goto LABEL_14;
    }
    v9 = 87;
    goto LABEL_3;
  }
  v9 = 5;
LABEL_3:
  UserSetLastError(v9);
LABEL_16:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
  UserSessionSwitchLeaveCrit(v16);
  return v8;
}
