/*
 * XREFs of ?AdjustSuspensionCount@CVirtualDesktopManager@@UEAAXH@Z @ 0x18052EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::AdjustSuspensionCount(CVirtualDesktopManager *this, unsigned int a2)
{
  _InterlockedAdd((volatile signed __int32 *)this + 41, a2);
}
