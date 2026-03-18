/*
 * XREFs of UsbhSshEnableDisable @ 0x14005E94C
 * Callers:
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1400559F0 (UsbhSetWmiDataBlock.c)
 *     UsbhHubSSH_PnpStart @ 0x14005E490 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x14005E670 (UsbhPowerCallback.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhSshDisabled @ 0x14005E850 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x14005EA84 (UsbhSshEnabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2)
{
  struct _KEVENT *v4; // rsi
  _DWORD *v5; // rax
  int v6; // ecx
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax

  v4 = (struct _KEVENT *)FdoExt(a1);
  KeWaitForSingleObject(&v4[140], Executive, 0, 0, 0LL);
  switch ( LODWORD(v4[136].Header.WaitListHead.Blink) )
  {
    case 1:
    case 2:
    case 3:
      if ( a2 == 2 )
        goto LABEL_15;
      if ( a2 == 3 )
      {
LABEL_10:
        v7 = FdoExt(a1);
        UsbhSshDisabled(a1, (__int64)(v7 + 478));
LABEL_16:
        LODWORD(v4[136].Header.WaitListHead.Blink) = a2;
        return KeSetEvent(v4 + 140, 0, 0);
      }
      v6 = a2 - 4;
      if ( a2 == 4 )
      {
LABEL_15:
        v9 = FdoExt(a1);
        UsbhSshEnabled(a1, v9 + 478);
        goto LABEL_16;
      }
LABEL_9:
      if ( (unsigned int)(v6 - 1) > 1 )
        return KeSetEvent(v4 + 140, 0, 0);
      goto LABEL_10;
    case 4:
    case 5:
      v6 = a2 - 4;
      if ( a2 == 4 )
      {
        v8 = FdoExt(a1);
        UsbhSshEnabled(a1, v8 + 478);
        LODWORD(v4[136].Header.WaitListHead.Blink) = 4;
        return KeSetEvent(v4 + 140, 0, 0);
      }
      goto LABEL_9;
    case 6:
      v5 = FdoExt(a1);
      UsbhSshDisabled(a1, (__int64)(v5 + 478));
      break;
  }
  return KeSetEvent(v4 + 140, 0, 0);
}
