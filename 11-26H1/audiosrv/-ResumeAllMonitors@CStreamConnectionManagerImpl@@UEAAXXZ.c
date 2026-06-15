/*
 * XREFs of ?ResumeAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18011FCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::ResumeAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Continue(this[1]);
}
