/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DF08
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // rsi
  int v10; // edi
  __int64 i; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  const GUID *v19; // r8
  char *v21; // [rsp+20h] [rbp-58h]
  int *v22; // [rsp+28h] [rbp-50h]
  void *v23; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+48h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_14006D270);
  v23 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v23,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((_DWORD)v9, 4, a4, (_DWORD)v23, 10LL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v23;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      for ( i = 0LL; ; i = v13 )
      {
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                i,
                1LL);
        v13 = v12;
        if ( !v12
          || v12 != v9[334]
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v12,
                                     off_14006D1D0)
                                 + 48) == v7 )
        {
          break;
        }
      }
      if ( v13 )
      {
        memset(v23, 0, a3);
        v22 = &v24;
        *(_DWORD *)v23 = v7;
        v21 = (char *)v23 + 8;
        v24 = a3 - 8;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v13,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v10 = 0;
        if ( v14 != -1073741789 )
          v10 = v14;
        if ( v10 >= 0 )
        {
          v15 = v24 + 10;
          *((_DWORD *)v23 + 1) = v24 + 10;
          if ( a3 < v15 )
            *((_WORD *)v23 + 4) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2);
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v10 = -1073741811;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(v9[317], 2u, 3u, 0x40u, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v10);
  }
  if ( (byte_140070D49 & 4) != 0 )
  {
    v25 = 0LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v16, (__int64)&v25);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v19 = (const GUID *)&v25;
      LODWORD(v22) = v10;
      LODWORD(v21) = v7;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v19,
        v9[31],
        v21,
        v22);
    }
  }
  if ( v10 < 0 && v23 && a3 >= 0xA )
  {
    *((_WORD *)v23 + 4) = 0;
    *((_DWORD *)v23 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
