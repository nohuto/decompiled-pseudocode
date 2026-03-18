/*
 * XREFs of UserVisrgnFromHwnd @ 0x140033A34
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x14001D2DC (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140033E50 (GetLayeredOrRedirectedParent.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(HRGN *a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct tagWND **v16; // rsi
  unsigned int v17; // edi
  const struct tagWND *v18; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r14
  const struct tagWND *v24; // rsi
  int v25; // eax
  int v26; // ebp
  char v27; // al
  __int64 v28; // rax
  struct tagWND *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r14
  int v37; // eax
  __int128 v38; // [rsp+28h] [rbp-40h] BYREF

  v4 = a2;
  W32GetCurrentThreadNonPaged(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  if ( (unsigned __int64)(unsigned __int16)v4 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)v4
      + *(_QWORD *)(UserSessionState + 19888);
  v16 = (const struct tagWND **)HMPkheFromPhe(v13);
  LOWORD(v4) = HIWORD(v4) & 0x7FFF;
  if ( (HIWORD(v4) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v4 != 0x7FFF
    && ((_WORD)v4 || !PsGetCurrentProcessWow64Process(v15, v14)) )
  {
    return 0LL;
  }
  v17 = 1;
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v13 + 24) != 1 )
    return 0LL;
  v18 = *v16;
  if ( !*v16 )
    return 0LL;
  v20 = *(unsigned int *)(*((_QWORD *)v18 + 5) + 232LL);
  if ( (v20 & 2) != 0 && !_GhostWindowFromHungWindow(*v16) && !(unsigned int)IsWindowContentProtected((__int64)v18, v22) )
  {
    v21 = *((_QWORD *)v18 + 5);
    goto LABEL_14;
  }
  v21 = *((_QWORD *)v18 + 5);
  LOBYTE(v20) = *(_BYTE *)(v21 + 31);
  if ( (*(_BYTE *)(v21 + 26) & 0x20) == 0 )
  {
    v23 = *((_QWORD *)v18 + 3);
    v24 = v18;
    v25 = a3 != 0 ? 17409 : 134218753;
    v26 = v25 | 0x10;
    if ( (v20 & 4) == 0 )
      v26 = v25;
    while ( v18 )
    {
      v20 = *((_QWORD *)v18 + 5);
      v27 = *(_BYTE *)(v20 + 31);
      if ( (v27 & 0x10) == 0 || (v27 & 0x20) != 0 && v18 != v24 )
        goto LABEL_26;
      if ( (*(_WORD *)(v20 + 42) & 0x2FFF) == 0x29D )
        break;
      v18 = (const struct tagWND *)*((_QWORD *)v18 + 13);
    }
    v29 = v24;
    if ( v23 != *(_QWORD *)(W32GetUserSessionState(v20, v21) + 19144) && (v26 & 0x4000) == 0 )
    {
      while ( 1 )
      {
        v28 = *((_QWORD *)v24 + 5);
        if ( (*(_BYTE *)(v28 + 26) & 8) != 0 )
          break;
        v24 = (const struct tagWND *)*((_QWORD *)v24 + 13);
        if ( !v24 )
          goto LABEL_26;
      }
      v31 = *(_WORD *)(v28 + 42) & 0x2FFF;
      if ( v24 != v29 && (_DWORD)v31 == 669 )
        goto LABEL_26;
      if ( (v26 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(v29) )
        goto LABEL_26;
    }
    if ( (v26 & 0x4000) != 0 )
    {
      v30 = (__int64)v29;
      while ( 1 )
      {
        v32 = *(_QWORD *)(v30 + 40);
        if ( (*(_BYTE *)(v32 + 27) & 0x20) != 0 )
          break;
        v30 = *(_QWORD *)(v30 + 104);
        if ( !v30 )
          goto LABEL_39;
      }
      v31 = *(_WORD *)(v32 + 42) & 0x2FFF;
      if ( ((struct tagWND *)v30 == v29 || (_DWORD)v31 != 669) && !GetRedirectionBitmap(v30, v30) )
      {
LABEL_26:
        v38 = 0LL;
        SetOrCreateRectRgnIndirectPublic(a1, &v38);
        return 0;
      }
    }
LABEL_39:
    W32GetUserSessionState(v31, v30);
    if ( (unsigned int)UpdatesLockedForDwm() )
    {
      if ( (v26 & 0x4000) == 0 )
        goto LABEL_26;
    }
    else if ( (v26 & 0x4000) == 0 )
    {
      return (unsigned int)CalcVisRgnWorker(v29, a1, v26);
    }
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v29);
    v35 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      v36 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
      if ( GetRedirectionBitmap(LayeredOrRedirectedParent, v34) )
      {
        if ( _bittest((const signed __int32 *)(v36 + 24), 0x1Du) )
        {
          v37 = *(_DWORD *)(v36 + 232);
          if ( (v37 & 2) != 0 && (v37 & 1) == 0 && !_bittest((const signed __int32 *)(v35 + 380), 0x1Du) )
            v26 &= ~0x4000u;
        }
      }
    }
    return (unsigned int)CalcVisRgnWorker(v29, a1, v26);
  }
  if ( (v20 & 0x10) == 0 )
    return 0;
LABEL_14:
  SetRectRgnIndirect(*a1, v21 + 88);
  return v17;
}
