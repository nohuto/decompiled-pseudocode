/*
 * XREFs of UsbhConfigureUsbHub @ 0x14003AC70
 * Callers:
 *     UsbhInitialize @ 0x14003D130 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x14003DAF8 (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhSyncSendInternalIoctl @ 0x14002E1F0 (UsbhSyncSendInternalIoctl.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x14003C858 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetMaxPowerPerPort @ 0x14003CDA4 (UsbhGetMaxPowerPerPort.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1400417BC (UsbhCreateConfigurationRequestEx.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1400418B8 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhValidateConfigurationDescriptor @ 0x14005BCEC (UsbhValidateConfigurationDescriptor.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  _DWORD *v2; // rsi
  int HubConfigurationDescriptor; // eax
  __int64 v4; // rbp
  unsigned __int16 *v6; // rbx
  unsigned int v7; // r9d
  int v8; // eax
  int MaxPowerPerPort; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 ConfigurationRequest; // rax
  unsigned __int64 v17; // rbp
  NTSTATUS v18; // r14d
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  P = 0LL;
  v22 = 0;
  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  HubConfigurationDescriptor = UsbhGetHubConfigurationDescriptor(a1, &P);
  v4 = HubConfigurationDescriptor;
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)v4;
  }
  v6 = (unsigned __int16 *)P;
  if ( !P )
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v7;
  }
  if ( !(unsigned __int8)UsbhValidateConfigurationDescriptor(P, *((unsigned __int16 *)P + 1), &v22, 0LL) )
  {
    UsbhException(a1, 0, 34, v6, v6[1], -1073741823, v22, usbfile_hub_c, 4345, 0);
    Log(a1, 8, 1667655731, v4, 0LL);
LABEL_10:
    ExFreePoolWithTag(v6, 0);
    return 3221225473LL;
  }
  if ( (*((_BYTE *)v6 + 7) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        27,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
    v8 = 500;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        28,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
    v8 = 100;
  }
  v2[760] = v8;
  MaxPowerPerPort = UsbhGetMaxPowerPerPort(a1);
  v2[758] = MaxPowerPerPort;
  if ( MaxPowerPerPort == 100 )
    *((_BYTE *)v6 + 8) = -6;
  v10 = v2[640];
  if ( (v10 & 0x40) == 0 )
  {
    v11 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v6, (_DWORD)v6, -1, v19, 9, -1, -1);
    goto LABEL_38;
  }
  v2[640] = v10 & 0xFFFEFFFF;
  v11 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v6, (_DWORD)v6, -1, v19, 9, -1, 2);
  if ( v11 )
  {
    v13 = v2[640] | 0x10000;
    v2[640] = v13;
    if ( (v13 & 0x200000) == 0 )
    {
      v2[640] = v13 | 0x80;
      goto LABEL_27;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        29,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  }
  v2[640] &= ~0x80u;
  v11 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v6, (_DWORD)v6, -1, v20, 9, -1, 1);
  if ( !v11 )
  {
    v15 = v2[640];
    if ( (v15 & 1) != 0 )
      v2[640] = v15 & 0xFFFFFFBF;
    v11 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v6, (_DWORD)v6, -1, v21, 9, -1, 0);
LABEL_38:
    if ( !v11 )
    {
      UsbhException(a1, 0, 18, v6, v6[1], -1073741823, 0, usbfile_hub_c, 4478, 0);
      Log(a1, 8, 1667655732, v6[1], (__int64)v6);
      goto LABEL_10;
    }
  }
LABEL_27:
  v14 = *(unsigned __int8 *)(v11 + 5);
  if ( (_BYTE)v14 != 9 )
  {
    Log(a1, 8, 1667655733, *(unsigned __int8 *)(v11 + 5), (__int64)v6);
    if ( !v6 )
      return 3221225473LL;
    goto LABEL_10;
  }
  ConfigurationRequest = UsbhCreateConfigurationRequestEx(v14, v6, v12, v11);
  v17 = ConfigurationRequest;
  if ( ConfigurationRequest )
  {
    v18 = UsbhSyncSendInternalIoctl(a1, 0x220003u, ConfigurationRequest, 0LL);
    Log(a1, 8, 1667655735, 0LL, v18);
    if ( v18 >= 0 )
    {
      *(_OWORD *)(v2 + 658) = *(_OWORD *)(v17 + 64);
      *((_QWORD *)v2 + 331) = *(_QWORD *)(v17 + 80);
      *((_QWORD *)v2 + 328) = *(_QWORD *)(v17 + 32);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag((PVOID)v17, 0);
    return (unsigned int)v18;
  }
  else
  {
    Log(a1, 8, 1667655734, 0LL, 0LL);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return 3221225626LL;
  }
}
