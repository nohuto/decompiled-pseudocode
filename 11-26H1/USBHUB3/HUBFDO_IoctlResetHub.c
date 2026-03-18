/*
 * XREFs of HUBFDO_IoctlResetHub @ 0x14007F748
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010938 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1400874BC (HUBMISC_VerifyCallerIsAdmin.c)
 */

__int64 __fastcall HUBFDO_IoctlResetHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int IsAdmin; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int ActivityIdIrp; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+28h] [rbp-40h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v4,
         off_14006D270);
  IsAdmin = HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v5 + 2536));
  if ( IsAdmin >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v7,
           off_14006D270);
    if ( !HUBMUX_CheckAndQueueIfResetHubIsEnabled(v8) )
      IsAdmin = -1073741823;
  }
  if ( (byte_140070D49 & 4) != 0 )
  {
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v9, (__int64)&v16);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v12 = (const GUID *)&v16;
      v15 = IsAdmin;
      v14 = 0;
      if ( ActivityIdIrp < 0 )
        v12 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_RESET_HUB_COMPLETE,
        v12,
        *(_QWORD *)(v5 + 248),
        v14,
        v15);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
