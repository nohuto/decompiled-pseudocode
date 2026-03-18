/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x14007B960
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x140001AC8 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x14000202C (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pqun_EtwWriteTransfer @ 0x1400020A8 (McTemplateK0pqun_EtwWriteTransfer.c)
 *     McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002138 (McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1400023B4 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1400075A4 (HUBPARENT_GetHubSymbolicLinkName.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD28 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     HUBFDO_AssignUsb4PortMappingProperty @ 0x14007A81C (HUBFDO_AssignUsb4PortMappingProperty.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FF2C (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x140080724 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1400809B4 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x140085F84 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x14008BD14 (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x14008BFB8 (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x14009080C (WMI_RegisterHub.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140091124 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  const void *v9; // rax
  int v10; // r14d
  int v11; // edx
  __int64 Pool2; // rax
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int FirmwareUpdateDevice; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  char v23; // si
  char v24; // dl
  int v25; // eax
  int v26; // eax
  const char *v27; // r15
  const char *v28; // r12
  const char *v29; // r13
  char v30; // r8
  char v31; // r9
  char v32; // r10
  char v33; // r11
  char v34; // dl
  int v35; // eax
  const char *v36; // r15
  const char *v37; // r12
  const char *v38; // r13
  char v39; // r8
  char v40; // r9
  char v41; // r10
  char v42; // r11
  char v43; // dl
  __int64 v44; // rdx
  void *v45; // rax
  void *v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // r8
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v53; // [rsp+28h] [rbp-120h]
  __int64 v54; // [rsp+30h] [rbp-118h]
  char v55; // [rsp+C8h] [rbp-80h]
  char v56; // [rsp+C8h] [rbp-80h]
  char v57; // [rsp+C9h] [rbp-7Fh]
  __int16 v58; // [rsp+CCh] [rbp-7Ch]
  int v59; // [rsp+CCh] [rbp-7Ch]
  int v60; // [rsp+D0h] [rbp-78h]
  int v61; // [rsp+D0h] [rbp-78h]
  int v62; // [rsp+D4h] [rbp-74h]
  int v63; // [rsp+D4h] [rbp-74h]
  int v64; // [rsp+D8h] [rbp-70h]
  int v65; // [rsp+D8h] [rbp-70h]
  int v66; // [rsp+DCh] [rbp-6Ch]
  int v67; // [rsp+DCh] [rbp-6Ch]
  int v68; // [rsp+E0h] [rbp-68h]
  __int16 v69; // [rsp+E0h] [rbp-68h]
  int AcpiPortAttributes; // [rsp+E4h] [rbp-64h]
  __int64 v71; // [rsp+E8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-58h] BYREF
  UNICODE_STRING SourceString; // [rsp+100h] [rbp-48h] BYREF
  __int64 v74; // [rsp+110h] [rbp-38h]
  char v75; // [rsp+160h] [rbp+18h]
  char v76; // [rsp+160h] [rbp+18h]

  SourceString = 0LL;
  v71 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D270);
  v4 = v2;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 248));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(v4);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 656))(
         WdfDriverGlobals,
         a1,
         22LL,
         1LL,
         0LL,
         &v71);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2536),
        2u,
        3u,
        0x29u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v54);
    }
  }
  else
  {
    DestinationString = 0LL;
    v6 = (const WCHAR *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          v71,
                          0LL);
    RtlInitUnicodeString(&DestinationString, v6);
    if ( RtlEqualUnicodeString(&DestinationString, &g_SystemContainerId, 1u) )
      *(_DWORD *)(v4 + 44) |= 0x100u;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v71);
  }
  if ( !*(_BYTE *)(v4 + 240) )
  {
    if ( (*(_DWORD *)(v4 + 44) & 0x100) != 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) + 24LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 8) + 204LL) & 0x800) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 2732);
    if ( v8 == 2 || v8 == 4 )
