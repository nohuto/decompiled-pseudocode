/*
 * XREFs of ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x14010EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInertiaManager *__fastcall CInertiaManager::GetInstance(__int64 a1, __int64 a2)
{
  return (struct CInertiaManager *)(W32GetUserSessionState(a1, a2) + 16920);
}
