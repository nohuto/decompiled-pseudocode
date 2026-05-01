/*
 * XREFs of ?AreModificationsSuspendedInternal@CVirtualDesktopManager@@UEAA_NXZ @ 0x1802C76E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopManager::AreModificationsSuspendedInternal(CVirtualDesktopManager *this)
{
  return *((_DWORD *)this + 49) != 0;
}
