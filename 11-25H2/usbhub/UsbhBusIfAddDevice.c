/*
 * XREFs of UsbhBusIfAddDevice @ 0x140056D80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetBusInterface @ 0x1400575D4 (UsbhGetBusInterface.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(PDEVICE_OBJECT DeviceObject)
{
  int BusInterface; // esi
  _DWORD *v3; // rdi
  unsigned __int16 v4; // r15
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // r12
  int v7; // eax
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r13
  __int64 v11; // r15
  char v12; // r15
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  int v15; // eax
  int v16; // r10d
  int v17; // r10d

  BusInterface = 0;
  v3 = FdoExt((__int64)DeviceObject);
  v4 = 328;
  v5 = 9;
  while ( 1 )
  {
    v6 = v5;
    if ( BusInterface < 0 )
      break;
    Log((__int64)DeviceObject, 8, 1198090289, v4, v5);
    BusInterface = UsbhGetBusInterface(DeviceObject, v5);
    Log((__int64)DeviceObject, 8, 1198090290, BusInterface, v5);
    if ( BusInterface >= 0 )
    {
      v3[640] |= 4u;
      break;
    }
    UsbhException((__int64)DeviceObject, 0, 26, 0LL, 0, BusInterface, 0, usbfile_busif_c, 243, 0);
    if ( v5 == 9 )
    {
      v4 = 312;
      v5 = 8;
    }
    v7 = 0;
    if ( v6 != 9 )
      v7 = BusInterface;
    BusInterface = v7;
  }
  v8 = 96;
  v9 = 3;
  while ( 1 )
  {
    v10 = v9;
    if ( BusInterface < 0 )
      break;
    Log((__int64)DeviceObject, 8, 1198093617, v8, v9);
    v11 = (int)UsbhGetBusInterface(DeviceObject, v9);
    Log((__int64)DeviceObject, 8, 1198093618, v11, v9);
    if ( (int)v11 >= 0 )
    {
      v3[640] |= 8u;
      v12 = 0;
      v13 = FdoExt((__int64)DeviceObject);
      if ( *((_QWORD *)v13 + 548) )
      {
        v14 = FdoExt((__int64)DeviceObject);
        v12 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))v13 + 548))(*((_QWORD *)v13 + 529), *((_QWORD *)v14 + 149));
        BusInterface = 0;
      }
      else
      {
        BusInterface = -1073741822;
      }
      v15 = v3[640];
      *((_WORD *)v3 + 2400) = v9;
      v3[640] = v15 & 0xFFFFFFFE | (v12 != 0);
      if ( BusInterface >= 0 )
      {
        Log((__int64)DeviceObject, 8, 1198091569, 40LL, 0LL);
        UsbhGetBusInterface(DeviceObject, 0);
        Log((__int64)DeviceObject, 8, 1198091570, BusInterface, 0LL);
        if ( v16 >= 0 )
          v3[640] |= 0x20000000u;
        Log((__int64)DeviceObject, 8, 1198093105, 48LL, 0LL);
        UsbhGetBusInterface(DeviceObject, 0);
        Log((__int64)DeviceObject, 8, 1198093106, BusInterface, 0LL);
        if ( v17 >= 0 )
          v3[640] |= 0x800000u;
        Log((__int64)DeviceObject, 8, 1197895729, 64LL, 0LL);
        BusInterface = UsbhGetBusInterface(DeviceObject, 0);
        Log((__int64)DeviceObject, 8, 1197895730, BusInterface, 0LL);
        if ( BusInterface >= 0 )
          v3[640] |= 0x80000000;
      }
      break;
    }
    UsbhException((__int64)DeviceObject, 0, 27, 0LL, 0, v11, 0, usbfile_busif_c, 281, 0);
    if ( v9 == 3 )
    {
      v8 = 80;
      v9 = 2;
    }
    BusInterface = 0;
    if ( v10 != 3 )
      BusInterface = v11;
  }
  Log((__int64)DeviceObject, 8, 1651730790, 0LL, BusInterface);
  return (unsigned int)BusInterface;
}
