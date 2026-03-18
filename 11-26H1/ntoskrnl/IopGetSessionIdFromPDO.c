/*
 * XREFs of IopGetSessionIdFromPDO @ 0x140A97EE8
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x140446F40 (IopCheckSessionDeviceAccess.c)
 *     IoRegisterContainerNotification @ 0x140797260 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A1D3C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140A97B50 (IopGetSessionIdFromSymbolicName.c)
 *     PnpInitializeSessionId @ 0x140B18FB0 (PnpInitializeSessionId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140A98450 (IoGetDevicePropertyData.c)
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
