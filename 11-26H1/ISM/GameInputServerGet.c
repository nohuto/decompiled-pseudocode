/*
 * XREFs of GameInputServerGet @ 0x18009789C
 * Callers:
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18003E8A0 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180048AF8 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameInputServerGet(struct GameInputServerProxy **a1)
{
  struct GameInputServerProxy *v2; // rbx

  AcquireSRWLockShared(&GameInputServerProxy::s_singletonLock);
  v2 = GameInputServerProxy::s_singleton;
  if ( GameInputServerProxy::s_singleton )
  {
    _InterlockedIncrement((volatile signed __int32 *)GameInputServerProxy::s_singleton + 6);
    v2 = GameInputServerProxy::s_singleton;
  }
  ReleaseSRWLockShared(&GameInputServerProxy::s_singletonLock);
  *a1 = v2;
  return 0LL;
}
