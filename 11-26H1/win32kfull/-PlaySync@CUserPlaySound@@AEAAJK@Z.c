/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400FC84C
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxPlayAsync@CUserPlaySound@@AEAAJK@Z @ 0x140176AC0 (-xxxPlayAsync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     PostPlaySoundMessage @ 0x14021B590 (PostPlaySoundMessage.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     PlaySoundPostMessage @ 0x1403E3070 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    W32GetCurrentWin32kSessionId(v3);
    v2 = PlaySoundPostMessage(*this);
  }
  ExReleasePushLockSharedEx(this + 1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
