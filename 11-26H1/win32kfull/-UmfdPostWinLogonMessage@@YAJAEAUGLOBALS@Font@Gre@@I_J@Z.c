/*
 * XREFs of ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x140265BBC
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     UserPostWinLogonMessage @ 0x14029D240 (UserPostWinLogonMessage.c)
 */

__int64 __fastcall UmfdPostWinLogonMessage(struct Gre::Font::GLOBALS *a1, unsigned int a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = (struct Gre::Font::GLOBALS *)((char *)a1 + 19392);
  v7 = -1073741595;
  GreAcquirePushLockShared((struct Gre::Font::GLOBALS *)((char *)a1 + 19392));
  if ( !*((_BYTE *)a1 + 19412) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v9, v8) + 63536) )
      goto LABEL_5;
    *((_BYTE *)a1 + 19412) = 1;
  }
  v7 = UserPostWinLogonMessage(a2, a3);
LABEL_5:
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v7;
}
