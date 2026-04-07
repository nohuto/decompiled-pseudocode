/*
 * XREFs of ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180074B04
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::EnsureDDisplayManager(CDesktopManager *this)
{
  struct CDDisplayManager **v1; // rcx

  v1 = (struct CDDisplayManager **)((char *)this + 1272);
  if ( *v1 )
    return 0LL;
  *v1 = 0LL;
  return CDDisplayManager::Create(v1);
}
