/*
 * XREFs of PoIsHibernateInProgress @ 0x14044DC20
 * Callers:
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

bool PoIsHibernateInProgress()
{
  return LODWORD(stru_140F11D08.WaitStatus) != 0;
}
