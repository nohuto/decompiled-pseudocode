/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008205C
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // r15
  unsigned int v4; // r13d
  int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int i; // r15d
  __int64 *v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  int DeviceInfoInternal; // edi
  __int64 v14; // rcx
  int v15; // eax
  __int64 DxgkWin32kInterface; // rax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v20; // [rsp+20h] [rbp-918h]
  __int128 v21; // [rsp+28h] [rbp-910h] BYREF
  int v22; // [rsp+38h] [rbp-900h]
  _BYTE v23[8]; // [rsp+40h] [rbp-8F8h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-8F0h]
  PVOID P; // [rsp+50h] [rbp-8E8h]
  struct tagGRAPHICS_DEVICE *v26; // [rsp+58h] [rbp-8E0h]
  struct _devicemodeW *v27; // [rsp+60h] [rbp-8D8h]
  _OWORD v28[5]; // [rsp+70h] [rbp-8C8h] BYREF
  _BYTE v29[944]; // [rsp+C0h] [rbp-878h] BYREF
  _OWORD v30[14]; // [rsp+470h] [rbp-4C8h] BYREF
  __int64 v31; // [rsp+550h] [rbp-3E8h] BYREF
  __int64 v32; // [rsp+558h] [rbp-3E0h]
  __int128 v33; // [rsp+560h] [rbp-3D8h]
  __int128 v34; // [rsp+570h] [rbp-3C8h]
  __m128i v35; // [rsp+580h] [rbp-3B8h]
  __int128 v36; // [rsp+590h] [rbp-3A8h]
  __int64 v37; // [rsp+8E4h] [rbp-54h]
  int v38; // [rsp+8FCh] [rbp-3Ch]

  v26 = a2;
  v3 = a1;
  v27 = a1;
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v5 = 0x7FFF;
  v20 = 0x7FFF;
  v6 = 0x7FFF;
  v7 = PALLOCMEM(65755LL, 1986356295LL);
  if ( !v7 )
    return 3221225495LL;
  v24 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v23, a2);
  if ( !v24 )
    goto LABEL_17;
  for ( i = 0; i < v24; ++i )
  {
    v21 = 0LL;
    v22 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v23, i, (struct tagVIDEO_MONITOR_DEVICE *)&v21);
    if ( (v21 & 3) != 3 )
      continue;
    v38 = 0;
    memset(v29, 0, 0x3ACuLL);
    v9 = &v31;
    v10 = v29;
    v11 = 7LL;
    do
    {
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
      *((_OWORD *)v9 + 2) = *((_OWORD *)v10 + 2);
      *((_OWORD *)v9 + 3) = *((_OWORD *)v10 + 3);
      *((_OWORD *)v9 + 4) = *((_OWORD *)v10 + 4);
      *((_OWORD *)v9 + 5) = *((_OWORD *)v10 + 5);
      *((_OWORD *)v9 + 6) = *((_OWORD *)v10 + 6);
      v9 += 16;
      *((_OWORD *)v9 - 1) = *((_OWORD *)v10 + 7);
      v10 += 128;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)v9 = *(_OWORD *)v10;
    *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
    v9[4] = *((_QWORD *)v10 + 4);
    *((_DWORD *)v9 + 10) = *((_DWORD *)v10 + 10);
    v31 = 0x3ACFFFFFFF9LL;
    v12 = *((_QWORD *)&v21 + 1);
    v32 = *((_QWORD *)&v21 + 1);
    LODWORD(v33) = DWORD1(v21);
    DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v31, 0);
    memset(v30, 0, 0xD8uLL);
    *(_QWORD *)&v30[1] = *((_QWORD *)v26 + 30);
    DWORD2(v30[1]) = *((_DWORD *)v26 + 62);
    HIDWORD(v30[1]) = DWORD1(v21);
    if ( DeviceInfoInternal < 0 )
    {
      memset(v28, 0, sizeof(v28));
      v33 = v28[1];
      v34 = v28[2];
      v35 = (__m128i)v28[3];
      v36 = v28[4];
      v31 = 0x5000000003LL;
      v32 = v12;
      LODWORD(v33) = DWORD1(v21);
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v31, 0) < 0 )
        goto LABEL_24;
      v30[2] = v34;
      v30[3] = v35;
      v30[4] = v36;
      *(_QWORD *)((char *)&v30[12] + 4) = v35.m128i_i64[0];
      *((_QWORD *)&v30[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v35, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v35, 8)));
      HIDWORD(v30[7]) = DWORD1(v33);
      v15 = DWORD2(v33);
    }
    else
    {
      v14 = (unsigned int)v37;
      *((_QWORD *)&v30[3] + 1) = v37;
      v15 = HIDWORD(v37);
      *(_QWORD *)&v30[3] = 0xFFFFFFFEFFFFFFFEuLL;
      *(_QWORD *)((char *)&v30[12] + 4) = 0xFFFFFFFEFFFFFFFEuLL;
      HIDWORD(v30[4]) = 1;
      *((_QWORD *)&v30[5] + 1) = v37;
      HIDWORD(v30[7]) = v37;
    }
    LODWORD(v30[8]) = v15;
    DWORD1(v30[13]) = 1;
    *(_QWORD *)&v30[0] = 0x700001030387LL;
    LODWORD(v30[7]) = 1;
    DWORD2(v30[6]) = 1;
    LODWORD(v30[6]) = 21;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14);
    if ( (*(int (__fastcall **)(_OWORD *, __int64))(DxgkWin32kInterface + 688))(v30, v7) >= 0 )
    {
      v17 = *(_DWORD *)(v7 + 184);
      if ( v17 >= v6 )
        v17 = v6;
      v6 = v17;
      if ( *(_DWORD *)(v7 + 172) <= v4 )
      {
        v4 = *(_DWORD *)(v7 + 172);
        v5 = *(_DWORD *)(v7 + 176);
        v20 = v5;
        continue;
      }
    }
LABEL_24:
    v5 = v20;
  }
  v3 = v27;
LABEL_17:
  GreDeleteFastMutex((char *)v7);
  v18 = -1073741583;
  if ( v4 != 0x7FFF )
    v18 = 0;
  v3->dmDisplayFrequency = v6;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v5;
  v3->dmFields = 5767168;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v18;
}
