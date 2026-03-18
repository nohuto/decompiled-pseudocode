/*
 * XREFs of IsWindowContentProtected @ 0x14001D640
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserVisrgnFromHwnd @ 0x140033A34 (UserVisrgnFromHwnd.c)
 *     CreateSprite @ 0x14005C580 (CreateSprite.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     ProtectedContentAccessCheck @ 0x140061BD0 (ProtectedContentAccessCheck.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  tagObjLock **v13; // rbx
  char Prop; // bl
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  char v18; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(a1 + 144);
  v5 = *(unsigned __int16 *)(UserSessionState + 41360);
  v17 = 0;
  W32GetUserSessionState(v7, v6);
  v16 = 0LL;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    v10 = W32GetUserSessionState(v9, v8);
    v11 = 0LL;
    if ( v4 != v10 + 42456 )
      v11 = v4;
    *(_QWORD *)&v16 = v11;
    v12 = 0;
    v13 = (tagObjLock **)&v16;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v12;
      ++v13;
    }
    while ( !v12 );
    v17 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v5, 1LL);
  if ( v17 && v18 && (_QWORD)v16 )
    tagObjLock::UnLockExclusive((tagObjLock *)v16);
  return Prop & 1;
}
