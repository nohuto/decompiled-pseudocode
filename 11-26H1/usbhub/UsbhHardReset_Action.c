/*
 * XREFs of UsbhHardReset_Action @ 0x14004C11C
 * Callers:
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncBusDisconnect @ 0x140039D40 (UsbhSyncBusDisconnect.c)
 */

__int64 __fastcall UsbhHardReset_Action(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v14; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 20;
  v15 = 0;
  v4 = FdoExt((__int64)a1);
  Log((__int64)a1, 4, 1215460146, 0LL, (__int64)a1);
  v7 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v8 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v15, v5, v6);
    v9 = v8;
    if ( Usb_Disconnected(v8) )
      break;
    UsbhSyncBusPause((__int64)a1, a2, 6LL, v10);
    UsbhSyncBusDisconnect(a1, a2);
    v4[640] &= ~0x10u;
    LODWORD(v9) = Usbh_SSH_Event((__int64)a1, 4u, a2);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v12 = UsbhFdoSetD0Cold(a1, a2, 1);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    UsbhException((__int64)a1, 0, 71, &v14, 4u, v12, 0, usbfile_reset_c, 1073, 0);
    if ( (_DWORD)v9 != -1073741637 )
    {
      Log((__int64)a1, 4, 1215460147, v9, (__int64)a1);
      ++v4[1238];
      v4[640] |= 0x10u;
      UsbhWait((__int64)a1, v14);
      v14 *= 2;
      if ( v4[1238] < (unsigned int)qword_1400705DC )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)a1, 4, 1382314851, v9, v15);
LABEL_13:
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v9) )
      UsbhException((__int64)a1, 0, 126, 0LL, 0, v9, 0, usbfile_reset_c, 1109, 0);
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)a1, v11, v7);
  return (unsigned int)v9;
}
