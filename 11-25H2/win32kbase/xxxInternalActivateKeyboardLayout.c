/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x14009F5D0
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x14009F180 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x140157830 (--1-$Win32HMThreadLock@UtagKL@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14015AEEC (--0-$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionImmActivateLayout @ 0x14019582C (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x14019589C (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140196168 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionSendIMENotification @ 0x1401969CC (ApiSetEditionSendIMENotification.c)
 *     IsKeyboardDelegationTarget @ 0x1402167C0 (IsKeyboardDelegationTarget.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rsi
  bool v18; // zf
  __int64 i; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+30h] [rbp-88h]
  _QWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-38h] BYREF

  v7 = a3 & 0x100;
  v10 = PtiCurrent();
  v11 = *((_QWORD *)v10 + 60);
  if ( v11 )
  {
    v9 = *(_QWORD *)(v11 + 40);
    v25 = v9;
  }
  else
  {
    v11 = 0LL;
    v25 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(W32GetUserSessionState(v9, v8) + 14184) = (a3 >> 15) & 2;
  if ( v7 || a2 != *((_QWORD *)v10 + 60) )
  {
    *(_WORD *)(a2 + 74) = 0;
    Win32HMThreadLock<tagKL>::Win32HMThreadLock<tagKL>(v29, v10, v11);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 8) != 0 )
    {
      v26[0] = (char *)v10 + 480;
      v26[1] = a2;
      HMAssignmentLock(v26, 0LL);
      v15 = *(unsigned __int16 *)(a2 + 72);
      *(_WORD *)(*((_QWORD *)v10 + 65) + 152LL) = v15;
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v13, v12);
      if ( v7 )
      {
        v17 = *((_QWORD *)v10 + 58);
        if ( (**(_DWORD **)(UserSessionState + 19872) & 4) != 0 )
        {
          v18 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v17 + 320), v14, a2) == 0;
        }
        else
        {
          v15 = 0LL;
          for ( i = *(_QWORD *)(v17 + 320); i; i = *(_QWORD *)(i + 704) )
          {
            v14 = i + 480;
            if ( *(_QWORD *)(i + 480) != a2
              && (_InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) & 1) == 0 )
            {
              v27[0] = i + 480;
              v27[1] = a2;
              HMAssignmentLock(v27, 0LL);
              *(_WORD *)(*(_QWORD *)(i + 520) + 152LL) = *(_WORD *)(a2 + 72);
              *(_QWORD *)(*(_QWORD *)(i + 520) + 144LL) = *(_QWORD *)(a2 + 40);
              v15 = 1LL;
            }
          }
          v18 = (_DWORD)v15 == 0;
        }
        if ( v18 )
          goto LABEL_44;
      }
      else
      {
        if ( (**(_DWORD **)(UserSessionState + 19872) & 4) != 0 )
        {
          ApiSetEditionImmActivateLayout(v10, a2);
        }
        else
        {
          v28[0] = (char *)v10 + 480;
          v28[1] = a2;
          HMAssignmentLock(v28, 0LL);
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v10 + 65) + 152LL) = *(_WORD *)(a2 + 72);
          v15 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(*((_QWORD *)v10 + 65) + 144LL) = v15;
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18904)
      && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 18904) + 464LL) == *((_QWORD *)v10 + 58)
      || (unsigned __int8)IsKeyboardDelegationTarget(v10) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v11, (struct tagKL *)a2);
      xxxWindowEvent(-2147483647, 0, *(_DWORD *)(a2 + 40), 0, 0);
      ApiSetEditionNotifyShellLanguageHook(v10, *(_QWORD *)(a2 + 40), 1LL);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v11, (struct tagKL *)a2);
    }
    v23 = *((_QWORD *)v10 + 59);
    if ( v23 )
    {
      v22 = *(_QWORD *)(v23 + 120);
      if ( v22 )
        goto LABEL_38;
      v22 = *(_QWORD *)(v23 + 128);
      if ( !v22 )
        v22 = a4;
      if ( v22 )
LABEL_38:
        ApiSetEditionSendIMENotification((_DWORD)v10, v22, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    if ( *((_QWORD *)v10 + 103)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000
       || (**(_DWORD **)(W32GetUserSessionState(57344LL, v22) + 19872) & 4) != 0) )
    {
      ApiSetEditionSendIMENotification((_DWORD)v10, *((_QWORD *)v10 + 103), 647, 31, v7);
    }
LABEL_44:
    Win32HMThreadLock<tagKL>::~Win32HMThreadLock<tagKL>(v29);
  }
  return v25;
}
