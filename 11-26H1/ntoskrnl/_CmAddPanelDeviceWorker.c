/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x140B2B2B0
 * Callers:
 *     _CmAddPanelDevice @ 0x140899B94 (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmDeleteDevicePanel @ 0x140899CD8 (_CmDeleteDevicePanel.c)
 *     _PnpCtxRegSetValue @ 0x14090AB14 (_PnpCtxRegSetValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14090D610 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegDeleteKey @ 0x140A2D8BC (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AEABA0 (_PnpCtxRegCreateKey.c)
 *     _CmCreateDevicePanel @ 0x140B2B37C (_CmCreateDevicePanel.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int DevicePanel; // ebx
  __int64 v10; // rcx
  HANDLE v11; // [rsp+48h] [rbp-18h]
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  char v13; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0;
  Handle = 0LL;
  v11 = 0LL;
  v13 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, a3, (unsigned int)&Handle, (__int64)&v13);
  if ( DevicePanel >= 0 )
  {
    DevicePanel = PnpCtxRegCreateKey(a1, (int)Handle, (int)L"Devices", 0, 7, 0LL);
    if ( DevicePanel >= 0 )
    {
      if ( *a4 )
      {
LABEL_3:
        if ( DevicePanel >= 0 )
          goto LABEL_4;
        goto LABEL_15;
      }
      DevicePanel = PnpCtxRegSetValue(v10, v11, a3, 0LL, 0LL, 0);
      if ( DevicePanel >= 0 )
      {
        PnpObjectRaisePropertyChangeEvent(a1, a3, 1, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelId);
        goto LABEL_4;
      }
    }
  }
  if ( DevicePanel != -1073741444 )
    goto LABEL_3;
  DevicePanel = -1073741772;
LABEL_15:
  if ( v13 == 1 )
    CmDeleteDevicePanel(a1, a2);
LABEL_4:
  if ( v11 )
    ZwClose(v11);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DevicePanel;
}
