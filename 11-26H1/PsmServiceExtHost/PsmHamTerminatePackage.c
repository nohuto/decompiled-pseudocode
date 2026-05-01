/*
 * XREFs of PsmHamTerminatePackage @ 0x18003E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18003D1FC (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 */

__int64 __fastcall PsmHamTerminatePackage(void *a1, int a2, __int64 a3, unsigned int a4)
{
  return HamSrvTerminatePackageForBi((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2360), a3, a1, a2, a4);
}
