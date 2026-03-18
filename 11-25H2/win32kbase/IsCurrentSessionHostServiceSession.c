/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x1401014D8
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     UserIsCurrentSessionHostServiceSession @ 0x1401C1BF0 (UserIsCurrentSessionHostServiceSession.c)
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1401C254C (-InitializeWin32PoolTracking@@YAHXZ.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x140241168 (-InitializeInputGlobals@@YAJXZ.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     IsHostServiceSession @ 0x1401014F4 (IsHostServiceSession.c)
 */

__int64 IsCurrentSessionHostServiceSession()
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return IsHostServiceSession(CurrentWin32kSessionId);
}
