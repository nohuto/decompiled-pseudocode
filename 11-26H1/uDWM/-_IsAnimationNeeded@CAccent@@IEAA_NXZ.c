/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180042A30
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18008DA1C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

char __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  char v2; // cl
  int v4; // r8d

  if ( !CDesktopManager::IsWindowAnimationEnabled() )
    return 0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  if ( !*((_DWORD *)this + 53) )
    return 0;
  if ( CAccent::_AnyTransparentBackground(this) )
    return 0;
  v2 = 1;
  if ( v4 == 2 || (unsigned int)(v4 - 3) <= 2 )
    return 0;
  return v2;
}
