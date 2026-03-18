/*
 * XREFs of ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888
 * Callers:
 *     xxxCreateCaret @ 0x14005DFA8 (xxxCreateCaret.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005E470 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14005F74C (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005F7A8 (-zzzShowCursor@@YAH_N@Z.c)
 *     EditionEndDeferWinEventNotify @ 0x14005F870 (EditionEndDeferWinEventNotify.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740 (-xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     NtUserSetImeOwnerWindow @ 0x14024DCA0 (NtUserSetImeOwnerWindow.c)
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B5EDC (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x14005F9D0 (xxxFlushDeferredWindowEvents.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void zzzEndDeferWinEventNotify(void)
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  tagDomLock *v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+48h] [rbp-20h]

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v16 = 1;
  v18 = 0;
  v3 = &v16;
  v17 = W32GetUserSessionState(v2, v1) + 42360;
  v19 = 0LL;
  v5 = 0;
  v20 = 0;
  do
  {
    v6 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v6 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v6);
      else
        tagDomLock::LockShared(v6);
    }
    ++v5;
    v3 += 16;
  }
  while ( !v5 );
  v20 = 1;
  UserSessionState = W32GetUserSessionState(v6, v4);
  if ( (*(_DWORD *)(UserSessionState + 70600))-- == 1 )
  {
    v11 = W32GetUserSessionState(v9, v8);
    if ( *(_QWORD *)(v11 + 70608) != v11 + 70608 )
    {
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v13, v12);
      if ( CurrentThreadNonPaged )
      {
        if ( *CurrentThreadNonPaged )
          xxxFlushDeferredWindowEvents();
      }
    }
  }
  if ( v20 && DomainLockRef )
  {
    if ( v16 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
