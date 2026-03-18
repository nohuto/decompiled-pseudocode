/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x14007ABE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140001A84 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     RtlStringCchPrintfA @ 0x140002460 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD28 (HUBSM_AddHsmEvent.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x14000E0B8 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x140010718 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x140086A8C (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  int DeviceCapabilities; // ebx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  struct _DEVICE_OBJECT *v13; // rax
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v26; // rdx
  PWDF_DRIVER_GLOBALS v27; // rcx
  bool v28; // zf
  __int64 v29; // r9
  int (__fastcall *v30)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD); // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  const void *v34; // rax
  __int64 v35; // rax
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall *v44)(__int64); // [rsp+70h] [rbp-98h]
  _QWORD v45[3]; // [rsp+78h] [rbp-90h]
  void *v46; // [rsp+90h] [rbp-78h]
  __int128 v47; // [rsp+98h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h]
  __int128 v49; // [rsp+B8h] [rbp-50h]
  void *v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  _QWORD v56[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v57[18]; // [rsp+178h] [rbp+70h] BYREF
  __int128 v58; // [rsp+208h] [rbp+100h] BYREF
  __int128 v59; // [rsp+218h] [rbp+110h]
  char pszDest[16]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v61; // [rsp+238h] [rbp+130h]
  _OWORD v62[2]; // [rsp+240h] [rbp+138h] BYREF
  __int128 v63; // [rsp+260h] [rbp+158h]
  GUID v64; // [rsp+270h] [rbp+168h] BYREF
  __int64 v65; // [rsp+280h] [rbp+178h]

  v42 = a2;
  v2 = a2;
  DWORD1(v43) = 0;
  v65 = 0LL;
  HIDWORD(v57[0]) = 0;
  v40 = 0LL;
  v64 = 0LL;
  memset(v56, 0, sizeof(v56));
  LOBYTE(v41) = 0;
  v47 = 0LL;
  LODWORD(v50) = 0;
  v48 = 0LL;
  v54 = 0LL;
  v49 = 0LL;
  LODWORD(v55) = 0;
  memset(v62, 0, sizeof(v62));
  v61 = 0LL;
  v63 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v42;
  }
  v46 = off_14006D270;
  *(_QWORD *)&v43 = 56LL;
  *((_QWORD *)&v43 + 1) = HUBFDO_EvtDeviceCleanupCallback;
  v45[0] = 0x100000001LL;
  v44 = HUBFDO_EvtDeviceDestroyCallback;
  v4 = 0LL;
  *(_OWORD *)&v45[1] = 0LL;
  memset(v57, 0, sizeof(v57));
  v57[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v57[0]) = 144;
  v57[3] = HUBFDO_EvtDeviceD0Exit;
  v57[5] = HUBFDO_EvtDevicePrepareHardware;
  v57[6] = HUBFDO_EvtDeviceReleaseHardware;
  v57[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v57[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v57);
  LOBYTE(v5) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v42,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v5,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    v10 = 12;
LABEL_6:
    v11 = *(_QWORD *)(v9 + 64);
    v12 = 2;
    LODWORD(v38) = DeviceCapabilities;
LABEL_21:
    WPP_RECORDER_SF_d(v11, 2u, v12, v10, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v38);
    goto LABEL_22;
  }
  LOBYTE(v41) = 7;
  LOBYTE(v8) = 27;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v42,
                         TUNNEL_EvtIrpPreprocessQueryDevRelations,
                         v8,
                         &v41,
                         1);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    v10 = 13;
    goto LABEL_6;
  }
  *((_QWORD *)&v51 + 1) = HUBFDO_EvtDeviceArmWakeFromS0;
  *(_QWORD *)&v52 = HUBFDO_EvtDeviceDisarmWakeFromS0;
  *(_QWORD *)&v53 = HUBFDO_EvtDeviceArmWakeFromSx;
  *((_QWORD *)&v53 + 1) = HUBFDO_EvtDeviceDisarmWakeFromSx;
  v55 = 0LL;
  LODWORD(v51) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v42,
    &v51);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v42,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v42,
                         &v43,
                         &v40);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    v10 = 14;
    goto LABEL_6;
  }
  v13 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v40);
  v14 = IoRegisterShutdownNotification(v13);
  if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_14006D2C0);
    LODWORD(v38) = v14;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v15 + 64),
      2u,
      2u,
      0xFu,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v38);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v40,
         off_14006D270);
  *(_QWORD *)(v4 + 16) = v40;
  *(_QWORD *)(v4 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v40);
  *(_QWORD *)v4 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v4 + 96) = USBD_AllocateHubNumber();
  *(_QWORD *)&v58 = 56LL;
  HIDWORD(v59) = 16;
  pszDest[0] = 0;
  v61 = 0x200000002LL;
  *(_QWORD *)&v59 = v4;
  BYTE8(v59) = 1;
  *((_QWORD *)&v58 + 1) = 0x20000000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v4 + 96));
  v16 = (__int64 *)(v4 + 2536);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v58, v4 + 2536) < 0 )
    *v16 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_14006D2C0)
                     + 64);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v40,
    1LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v40,
    2LL,
    v18);
  LOBYTE(v19) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v40,
    3LL,
    v19);
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v40,
    4LL,
    v20);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v40, (_DWORD *)(v4 + 712), *v16);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_14006D2C0);
    v10 = 16;
    LODWORD(v38) = DeviceCapabilities;
    v12 = 2;
    v11 = *(_QWORD *)(v21 + 64);
    goto LABEL_21;
  }
  *((_QWORD *)&v63 + 1) = -1LL;
  LODWORD(v62[0]) = 48;
  *(__m128i *)((char *)v62 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)((char *)&v62[1] + 4) = 0x200000002LL;
  *(_QWORD *)&v63 = 0x200000002LL;
  HIDWORD(v62[1]) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 664))(
    WdfDriverGlobals,
    v40,
    v62);
  *(_QWORD *)(v4 + 344) = v4;
  LOWORD(v38) = 1013;
  LOWORD(v37) = 144;
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v40,
          &GUID_HUB_PARENT_INTERFACE,
          v4 + 208,
          v37,
          v38,
          0LL);
  DeviceCapabilities = v23;
  if ( v23 >= 0 )
  {
    if ( !*(_BYTE *)(v4 + 240) )
    {
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v40);
      *(_QWORD *)(v4 + 2464) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                 WdfDriverGlobals,
                                 v24);
      *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                               WdfDriverGlobals,
                               v40);
      *(_DWORD *)(v4 + 92) = 500;
    }
    *(_QWORD *)(v4 + 384) = *(_QWORD *)(v4 + 248);
    *(_QWORD *)(v4 + 400) = HUBHTX_ClearTTBuffer;
    *(_QWORD *)(v4 + 544) = HUBPDO_NoPingResponse;
    *(_QWORD *)(v4 + 392) = v4;
    IsEnabledDeviceUsageNoInline = Feature_EUSB2__private_IsEnabledDeviceUsageNoInline();
    v26 = v40;
    v27 = WdfDriverGlobals;
    v28 = IsEnabledDeviceUsageNoInline == 0;
    v29 = v4 + 352;
    v30 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD))(WdfFunctions_01015 + 1048);
    if ( !v28 )
    {
      LOWORD(v38) = 3000;
      LOWORD(v37) = 264;
      if ( ((int (__fastcall *)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))v30)(
             WdfDriverGlobals,
             v40,
             &GUID_HUB_CONTROLLERSTACK_INTERFACE,
             v29,
             v37,
             v38,
             0LL) >= 0 )
        goto LABEL_39;
      v29 = v4 + 352;
      v26 = v40;
      v27 = WdfDriverGlobals;
      v30 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD))(WdfFunctions_01015
                                                                                                + 1048);
    }
    LOWORD(v38) = 2000;
    LOWORD(v37) = 264;
    if ( v30(v27, v26, &GUID_HUB_CONTROLLERSTACK_INTERFACE, v29, v37, v38) < 0 )
    {
      LOWORD(v38) = 1000;
      LOWORD(v37) = 264;
      DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
                             WdfDriverGlobals,
                             v40,
                             &GUID_HUB_CONTROLLERSTACK_INTERFACE,
                             v4 + 352,
                             v37,
                             v38,
                             0LL);
      if ( DeviceCapabilities < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v10 = 18;
        goto LABEL_37;
      }
    }
