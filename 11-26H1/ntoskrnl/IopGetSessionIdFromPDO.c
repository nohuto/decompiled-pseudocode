/*
 * XREFs of IopGetSessionIdFromPDO @ 0x140A9C068
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x14043FA30 (IopCheckSessionDeviceAccess.c)
 *     IoRegisterContainerNotification @ 0x140799D90 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A487C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140A9BCD0 (IopGetSessionIdFromSymbolicName.c)
 *     PnpInitializeSessionId @ 0x140B1B3F8 (PnpInitializeSessionId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall IopGetSessionIdFromPDO(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rax
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  ULONG v5; // [rsp+58h] [rbp+10h] BYREF
  ULONG v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = -1;
  v6 = 0;
  v4 = -1;
  v5 = 0;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0
        && IoGetDevicePropertyData(a1, &DEVPKEY_Device_SessionId, 0, 0, 4u, &v4, &v6, &v5) >= 0 )
      {
        return v4;
      }
    }
  }
  return v1;
}
