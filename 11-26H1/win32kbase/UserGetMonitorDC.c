/*
 * XREFs of UserGetMonitorDC @ 0x140035F78
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 * Callees:
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x140036094 (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _ReleaseDC @ 0x14003BBD0 (_ReleaseDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserGetMonitorDC(void *a1)
{
  __int64 MonitorDC; // rdi
  struct tagMONITOR *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 DCEx; // rsi
  __int64 SessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 i; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax

  MonitorDC = 0LL;
  v2 = MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *((_QWORD *)PtiCurrent() + 61);
    if ( v3 )
    {
      DCEx = GetDCEx(*(struct tagWND **)(*(_QWORD *)(v3 + 8) + 24LL), 0LL);
      if ( DCEx )
      {
        SessionState = W32GetSessionState(v4);
        GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
        v12 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9, v10) + 56968);
        for ( i = *(_QWORD *)(v12 + 24); ; i = *(_QWORD *)i )
        {
          v12 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13, v14) + 56968) + 24LL;
          if ( i == v12 )
            break;
          v16 = *(_DWORD *)(i + 48);
          if ( (v16 & 0x400800) == 0 && *(_QWORD *)(i + 16) == DCEx && (v16 & 0x1000) != 0 && !*(_QWORD *)(i + 72) )
          {
            MonitorDC = i;
            break;
          }
        }
        MonitorDC = GetMonitorDC(MonitorDC, v2, 1LL);
        ReleaseDC(DCEx);
        v18 = W32GetSessionState(v17);
        GrepUnlockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v18 + 88));
      }
    }
  }
  return MonitorDC;
}
