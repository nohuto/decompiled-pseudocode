/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140143DF0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
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
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
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
        || (v8 = *(_QWORD *)(W32GetSessionState(v2) + 88), !(unsigned int)UserIsRemoteAndNotDisconnectConnection(
                                                                            v10,
                                                                            v9))
        || !*(_QWORD *)(v8 + 2936)
        || (v12 = *(_QWORD *)(W32GetUserGdiSessionState(v11) + 40), PsGetCurrentProcess(v14, v13) == v12)
        || UserIsCurrentProcessDwm(v16, v15) )
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
