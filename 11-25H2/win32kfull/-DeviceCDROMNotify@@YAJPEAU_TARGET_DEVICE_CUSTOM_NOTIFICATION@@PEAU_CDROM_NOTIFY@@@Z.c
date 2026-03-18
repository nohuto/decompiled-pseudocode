/*
 * XREFs of ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402169D0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x1402169F8 (W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 */

__int64 __fastcall DeviceCDROMNotify(PVOID NotificationStructure, unsigned int *Context)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = NotificationStructure;
  v2 = Context[9];
  v4[1] = Context;
  return W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(v2, v4);
}
