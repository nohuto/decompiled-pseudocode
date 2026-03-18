/*
 * XREFs of ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x14027B730
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14023E8E8 (W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 */

__int64 __fastcall DeviceClassCDROMNotify(PVOID NotificationStructure, PVOID Context)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF
  PVOID v4; // [rsp+28h] [rbp-10h]

  v4 = NotificationStructure;
  v3 = (int)Context;
  return W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e_((unsigned int)Context, (__int64)&v3);
}
