/*
 * XREFs of UsbhSetFdoPnpState @ 0x1400517D4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x140051970 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1400519F0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x140051A90 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051C30 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051FA0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x140028050 (UsbhEtwLogHubInformation.c)
 */

int __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(); // rax

  v5 = FdoExt(a1);
  v7 = ((unsigned __int8)v5[6] + 1) & 7;
  v5[6] = v7;
  v7 *= 32LL;
  *(_DWORD *)((char *)v5 + v7 + 28) = a3;
  *(_DWORD *)((char *)v5 + v7 + 32) = v5[340];
  *(_DWORD *)((char *)v5 + v7 + 36) = a2;
  LODWORD(v8) = v5[340];
  if ( a2 != (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 5 )
    {
      LODWORD(v8) = UsbhEtwLogHubInformation((__int64)v5, (__int64)&USBHUB_ETW_EVENT_HUB_REMOVE, v6);
    }
    else if ( a2 == 5 )
    {
      UsbhEtwLogHubInformation((__int64)v5, (__int64)&USBHUB_ETW_EVENT_HUB_START, v6);
      goto LABEL_14;
    }
  }
  switch ( a2 )
  {
    case 1:
      v8 = Usbh_FDO_WaitPnpAdd;
      goto LABEL_20;
    case 2:
      v8 = Usbh_FDO_WaitPnpStart;
      goto LABEL_20;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      break;
    case 4:
      v8 = Usbh_FDO_WaitPnpRemove;
      goto LABEL_20;
    case 5:
LABEL_14:
      v8 = Usbh_FDO_WaitPnpStop;
      goto LABEL_20;
    case 6:
      v8 = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStop_CB;
      goto LABEL_20;
    case 7:
      v8 = Usbh_FDO_WaitPnpRestart;
LABEL_20:
      *((_QWORD *)v5 + 171) = v8;
      break;
  }
  v5[340] = a2;
  return (int)v8;
}
