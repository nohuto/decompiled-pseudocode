/*
 * XREFs of ??1InteractiveControlManager@@AEAA@XZ @ 0x1402F0FE8
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x140249BB4 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this)
{
  InteractiveControlManager::Deinitialize(this);
}
