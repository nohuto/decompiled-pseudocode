/*
 * XREFs of GET_FDO_PNPSTATE @ 0x14003A93C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140051480 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140051500 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[340];
}