LABEL_15:
      _InterlockedOr((volatile signed __int32 *)(v4 + 2512), 1u);
  }
LABEL_16:
  KeResetEvent((PRKEVENT)(v4 + 1168));
  HUBSM_AddHsmEvent(v4, 2031);
  v9 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1168), "Hub FDO PnpCallback", v9);
  v10 = *(_DWORD *)(v4 + 1192);
  AcpiPortAttributes = v10;
  if ( v10 < 0 )
    goto LABEL_43;
  if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
    HUBFDO_SetFriendlyNameForBlockedHub(v4);
  RtlInitUnicodeString(&SourceString, 0LL);
  HUBPARENT_GetHubSymbolicLinkName(v4);
  if ( !SourceString.Length )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2536), v11, 3, 42, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    }
    v10 = -1073741823;
LABEL_23:
    AcpiPortAttributes = v10;
    goto LABEL_43;
  }
  Pool2 = ExAllocatePool2(64LL, 2LL * SourceString.Length, 1748191317LL);
  *(_QWORD *)(v4 + 2568) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2536), v13, 3, 43, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    }
    v10 = -1073741670;
    goto LABEL_23;
  }
  *(_WORD *)(v4 + 2560) = 0;
  *(_WORD *)(v4 + 2562) = SourceString.Length;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2560), &SourceString);
  AcpiPortAttributes = HUBACPI_GetAcpiPortAttributes(v4);
  v10 = AcpiPortAttributes;
  if ( AcpiPortAttributes >= 0 )
  {
    HUBCONNECTOR_MapHubPorts(v4);
    HUBFDO_MapDvsecUsb4Hosts(v4);
    v15 = HUBFDO_AssignUsb4PortMappingProperty(v4);
    if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2536),
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v54);
    }
    WMI_RegisterHub(a1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 560))(*(_QWORD *)(v4 + 248)) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 776), 1u);
    if ( *(_BYTE *)(v4 + 2744) == 1 )
    {
      if ( *(_BYTE *)(v4 + 240) )
      {
        if ( *(_DWORD *)(v4 + 160) )
        {
          if ( !*(_QWORD *)(v4 + 2672) )
          {
            FirmwareUpdateDevice = FWUPDATE_CreateFirmwareUpdateDevice(v4);
            if ( FirmwareUpdateDevice < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v54) = FirmwareUpdateDevice;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v4 + 2536),
                2u,
                2u,
                0x2Eu,
                (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                v54);
            }
          }
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2536), v14, 3, 44, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
  }
LABEL_43:
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  v74 = v17;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v17 + 32),
    0LL);
  if ( (*(_DWORD *)(v17 + 4) & 0x1000) != 0 && v10 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2232) == 1 )
    {
      if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
      {
        LODWORD(v53) = 71;
        McTemplateK0pnq_EtwWriteTransfer(
          v4 + 1196,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 248),
          v53,
          v4 + 1196,
          *(_DWORD *)(v4 + 2616));
      }
    }
    else
    {
      v18 = (unsigned int)(*(_DWORD *)(v4 + 2232) - 2);
      if ( *(_DWORD *)(v4 + 2232) == 2 )
      {
        if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
        {
          LODWORD(v53) = 12;
          McTemplateK0pnq_EtwWriteTransfer(
            v4 + 1196,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v53,
            v4 + 1196,
            *(_DWORD *)(v4 + 2616));
        }
      }
      else if ( *(_DWORD *)(v4 + 2232) == 4 )
      {
        if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
        {
          LODWORD(v53) = *(_DWORD *)(v4 + 2616);
          McTemplateK0pq_EtwWriteTransfer(
            v18,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v53);
        }
      }
      else if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 0x20) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(
          v18,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE,
          0LL,
          *(_QWORD *)(v4 + 248));
      }
    }
    v19 = v4 + 2376;
    v20 = *(_QWORD *)(v4 + 2376);
    v21 = v20 - 248;
    if ( v4 + 2376 != v20 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 204);
        if ( (v22 & 2) != 0 )
        {
          v23 = 1;
          if ( (v22 & 0x1000) != 0 && (*(_DWORD *)(v4 + 44) & 0x200) != 0 )
          {
            v24 = 1;
            goto LABEL_63;
          }
        }
        else
        {
          v23 = 0;
        }
        v24 = 0;
