/*
 * XREFs of UsbhSetFdoPnpState @ 0x1400512E4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x140051480 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140051500 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051740 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051AB0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1400319A4 (UsbhEtwLogHubInformation.c)
 */

int __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r9
  __int64 (__fastcall *v7)(); // rax

  v5 = FdoExt(a1);
  v6 = ((unsigned __int8)v5[6] + 1) & 7;
  v5[6] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)v5 + v6 + 28) = a3;
  *(_DWORD *)((char *)v5 + v6 + 32) = v5[340];
  *(_DWORD *)((char *)v5 + v6 + 36) = a2;
  LODWORD(v7) = v5[340];
  if ( a2 != (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      LODWORD(v7) = UsbhEtwLogHubInformation((__int64)v5);
    }
    else if ( a2 == 5 )
    {
      UsbhEtwLogHubInformation((__int64)v5);
      goto LABEL_14;
    }
  }
  switch ( a2 )
  {
    case 1:
      v7 = Usbh_FDO_WaitPnpAdd;
      goto LABEL_20;
    case 2:
      v7 = Usbh_FDO_WaitPnpStart;
      goto LABEL_20;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      break;
    case 4:
      v7 = Usbh_FDO_WaitPnpRemove;
      goto LABEL_20;
    case 5:
LABEL_14:
      v7 = Usbh_FDO_WaitPnpStop;
      goto LABEL_20;
    case 6:
      v7 = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStop_CB;
      goto LABEL_20;
    case 7:
      v7 = Usbh_FDO_WaitPnpRestart;
LABEL_20:
      *((_QWORD *)v5 + 171) = v7;
      break;
  }
  v5[340] = a2;
  return (int)v7;
}
