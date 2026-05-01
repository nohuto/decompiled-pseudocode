/*
 * XREFs of ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074DBC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074CF4 (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074E44 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ArManagerDestroy(struct _ACTIVITY_RESTARTER *a1)
{
  _BYTE v2[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v2, 0, 0x88uLL);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v2);
  ArManagerRundown(a1);
  HamDisconnectFromServer(*((_QWORD *)a1 + 10));
  HampFreeHeap(a1);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
