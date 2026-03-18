/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14006BF78
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14006C574 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14006D470 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x14015A010 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // r14d
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  WCHAR v5; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v7; // rsi
  wchar_t *v9; // rax
  HANDLE v10; // rax
  NTSTATUS v11; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+48h] [rbp-28h] BYREF

  v1 = a1;
  v11 = 0;
  v2 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  v3 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  if ( v1 )
  {
    if ( !v3[154] )
      goto LABEL_3;
    return 1LL;
  }
  if ( v3[152] )
    return 1LL;
LABEL_3:
  v4 = PALLOCMEM(304LL, 1986291527LL);
  if ( v4 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
    RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
    *(_OWORD *)v4 = *(_OWORD *)ValueName;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)&ValueName[8];
    v5 = ValueName[12];
    *(_DWORD *)(v4 + 160) |= 0x2000000u;
    *(_WORD *)(v4 + 216) = -1;
    *(_WORD *)(v4 + 24) = v5;
    RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v4,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &v11);
    v7 = (WCHAR *)RegistryHandleFromDeviceMap;
    if ( v11 < 0 )
      goto LABEL_8;
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation((PVOID)v4, RegistryHandleFromDeviceMap, 0);
      ZwClose(v7);
      v2 = 1;
    }
    if ( v11 < 0 )
      goto LABEL_8;
    if ( !*(_QWORD *)(v4 + 208) )
    {
      v9 = (wchar_t *)PALLOCNOZ(32LL, 1936876615LL);
      *(_QWORD *)(v4 + 208) = v9;
      if ( v9 )
      {
        v10 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, v9, 0x10u, &v11);
        if ( v10 )
          ZwClose(v10);
      }
      else
      {
        v11 = -1073741670;
      }
    }
    if ( v11 < 0 )
    {
LABEL_8:
      DrvCleanupOneGraphicsDevice((PVOID)v4);
      return 0LL;
    }
    swprintf_s((wchar_t *)(v4 + 64), 0x20uLL, L"WinDisc");
    *(_QWORD *)(v4 + 136) = 0LL;
    if ( v3[137] )
      *(_QWORD *)(v3[138] + 128LL) = v4;
    else
      v3[137] = v4;
    v3[138] = v4;
    if ( v1 )
      v3[154] = v4;
    else
      v3[152] = v4;
    if ( (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
      DrvAddAdapterLuid(*(struct _LUID *)(v4 + 240));
  }
  return v2;
}
