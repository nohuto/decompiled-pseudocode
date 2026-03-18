/*
 * XREFs of ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x14014A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInertiaManager *__fastcall CInertiaManager::GetInstance(int a1, int a2, int a3)
{
  return (struct CInertiaManager *)(W32GetUserSessionState(a1, a2, a3) + 16912);
}
