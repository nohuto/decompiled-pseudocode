/*
 * XREFs of UsbhModuleDispatch @ 0x140050E7C
 * Callers:
 *     DriverEntry @ 0x14004EBB0 (DriverEntry.c)
 *     UsbhAddDevice @ 0x14004F060 (UsbhAddDevice.c)
 *     UsbhDriverUnload @ 0x14004FCB0 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140051480 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051740 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051AB0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhCallModule @ 0x14004F9D0 (UsbhCallModule.c)
 */

__int64 __fastcall UsbhModuleDispatch(
        __int64 a1,
        __int64 a2,
        struct _DRIVER_OBJECT *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  char v10; // r14
  unsigned int v11; // ebx
  int v12; // eax

  v6 = 0;
  v7 = 0;
  v10 = a1;
  v11 = (_BYTE)a1 == 0 ? 9 : 0;
  do
  {
    v12 = UsbhCallModule(a1, (__int64)&HubModule + 56 * v11, (__int64)a3, a3, a4, a5, a6);
    if ( a4 == 1 )
    {
      if ( v12 < 0 )
        v6 = v12;
    }
    else if ( v12 < 0 )
    {
      break;
    }
    ++v7;
    a1 = v11++ - 1;
    if ( !v10 )
      v11 = a1;
  }
  while ( v7 < 0xA );
  if ( a4 != 1 )
    return (unsigned int)v12;
  return v6;
}
