/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x140151A54
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1401518AC (ApplyPathModalityToCdsRegistryStore.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140151D0C (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r13d
  unsigned int v7; // edi
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 *v17; // r15
  int v18; // esi
  unsigned int v19; // r15d
  char *v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rax
  const unsigned __int16 *v24; // rax
  unsigned int v25; // edx
  unsigned __int16 *v26; // rsi
  int v27; // [rsp+28h] [rbp-48h]
  int v28; // [rsp+28h] [rbp-48h]
  int v29; // [rsp+30h] [rbp-40h]
  unsigned int v30; // [rsp+30h] [rbp-40h]
  _BYTE v31[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-30h]
  __int64 v33; // [rsp+48h] [rbp-28h]
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF
  int v35; // [rsp+60h] [rbp-10h]

  v29 = a4;
  v4 = a3;
  v7 = -1073741823;
  v8 = 2;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection((__int64)a1, (__int64)a2, a3, a4) )
  {
    *((_DWORD *)a1 + 63) = v4 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v21 = (char *)*((_QWORD *)a1 + 33);
      v22 = a2->dmDriverExtra + a2->dmSize;
      if ( v21 )
      {
        GreDeleteFastMutex(v21, v9, v10, v11);
        *((_QWORD *)a1 + 33) = 0LL;
      }
      v23 = PALLOCNOZ(v22, 0x73726447u);
      *((_QWORD *)a1 + 33) = v23;
      if ( !v23 )
        return 3221225495LL;
      *(_OWORD *)v23 = *(_OWORD *)a2->dmDeviceName;
      *(_OWORD *)(v23 + 16) = *(_OWORD *)&a2->dmDeviceName[8];
      *(_OWORD *)(v23 + 32) = *(_OWORD *)&a2->dmDeviceName[16];
      *(_OWORD *)(v23 + 48) = *(_OWORD *)&a2->dmDeviceName[24];
      *(_OWORD *)(v23 + 64) = *(_OWORD *)&a2->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v23 + 80) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      *(_OWORD *)(v23 + 96) = *(_OWORD *)&a2->dmYResolution;
      *(_OWORD *)(v23 + 112) = *(_OWORD *)&a2->dmFormName[5];
      *(_OWORD *)(v23 + 128) = *(_OWORD *)&a2->dmFormName[13];
      *(_OWORD *)(v23 + 144) = *(_OWORD *)&a2->dmFormName[21];
      *(_OWORD *)(v23 + 160) = *(_OWORD *)&a2->dmFormName[29];
      *(_OWORD *)(v23 + 176) = *(_OWORD *)&a2->dmPelsHeight;
      *(_OWORD *)(v23 + 192) = *(_OWORD *)&a2->dmICMIntent;
      *(_QWORD *)(v23 + 208) = *(_QWORD *)&a2->dmReserved2;
      *(_DWORD *)(v23 + 216) = a2->dmPanningHeight;
      memmove((void *)(*((_QWORD *)a1 + 33) + 220LL), &a2[1], a2->dmDriverExtra);
    }
    return 0LL;
  }
  while ( 1 )
  {
    RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                              (unsigned __int16 *)a1,
                                                              v8,
                                                              0LL,
                                                              0LL,
                                                              0,
                                                              0LL);
    v17 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
    if ( RegistryHandleFromDeviceMap )
    {
      v18 = DrvWriteDisplayDriverParameters(a1, v13, RegistryHandleFromDeviceMap, a2, v4, v27);
      ZwClose(v17);
      v19 = 0;
      v7 = v18;
      if ( v18 >= 0 )
        break;
    }
    if ( v8 != 2 )
      goto LABEL_5;
    v8 = 0;
  }
  if ( v29 )
  {
    v32 = 0;
    v33 = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v31, a1);
    if ( v32 )
    {
      v30 = v18;
      do
      {
        v35 = 0;
        v34 = 0LL;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v31, v19, (struct tagVIDEO_MONITOR_DEVICE *)&v34);
        if ( (v34 & 3) == 3 )
        {
          v24 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                            (unsigned __int16 *)a1,
                                            v8,
                                            (unsigned int *)&v34 + 1,
                                            0LL,
                                            0,
                                            0LL);
          v26 = (unsigned __int16 *)v24;
          if ( v24 )
          {
            DrvWriteDisplayDriverParameters(a1, v25, v24, a2, v4, v28);
            ZwClose(v26);
          }
        }
        ++v19;
      }
      while ( v19 < v32 );
      v7 = v30;
    }
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v31);
  }
LABEL_5:
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v14, v13, v15, v16) )
    return 0;
  return v7;
}
