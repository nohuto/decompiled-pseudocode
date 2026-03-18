/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x140082630
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B44 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1400190E4 (HUBPDO_HandlePLDRRecovery.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x140030520 (HUBMISC_GetDeviceInterfacePath.c)
 *     DereferenceDeviceResetInterface @ 0x140045C14 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x14008758C (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x14008B738 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x14008C8E0 (HUBREG_UpdateSqmFlags.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x14008D288 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D3D0 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 *     WMI_RegisterDevice @ 0x1400906D0 (WMI_RegisterDevice.c)
 *     TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x140091BE4 (TUNNEL_AcquireUsb4HostPowerReferenceForPort.c)
 *     InitializeResetActionWorkItem @ 0x140093FDC (InitializeResetActionWorkItem.c)
 *     QueryDeviceResetInterface @ 0x1400940C4 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  volatile signed __int32 *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // r13d
  int DeviceInterfacePath; // eax
  unsigned __int16 v13; // r9
  int DeviceResetInterface; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v19; // rbx
  int (__fastcall *v20)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *); // rax
  void *v21; // rax
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 v24; // r9
  unsigned __int16 *v25; // r8
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // ebx
  int v30; // eax
  const char *v31; // r9
  const char *v32; // r8
  const char *v33; // rcx
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  int v37; // r11d
  __int64 v38; // rax
  __int64 v39; // r9
  char v40; // r10
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v46; // r8
  __int64 v47; // r11
  unsigned int v48; // edx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // [rsp+28h] [rbp-180h]
  __int64 v53; // [rsp+30h] [rbp-178h]
  __int64 v54; // [rsp+38h] [rbp-170h]
  __int64 v55; // [rsp+40h] [rbp-168h]
  int v56; // [rsp+48h] [rbp-160h]
  char v57[4]; // [rsp+128h] [rbp-80h] BYREF
  int v58; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+130h] [rbp-78h] BYREF
  int v60; // [rsp+134h] [rbp-74h]
  int v61; // [rsp+138h] [rbp-70h]
  int v62; // [rsp+13Ch] [rbp-6Ch] BYREF
  __int64 v63; // [rsp+140h] [rbp-68h] BYREF
  int v64; // [rsp+148h] [rbp-60h]
  int v65; // [rsp+14Ch] [rbp-5Ch]
  int v66; // [rsp+150h] [rbp-58h]
  int v67; // [rsp+154h] [rbp-54h]
  __int64 v68; // [rsp+158h] [rbp-50h] BYREF
  const char *v69; // [rsp+160h] [rbp-48h]
  const char *v70; // [rsp+168h] [rbp-40h]
  const char *v71; // [rsp+170h] [rbp-38h]
  PVOID P; // [rsp+178h] [rbp-30h]
  __int64 v73; // [rsp+180h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+188h] [rbp-20h] BYREF
  const wchar_t *v75; // [rsp+198h] [rbp-10h]
  __int64 v76; // [rsp+1A0h] [rbp-8h]
  void *Src[2]; // [rsp+1A8h] [rbp+0h] BYREF
  __int64 v78; // [rsp+1B8h] [rbp+10h]
  wchar_t *v79; // [rsp+1C0h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1C8h] [rbp+20h] BYREF
  __int64 v81; // [rsp+1D8h] [rbp+30h]
  __int64 v82; // [rsp+1E0h] [rbp+38h]
  __int128 v83; // [rsp+1E8h] [rbp+40h]
  int *v84; // [rsp+1F8h] [rbp+50h]
  __int64 v85; // [rsp+200h] [rbp+58h]
  int *v86; // [rsp+208h] [rbp+60h]
  __int64 v87; // [rsp+210h] [rbp+68h]
  int *v88; // [rsp+218h] [rbp+70h]
  __int64 v89; // [rsp+220h] [rbp+78h]
  _QWORD *v90; // [rsp+228h] [rbp+80h]
  __int64 v91; // [rsp+230h] [rbp+88h]
  int *v92; // [rsp+238h] [rbp+90h]
  __int64 v93; // [rsp+240h] [rbp+98h]
  int v94; // [rsp+248h] [rbp+A0h] BYREF
  char v95; // [rsp+24Ch] [rbp+A4h] BYREF
  _QWORD v96[2]; // [rsp+260h] [rbp+B8h] BYREF

  v1 = a1;
  v96[0] = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D1D0);
  v76 = v2;
  v3 = *(volatile signed __int32 **)(v2 + 24);
  v63 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, *((_QWORD *)v3 + 3));
  _InterlockedOr(v3 + 411, 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  v5 = *((_QWORD *)v3 + 1);
  if ( (*(_DWORD *)(v5 + 204) & 0x800) != 0 )
  {
    v6 = *((_DWORD *)v3 + 683);
    if ( v6 == 2 || v6 == 4 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)v3 + 44LL);
      if ( (v7 & 0x80u) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_(*(_QWORD *)(v5 + 1432), v7, 5, 79, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
        }
        _InterlockedOr(v3 + 413, 0x80u);
      }
      TUNNEL_AcquireUsb4HostPowerReferenceForPort(*((_QWORD *)v3 + 1));
    }
  }
  if ( (v3[618] & 4) != 0 && (v3[619] & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 622, 8LL);
    *((_DWORD *)v3 + 619) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (v3[618] & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)&g_MsOs20Flags, 4, 4, (__int64)(v3 + 618));
  HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)L"*,", 4, 4, (__int64)(v3 + 8));
  if ( (v3[410] & 2) == 0 )
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v13 = 83;
      goto LABEL_28;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            v1,
                            (_QWORD *)v3 + 268,
                            0LL,
                            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v13 = 84;
      goto LABEL_28;
    }
    if ( (v3[413] & 0x4000000) != 0 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
      if ( DeviceResetInterface >= 0 )
      {
        v16 = InitializeResetActionWorkItem(v2 + 544, v15, v1);
        v11 = v16;
        if ( v16 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
              4u,
              5u,
              0x56u,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v16);
          DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
            4u,
            5u,
            0x55u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            DeviceResetInterface);
        v11 = 0;
      }
    }
