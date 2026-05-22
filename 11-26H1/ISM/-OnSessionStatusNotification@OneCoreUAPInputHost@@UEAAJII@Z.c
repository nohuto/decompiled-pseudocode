/*
 * XREFs of ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x1800A1CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z @ 0x18005E968 (-OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z.c)
 */

__int64 __fastcall OneCoreUAPInputHost::OnSessionStatusNotification(
        OneCoreUAPInputHost *this,
        unsigned int a2,
        unsigned int a3)
{
  if ( *((_BYTE *)this + 80) )
    InputProviderManager::OnSessionStatusNotification((OneCoreUAPInputHost *)((char *)this + 56), a2, a3);
  return 0LL;
}
