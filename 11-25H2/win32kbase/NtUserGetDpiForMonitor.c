/*
 * XREFs of NtUserGetDpiForMonitor @ 0x140089500
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     UserSetLastStatus @ 0x140089414 (UserSetLastStatus.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x14008A304 (DrvGetCurrentDpiInfoFromHDev.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v7; // esi
  INT v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // r15d
  _DWORD *v14; // rdx
  _DWORD *v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  INT v20; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  INT v22; // eax
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  INT v26; // edx
  INT v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  INT v30; // edx
  INT v31; // ebx
  INT v32[24]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+90h] [rbp-38h] BYREF

  v7 = 0;
  v8 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v33, 1LL);
  v10 = HMValidateSharedHandle(a1, v9);
  v11 = v10;
  if ( !v10 || (v12 = *(_QWORD *)(v10 + 80)) == 0 )
  {
    v13 = 0;
    UserSetLastError(6);
    goto LABEL_12;
  }
  if ( a2 )
  {
    v20 = 96;
    memset(v32, 0, sizeof(v32));
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v12, v32);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v13 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v13 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v7 = v32[10];
        v8 = v32[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
          v25 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v25 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v26 = *(unsigned __int16 *)(v25 + 272);
          v20 = v26;
        }
        else
        {
          v26 = 96;
        }
        v27 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
        v7 = EngMulDiv(v32[10], v26, v27);
        v8 = EngMulDiv(v32[11], v20, v27);
      }
      if ( (v32[23] & 1) != 0 || (v32[23] & 2) != 0 || !v7 )
      {
        v8 = 0;
        v7 = 0;
        UserSetLastError(50);
        v13 = 0;
      }
      goto LABEL_26;
    }
    if ( a2 == 1 )
    {
      if ( !v32[14] || (v32[23] & 2) != 0 )
      {
        v8 = 96;
        v7 = 96;
      }
      else
      {
        v7 = EngMulDiv(v32[14], 96, 100);
        v8 = EngMulDiv(v32[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v29 = PsGetCurrentProcessWin32Process(v28);
        if ( v29 )
          v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
        v30 = *(unsigned __int16 *)(v29 + 272);
        v20 = v30;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_26;
        v30 = 96;
      }
      v31 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
      v7 = EngMulDiv(v7, v30, v31);
      v8 = EngMulDiv(v8, v20, v31);
    }
LABEL_26:
    if ( SLOBYTE(v32[23]) < 0 )
    {
      v22 = v8;
      v8 = v7;
      v7 = v22;
    }
    goto LABEL_7;
  }
  v13 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v18 = PsGetCurrentProcessWin32Process(v17);
    v19 = v18;
    if ( v18 )
      v19 = -(__int64)(*(_QWORD *)v18 != 0LL) & v18;
    v7 = *(unsigned __int16 *)(v19 + 272);
  }
  else
  {
    v7 = 96;
  }
  v8 = v7;
LABEL_7:
  v14 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *v14;
  v15 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  *a3 = v7;
  *a4 = v8;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v15);
  return v13;
}
