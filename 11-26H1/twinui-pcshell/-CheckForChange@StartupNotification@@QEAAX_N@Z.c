/*
 * XREFs of ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180232938
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F91FC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     _lambda_d30d699a9b0100ad99955a9d234ed237_::operator() @ 0x180584308 (_lambda_d30d699a9b0100ad99955a9d234ed237_--operator().c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x180584964 (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x180584C0C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall StartupNotification::CheckForChange(StartupNotification *this)
{
  (**(void (__fastcall ***)(StartupNotification *))this)(this);
  (*(void (__fastcall **)(StartupNotification *))(*(_QWORD *)this + 8LL))(this);
}
