/*
 * XREFs of UsbhIoctlValidateParameters @ 0x140023120
 * Callers:
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D6AC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhIoctlValidateParameters(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  _DWORD *v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD v22[8]; // [rsp+58h] [rbp-80h] BYREF
  int v23; // [rsp+78h] [rbp-60h]

  v22[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      48,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v10 = FdoExt(a1);
  v11 = *(unsigned int *)(a4 + 16);
  v12 = *(_DWORD *)(a4 + 8);
  v22[1] = a2;
  v22[2] = v12;
  v22[3] = v11;
  v22[4] = a5;
  v22[5] = a6;
  v22[6] = v10[610];
  v22[7] = v10[640];
  v23 = 0;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 829845353;
        *(_QWORD *)(v14 + 24) = v22;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a3;
      }
    }
  }
  v15 = 0;
  if ( v10[610] != 3 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 846622569;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = 0LL;
          *(_QWORD *)(v21 + 24) = v11;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        49,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
    v15 = -1073741823;
    v23 = 2418;
    goto LABEL_43;
  }
  if ( (unsigned int)v11 < a5 )
  {
    Log(a1, 32, 1768912435, 0LL, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        50,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
    v23 = 2427;
    goto LABEL_42;
  }
  if ( v12 < a6 )
  {
    Log(a1, 32, 1768912436, 0LL, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        51,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
    v15 = -1073741789;
    v23 = 2436;
    goto LABEL_43;
  }
  if ( a5 >= 4 )
  {
    v16 = *(_DWORD **)(a3 + 24);
    v22[0] = *v16;
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 896954217;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v16;
          *(_QWORD *)(v18 + 24) = v11;
        }
      }
    }
    if ( !*v16 || *v16 > (unsigned int)*((unsigned __int8 *)FdoExt(a1) + 2938) )
    {
      Log(a1, 32, 1768912437, (__int64)v16, v11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          2,
          52,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
      v23 = 2456;
LABEL_42:
      v15 = -1073741811;
LABEL_43:
      if ( !Usb_Disconnected(v15) )
        UsbhException(a1, 0, 90, v22, 0x24u, v15, 0, usbfile_ioctl_c, 2470, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      53,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v15);
  return v15;
}
