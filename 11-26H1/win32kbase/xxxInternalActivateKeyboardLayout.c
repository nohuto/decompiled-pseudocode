/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x140087130
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x140086FD0 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x1401904A4 (--1-$Win32HMThreadLock@UtagKL@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x140194C28 (--0-$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionSendIMENotification @ 0x1401BD55C (ApiSetEditionSendIMENotification.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1401BE89C (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1401BEEF8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1401C08AC (ApiSetEditionImmActivateLayout.c)
 *     IsKeyboardDelegationTarget @ 0x14021BCF0 (IsKeyboardDelegationTarget.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r12d
  int v8; // edx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rbx
  int v11; // r8d
  __int64 v12; // r15
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  bool v22; // zf
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-68h]
  char *v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+58h] [rbp-40h]
  _BYTE v33[16]; // [rsp+60h] [rbp-38h] BYREF

  v7 = a3 & 0x100;
  v10 = PtiCurrent(a1, a2);
  v12 = *((_QWORD *)v10 + 59);
  if ( v12 )
  {
    v9 = *(_QWORD *)(v12 + 40);
    v30 = v9;
  }
  else
  {
    v12 = 0LL;
    v30 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(W32GetUserSessionState(v9, v8, v11) + 14176) = (a3 >> 15) & 2;
  if ( v7 || a2 != *((_QWORD *)v10 + 59) )
  {
    *(_WORD *)(a2 + 74) = 0;
    Win32HMThreadLock<tagKL>::Win32HMThreadLock<tagKL>(v33, v10, v12);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 8) != 0 )
    {
      v31 = (char *)v10 + 472;
      v32 = a2;
      HMAssignmentLock(&v31, 0LL);
      LODWORD(v18) = *(unsigned __int16 *)(a2 + 72);
      *(_WORD *)(*((_QWORD *)v10 + 64) + 152LL) = v18;
    }
    else
    {
      v19 = *(_DWORD **)(W32GetUserSessionState(v14, v13, v15) + 19904);
      if ( v7 )
      {
        v20 = *((_QWORD *)v10 + 57);
        v21 = *(_QWORD *)(v20 + 328);
        if ( (*v19 & 4) != 0 )
        {
          v22 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v20 + 328), v16, a2) == 0;
        }
        else
        {
          LODWORD(v18) = 0;
          while ( v21 )
          {
            LODWORD(v16) = v21 + 472;
            if ( *(_QWORD *)(v21 + 472) != a2
              && (_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 520), 0, 0) & 1) == 0 )
            {
              v31 = (char *)(v21 + 472);
              v32 = a2;
              HMAssignmentLock(&v31, 0LL);
              *(_WORD *)(*(_QWORD *)(v21 + 512) + 152LL) = *(_WORD *)(a2 + 72);
              *(_QWORD *)(*(_QWORD *)(v21 + 512) + 144LL) = *(_QWORD *)(a2 + 40);
              LODWORD(v18) = 1;
            }
            v21 = *(_QWORD *)(v21 + 696);
          }
          v22 = (_DWORD)v18 == 0;
        }
        if ( v22 )
          goto LABEL_44;
      }
      else
      {
        if ( (*v19 & 4) != 0 )
        {
          ApiSetEditionImmActivateLayout(v10, a2);
        }
        else
        {
          v31 = (char *)v10 + 472;
          v32 = a2;
          HMAssignmentLock(&v31, 0LL);
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v10 + 64) + 152LL) = *(_WORD *)(a2 + 72);
          v18 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(*((_QWORD *)v10 + 64) + 144LL) = v18;
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v18, v16, v17) + 18944)
      && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 18944) + 456LL) == *((_QWORD *)v10 + 57)
      || (unsigned __int8)IsKeyboardDelegationTarget(v10) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v12, (struct tagKL *)a2);
      xxxWindowEvent(-2147483647, 0, *(_DWORD *)(a2 + 40), 0, 0);
      ApiSetEditionNotifyShellLanguageHook(v10, *(_QWORD *)(a2 + 40), 1LL);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v12, (struct tagKL *)a2);
    }
    v28 = *((_QWORD *)v10 + 58);
    if ( v28 )
    {
      v26 = *(_QWORD *)(v28 + 120);
      if ( v26 )
        goto LABEL_38;
      v26 = *(_QWORD *)(v28 + 128);
      if ( !v26 )
        v26 = a4;
      if ( v26 )
LABEL_38:
        ApiSetEditionSendIMENotification((_DWORD)v10, v26, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    if ( *((_QWORD *)v10 + 102)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000
       || (**(_DWORD **)(W32GetUserSessionState(57344, v26, v27) + 19904) & 4) != 0) )
    {
      ApiSetEditionSendIMENotification((_DWORD)v10, *((_QWORD *)v10 + 102), 647, 31, v7);
    }
LABEL_44:
    Win32HMThreadLock<tagKL>::~Win32HMThreadLock<tagKL>(v33);
  }
  return v30;
}
