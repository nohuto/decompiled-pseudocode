/*
 * XREFs of xxxInternalPaintDesktop @ 0x14020D100
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x140054368 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealizeDesktop @ 0x1402891C4 (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x14029B7C0 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x14020D2C0 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+5Ch] [rbp-24h]
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v17 = 0LL;
    v22 = 0LL;
    if ( (unsigned int)GreGetDCOrgEx(a2, &v17, &v22) )
    {
      v20 = DWORD2(v22) - v22;
      v21 = HIDWORD(v22) - DWORD1(v22);
      v19 = 0LL;
      UserSessionState = W32GetUserSessionState((unsigned int)-(int)v22, (unsigned int)-DWORD1(v22));
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
      GreSetDCOrg(a2, (unsigned int)v19, HIDWORD(v19), &v19);
      GreOffsetClipRgn(a2);
      v9 = W32GetUserSessionState(v8, v7);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v9 + 56968) + 48LL));
      v18[0] = a1;
      v18[1] = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, xxxDesktopPaintCallback, v18, 1);
      v12 = W32GetUserSessionState(v11, v10);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 48LL));
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, (unsigned int)v22, DWORD1(v22), &v22);
      v15 = W32GetUserSessionState(v14, v13);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 48LL));
    }
  }
  return v3;
}
