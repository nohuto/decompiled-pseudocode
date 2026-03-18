/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14002BC50 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14002CB60 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x14019903C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // r14d
  _QWORD *v3; // rdi
  __int64 v5; // rbx
  WCHAR v6; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v8; // rsi
  __int64 v9; // rax
  void *v10; // rax
  int v11; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+48h] [rbp-28h] BYREF

  v1 = a1;
  v2 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  v11 = 0;
  v3 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  if ( v1 )
  {
    if ( v3[165] )
      return 1LL;
  }
  else if ( v3[163] )
  {
    return 1LL;
  }
  v5 = PALLOCMEM(304LL, 1986291527LL);
  if ( v5 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
    RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
    *(_OWORD *)v5 = *(_OWORD *)ValueName;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)&ValueName[8];
    v6 = ValueName[12];
    *(_DWORD *)(v5 + 160) |= 0x2000000u;
    *(_WORD *)(v5 + 24) = v6;
    *(_WORD *)(v5 + 216) = -1;
    RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(v5, 0LL, 0LL, 0LL, 0, &v11);
    v8 = (WCHAR *)RegistryHandleFromDeviceMap;
    if ( v11 < 0 )
      goto LABEL_9;
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation((PVOID)v5, RegistryHandleFromDeviceMap, 0);
      ZwClose(v8);
      v2 = 1;
    }
    if ( v11 < 0 )
      goto LABEL_9;
    if ( !*(_QWORD *)(v5 + 208) )
    {
      v9 = PALLOCNOZ(0x20u, 0x73726447u);
      *(_QWORD *)(v5 + 208) = v9;
      if ( v9 )
      {
        v10 = (void *)DrvGetRegistryHandleFromDeviceMap(v5, 0LL, 0LL, v9, 16, &v11);
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
LABEL_9:
      DrvCleanupOneGraphicsDevice((PVOID)v5);
      return 0LL;
    }
    swprintf_s((wchar_t *)(v5 + 64), 0x20uLL, L"WinDisc");
    *(_QWORD *)(v5 + 136) = 0LL;
    if ( v3[148] )
      *(_QWORD *)(v3[149] + 128LL) = v5;
    else
      v3[148] = v5;
    v3[149] = v5;
    if ( v1 )
      v3[165] = v5;
    else
      v3[163] = v5;
    if ( (*(_DWORD *)(v5 + 160) & 0x800000) != 0 )
      DrvAddAdapterLuid(*(struct _LUID *)(v5 + 240));
  }
  return v2;
}
