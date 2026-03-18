/*
 * XREFs of GetRedirectionBitmap @ 0x14001DFF0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1400319F0 (CalcVisRgn.c)
 *     UserVisrgnFromHwnd @ 0x140033A34 (UserVisrgnFromHwnd.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400345C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ChangeWindowBitmapOwner @ 0x140287900 (ChangeWindowBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  tagObjLock **v14; // rdi
  __int64 Prop; // rdi
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  char v18; // [rsp+40h] [rbp-20h]
  char v19; // [rsp+48h] [rbp-18h]

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 41358);
  v18 = 0;
  W32GetUserSessionState(v8, v7);
  v17 = 0LL;
  v19 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v19 = 1;
    v11 = W32GetUserSessionState(v10, v9);
    v12 = 0LL;
    if ( v5 != v11 + 42456 )
      v12 = v5;
    *(_QWORD *)&v17 = v12;
    v13 = 0;
    v14 = (tagObjLock **)&v17;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v13;
      ++v14;
    }
    while ( !v13 );
    v18 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v18 && v19 )
  {
    if ( (_QWORD)v17 )
      tagObjLock::UnLockExclusive((tagObjLock *)v17);
    v18 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  return v3;
}
