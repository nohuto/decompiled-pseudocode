/*
 * XREFs of HUBFDO_IoctlCyclePort @ 0x14007CB88
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1400874BC (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_UpdateUxdSettings @ 0x14008CE5C (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBFDO_IoctlCyclePort(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r12d
  char v10; // si
  __int64 v11; // rcx
  int IsAdmin; // edi
  unsigned __int16 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 i; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  PWDF_DRIVER_GLOBALS v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  char v30[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 *v31; // [rsp+48h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h] BYREF

  v32 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_14006D270);
  v31 = 0LL;
  v9 = 0;
  v10 = 0;
  v30[0] = 0;
  IsAdmin = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, unsigned __int16 **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v31,
              0LL);
  if ( IsAdmin < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v13 = 78;
    goto LABEL_4;
  }
  IsAdmin = HUBFDO_IoctlValidateParameters((_DWORD)v8, 4, a4, (_DWORD)v31, 8LL, a3);
  *((_DWORD *)v31 + 1) = 0;
  if ( IsAdmin >= 0 )
  {
    v9 = *v31;
    if ( (byte_140070D49 & 4) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      v10 = (int)HUBMISC_GetActivityIdIrp(v14, (__int64)&v32) >= 0;
      if ( (byte_140070D49 & 4) != 0 )
      {
        LODWORD(v28) = v9;
        LOBYTE(v15) = -v10;
        McTemplateK0pq_EtwWriteTransfer(
          v15,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_START,
          (const GUID *)((unsigned __int64)&v32 & -(__int64)(v10 != 0)),
          v8[31],
          v28);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v8[2]);
    for ( i = 0LL; ; i = v18 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v8[2],
              i,
              1LL);
      v18 = v17;
      if ( !v17
        || v17 != v8[334]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_14006D1D0)
                               + 48) == v9 )
      {
        break;
      }
    }
    v19 = WdfFunctions_01015;
    v20 = WdfDriverGlobals;
    if ( !v18 )
      goto LABEL_15;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v18,
            off_14006D1D0);
    v22 = v21;
    v23 = *(_QWORD *)(v21 + 24);
    if ( !v23 )
    {
      v19 = WdfFunctions_01015;
      v20 = WdfDriverGlobals;
LABEL_15:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v19 + 1088))(v20, v8[2]);
      IsAdmin = -1073741810;
      *((_DWORD *)v31 + 1) = -1073713152;
      goto LABEL_27;
    }
    HUBREG_UpdateUxdSettings(v8, *(_QWORD *)(v21 + 24), v30);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v24,
      "User Mode FDO Request",
      5709LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v8[2]);
    IsAdmin = HUBMISC_VerifyCallerIsAdmin(v8[317]);
    if ( IsAdmin >= 0 || v30[0] == 1 )
    {
      LOBYTE(v25) = 1;
      IsAdmin = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
                  WdfDriverGlobals,
                  v8[2],
                  v25,
                  0LL,
                  5722,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      if ( IsAdmin < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 79;
LABEL_4:
          LODWORD(v29) = IsAdmin;
          WPP_RECORDER_SF_d(v8[317], 2u, 3u, v13, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v29);
          goto LABEL_27;
        }
        goto LABEL_27;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4), 1, 0) )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v23 + 8) + 1240LL))(*(_QWORD *)(v23 + 8), 3011LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v8[2],
        0LL,
        5744LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v26,
      "User Mode FDO Request",
      5749LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
  }
LABEL_27:
  if ( (byte_140070D49 & 4) != 0 )
  {
    LODWORD(v29) = IsAdmin;
    LODWORD(v28) = v9;
    McTemplateK0pqq_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_COMPLETE,
      (const GUID *)((unsigned __int64)&v32 & -(__int64)(v10 != 0)),
      v8[31],
      v28,
      v29);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)IsAdmin,
           8LL);
}
