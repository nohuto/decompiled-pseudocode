/*
 * XREFs of CreateCacheDC @ 0x140089BB0
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089EAC (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F20 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F94 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 *     IsGetStyleWindowSupported @ 0x14008A080 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008A0B8 (GetStyleWindow.c)
 *     GreGetBounds @ 0x14008B330 (GreGetBounds.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateCacheDC(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rbx
  _QWORD *v10; // rax
  HDEV v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct HOBJ__ *DisplayDC; // r14
  struct tagWND *StyleWindow; // rsi
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v25; // rdx
  int (*v26)(void); // rax
  void (__fastcall *v27)(char *); // rax
  int (*v28)(void); // rax
  void (__fastcall *v29)(char *, _QWORD); // rax

  v6 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x98uLL, 0x63647355u);
  v9 = (char *)v6;
  if ( !v6 )
    return 0LL;
  v6[1] = v6;
  *v6 = v6;
  v10 = v6 + 13;
  v10[1] = v10;
  *v10 = v10;
  *((_QWORD *)v9 + 16) = v9 + 120;
  *((_QWORD *)v9 + 15) = v9 + 120;
  *((_QWORD *)v9 + 18) = v9 + 136;
  *((_QWORD *)v9 + 17) = v9 + 136;
  if ( a3 )
    v11 = *(HDEV *)(a3 + 80);
  else
    v11 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 48LL);
  DisplayDC = (struct HOBJ__ *)GreCreateDisplayDC(v11, 0, 2);
  if ( !DisplayDC )
  {
    GreDeleteFastMutex(v9);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() < 0 )
      StyleWindow = 0LL;
    else
      StyleWindow = (struct tagWND *)GetStyleWindow(a1);
    v16 = a2 & 0xFFFFBFFF;
    if ( StyleWindow )
      v16 = a2;
    a2 = v16;
  }
  else
  {
    StyleWindow = 0LL;
  }
  v17 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968) + 24LL;
  v18 = *(_QWORD *)v17;
  if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
    __fastfail(3u);
  *((_QWORD *)v9 + 1) = v17;
  *(_QWORD *)v9 = v18;
  *(_QWORD *)(v18 + 8) = v9;
  *(_QWORD *)v17 = v9;
  *((_QWORD *)v9 + 2) = DisplayDC;
  *((_DWORD *)v9 + 12) = a2;
  tagDCE::SetPwndOrg((tagDCE *)v9, a1);
  tagDCE::SetPwndClip((tagDCE *)v9, a1);
  tagDCE::SetPwndRedirect((tagDCE *)v9, StyleWindow);
  *((_QWORD *)v9 + 3) = 0LL;
  *((_QWORD *)v9 + 4) = 0LL;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 8) = 0LL;
  *((_QWORD *)v9 + 9) = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000002, 0, 0);
    *((_QWORD *)v9 + 7) = PtiCurrent();
    *((_QWORD *)a1 + 31) = v9;
    if ( (a2 & 0x4000) != 0 )
    {
      v23 = *(_QWORD **)(W32GetWin32kBaseApiSetTable() + 48);
      v28 = (int (*)(void))v23[336];
      if ( v28 )
      {
        if ( v28() >= 0 )
        {
          v23 = *(_QWORD **)(W32GetWin32kBaseApiSetTable() + 48);
          v29 = (void (__fastcall *)(char *, _QWORD))v23[337];
          if ( v29 )
            v29(v9, 0LL);
        }
      }
    }
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000012, 0, 0);
    *((_QWORD *)v9 + 7) = 0LL;
    UserSessionState = W32GetUserSessionState(v20, v19);
    ++*(_DWORD *)(UserSessionState + 19660);
  }
  if ( (a2 & 2) == 0 )
  {
    v25 = *((_QWORD *)a1 + 17);
    if ( (*(_BYTE *)(*(_QWORD *)(v25 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v25 + 40) = v9;
    *((_DWORD *)v9 + 12) |= 0x1000u;
    v23 = *(_QWORD **)(W32GetWin32kBaseApiSetTable() + 48);
    v26 = (int (*)(void))v23[334];
    if ( v26 )
    {
      if ( v26() >= 0 )
      {
        v23 = *(_QWORD **)(W32GetWin32kBaseApiSetTable() + 48);
        v27 = (void (__fastcall *)(char *))v23[335];
        if ( v27 )
          v27(v9);
      }
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968) + 40LL) )
    GreGetBounds(*((HDC *)v9 + 2));
  return *((_QWORD *)v9 + 2);
}