LABEL_47:
    if ( *((_QWORD *)v3 + 268) )
    {
      DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
      v11 = DeviceInterfacePath;
      if ( DeviceInterfacePath < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v13 = 87;
LABEL_28:
        LODWORD(v53) = DeviceInterfacePath;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
          2u,
          5u,
          v13,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v53);
        goto LABEL_100;
      }
    }
    if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (v3[411] & 2) != 0 )
      *(_BYTE *)v2 = 0;
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_14006D2C0)
                    + 4) & 0x1000) == 0 )
    {
LABEL_91:
      if ( (v3[410] & 6) == 0 )
        WMI_RegisterDevice(v1);
      if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_14006D2C0)
                    + 92) )
      {
        v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v1);
        v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                *(_QWORD *)(v2 + 16));
        v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                WdfDriverGlobals,
                v42);
        v44 = SleepstudyHelper_RegisterPdoWithParentPdo(*(_QWORD *)(v63 + 96), v43, v41, v2 + 392);
        if ( v44 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v53) = v44;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
              2u,
              2u,
              0x58u,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v53);
          }
          *(_QWORD *)(v2 + 392) = 0LL;
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 1644LL) & 2) == 0 )
      {
        HUBPDO_HandlePLDRRecovery(v1, v2, (__int64)v3);
        goto LABEL_100;
      }
      HUBPDO_GetPortPath(v2, v96);
      v47 = *((_QWORD *)v3 + 1);
      if ( *(_BYTE *)(v47 + 1476) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v54) = *((unsigned __int16 *)v3 + 1003);
          LODWORD(v53) = *((unsigned __int16 *)v3 + 1002);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v47 + 1432),
            4u,
            5u,
            0x59u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v53,
            v54);
        }
        if ( (unsigned int)dword_14006D2D0 > 4
          && (qword_14006D2E0 & 0x400000000001LL) != 0
          && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
        {
          *((_QWORD *)&v83 + 1) = 8LL;
          *(_QWORD *)&v83 = &v63;
          *(_WORD *)v57 = *((_WORD *)v3 + 1002);
          v63 = 16779264LL;
          v84 = (int *)v57;
          LOWORD(v58) = *((_WORD *)v3 + 1003);
          v86 = &v58;
          LOWORD(v59) = 6;
          v88 = &v59;
          v90 = v96;
          v85 = 2LL;
          v87 = 2LL;
          v89 = 2LL;
          v91 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068772, 0LL, 0LL, 7u, &v80);
        }
        *(_BYTE *)(*((_QWORD *)v3 + 1) + 1476LL) = 0;
      }
      else
      {
        if ( !*(_WORD *)(v47 + 1474) )
          goto LABEL_100;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = *(unsigned __int16 *)(v47 + 1474);
          LODWORD(v54) = *((unsigned __int16 *)v3 + 1003);
          LODWORD(v53) = *((unsigned __int16 *)v3 + 1002);
          WPP_RECORDER_SF_DDD(
            *(_QWORD *)(v47 + 1432),
            4u,
            v46,
            0x5Au,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v53,
            v54,
            v55);
        }
        v48 = dword_14006D2D0;
        if ( (unsigned int)dword_14006D2D0 > 4 )
        {
          v49 = qword_14006D2E0;
          v10 = qword_14006D2E8;
          if ( (qword_14006D2E0 & 0x400000000001LL) != 0 && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
          {
            v50 = *((_QWORD *)v3 + 1);
            *(_QWORD *)&v83 = &v63;
            LOWORD(v59) = *((_WORD *)v3 + 1002);
            *((_QWORD *)&v83 + 1) = 8LL;
            v84 = &v59;
            LOWORD(v58) = *((_WORD *)v3 + 1003);
            v86 = &v58;
            *(_WORD *)v57 = 6;
            v88 = (int *)v57;
            v90 = v96;
            v63 = 16779264LL;
            v85 = 2LL;
            v87 = 2LL;
            v89 = 2LL;
            v91 = 12LL;
            v62 = *(unsigned __int16 *)(v50 + 1474);
            v92 = &v62;
            v93 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_14006D2D0,
              byte_140068C36,
              (const GUID *)(v50 + 1480),
              0LL,
              8u,
              &v80);
            v10 = qword_14006D2E8;
            v49 = qword_14006D2E0;
            v48 = dword_14006D2D0;
          }
          if ( v48 > 4 && (v49 & 0x400000000001LL) != 0 && (v10 & 0x400000000001LL) == v10 )
          {
            v51 = *((_QWORD *)v3 + 1);
            *(_QWORD *)&v83 = &v63;
            LOWORD(v59) = *((_WORD *)v3 + 1002);
            v63 = 16779264LL;
            v84 = &v59;
            LOWORD(v58) = *((_WORD *)v3 + 1003);
            v86 = &v58;
            *(_WORD *)v57 = 6;
            v88 = (int *)v57;
            v90 = v96;
            *((_QWORD *)&v83 + 1) = 8LL;
            v85 = 2LL;
            v87 = 2LL;
            v89 = 2LL;
            v91 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_14006D2D0,
              byte_140068843,
              (const GUID *)(v51 + 1480),
              0LL,
              7u,
              &v80);
          }
        }
        *(_OWORD *)(*((_QWORD *)v3 + 1) + 1480LL) = 0LL;
      }
      *(_WORD *)(*((_QWORD *)v3 + 1) + 1474LL) = 0;
      goto LABEL_100;
    }
    HIDWORD(v80.Ptr) = 0;
    DestinationString = 0LL;
    *(_OWORD *)Src = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v17 = *((_QWORD *)v3 + 268);
    if ( v17 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v17,
        &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v79 = Pool2;
    v19 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, DestinationString.Length + 2LL);
      memmove(v19, DestinationString.Buffer, DestinationString.Length);
    }
    v68 = 0LL;
    v84 = 0LL;
    v81 = 0LL;
    v82 = 0x100000001LL;
    v80 = 0LL;
    LODWORD(v80.Ptr) = 56;
    v83 = (unsigned __int64)v1;
    v20 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 2464);
    P = 0LL;
    if ( v20(WdfDriverGlobals, 0LL, &v80, &v68) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           v1,
           v68) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v68,
        Src);
      v21 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      P = v21;
      if ( v21 )
        memmove(v21, Src[1], LOWORD(Src[0]));
    }
    v84 = 0LL;
    v81 = 0LL;
    v82 = 0x100000001LL;
    v80 = 0LL;
    LODWORD(v80.Ptr) = 56;
    v83 = (unsigned __int64)v1;
    v73 = 0LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           v1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           &v80,
           &v73) < 0 )
      v75 = 0LL;
    else
      v75 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v73,
                               0LL);
    v22 = *(_QWORD *)(v2 + 16);
    v23 = &v95;
    v24 = 5LL;
    v25 = (unsigned __int16 *)(v22 + 330);
    v94 = *(unsigned __int16 *)(v22 + 328);
    do
    {
      v26 = *v25++;
      *(_DWORD *)v23 = v26;
      v23 += 4;
      --v24;
    }
    while ( v24 );
    v27 = *(unsigned __int8 *)(v22 + 240);
    if ( (unsigned __int8)v27 < 6u )
      *(&v94 + v27) = *(unsigned __int16 *)(v2 + 48);
    if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 8) == 0 )
    {
LABEL_83:
      if ( v19 )
        ExFreePoolWithTag(v19, 0x64334855u);
      if ( P )
        ExFreePoolWithTag(P, 0x64334855u);
      if ( v68 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v73 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      goto LABEL_91;
    }
    v28 = *((_QWORD *)v3 + 1);
    v29 = *(_DWORD *)(v28 + 204) & 2;
    if ( v29 )
      v57[0] = *(_BYTE *)(v28 + 1341);
    else
      v57[0] = 0;
    v30 = *(_DWORD *)(v22 + 168);
    v59 = v30;
    if ( v30 == 2 )
    {
      v31 = (const char *)(v22 + 186);
      v32 = (const char *)(v22 + 181);
      v33 = (const char *)(v22 + 176);
    }
    else
    {
      v69 = 0LL;
      v33 = 0LL;
      v71 = 0LL;
      v31 = 0LL;
      v70 = 0LL;
      v32 = 0LL;
      if ( v30 == 1 )
      {
        v36 = *(_DWORD *)(v22 + 180);
        v37 = *(_DWORD *)(v22 + 176);
        v58 = *(unsigned __int16 *)(v22 + 184);
        v60 = v36;
        v61 = v37;
        v59 = 1;
        v34 = *(_DWORD *)(v22 + 192);
        v35 = *(_DWORD *)(v22 + 188);
        v64 = *(_DWORD *)(v22 + 196);
        v65 = v34;
        v66 = v35;
        goto LABEL_79;
      }
    }
    v64 = 0;
    v61 = 0x7FFFFFFF;
    v60 = 0x7FFFFFFF;
    v58 = 0;
    v71 = v33;
    v70 = v32;
    v69 = v31;
    v59 = v30;
    v65 = 0;
    v66 = 0;
LABEL_79:
    v62 = (*(_DWORD *)(v2 + 32) & 1) == 0;
    v38 = *((_QWORD *)v3 + 253);
    v78 = v38;
    if ( v38 )
      v67 = *(unsigned __int16 *)(v38 + 2);
    else
      v67 = 0;
    v39 = *(_QWORD *)(v2 + 24);
    v40 = v29 != 0;
    v19 = v79;
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      *(unsigned __int8 *)(v39 + 2721),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
      (const GUID *)(v22 + 780),
      *(_QWORD *)(*(_QWORD *)v3 + 248LL),
      *((_QWORD *)v3 + 3),
      *(_WORD *)(*((_QWORD *)v3 + 1) + 200LL),
      v75,
      v79,
      v56,
      (__int64)(v3 + 499),
      v67,
      v78,
      (const wchar_t *)P,
      v62,
      *(_BYTE *)(v22 + 240) + 1,
      (__int64)&v94,
      v66,
      v65,
      v64,
      v61,
      v60,
      v58,
      *(_DWORD *)(v76 + 384),
      *((_DWORD *)v3 + 558),
      v59,
      v71,
      v70,
      v69,
      v40,
      v57[0],
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 1416LL),
      *(_BYTE *)(v39 + 2720),
      *(_BYTE *)(v39 + 2721),
      *(_DWORD *)(v39 + 2724),
      *(_DWORD *)(v39 + 2728));
    v2 = v76;
    v1 = v96[0];
    goto LABEL_83;
  }
  v8 = *((_QWORD *)v3 + 1);
  if ( *(_BYTE *)(*(_QWORD *)v3 + 240LL) < *(_BYTE *)(v8 + 202) )
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_HUB,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v13 = 81;
      goto LABEL_28;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            v1,
                            (_QWORD *)v3 + 268,
                            0LL,
                            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v13 = 82;
      goto LABEL_28;
    }
    goto LABEL_47;
  }
  *(_DWORD *)(v8 + 1424) = 7;
  if ( (unsigned int)Feature_UH3WET__private_IsEnabledDeviceUsageNoInline() )
    WMI_FireNotification(*((_QWORD *)v3 + 1), 10LL);
  else
    WMI_FireNotificationOld(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
      v9,
      3,
      80,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
  }
  v11 = -1073741823;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP,
      0LL,
      *((_QWORD *)v3 + 3));
LABEL_100:
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
  {
    LODWORD(v52) = v11;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *((_QWORD *)v3 + 3),
      v52);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v53) = *((_DWORD *)v3 + 413);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
      2u,
      5u,
      0x5Bu,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v53);
  }
  return v11;
}
