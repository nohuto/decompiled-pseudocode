/*
 * XREFs of Usbh_FDO_WaitPnpAdd @ 0x140051970
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1400283F4 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x14003A39C (GET_FDO_PNPSTATE.c)
 *     UsbhModuleDispatch @ 0x14005135C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1400517D4 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpAdd(__int64 a1, __int64 a2)
{
  _LIST_ENTRY *v2; // r8
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_LIST_ENTRY **)(a1 + 8);
  v6 = a1;
  v3 = a1;
  LOBYTE(a1) = 1;
  v4 = UsbhModuleDispatch(a1, a2, v2, 1, 0LL, v6);
  GET_FDO_PNPSTATE(v3);
  if ( v4 < 0 )
  {
    Usbh_PnpRemove(v3, 6LL);
  }
  else
  {
    UsbhSetFdoPnpState(*(_QWORD *)(v3 + 8), 2, 1);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(v3 + 8), v3);
  }
  return (unsigned int)v4;
}
