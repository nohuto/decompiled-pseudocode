/*
 * XREFs of DeleteFadeSprite @ 0x1401F4E70
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall DeleteFadeSprite(__int64 a1, __int64 a2)
{
  struct tagWND *v2; // rsi
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  struct tagWND *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = (__int64 *)(UserSessionState + 42984);
  if ( (*(_DWORD *)(UserSessionState + 43032) & 8) != 0 )
  {
    LOBYTE(v4) = 1;
    v7 = (struct tagWND *)HMValidateHandleNoSecure(*v6, v4);
    v2 = v7;
    if ( v7 && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) != 0 )
      UnsetLayeredWindow(v7, 0LL);
  }
  else
  {
    v8 = W32GetUserSessionState(v5, v4);
    if ( (unsigned int)GreIsDynamicModeChangeLocked(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 48LL)) )
    {
      v11 = W32GetUserSessionState(v10, v9);
      GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(*(_QWORD *)(v11 + 56968) + 48LL));
      v12 = (void *)*v6;
      v15 = W32GetUserSessionState(v14, v13);
      GreDeleteSprite(*(Gre::Base **)(*(_QWORD *)(v15 + 56968) + 48LL), 0LL, v12, 1);
      v18 = W32GetUserSessionState(v17, v16);
      GreUnlockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(*(_QWORD *)(v18 + 56968) + 48LL));
    }
    else
    {
      v19 = W32GetUserSessionState(v10, v9);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v19 + 56968) + 48LL));
      v20 = (void *)*v6;
      v23 = W32GetUserSessionState(v22, v21);
      GreDeleteSprite(*(Gre::Base **)(*(_QWORD *)(v23 + 56968) + 48LL), 0LL, v20, 1);
      v26 = W32GetUserSessionState(v25, v24);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v26 + 56968) + 48LL));
    }
  }
  *v6 = 0LL;
  return v2;
}
