/*
 * XREFs of ?Lock@CWindowList@@UEAAXXZ @ 0x18008B080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::Lock(CWindowList *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
}
