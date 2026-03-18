/*
 * XREFs of UserGetMonitorDC @ 0x1400A2330
 * Callers:
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     _ReleaseDC @ 0x140047B90 (_ReleaseDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400A245C (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 */

__int64 __fastcall UserGetMonitorDC(void *a1)
{
  __int64 MonitorDC; // rdi
  struct tagMONITOR *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DCEx; // rsi
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  MonitorDC = 0LL;
  v2 = MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *((_QWORD *)PtiCurrent() + 62);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        UserSessionState = W32GetUserSessionState(v5, v4);
        GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
        v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968);
        for ( i = *(_QWORD *)(v11 + 24); ; i = *(_QWORD *)i )
        {
          v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968) + 24LL;
          if ( i == v11 )
            break;
          v13 = *(_DWORD *)(i + 48);
          if ( (v13 & 0x400800) == 0 && *(_QWORD *)(i + 16) == DCEx && (v13 & 0x1000) != 0 && !*(_QWORD *)(i + 72) )
          {
            MonitorDC = i;
            break;
          }
        }
        MonitorDC = GetMonitorDC(MonitorDC, v2, 1LL);
        ReleaseDC(DCEx);
        v16 = W32GetUserSessionState(v15, v14);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL));
      }
    }
  }
  return MonitorDC;
}