LABEL_39:
    if ( *(_BYTE *)(v4 + 240) )
      v39 = 0LL;
    else
      v39 = *(_QWORD *)(v4 + 248);
    LOWORD(v38) = 3;
    LOWORD(v37) = 96;
    DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, _DWORD, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
                           WdfDriverGlobals,
                           v40,
                           &USB_BUS_INTERFACE_USBDI_GUID,
                           v4 + 616,
                           v37,
                           v38,
                           v39);
    if ( DeviceCapabilities >= 0 )
    {
      memset(v56, 0, sizeof(v56));
      v56[5] = HUBFDO_EvtIoDeviceControl;
      LODWORD(v56[0]) = 96;
      v56[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
      *(_QWORD *)&v48 = 0LL;
      BYTE5(v56[1]) = 1;
      *(_QWORD *)((char *)v56 + 4) = 1LL;
      v50 = off_14006D0A8;
      v47 = 0LL;
      LODWORD(v47) = 56;
      v49 = 0LL;
      *((_QWORD *)&v48 + 1) = 0x100000002LL;
      v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64))(WdfFunctions_01015 + 1216))(
              WdfDriverGlobals,
              v40,
              v56,
              &v47,
              v4 + 2416);
      DeviceCapabilities = v31;
      if ( v31 >= 0 )
      {
        v64 = GUID_BUS_TYPE_USB;
        v65 = 15LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
          WdfDriverGlobals,
          v40,
          &v64);
        HSMMUX_InitializeHSMMuxContext(v4);
        DeviceCapabilities = HUBMISC_InitializeHsm(v4);
        if ( DeviceCapabilities < 0 )
          goto LABEL_22;
        v32 = PoDirectedDripsSetDeviceFlags(*(_QWORD *)(v4 + 24), 2LL);
        if ( v32 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v38) = v32;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v4 + 2536),
            2u,
            3u,
            0x15u,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
            v38);
        }
        v46 = 0LL;
        v44 = 0LL;
        v45[0] = 0x100000001LL;
        *(_OWORD *)&v45[1] = (unsigned __int64)v40;
        v43 = 0LL;
        LODWORD(v43) = 56;
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 104))(
                WdfDriverGlobals,
                &v43,
                v4 + 2752);
        DeviceCapabilities = v31;
        if ( v31 >= 0 )
        {
          v46 = 0LL;
          v44 = 0LL;
          v45[0] = 0x100000001LL;
          *(_OWORD *)&v45[1] = (unsigned __int64)v40;
          v43 = 0LL;
          LODWORD(v43) = 56;
          v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
                  WdfDriverGlobals,
                  &v43,
                  v4 + 2760);
          DeviceCapabilities = v33;
          if ( v33 >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(v4 + 40), 0x20u);
            KeResetEvent((PRKEVENT)(v4 + 1168));
            HUBSM_AddHsmEvent(v4, 2023);
            v34 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                                  WdfDriverGlobals,
                                  v4);
            HUBMISC_WaitForSignal((PVOID)(v4 + 1168), "Hub FDO PnpCallback", v34);
            DeviceCapabilities = *(_DWORD *)(v4 + 1192);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v38) = v33;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v4 + 2536),
                2u,
                3u,
                0x17u,
                (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                v38);
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
              WdfDriverGlobals,
              *(_QWORD *)(v4 + 2752));
          }
          goto LABEL_22;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v10 = 22;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v10 = 20;
      }
      LODWORD(v38) = v31;
LABEL_38:
      v11 = *(_QWORD *)(v4 + 2536);
      v12 = 3;
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v10 = 19;
LABEL_37:
    LODWORD(v38) = DeviceCapabilities;
    goto LABEL_38;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *v16;
    v10 = 17;
    LODWORD(v38) = v23;
    v12 = 3;
    goto LABEL_21;
  }
LABEL_22:
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
  {
    if ( v4 )
      v22 = *(_QWORD *)(v4 + 248);
    else
      v22 = 0LL;
    LODWORD(v37) = DeviceCapabilities;
    McTemplateK0pq_EtwWriteTransfer(v6, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v22, v37);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v4 && *(_DWORD *)(v4 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v4 + 96) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006D2C0);
      LODWORD(v38) = DeviceCapabilities;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v35 + 64),
        2u,
        3u,
        0x18u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v38);
    }
  }
  return (unsigned int)DeviceCapabilities;
}
