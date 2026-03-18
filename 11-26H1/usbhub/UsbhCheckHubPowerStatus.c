/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x14004A07C
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetHubClassDescriptor @ 0x14003C6BC (UsbhGetHubClassDescriptor.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbp
  void *Pool2; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 HubClassDescriptor; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rcx
  const void *v11; // r9
  const void *v12; // r9
  const void *v13; // r9
  const void *v14; // r9
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0;
  v2 = FdoExt(a1);
  Pool2 = (void *)ExAllocatePool2(64LL, 71LL, 1112885333LL);
  if ( !Pool2 )
  {
    LODWORD(HubClassDescriptor) = -1073741670;
    goto LABEL_20;
  }
  v7 = UsbhFdoCheckUpstreamConnectionState(a1, &v17, v4, v5);
  HubClassDescriptor = v7;
  if ( v7 >= 0 )
  {
    v8 = v2[1054];
    if ( !v8 || v8 == 2 )
    {
      v16 = HubClassDescriptor;
      v9 = 810571602;
      v10 = a1;
LABEL_7:
      Log(v10, 16, v9, 0LL, v16);
      goto LABEL_20;
    }
  }
  if ( Usb_Disconnected(HubClassDescriptor) )
  {
    v16 = HubClassDescriptor;
    v10 = a1;
    if ( (v17 & 2) == 0 )
    {
      v9 = 1347900018;
      goto LABEL_7;
    }
    Log(a1, 16, 1347892082, 0LL, HubClassDescriptor);
    UsbhException(a1, 0, 112, v11, 0, HubClassDescriptor, 0, usbfile_fdopwr_c, 3876, 0);
  }
  else if ( (HubClassDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1347899937, 0LL, HubClassDescriptor);
    UsbhException(a1, 0, (_DWORD)v12 + 110, v12, 0, HubClassDescriptor, 0, usbfile_fdopwr_c, 3896, 0);
  }
  else if ( (int)HubClassDescriptor < 0 || (v17 & 1) != 0 )
  {
    HubClassDescriptor = (int)UsbhGetHubClassDescriptor(a1, Pool2);
    Log(a1, 16, 1666209618, 0LL, HubClassDescriptor);
    if ( (HubClassDescriptor & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubClassDescriptor) )
      UsbhException(a1, 0, (_DWORD)v14 + 109, v14, 0, HubClassDescriptor, 0, usbfile_fdopwr_c, 3930, 0);
  }
  else
  {
    LODWORD(HubClassDescriptor) = -1073741823;
    Log(a1, 16, 1699764050, 0LL, -1073741823LL);
    UsbhException(a1, 0, (_DWORD)v13 + 111, v13, 0, -1073741823, 0, usbfile_fdopwr_c, 3912, 0);
  }
LABEL_20:
  Log(a1, 16, 1348825714, 0LL, (int)HubClassDescriptor);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)HubClassDescriptor;
}
