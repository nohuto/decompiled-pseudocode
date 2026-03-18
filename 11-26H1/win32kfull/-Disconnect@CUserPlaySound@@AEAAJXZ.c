/*
 * XREFs of ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x140235200
 * Callers:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x1402351D8 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     PlaySoundDisconnect @ 0x1403E3A48 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Disconnect(RPC_BINDING_HANDLE *this)
{
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    Binding = *this;
    *this = 0LL;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
  if ( Binding )
    return PlaySoundDisconnect(&Binding);
  else
    return 3221225506LL;
}
