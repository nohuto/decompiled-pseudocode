/*
 * XREFs of ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x14022BC88
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x14010B830 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x14020C2AC (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     UserPostWinLogonMessage @ 0x140277280 (UserPostWinLogonMessage.c)
 */

__int64 __fastcall UmfdPostWinLogonMessage(struct Gre::Font::GLOBALS *a1, unsigned int a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = (struct Gre::Font::GLOBALS *)((char *)a1 + 19400);
  v7 = -1073741595;
  GreAcquirePushLockShared((struct Gre::Font::GLOBALS *)((char *)a1 + 19400));
  if ( !*((_BYTE *)a1 + 19420) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v9, v8) + 63544) )
      goto LABEL_5;
    *((_BYTE *)a1 + 19420) = 1;
  }
  v7 = UserPostWinLogonMessage(a2, a3);
LABEL_5:
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v7;
}
