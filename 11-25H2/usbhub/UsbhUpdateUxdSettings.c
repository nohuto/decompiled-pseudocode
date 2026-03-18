/*
 * XREFs of UsbhUpdateUxdSettings @ 0x14001D3EC
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhBuildDeviceID @ 0x140015194 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1400154A0 (UsbhBuildHardwareID.c)
 *     UsbhFreeID @ 0x14001A68C (UsbhFreeID.c)
 *     UsbhGetGlobalUxdSettings @ 0x14001D9E4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhReleasePdoUxdLock @ 0x14001DC9C (UsbhReleasePdoUxdLock.c)
 *     UsbhAcquirePdoUxdLock @ 0x14003A3C4 (UsbhAcquirePdoUxdLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1400541CC (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_Sqd @ 0x14005A33C (WPP_RECORDER_SF_Sqd.c)
 *     UsbhGetUxdDeviceKey @ 0x14005F2CC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x14005F550 (UsbhGetUxdPortKey.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     memset @ 0x140061900 (memset.c)
 *     UsbhUpdateSqmFlags @ 0x140077BC0 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhUpdateUxdSettings(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // rcx
  int v16; // esi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  int v21; // r8d
  int v22; // r8d
  __int128 v24; // [rsp+40h] [rbp-99h] BYREF
  _OWORD Source1[5]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD Source2[5]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = PdoExt((__int64)a2);
  v9 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  UsbhAcquirePdoUxdLock(v10, a2);
  *a4 = 0;
  v11 = *(_OWORD *)(v8 + 650);
  v8[355] &= ~0x10000u;
  Source2[0] = v11;
  Source2[1] = *(_OWORD *)(v8 + 654);
  Source2[2] = *(_OWORD *)(v8 + 658);
  Source2[3] = *(_OWORD *)(v8 + 662);
  LODWORD(Source2[4]) = v8[666];
  UsbhGetGlobalUxdSettings(v12, v9 + 1294);
  if ( v9[1297] && !dword_14006F66C )
  {
    if ( (int)UsbhGetUxdPortKey(a1, *((unsigned __int16 *)v8 + 714), Source1) < 0 )
    {
      if ( (int)UsbhGetUxdDeviceKey(v14, a2, Source1) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            24,
            (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
            *((_WORD *)v8 + 714));
        goto LABEL_18;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dDD(
          WPP_GLOBAL_Control->DeviceExtension,
          *((unsigned __int16 *)v8 + 704),
          (_DWORD)WPP_GLOBAL_Control,
          23,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          *((_WORD *)v8 + 704),
          *((_WORD *)v8 + 705),
          *((_WORD *)v8 + 706));
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
        *((_WORD *)v8 + 714));
    }
    v8[355] |= 0x10000u;
LABEL_18:
    *(_OWORD *)(v8 + 650) = Source1[0];
    *(_OWORD *)(v8 + 654) = Source1[1];
    *(_OWORD *)(v8 + 658) = Source1[2];
    *(_OWORD *)(v8 + 662) = Source1[3];
    v8[666] = Source1[4];
    if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (v8[355] & 4) == 0 )
      *a4 = 1;
    v16 = 0;
    if ( *a4 && a3 )
    {
      v24 = 0LL;
      v16 = UsbhBuildHardwareID(a1, (__int64)a2, (__int64)&v24);
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              26,
              (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
        }
      }
      else
      {
        UsbhFreeID((__int64)(v8 + 524));
        *((_OWORD *)v8 + 131) = v24;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v18,
            25,
            (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
            *((__int64 *)&v24 + 1),
            SBYTE8(v24),
            SBYTE4(v24));
        v16 = UsbhBuildDeviceID(a1, (__int64)a2, (__int64)&v24, v19);
        if ( v16 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                28,
                (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
          }
        }
        else
        {
          UsbhFreeID((__int64)(v8 + 520));
          *((_OWORD *)v8 + 130) = v24;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_Sqd(
                WPP_GLOBAL_Control->DeviceExtension,
                v20,
                v21,
                27,
                (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
                *((__int64 *)&v24 + 1),
                SBYTE8(v24),
                SBYTE4(v24));
          }
        }
      }
    }
    UsbhReleasePdoUxdLock(v15, a2);
    v22 = v8[701];
    if ( (v22 & 4) == 0 && (v8[355] & 0x10000) != 0 )
    {
      v8[701] = v22 | 4;
      UsbhUpdateSqmFlags(a2);
    }
    return (unsigned int)v16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhReleasePdoUxdLock(v13, a2);
  return 0LL;
}
