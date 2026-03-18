/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20
 * Callers:
 *     ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400D7F5C (-xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z.c)
 *     PostPlaySoundMessage @ 0x1400D8190 (PostPlaySoundMessage.c)
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     PlaySoundPostMessage @ 0x1403D3E00 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  unsigned int v2; // edi

  v2 = 0;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    W32GetCurrentWin32kSessionId();
    v2 = PlaySoundPostMessage(*this);
  }
  ExReleasePushLockSharedEx(this + 1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
