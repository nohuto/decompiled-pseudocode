/*
 * XREFs of xxxSetThreadDesktop @ 0x14011499C
 * Callers:
 *     NtUserSetThreadDesktop @ 0x140114020 (NtUserSetThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1401148A0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140114C00 (xxxSetCsrssThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MagContextThreadCallout @ 0x140270AF0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rdi
  _QWORD *v5; // r14
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  tagQ *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  _QWORD v22[5]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+4Ch] [rbp-1Ch]

  v4 = PtiCurrent(a1, a2);
  v5 = (_QWORD *)*((_QWORD *)v4 + 58);
  if ( !a2 )
    goto LABEL_3;
  v22[3] = *v5;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v22[2] = 1LL;
  v22[4] = a2;
  v23 = 0;
  v24 = 1;
  result = MapDesktop(v22);
  if ( (int)result >= 0 )
  {
LABEL_3:
    v7 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
    if ( PsGetCurrentProcess() != v7 )
    {
      if ( *((_DWORD *)v4 + 236)
        || *((_DWORD *)v4 + 180)
        || (v10 = *((_QWORD *)v4 + 62)) != 0
        && (v11 = *(_QWORD *)(v10 + 224)) != 0
        && *(struct tagTHREADINFO **)(v11 + 32) == v4 )
      {
        UserSetLastError(170);
        return 2147483665LL;
      }
      v9 = v5 + 42;
      if ( !v5[42] && a1 )
      {
        LockObjectAssignment(v9, a2);
        v5[47] = a1;
      }
    }
    if ( *((_QWORD *)v4 + 62) != a2 )
    {
      if ( (*((_BYTE *)v4 + 1360) & 8) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v9, v8);
        MagContextThreadCallout(UserSessionState + 66040, v4, 0LL, 1LL);
      }
      if ( *((_QWORD *)v4 + 62) != a2 )
      {
        if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v4 + 59)) )
        {
          v15 = (tagQ *)AllocQueue(0LL, 0LL);
          if ( !v15 )
          {
            UserSetLastError(8);
            return 3221225495LL;
          }
          tagQ::zzzAttachToQueue(v15, v4, 0LL, 0);
        }
        else
        {
          v16 = W32GetUserSessionState(v14, v13);
          v18 = *((_QWORD *)v4 + 59);
          if ( v18 == *(_QWORD *)(v16 + 18888) )
          {
            if ( !gbIgnoreStressedOutStuff )
            {
              if ( *(_QWORD *)(v18 + 136) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5369LL);
            }
            xxxSetForegroundWindow2(0LL, v4, 0LL);
          }
          else if ( !*((_QWORD *)v4 + 62) )
          {
            v19 = *(_DWORD *)(W32GetUserSessionState(v17, v18) + 68448);
            v20 = *((_QWORD *)v4 + 59);
            v21 = (v19 & 1) - 1;
            *((_DWORD *)v4 + 198) = v21;
            *(_DWORD *)(v20 + 408) = v21;
          }
        }
      }
    }
    return zzzSetDesktop(v4, a2, a1);
  }
  return result;
}
