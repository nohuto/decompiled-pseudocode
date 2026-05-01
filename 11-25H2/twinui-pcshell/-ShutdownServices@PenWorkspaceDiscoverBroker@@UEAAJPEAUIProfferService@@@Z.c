/*
 * XREFs of ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1800A5380
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ @ 0x1800A539C (-Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::ShutdownServices(
        PenWorkspace::Discover::RecentAppsCache **this,
        struct IProfferService *a2)
{
  PenWorkspace::Discover::RecentAppsCache::Shutdown(this[4]);
  return 0LL;
}
