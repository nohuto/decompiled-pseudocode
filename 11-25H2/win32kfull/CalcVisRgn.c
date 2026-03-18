/*
 * XREFs of CalcVisRgn @ 0x1400319F0
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400345C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14018726C (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 *     InvalidateGDIWindows @ 0x14026E8E4 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x140287E68 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x140299860 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     _IsDescendant @ 0x14017FA7C (_IsDescendant.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, const struct tagWND *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 UserSessionState; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v6 = a2;
  v9 = a2;
  while ( v6 )
  {
    a2 = *(_QWORD *)(v6 + 40);
    v10 = *(_BYTE *)(a2 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v6 != v9 )
      goto LABEL_8;
    if ( (*(_WORD *)(a2 + 42) & 0x2FFF) == 0x29D )
      break;
    v6 = *(_QWORD *)(v6 + 104);
  }
  if ( v4 != *(_QWORD *)(W32GetUserSessionState(v6, a2) + 19144) && (a4 & 0x4000) == 0 )
  {
    v11 = v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 26) & 8) != 0 )
        break;
      v11 = *(_QWORD *)(v11 + 104);
      if ( !v11 )
        goto LABEL_8;
    }
    if ( v11 != v9 && (*(_WORD *)(v13 + 42) & 0x2FFF) == 0x29D
      || !v11
      || (a4 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(v9) )
    {
      goto LABEL_8;
    }
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v11 = v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 )
        break;
      v11 = *(_QWORD *)(v11 + 104);
      if ( !v11 )
        goto LABEL_20;
    }
    if ( (v11 == v9 || (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D) && v11 && !GetRedirectionBitmap(v11, v13) )
      goto LABEL_8;
  }
LABEL_20:
  if ( *(_QWORD *)(W32GetUserSessionState(v11, v13) + 56976) )
  {
    if ( (a4 & 0x400) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v15, v14);
      if ( (unsigned int)IsDescendant(*(_QWORD *)(UserSessionState + 56976), v9) )
        goto LABEL_8;
    }
  }
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( (a4 & 0x4000) != 0 )
    {
LABEL_23:
      v17 = v9;
      while ( 1 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)(v17 + 40) + 24LL);
        if ( (v18 & 0x80000) != 0 || (v18 & 0x20000000) != 0 )
          break;
        v17 = *(_QWORD *)(v17 + 104);
        if ( !v17 )
          return CalcVisRgnWorker(a3, a1, a4);
      }
      if ( v17 == v9 )
        goto LABEL_31;
      v21 = *(_QWORD *)(v17 + 24);
      v22 = 0LL;
      if ( v21 )
      {
        v16 = *(_QWORD *)(v21 + 8);
        if ( v16 )
          v22 = *(_QWORD *)(v16 + 24);
      }
      if ( v17 != v22 )
      {
LABEL_31:
        if ( v17 )
        {
          v19 = *(_QWORD *)(v17 + 40);
          if ( GetRedirectionBitmap(v17, v16) )
          {
            if ( (*(_DWORD *)(v19 + 24) & 0x20000000) != 0 )
            {
              v20 = *(_DWORD *)(v19 + 232);
              if ( (v20 & 2) != 0 && (v20 & 1) == 0 && (*(_DWORD *)(v17 + 380) & 0x20000000) == 0 )
                a4 &= ~0x4000u;
            }
          }
        }
      }
      return CalcVisRgnWorker(a3, a1, a4);
    }
LABEL_8:
    v24 = 0LL;
    SetOrCreateRectRgnIndirectPublic(a1, &v24);
    return 0LL;
  }
  if ( (a4 & 0x4000) != 0 )
    goto LABEL_23;
  return CalcVisRgnWorker(a3, a1, a4);
}