LABEL_63:
        v25 = *(_DWORD *)(v21 + 1256);
        v57 = v24;
        if ( v25 == 3000 )
        {
          if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) == 0 )
            goto LABEL_92;
          v35 = *(_DWORD *)(v4 + 168);
          if ( v35 == 2 )
          {
            v36 = (const char *)(v4 + 186);
            v37 = (const char *)(v4 + 181);
            v38 = (const char *)(v4 + 176);
            goto LABEL_81;
          }
          v36 = 0LL;
          v37 = 0LL;
          v38 = 0LL;
          if ( v35 == 1 )
          {
            v69 = *(_WORD *)(v4 + 184);
            v67 = *(_DWORD *)(v4 + 180);
            v65 = *(_DWORD *)(v4 + 176);
            v63 = *(_DWORD *)(v4 + 196);
            v61 = *(_DWORD *)(v4 + 192);
            v59 = *(_DWORD *)(v4 + 188);
          }
          else
          {
LABEL_81:
            LOBYTE(v69) = 0;
            LOBYTE(v67) = -1;
            LOBYTE(v65) = -1;
            LOBYTE(v63) = 0;
            LOBYTE(v61) = 0;
            LOBYTE(v59) = 0;
          }
          if ( v24 )
          {
            v39 = (*(_DWORD *)(v21 + 1344) & 0x10) != 0;
            v40 = (*(_DWORD *)(v21 + 1344) & 4) != 0;
            v41 = (*(_DWORD *)(v21 + 1344) & 0x20) != 0;
            v42 = (*(_DWORD *)(v21 + 1344) & 8) != 0;
            v56 = 1;
            v76 = *(_BYTE *)(v21 + 1344) & 3;
          }
          else
          {
            v76 = 0;
            v42 = 0;
            v41 = 0;
            v56 = 0;
            v40 = 0;
            v39 = 0;
          }
          if ( v23 )
            v43 = *(_BYTE *)(v21 + 1341);
          else
            v43 = 0;
          McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V2,
            0LL,
            *(_QWORD *)(v4 + 248),
            *(_WORD *)(v21 + 200),
            v23,
            v43,
            v56,
            v39,
            v40,
            v41,
            v42,
            v76,
            *(_QWORD *)(v21 + 1416),
            v35,
            v59,
            v61,
            v63,
            v65,
            v67,
            v69,
            v38,
            v37,
            v36);
          goto LABEL_91;
        }
        if ( v25 != 5000 || (Microsoft_Windows_USB_USBHUB3EnableBits & 2) == 0 )
          goto LABEL_92;
        v26 = *(_DWORD *)(v4 + 168);
        if ( v26 == 2 )
        {
          v27 = (const char *)(v4 + 186);
          v28 = (const char *)(v4 + 181);
          v29 = (const char *)(v4 + 176);
        }
        else
        {
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          if ( v26 == 1 )
          {
            v58 = *(_WORD *)(v4 + 184);
            v60 = *(_DWORD *)(v4 + 180);
            v62 = *(_DWORD *)(v4 + 176);
            v64 = *(_DWORD *)(v4 + 196);
            v66 = *(_DWORD *)(v4 + 192);
            v68 = *(_DWORD *)(v4 + 188);
            goto LABEL_69;
          }
        }
        LOBYTE(v58) = 0;
        LOBYTE(v60) = -1;
        LOBYTE(v62) = -1;
        LOBYTE(v64) = 0;
        LOBYTE(v66) = 0;
        LOBYTE(v68) = 0;
