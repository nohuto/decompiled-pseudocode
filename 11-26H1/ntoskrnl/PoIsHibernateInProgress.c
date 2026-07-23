/*
 * XREFs of PoIsHibernateInProgress @ 0x140445D50
 * Callers:
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

bool PoIsHibernateInProgress()
{
  return PopHibernateInProgress != 0;
}
