/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x14012292C
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x140122784 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x140120630 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140122BF0 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  unsigned int v7; // edi
  int v8; // r12d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 *v12; // r15
  int v13; // esi
  unsigned int v14; // r15d
  char *v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rax
  const unsigned __int16 *v19; // rax
  unsigned int v20; // edx
  unsigned __int16 *v21; // rsi
  int v22; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+28h] [rbp-48h]
  unsigned int v25; // [rsp+30h] [rbp-40h]
  _BYTE v26[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-30h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF
  int v30; // [rsp+60h] [rbp-10h]

  v7 = -1073741823;
  v8 = 2;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection((__int64)a1, (__int64)a2) )
  {
    *((_DWORD *)a1 + 63) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v16 = (char *)*((_QWORD *)a1 + 33);
      v17 = a2->dmDriverExtra + a2->dmSize;
      if ( v16 )
      {
        GreDeleteFastMutex(v16);
        *((_QWORD *)a1 + 33) = 0LL;
      }
      v18 = PALLOCNOZ(v17, 1936876615LL);
      *((_QWORD *)a1 + 33) = v18;
      if ( !v18 )
        return 3221225495LL;
      *(_OWORD *)v18 = *(_OWORD *)a2->dmDeviceName;
      *(_OWORD *)(v18 + 16) = *(_OWORD *)&a2->dmDeviceName[8];
      *(_OWORD *)(v18 + 32) = *(_OWORD *)&a2->dmDeviceName[16];
      *(_OWORD *)(v18 + 48) = *(_OWORD *)&a2->dmDeviceName[24];
      *(_OWORD *)(v18 + 64) = *(_OWORD *)&a2->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v18 + 80) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      *(_OWORD *)(v18 + 96) = *(_OWORD *)&a2->dmYResolution;
      *(_OWORD *)(v18 + 112) = *(_OWORD *)&a2->dmFormName[5];
      *(_OWORD *)(v18 + 128) = *(_OWORD *)&a2->dmFormName[13];
      *(_OWORD *)(v18 + 144) = *(_OWORD *)&a2->dmFormName[21];
      *(_OWORD *)(v18 + 160) = *(_OWORD *)&a2->dmFormName[29];
      *(_OWORD *)(v18 + 176) = *(_OWORD *)&a2->dmPelsHeight;
      *(_OWORD *)(v18 + 192) = *(_OWORD *)&a2->dmICMIntent;
      *(_QWORD *)(v18 + 208) = *(_QWORD *)&a2->dmReserved2;
      *(_DWORD *)(v18 + 216) = a2->dmPanningHeight;
      memmove((void *)(*((_QWORD *)a1 + 33) + 220LL), &a2[1], a2->dmDriverExtra);
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v8,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL);
      v12 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v13 = DrvWriteDisplayDriverParameters(a1, v10, RegistryHandleFromDeviceMap, a2, a3, v22);
        ZwClose(v12);
        v14 = 0;
        v7 = v13;
        if ( v13 >= 0 )
          break;
      }
      if ( v8 != 2 )
        goto LABEL_5;
      v8 = 0;
    }
    if ( a4 )
    {
      v27 = 0;
      v28 = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v26, a1);
      if ( v27 )
      {
        v25 = v13;
        do
        {
          v30 = 0;
          v29 = 0LL;
          EnsureMonitorDevices::GetMonitorDevice(
            (EnsureMonitorDevices *)v26,
            v14,
            (struct tagVIDEO_MONITOR_DEVICE *)&v29);
          if ( (v29 & 3) == 3 )
          {
            v19 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v8,
                                              (unsigned int *)&v29 + 1,
                                              0LL,
                                              0,
                                              0LL);
            v21 = (unsigned __int16 *)v19;
            if ( v19 )
            {
              DrvWriteDisplayDriverParameters(a1, v20, v19, a2, a3, v23);
              ZwClose(v21);
            }
          }
          ++v14;
        }
        while ( v14 < v27 );
        v7 = v25;
      }
      EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v26);
    }
LABEL_5:
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v11, v10) )
      return 0;
    return v7;
  }
}