LABEL_69:
        if ( v24 )
        {
          v30 = (*(_DWORD *)(v21 + 1344) & 0x10) != 0;
          v31 = (*(_DWORD *)(v21 + 1344) & 4) != 0;
          v32 = (*(_DWORD *)(v21 + 1344) & 0x20) != 0;
          v33 = (*(_DWORD *)(v21 + 1344) & 8) != 0;
          v55 = 1;
          v75 = *(_BYTE *)(v21 + 1344) & 3;
        }
        else
        {
          v75 = 0;
          v33 = 0;
          v32 = 0;
          v55 = 0;
          v31 = 0;
          v30 = 0;
        }
        if ( v23 )
          v34 = *(_BYTE *)(v21 + 1341);
        else
          v34 = 0;
        McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
          *(unsigned __int16 *)(v21 + 200),
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V2,
          0LL,
          *(_QWORD *)(v4 + 248),
          *(_WORD *)(v21 + 200),
          v23,
          v34,
          v55,
          v30,
          v31,
          v32,
          v33,
          v75,
          *(_QWORD *)(v21 + 1416),
          v26,
          v68,
          v66,
          v64,
          v62,
          v60,
          v58,
          v29,
          v28,
          v27);
LABEL_91:
        v19 = v4 + 2376;
LABEL_92:
        if ( v23 && (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
        {
          LOBYTE(v54) = v57;
          LODWORD(v53) = *(unsigned __int16 *)(v21 + 200);
          McTemplateK0pqun_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC_V1,
            0LL,
            *(_QWORD *)(v4 + 248),
            v53,
            v54);
        }
        if ( (*(_DWORD *)(v21 + 204) & 4) != 0 && (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
        {
          LODWORD(v53) = *(unsigned __int16 *)(v21 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 248),
            v53);
        }
        if ( (*(_DWORD *)(v21 + 204) & 0x800) != 0 )
        {
          v44 = *(_QWORD *)(v21 + 1464);
          DestinationString = 0LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
            WdfDriverGlobals,
            v44,
            &DestinationString);
          v45 = (void *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
          v46 = v45;
          if ( v45 )
          {
            memmove(v45, DestinationString.Buffer, DestinationString.Length);
            if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
            {
              LODWORD(v53) = *(unsigned __int16 *)(v21 + 200);
              McTemplateK0pqz_EtwWriteTransfer(
                *(unsigned __int16 *)(v21 + 200),
                &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_DSD_USB4,
                0LL,
                *(_QWORD *)(v4 + 248),
                v53,
                v46);
            }
            ExFreePoolWithTag(v46, 0x64334855u);
          }
        }
        v47 = *(_QWORD *)(v21 + 248);
        v21 = v47 - 248;
        if ( v19 == v47 )
        {
          v10 = AcpiPortAttributes;
          v17 = v74;
          break;
        }
      }
    }
  }
  v48 = *(_QWORD **)(v17 + 24);
  v49 = (_QWORD *)(v4 + 2448);
  if ( *v48 != v17 + 16 )
    __fastfail(3u);
  *v49 = v17 + 16;
  *(_QWORD *)(v4 + 2456) = v48;
  *v48 = v49;
  *(_QWORD *)(v17 + 24) = v49;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v17 + 32));
  if ( v10 >= 0 )
  {
    v51 = HUBFDO_RegisterSleepstudyBlockerReasons(*(_QWORD *)(v4 + 24), v4);
    if ( v51 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = v51;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2536),
        2u,
        2u,
        0x2Fu,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v54);
    }
  }
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
  {
    LODWORD(v53) = v10;
    McTemplateK0pq_EtwWriteTransfer(
      v50,
      &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v4 + 248),
      v53);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v54) = *(_DWORD *)(v4 + 40);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 2536),
      2u,
      3u,
      0x30u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v54);
  }
  return (unsigned int)v10;
}
