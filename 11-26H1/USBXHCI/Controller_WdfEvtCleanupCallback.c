/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x140044470
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x14003CB7C (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x140040B28 (Controller_DeallocateIrqlTrackingArray.c)
 *     Etw_ControllerDelete @ 0x14004F408 (Etw_ControllerDelete.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_DestroySecureObject @ 0x1400759D8 (Controller_DestroySecureObject.c)
 */

void __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006B290);
  Controller_DestroySecureObject(v1);
  Controller_RemoveControllerFromGlobalControllerList(v1);
  Etw_ControllerDelete(v2, v1);
  Controller_DeallocateIrqlTrackingArray((__int64)v1);
}
