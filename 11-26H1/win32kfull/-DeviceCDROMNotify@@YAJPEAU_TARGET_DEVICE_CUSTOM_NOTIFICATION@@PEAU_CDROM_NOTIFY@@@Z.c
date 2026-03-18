/*
 * XREFs of ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x14024A120
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14029FA4C (W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 */

__int64 __fastcall DeviceCDROMNotify(PVOID NotificationStructure, unsigned int *Context)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = NotificationStructure;
  v3[1] = Context;
  return W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(Context[9], v3);
}
