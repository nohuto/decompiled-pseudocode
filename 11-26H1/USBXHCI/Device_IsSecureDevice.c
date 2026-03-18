/*
 * XREFs of Device_IsSecureDevice @ 0x1400448F8
 * Callers:
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x140074FB4 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
