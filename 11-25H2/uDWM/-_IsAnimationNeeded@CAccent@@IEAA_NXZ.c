/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800388F0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18003F5DC (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v4; // r8d

  return CDesktopManager::IsWindowAnimationEnabled()
      && !CDesktopManager::CheckAnyPreference(0x10u)
      && *((_DWORD *)this + 67)
      && !CAccent::_AnyTransparentBackground(this)
      && (unsigned int)(v4 - 2) > 3;
}
