/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180063550
 * Callers:
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180074890 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x180089480 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(struct _RM_SERVICE_GLOBALS **a1, int a2, DWORD a3)
{
  _BYTE v7[144]; // [rsp+20h] [rbp-B8h] BYREF

  memset_0(v7, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  RmpAcquireGlobalLock();
  LODWORD(a1) = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(a1, a2, a3, 1);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)a1;
}
