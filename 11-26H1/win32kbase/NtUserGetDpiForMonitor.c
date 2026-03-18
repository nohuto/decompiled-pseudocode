/*
 * XREFs of NtUserGetDpiForMonitor @ 0x14017AFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140087A68 (DrvGetCurrentDpiInfoFromHDev.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     UserSetLastStatus @ 0x140191AE4 (UserSetLastStatus.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  INT v28; // r14d
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  INT v37; // esi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  INT v42; // esi
  unsigned int v43; // eax
  INT v44[24]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v45; // [rsp+90h] [rbp-38h] BYREF

  v8 = 0;
  v9 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v45);
  v12 = HMValidateSharedHandle(a1, v10, v11);
  v15 = v12;
  if ( v12 )
  {
    v16 = *(_QWORD *)(v12 + 80);
    if ( v16 )
    {
      if ( !a2 )
      {
        v17 = 1;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13) & 0xF) == 2 )
        {
          v8 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v23) & 0xF) == 1 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
          v27 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v27 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v8 = *(unsigned __int16 *)(v27 + 272);
        }
        else
        {
          v8 = 96;
        }
        v9 = v8;
LABEL_9:
        RtlWriteULongToUser(a3, v8);
        RtlWriteULongToUser(a4, v9);
        goto LABEL_4;
      }
      v28 = 96;
      memset(v44, 0, sizeof(v44));
      CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v16, (__int64)v44);
      if ( CurrentDpiInfoFromHDev < 0 )
      {
        v17 = 0;
        UserSetLastStatus(CurrentDpiInfoFromHDev);
        goto LABEL_4;
      }
      v17 = 1;
      if ( a2 == 2 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v31, v30) & 0xF) == 2 )
        {
          v8 = v44[10];
          v9 = v44[11];
        }
        else
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32) & 0xF) == 1 )
          {
            v35 = PsGetCurrentProcessWin32Process(v34);
            v36 = v35;
            if ( v35 )
              v36 = -(__int64)(*(_QWORD *)v35 != 0LL) & v35;
            v28 = *(unsigned __int16 *)(v36 + 272);
          }
          v37 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
          v8 = EngMulDiv(v44[10], v28, v37);
          v9 = EngMulDiv(v44[11], v28, v37);
        }
        if ( (v44[23] & 1) != 0 || (v44[23] & 2) != 0 || !v8 )
        {
          v9 = 0;
          v8 = 0;
          UserSetLastError(50);
          v17 = 0;
        }
        goto LABEL_40;
      }
      if ( a2 == 1 )
      {
        v38 = (unsigned int)v44[14];
        if ( !v44[14] || (v44[23] & 2) != 0 )
        {
          v9 = 96;
          v8 = 96;
        }
        else
        {
          v8 = EngMulDiv(v44[14], 96, 100);
          v9 = EngMulDiv(v44[15], 96, 100);
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v30) & 0xF) == 1 )
        {
          v41 = PsGetCurrentProcessWin32Process(v40);
          if ( v41 )
            v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
          v42 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
          v28 = *(unsigned __int16 *)(v41 + 272);
        }
        else
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39) & 0xF) == 2 )
            goto LABEL_40;
          v42 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
        }
        v8 = EngMulDiv(v8, v28, v42);
        v9 = EngMulDiv(v9, v28, v42);
      }
LABEL_40:
      if ( SLOBYTE(v44[23]) < 0 )
      {
        v43 = v9;
        v9 = v8;
        v8 = v43;
      }
      goto LABEL_9;
    }
  }
  v17 = 0;
  UserSetLastError(6);
LABEL_4:
  UserSessionSwitchLeaveCritWithNonPaged(v19, v18, v20, v21);
  return v17;
}
