/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2, __int64 a3, __int64 a4)
{
  struct _devicemodeW *v5; // r15
  unsigned int v7; // r12d
  unsigned int v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagGRAPHICS_DEVICE *v15; // r15
  __int64 *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  int DeviceInfoInternal; // edi
  __int64 v21; // rcx
  int v22; // eax
  __int64 DxgkWin32kInterface; // rax
  unsigned int v24; // eax
  unsigned int v25; // ebx
  int v26; // [rsp+20h] [rbp-918h]
  __int128 v27; // [rsp+28h] [rbp-910h] BYREF
  int v28; // [rsp+38h] [rbp-900h]
  _BYTE v29[8]; // [rsp+40h] [rbp-8F8h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-8F0h]
  __int64 v31; // [rsp+50h] [rbp-8E8h]
  struct _devicemodeW *v32; // [rsp+60h] [rbp-8D8h]
  _OWORD v33[5]; // [rsp+70h] [rbp-8C8h] BYREF
  _BYTE v34[944]; // [rsp+C0h] [rbp-878h] BYREF
  _OWORD v35[14]; // [rsp+470h] [rbp-4C8h] BYREF
  __int64 v36; // [rsp+550h] [rbp-3E8h] BYREF
  __int64 v37; // [rsp+558h] [rbp-3E0h]
  __int128 v38; // [rsp+560h] [rbp-3D8h]
  __int128 v39; // [rsp+570h] [rbp-3C8h]
  __m128i v40; // [rsp+580h] [rbp-3B8h]
  __int128 v41; // [rsp+590h] [rbp-3A8h]
  __int64 v42; // [rsp+8E4h] [rbp-54h]

  v5 = a1;
  v32 = a1;
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v7 = 0x7FFF;
  v8 = 0x7FFF;
  v26 = 0x7FFF;
  v9 = 0x7FFF;
  v10 = PALLOCMEM(65755LL, 1986356295LL, a3, a4);
  v11 = 0;
  if ( !v10 )
    return 3221225495LL;
  v30 = 0;
  v31 = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v29, a2);
  if ( !v30 )
    goto LABEL_22;
  v15 = a2;
  do
  {
    v27 = 0LL;
    v28 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v29, v11, (struct tagVIDEO_MONITOR_DEVICE *)&v27);
    if ( (v27 & 3) != 3 )
      goto LABEL_20;
    memset(v34, 0, sizeof(v34));
    v16 = &v36;
    v17 = v34;
    v18 = 7LL;
    do
    {
      *(_OWORD *)v16 = *v17;
      *((_OWORD *)v16 + 1) = v17[1];
      *((_OWORD *)v16 + 2) = v17[2];
      *((_OWORD *)v16 + 3) = v17[3];
      *((_OWORD *)v16 + 4) = v17[4];
      *((_OWORD *)v16 + 5) = v17[5];
      *((_OWORD *)v16 + 6) = v17[6];
      v16 += 16;
      *((_OWORD *)v16 - 1) = v17[7];
      v17 += 8;
      --v18;
    }
    while ( v18 );
    *(_OWORD *)v16 = *v17;
    *((_OWORD *)v16 + 1) = v17[1];
    *((_OWORD *)v16 + 2) = v17[2];
    v36 = 0x3B0FFFFFFF9LL;
    v19 = *((_QWORD *)&v27 + 1);
    v37 = *((_QWORD *)&v27 + 1);
    LODWORD(v38) = DWORD1(v27);
    DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v36, 0);
    memset(v35, 0, 0xD8uLL);
    *(_QWORD *)&v35[1] = *((_QWORD *)v15 + 30);
    DWORD2(v35[1]) = *((_DWORD *)v15 + 62);
    HIDWORD(v35[1]) = DWORD1(v27);
    if ( DeviceInfoInternal < 0 )
    {
      memset(v33, 0, sizeof(v33));
      v38 = v33[1];
      v39 = v33[2];
      v40 = (__m128i)v33[3];
      v41 = v33[4];
      v36 = 0x5000000003LL;
      v37 = v19;
      LODWORD(v38) = DWORD1(v27);
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v36, 0) < 0 )
        goto LABEL_19;
      v35[2] = v39;
      v35[3] = v40;
      v35[4] = v41;
      *(_QWORD *)((char *)&v35[12] + 4) = v40.m128i_i64[0];
      *((_QWORD *)&v35[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v40, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v40, 8)));
      HIDWORD(v35[7]) = DWORD1(v38);
      v22 = DWORD2(v38);
    }
    else
    {
      v21 = (unsigned int)v42;
      *((_QWORD *)&v35[3] + 1) = v42;
      v22 = HIDWORD(v42);
      *(_QWORD *)&v35[3] = 0xFFFFFFFEFFFFFFFEuLL;
      *(_QWORD *)((char *)&v35[12] + 4) = 0xFFFFFFFEFFFFFFFEuLL;
      HIDWORD(v35[4]) = 1;
      *((_QWORD *)&v35[5] + 1) = v42;
      HIDWORD(v35[7]) = v42;
    }
    LODWORD(v35[8]) = v22;
    DWORD1(v35[13]) = 1;
    *(_QWORD *)&v35[0] = 0x700001030387LL;
    LODWORD(v35[7]) = 1;
    DWORD2(v35[6]) = 1;
    LODWORD(v35[6]) = 21;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v21, 1LL);
    if ( (*(int (__fastcall **)(_OWORD *, __int64))(DxgkWin32kInterface + 688))(v35, v10) >= 0 )
    {
      v24 = *(_DWORD *)(v10 + 184);
      if ( v24 >= v9 )
        v24 = v9;
      v9 = v24;
      if ( *(_DWORD *)(v10 + 172) <= v7 )
      {
        v7 = *(_DWORD *)(v10 + 172);
        v8 = *(_DWORD *)(v10 + 176);
        v26 = v8;
        goto LABEL_20;
      }
    }
LABEL_19:
    v8 = v26;
LABEL_20:
    ++v11;
  }
  while ( v11 < v30 );
  v5 = v32;
LABEL_22:
  GreDeleteFastMutex((char *)v10, v12, v13, v14);
  v25 = -1073741583;
  if ( v7 != 0x7FFF )
    v25 = 0;
  RtlWriteULongToUser(&v5->dmDisplayFrequency, v9);
  RtlWriteULongToUser(&v5->dmPelsWidth, v7);
  RtlWriteULongToUser(&v5->dmPelsHeight, v8);
  RtlWriteULongToUser(&v5->dmFields, 5767168LL);
  EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v29);
  return v25;
}
