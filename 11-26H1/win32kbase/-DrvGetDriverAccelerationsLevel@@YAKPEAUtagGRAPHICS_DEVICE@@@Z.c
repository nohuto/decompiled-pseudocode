/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14017BA40
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v5; // eax
  HANDLE RegistryHandleFromDeviceMap; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  ULONG Length; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+17h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v3 = -1;
  v4 = 0;
  Length = 66;
  DestinationString = 0LL;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v5 = *((_DWORD *)a1 + 40);
    if ( (v5 & 0x800000) == 0 )
    {
      if ( (v5 & 0x4000000) == 0
        || (v8 = *(_QWORD *)(W32GetSessionState(v2) + 88),
            !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v10, v9, v11, v12))
        || !*(_QWORD *)(v8 + 3016)
        || (v14 = *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40), PsGetCurrentProcess(v15) == v14)
        || UserIsCurrentProcessDwm(v17, v16, v18) )
      {
        RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
        if ( RegistryHandleFromDeviceMap )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( ZwQueryValueKey(
                 RegistryHandleFromDeviceMap,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 Length,
                 &Length) >= 0 )
            v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
          ZwClose(RegistryHandleFromDeviceMap);
          if ( v3 != -1 )
          {
            if ( v3 > 5 )
              return 5;
            return v3;
          }
        }
      }
    }
  }
  return v4;
}
