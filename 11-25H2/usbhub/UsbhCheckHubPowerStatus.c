/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x14004A4CC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhGetHubClassDescriptor @ 0x14003CC44 (UsbhGetHubClassDescriptor.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbp
  void *Pool2; // rsi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // r8d
  __int64 v7; // rcx
  const void *v8; // r9
  const void *v9; // r9
  const void *v10; // r9
  const void *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0;
  v2 = FdoExt(a1);
  Pool2 = (void *)ExAllocatePool2(64LL, 71LL, 1112885333LL);
  if ( !Pool2 )
  {
    LODWORD(v4) = -1073741670;
    goto LABEL_19;
  }
  v5 = UsbhFdoCheckUpstreamConnectionState(a1, &v14);
  v4 = v5;
  if ( v5 >= 0 && (v2[1054] & 0xFFFFFFFD) == 0 )
  {
    v13 = v5;
    v6 = 810571602;
    v7 = a1;
LABEL_6:
    Log(v7, 16, v6, 0LL, v13);
    goto LABEL_19;
  }
  if ( Usb_Disconnected(v5) )
  {
    v13 = v4;
    v7 = a1;
    if ( (v14 & 2) == 0 )
    {
      v6 = 1347900018;
      goto LABEL_6;
    }
    Log(a1, 16, 1347892082, 0LL, v4);
    UsbhException(a1, 0, 112, v8, 0, v4, 0, usbfile_fdopwr_c, 3876, 0);
  }
  else if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1347899937, 0LL, v4);
    UsbhException(a1, 0, (_DWORD)v9 + 110, v9, 0, v4, 0, usbfile_fdopwr_c, 3896, 0);
  }
  else if ( (int)v4 < 0 || (v14 & 1) != 0 )
  {
    LODWORD(v4) = UsbhGetHubClassDescriptor(a1, Pool2);
    Log(a1, 16, 1666209618, 0LL, (int)v4);
    if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
      UsbhException(a1, 0, (_DWORD)v11 + 109, v11, 0, v4, 0, usbfile_fdopwr_c, 3930, 0);
  }
  else
  {
    LODWORD(v4) = -1073741823;
    Log(a1, 16, 1699764050, 0LL, -1073741823LL);
    UsbhException(a1, 0, (_DWORD)v10 + 111, v10, 0, -1073741823, 0, usbfile_fdopwr_c, 3912, 0);
  }
LABEL_19:
  Log(a1, 16, 1348825714, 0LL, (int)v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v4;
}
