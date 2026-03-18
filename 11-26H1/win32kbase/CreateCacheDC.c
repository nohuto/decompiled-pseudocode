/*
 * XREFs of CreateCacheDC @ 0x140081BD0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081E98 (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081F70 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081FE4 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     IsGetStyleWindowSupported @ 0x1400824D4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008250C (GetStyleWindow.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateCacheDC(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  char *v10; // rbx
  _QWORD *v11; // rax
  HDEV v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  struct HOBJ__ *DisplayDC; // r14
  struct tagWND *StyleWindow; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 UserSessionState; // rax
  __int64 v26; // rcx
  __int64 v28; // rdx
  int (*v29)(void); // rax
  __int64 v30; // rcx
  void (__fastcall *v31)(char *); // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int (*v34)(void); // rax
  void (__fastcall *v35)(char *, _QWORD); // rax

  v6 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x98uLL, 0x63647355u);
  v10 = (char *)v6;
  if ( !v6 )
    return 0LL;
  v6[1] = v6;
  *v6 = v6;
  v11 = v6 + 13;
  v11[1] = v11;
  *v11 = v11;
  *((_QWORD *)v10 + 16) = v10 + 120;
  *((_QWORD *)v10 + 15) = v10 + 120;
  *((_QWORD *)v10 + 18) = v10 + 136;
  *((_QWORD *)v10 + 17) = v10 + 136;
  if ( a3 )
    v12 = *(HDEV *)(a3 + 80);
  else
    v12 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 56968) + 40LL);
  DisplayDC = (struct HOBJ__ *)GreCreateDisplayDC(v12, 0, 2);
  if ( !DisplayDC )
  {
    GreDeleteFastMutex(v10, v13, v15, v16);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() < 0 )
      StyleWindow = 0LL;
    else
      StyleWindow = (struct tagWND *)GetStyleWindow(a1);
    v19 = a2 & 0xFFFFBFFF;
    if ( StyleWindow )
      v19 = a2;
    a2 = v19;
  }
  else
  {
    StyleWindow = 0LL;
  }
  v20 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 56968) + 24LL;
  v21 = *(_QWORD *)v20;
  if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
    __fastfail(3u);
  *((_QWORD *)v10 + 1) = v20;
  *(_QWORD *)v10 = v21;
  *(_QWORD *)(v21 + 8) = v10;
  *(_QWORD *)v20 = v10;
  *((_QWORD *)v10 + 2) = DisplayDC;
  *((_DWORD *)v10 + 12) = a2;
  tagDCE::SetPwndOrg((tagDCE *)v10, a1);
  tagDCE::SetPwndClip((tagDCE *)v10, a1);
  tagDCE::SetPwndRedirect((tagDCE *)v10, StyleWindow);
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  *((_QWORD *)v10 + 8) = 0LL;
  *((_QWORD *)v10 + 9) = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000002, 0, 0);
    *((_QWORD *)v10 + 7) = PtiCurrent(v33, v32);
    *((_QWORD *)a1 + 31) = v10;
    if ( (a2 & 0x4000) != 0 )
    {
      v26 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 48);
      v34 = *(int (**)(void))(v26 + 2312);
      if ( v34 )
      {
        if ( v34() >= 0 )
        {
          v26 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 48);
          v35 = *(void (__fastcall **)(char *, _QWORD))(v26 + 2320);
          if ( v35 )
            v35(v10, 0LL);
        }
      }
    }
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000012, 0, 0);
    *((_QWORD *)v10 + 7) = 0LL;
    UserSessionState = W32GetUserSessionState(v23, v22, v24);
    ++*(_DWORD *)(UserSessionState + 19692);
  }
  if ( (a2 & 2) == 0 )
  {
    v28 = *((_QWORD *)a1 + 17);
    if ( (*(_BYTE *)(*(_QWORD *)(v28 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v28 + 40) = v10;
    *((_DWORD *)v10 + 12) |= 0x1000u;
    v29 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 48) + 2296LL);
    if ( v29 && v29() >= 0 )
    {
      v31 = *(void (__fastcall **)(char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30) + 48) + 2304LL);
      if ( v31 )
        v31(v10);
    }
  }
  return *((_QWORD *)v10 + 2);
}
