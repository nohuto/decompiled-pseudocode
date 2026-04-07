/*
 * XREFs of ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180057984
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::EnsureDDisplayManager(CDesktopManager *this)
{
  struct CDDisplayManager **v1; // rcx

  v1 = (struct CDDisplayManager **)((char *)this + 1296);
  if ( *v1 )
    return 0LL;
  *v1 = 0LL;
  return CDDisplayManager::Create(v1);
}
