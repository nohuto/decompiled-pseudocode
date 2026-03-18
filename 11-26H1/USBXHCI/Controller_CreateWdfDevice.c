/*
 * XREFs of Controller_CreateWdfDevice @ 0x140074FB4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x1400448F8 (Device_IsSecureDevice.c)
 *     Device_QueryCapabilities @ 0x140044908 (Device_QueryCapabilities.c)
 *     RtlUnicodeStringPrintf @ 0x140045408 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x140045630 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // r9
  NTSTATUS v9; // eax
  int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  NTSTATUS v19; // eax
  int v20; // edx
  int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // edx
  char *v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  void *v35; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING v36; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+ACh] [rbp-54h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  __int64 (__fastcall *v41)(); // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  __int128 v47; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v48; // [rsp+100h] [rbp+0h]
  __int128 v49; // [rsp+110h] [rbp+10h]
  void *v50; // [rsp+120h] [rbp+20h]
  unsigned int *v51; // [rsp+128h] [rbp+28h]
  int v52; // [rsp+130h] [rbp+30h] BYREF
  int v53; // [rsp+134h] [rbp+34h]
  __int64 (__fastcall *v54)(__int64); // [rsp+138h] [rbp+38h]
  char (__fastcall *v55)(__int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v56)(__int64); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v57)(__int64); // [rsp+150h] [rbp+50h]
  _UNKNOWN **(__fastcall *v58)(__int64); // [rsp+158h] [rbp+58h]
  __int128 v59; // [rsp+160h] [rbp+60h]
  _QWORD v60[18]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v61[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v62; // [rsp+220h] [rbp+120h]
  GUID v63; // [rsp+230h] [rbp+130h] BYREF
  __int64 v64; // [rsp+240h] [rbp+140h]
  char v65; // [rsp+250h] [rbp+150h] BYREF
  char v66; // [rsp+2A0h] [rbp+1A0h] BYREF

  v31 = a1;
  v51 = a4;
  LODWORD(v35) = 0;
  LODWORD(v50) = 0;
  v64 = 0LL;
  v45 = 0;
  v39 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v65;
  v40 = 0;
  v36.Buffer = (wchar_t *)&v66;
  LODWORD(v42) = 0;
  v53 = 0;
  v32 = 0LL;
  *(_QWORD *)&v59 = 0LL;
  v7 = 0;
  v33 = 0LL;
  DWORD2(v59) = 0;
  v34 = 0LL;
  v30 = 2;
  v47 = 0LL;
  *(_QWORD *)&DestinationString.Length = 5242880LL;
  v48 = 0LL;
  *(_QWORD *)&v36.Length = 5242880LL;
  v49 = 0LL;
  v63 = 0LL;
  memset(v61, 0, sizeof(v61));
  v62 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v60, 0, sizeof(v60));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x29 )
      LODWORD(v60[0]) = -1;
    else
      LODWORD(v60[0]) = *(_DWORD *)(WdfStructures + 328);
  }
  else
  {
    LODWORD(v60[0]) = 144;
  }
  v60[5] = Controller_WdfEvtDevicePrepareHardware;
  v60[6] = Controller_WdfEvtDeviceReleaseHardware;
  v60[15] = Controller_WdfEvtDeviceUsageNotification;
  v60[1] = Controller_WdfEvtDeviceD0Entry;
  v60[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v60[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v60[3] = Controller_WdfEvtDeviceD0Exit;
  v60[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v60[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 440))(WdfDriverGlobals, a1, v60);
  v59 = 0LL;
  v53 = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x2B )
      v52 = -1;
    else
      v52 = *(_DWORD *)(WdfStructures + 344);
  }
  else
  {
    v52 = 64;
  }
  v54 = Controller_WdfEvtDeviceArmWakeFromS0;
  v55 = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v56 = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v57 = Controller_WdfEvtDeviceArmWakeFromSx;
  v58 = Controller_WdfEvtDeviceDisarmWakeFromSx;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01033 + 448))(WdfDriverGlobals, v31, &v52);
  v39 = 0LL;
  v40 = 0;
  v42 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x1B )
      v38 = -1;
    else
      v38 = *(_DWORD *)(WdfStructures + 216);
  }
  else
  {
    v38 = 32;
  }
  v41 = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01033 + 1024))(WdfDriverGlobals, v31, &v38);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 3440))(
    WdfDriverGlobals,
    v31,
    2LL);
  LOBYTE(v8) = 22;
  v29 = &v30;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01033 + 584))(
         WdfDriverGlobals,
         v31,
         Controller_WdfEvtPreprocessSetPowerIrp,
         v8);
  v12 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 35;
      goto LABEL_83;
    }
    goto LABEL_84;
  }
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v29) = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01033 + 584))(
           WdfDriverGlobals,
           v31,
           Controller_EvtIoInternalDeviceControl,
           v11);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 36;
        goto LABEL_83;
      }
      goto LABEL_84;
    }
  }
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x1C )
      LODWORD(v43) = -1;
    else
      LODWORD(v43) = *(_DWORD *)(WdfStructures + 224);
  }
  else
  {
    LODWORD(v43) = 40;
  }
  *(_QWORD *)&v44 = 0LL;
  v45 = 0;
  *((_QWORD *)&v43 + 1) = Controller_EvtDeviceFileCreate;
  *((_QWORD *)&v44 + 1) = Controller_EvtDeviceFileClose;
  v46 = -2147483644;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v32) = -1;
    else
      LODWORD(v32) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v32) = 56;
  }
  v35 = off_14006B218;
  *((_QWORD *)&v33 + 1) = 0x100000001LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int128 *))(WdfFunctions_01033 + 568))(
    WdfDriverGlobals,
    v31,
    &v43,
    &v32);
  v32 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v32) = -1;
    else
      LODWORD(v32) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v32) = 56;
  }
  v35 = off_14006B240;
  *((_QWORD *)&v33 + 1) = 0x100000001LL;
  *((_QWORD *)&v32 + 1) = Device_WdfEvtCleanupCallback;
  while ( 1 )
  {
    v9 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v7);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 37;
        goto LABEL_83;
      }
LABEL_84:
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
      goto LABEL_85;
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01033 + 536))(
           WdfDriverGlobals,
           v31,
           &DestinationString);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 38;
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01033 + 544))(
           WdfDriverGlobals,
           v31,
           &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 39;
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    v47 = 0LL;
    v50 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
      LODWORD(v47) = (unsigned int)WdfStructureCount <= 0x26 ? -1 : *(_DWORD *)(WdfStructures + 304);
    else
      LODWORD(v47) = 56;
    *((_QWORD *)&v48 + 1) = 0x100000001LL;
    v50 = off_14006AE88;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01033 + 576))(
      WdfDriverGlobals,
      v31,
      &v47);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, _QWORD *))(WdfFunctions_01033 + 600))(
           WdfDriverGlobals,
           &v31,
           &v32,
           a3);
    v12 = v9;
    if ( v9 != -1073741771 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(a2, v10, 4, 40, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v7);
    }
    ++v7;
  }
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_84;
    v13 = 41;
LABEL_83:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(a2, v10, 4, v13, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v9);
    goto LABEL_84;
  }
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_14006B240);
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(v14 + 88) = *a3;
  Device_QueryCapabilities(v14);
  if ( !Device_IsSecureDevice(v14) )
  {
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      1LL,
      v15);
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      2LL,
      v16);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      3LL,
      v17);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      4LL,
      v18);
  }
  v19 = RtlUnicodeStringPrintf(&v36, L"%ws%d", L"\\DosDevices\\HCD", v7);
  v12 = v19;
  if ( v19 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v21 = 42;
    goto LABEL_59;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01033 + 640))(
          WdfDriverGlobals,
          *a3,
          &v36);
  v12 = v19;
  if ( v19 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(a2, 4u, v22, 0x2Cu, (int)v29, v36.Buffer);
    v23 = *a3;
    v63 = GUID_BUS_TYPE_USB;
    v64 = 15LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01033 + 680))(
      WdfDriverGlobals,
      v23,
      &v63);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01033 + 616))(
            WdfDriverGlobals,
            *a3,
            &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
            0LL);
    v12 = v19;
    if ( v19 >= 0 )
    {
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0xC )
          LODWORD(v61[0]) = -1;
        else
          LODWORD(v61[0]) = *(_DWORD *)(WdfStructures + 96);
      }
      else
      {
        LODWORD(v61[0]) = 48;
      }
      v24 = *a3;
      *(__m128i *)((char *)v61 + 4) = _mm_load_si128((const __m128i *)&_xmm);
      *(_QWORD *)((char *)&v61[1] + 4) = 0x200000002LL;
      *(_QWORD *)&v62 = 0x200000002LL;
      *((_QWORD *)&v62 + 1) = -1LL;
      HIDWORD(v61[1]) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 664))(
        WdfDriverGlobals,
        v24,
        v61);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a3);
      v26 = PoDirectedDripsSetDeviceFlags(v25, 2LL);
      v12 = v26;
      if ( v26 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_d(a2, v27, 4, 46, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v26);
        }
        v12 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 45;
      goto LABEL_59;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = 43;
LABEL_59:
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(a2, v20, 4, v21, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v19);
  }
LABEL_85:
  *v51 = v7;
  return v12;
}
