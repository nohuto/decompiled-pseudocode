/*
 * XREFs of UsbhInitialize @ 0x14003D130
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x14002E1F0 (UsbhSyncSendInternalIoctl.c)
 *     UsbhConfigureUsbHub @ 0x14003AC70 (UsbhConfigureUsbHub.c)
 *     UsbhGetExtendedHubInformation @ 0x14003C4C4 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x14003C6BC (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x14003CA10 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubPowerStatus @ 0x14003CC58 (UsbhGetHubPowerStatus.c)
 *     UsbhGetTopOfBusStack @ 0x14003D020 (UsbhGetTopOfBusStack.c)
 *     UsbhInitializeTtHub @ 0x14003D660 (UsbhInitializeTtHub.c)
 *     UsbhIsHighSpeedCapable @ 0x14003D760 (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x14003D85C (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhCheckHubErrata @ 0x14005AEFC (UsbhCheckHubErrata.c)
 *     UsbhRegisterPowerCallback @ 0x14005EDA4 (UsbhRegisterPowerCallback.c)
 *     UsbhQueryParentHubConfig @ 0x14005FFA4 (UsbhQueryParentHubConfig.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhInitialize(PDEVICE_OBJECT DeviceObject, _UNICODE_STRING *a2)
{
  unsigned int v3; // r15d
  _DWORD *v5; // rsi
  unsigned int TopOfBusStack; // ebp
  char *Src; // rax
  int v8; // r9d
  _DWORD *v9; // rax
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // r9d
  int v14; // r10d
  _DWORD *v15; // rax
  void (__fastcall *v16)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *); // r14
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // rax
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 8, 1749634633, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetRootHubPdo";
    v8 = 5505;
    goto LABEL_6;
  }
  v9 = FdoExt((__int64)DeviceObject);
  v20 = 1;
  if ( (v9[640] & 1) != 0 )
  {
    TopOfBusStack = 0;
    Log((__int64)DeviceObject, 8, 1214475858, 0LL, 0LL);
  }
  else
  {
    TopOfBusStack = UsbhSyncSendInternalIoctl((__int64)DeviceObject, 0x22001Bu, (unsigned __int64)&v20, 0LL);
  }
  Log((__int64)DeviceObject, 8, 1214475892, (int)TopOfBusStack, v20);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v8 = 5516;
    goto LABEL_6;
  }
  if ( v20 > 6 )
  {
    UsbhLogStartFailure(
      (int)DeviceObject,
      -1073741823,
      7,
      5523,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "hubCount > 6");
    return 3221225473LL;
  }
  TopOfBusStack = UsbhGetHubDeviceInformation((__int64)DeviceObject, a2);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubDeviceInformation";
    v8 = 5533;
    goto LABEL_6;
  }
  if ( v5[633] == 1 )
  {
    if ( v5[634] == 2 )
      v5[640] |= 0x40u;
    if ( (unsigned __int8)UsbhIsHighSpeedCapable(DeviceObject) )
      v5[640] |= 0x8000u;
  }
  UsbhCheckHubErrata(v5);
  TopOfBusStack = UsbhConfigureUsbHub((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) != 0xC0000000 )
  {
    do
    {
      TopOfBusStack = UsbhGetHubClassDescriptor((__int64)DeviceObject, v5 + 734);
      if ( Usb_Disconnected(TopOfBusStack) )
        return TopOfBusStack;
      v12 = v11 >> 30;
      if ( v11 >> 30 == 3 && v3 > 3 )
      {
        Src = "GetHubClassDescriptor";
        v8 = 5585;
        goto LABEL_6;
      }
      if ( v3 )
        UsbhWait((__int64)DeviceObject, 0xAu);
      ++v3;
    }
    while ( v12 == 3 );
    Log(
      (__int64)DeviceObject,
      8,
      1749634633,
      *(unsigned __int16 *)((char *)v5 + 2939),
      *((unsigned __int16 *)v5 + 1276));
    if ( *((_WORD *)v5 + 1271) >= 0x200u )
    {
      if ( (v13 & 1) != 0 )
        *((_BYTE *)v5 + 3007) = 1;
      if ( ((unsigned __int8)v13 & (unsigned __int8)v14) != 0 )
        *((_BYTE *)v5 + 3009) = 1;
      if ( (v13 & 0x80u) != 0 )
        *((_BYTE *)v5 + 3008) = 1;
      if ( (v5[640] & 0x40) != 0 )
      {
        if ( ((v13 >> 5) & 3) != 0 )
        {
          switch ( (v13 >> 5) & 3 )
          {
            case 1u:
              v5[753] = 16;
              goto LABEL_46;
            case 2u:
              v5[753] = 24;
              goto LABEL_46;
            case 3u:
              v5[753] = 32;
              goto LABEL_46;
          }
        }
        v5[753] = v14;
      }
    }
LABEL_46:
    UsbhGetHubPowerStatus((__int64)DeviceObject);
    if ( (v5[640] & 0x40) != 0 )
    {
      TopOfBusStack = UsbhInitializeTtHub(DeviceObject, a2);
      if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
      {
        Src = "InitializeTtHub";
        v8 = 5653;
        goto LABEL_6;
      }
    }
    TopOfBusStack = UsbhGetExtendedHubInformation((__int64)DeviceObject);
    if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
    {
      Src = "Get Port attributes";
      v8 = 5664;
      goto LABEL_6;
    }
    v15 = FdoExt((__int64)DeviceObject);
    if ( *((_WORD *)v15 + 2400) == 3 )
    {
      v16 = (void (__fastcall *)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *))*((_QWORD *)v15 + 580);
      if ( v16 )
        v16(
          *((_QWORD *)v15 + 570),
          v15 + 1306,
          v15 + 1307,
          (char *)v15 + 5230,
          v15 + 1308,
          (char *)v15 + 5233,
          (char *)v15 + 5234,
          (char *)v15 + 5235);
    }
    v17 = v5[640];
    if ( dword_1400705D8 )
      v18 = v17 & 0xFFEFFFFF;
    else
      v18 = v17 | 0x100000;
    v5[640] = v18;
    FdoExt((__int64)DeviceObject)[1053] = 1;
    FdoExt((__int64)DeviceObject)[1052] = 1;
    v5[1043] = 201;
    KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
    *((_BYTE *)v5 + 4184) = 0;
    *((_QWORD *)v5 + 525) = v5 + 1048;
    *((_QWORD *)v5 + 524) = v5 + 1048;
    KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)v5 + 205, SynchronizationEvent, 1u);
    v5[1221] = 1;
    UsbhQueryParentHubConfig(DeviceObject);
    v19 = FdoExt((__int64)DeviceObject);
    UsbhSyncSendInternalIoctl((__int64)DeviceObject, 0x22043Fu, (unsigned __int64)(v19 + 1298), 0LL);
    v5[1314] = dword_140070730;
    UsbhRegisterPowerCallback(DeviceObject);
    v5[640] |= 0x40000000u;
    return TopOfBusStack;
  }
  Src = "ConfigureUsbHub";
  v8 = 5566;
LABEL_6:
  UsbhLogStartFailure(
    (int)DeviceObject,
    TopOfBusStack,
    3,
    v8,
    (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    Src);
  return TopOfBusStack;
}
