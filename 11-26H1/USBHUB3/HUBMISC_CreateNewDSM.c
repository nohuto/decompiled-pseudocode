/*
 * XREFs of HUBMISC_CreateNewDSM @ 0x14002F0D8
 * Callers:
 *     HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1400127A0 (HUBPSM30_CreatingDeviceInConnectedWithResetInProgress.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x14001E1C4 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateNewDSM(__int64 *a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // r13d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r12
  int v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 Timer; // rax
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  int v25; // eax
  const GUID *v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // [rsp+28h] [rbp-49h]
  __int64 v32; // [rsp+30h] [rbp-41h]
  __int128 v33; // [rsp+48h] [rbp-29h] BYREF
  __int128 v34; // [rsp+58h] [rbp-19h]
  __int64 v35; // [rsp+68h] [rbp-9h]
  __int128 v36; // [rsp+70h] [rbp-1h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+80h] [rbp+Fh]
  __int64 v38; // [rsp+88h] [rbp+17h]
  __int128 v39; // [rsp+90h] [rbp+1Fh]
  void *v40; // [rsp+A0h] [rbp+2Fh]
  __int64 v41; // [rsp+E0h] [rbp+6Fh] BYREF

  HIDWORD(v38) = 1;
  LODWORD(v35) = 0;
  v41 = 0LL;
  v36 = 0x38uLL;
  v2 = 0LL;
  *((_QWORD *)&v39 + 1) = 0LL;
  v3 = -1073741823;
  v40 = off_14006D1A8;
  v33 = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  LODWORD(v38) = 2;
  v37 = HUBMISC_EvtDsmDestroy;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v36,
         &v41);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x2Eu, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v4);
    v41 = 0LL;
    goto LABEL_33;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v7,
    "DSM Create Tag",
    6962LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v41,
         off_14006D1A8);
  memset((void *)v2, 0, 0xAB0uLL);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006D2C0)
                  + 4) & 0x1000) != 0 )
    v3 = EtwActivityIdControl(3u, (LPGUID)(v2 + 1524));
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)v2 = *a1;
  *(_WORD *)(v2 + 2720) = 0;
  *(_DWORD *)(v2 + 2724) = 259;
  *(_DWORD *)(v2 + 2728) = 0x40000000;
  v8 = *((unsigned int *)a1 + 51);
  if ( (v8 & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1640), 0xFFFFFFDF);
  else
    _InterlockedOr((volatile signed __int32 *)(v2 + 1640), 0x20u);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 0x40) != 0 )
  {
    LODWORD(v31) = *((unsigned __int16 *)a1 + 100);
    McTemplateK0pq_EtwWriteTransfer(
      v8,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_START,
      (const GUID *)(v2 + 1524),
      *(_QWORD *)(*(_QWORD *)v2 + 248LL),
      v31);
  }
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0x100000001LL;
  v36 = 0LL;
  LODWORD(v36) = 56;
  v39 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v10 = *a1;
  *(_QWORD *)&v39 = v9;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
  v12 = (_QWORD *)(v2 + 256);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v36,
          v11,
          v2 + 256);
  v6 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      *v12 = 0LL;
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = v6;
        WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x35u, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v32);
      }
      if ( Microsoft_Windows_USB_USBHUB3EnableBits < 0 )
      {
        if ( v2 )
          v26 = (const GUID *)(v2 + 1524);
        else
          v26 = 0LL;
        LODWORD(v31) = v6;
        McTemplateK0pq_EtwWriteTransfer(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
          v26,
          *(_QWORD *)(*a1 + 248),
          v31);
      }
      v27 = 3009;
      if ( v2 )
      {
        if ( *(_QWORD *)(v2 + 256) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 256),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 256) = 0LL;
        }
        v28 = *(_QWORD *)(v2 + 424);
        if ( v28 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 424),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 424) = 0LL;
        }
        v29 = *(_QWORD *)(v2 + 1552);
        if ( v29 )
        {
          LOBYTE(v28) = 1;
          ExDeleteTimer(v29, v28, 0LL, 0LL);
          *(_QWORD *)(v2 + 1552) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 2424) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 2424),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 2424) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 440) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 440),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 440) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 1504) )
        {
          (*(void (**)(void))(*(_QWORD *)v2 + 512LL))();
          *(_QWORD *)(v2 + 1504) = 0LL;
        }
        if ( v41 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      }
      return v27;
    }
    v14 = 47;
LABEL_15:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      5u,
      v14,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v13);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v12,
    "DSM Tag",
    7022LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 272) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v12);
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0x100000001LL;
  v36 = 0LL;
  LODWORD(v36) = 56;
  v39 = 0LL;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v16 = *a1;
  *(_QWORD *)&v39 = v15;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(v16 + 16));
  v12 = (_QWORD *)(v2 + 424);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v36,
          v17,
          v2 + 424);
  v6 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v14 = 48;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v12,
    "DSM Tag",
    7058LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 432) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v12);
  *(_WORD *)(v2 + 2048) = 1033;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 1352));
  *(_DWORD *)(v2 + 1392) = 0;
  *(_DWORD *)(v2 + 1364) = 4000;
  *(_DWORD *)(v2 + 1496) = 4000;
  v18 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 1488) = &DSMStateTable;
  *(_QWORD *)(v2 + 1480) = HUBSM_AddDsmEvent;
  *(_DWORD *)(v2 + 1464) = 0;
  *(_QWORD *)(v2 + 1472) = v2;
  *(_QWORD *)(v2 + 1544) = *(_QWORD *)(v18 + 248);
  *(_QWORD *)(v2 + 1512) = v18;
  *(_QWORD *)(v2 + 2608) = v2 + 2616;
  *(_DWORD *)(v2 + 2600) = 288;
  Timer = ExAllocateTimer(HUBMISC_DsmEventTimer, v2, 4LL);
  *(_QWORD *)(v2 + 1552) = Timer;
  if ( Timer )
  {
    v40 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    LODWORD(v36) = 56;
    v39 = 0LL;
    v38 = 0x100000001LL;
    v12 = (_QWORD *)(v2 + 2424);
    *(_QWORD *)&v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    LODWORD(v38) = 2;
    v35 = 0LL;
    v34 = 0LL;
    LODWORD(v34) = 0;
    *((_QWORD *)&v33 + 1) = HUBPDO_EvtOutOfBandwidthTimer;
    *(_QWORD *)&v33 = 40LL;
    BYTE4(v34) = 1;
    DWORD2(v34) = 0;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            &v33,
            &v36,
            v2 + 2424);
    v6 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v14 = 50;
      goto LABEL_15;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *v12,
      "DSM Tag",
      7153LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeEvent((PRKEVENT)(v2 + 1592), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 1616), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 480), NotificationEvent, 0);
    v21 = *(_QWORD *)v2;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v2 + 16LL));
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v21 + 504))(*(_QWORD *)(v21 + 248), v22, 1LL);
    *(_QWORD *)(v2 + 1504) = v23;
    if ( !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          v24,
          5,
          51,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
      }
      v6 = -1073741670;
      goto LABEL_33;
    }
    v40 = 0LL;
    v37 = 0LL;
    v38 = 0x100000001LL;
    v36 = 0LL;
    LODWORD(v36) = 56;
    v39 = 0LL;
    *(_QWORD *)&v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            &v36,
            (unsigned int)ExDefaultNonPagedPoolType,
            1681082453LL,
            96LL,
            v2 + 440,
            0LL);
    v6 = v25;
    if ( v25 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = v25;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          2u,
          5u,
          0x34u,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v32);
      }
      goto LABEL_33;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 440),
      "DSM Tag",
      7211LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 40));
    a1[166] = v2;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      v20,
      3,
      49,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
  }
  if ( v3 >= 0 )
  {
    if ( g_IoSetActivityIdIrp )
    {
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 272), v2 + 1524);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 432), v2 + 1524);
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 1644), 0x40u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      4u,
      4u,
      0x36u,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      a1,
      v2);
  return 3013;
}
