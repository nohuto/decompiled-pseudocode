/*
 * XREFs of HUBFDO_IoctlGetHubCaps @ 0x14007D60C
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

__int64 __fastcall HUBFDO_IoctlGetHubCaps(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rax
  int ActivityIdIrp; // eax
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+28h] [rbp-60h]
  void *v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h] BYREF

  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_14006D270);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v18,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0, a4, 0, 4LL, a3);
    if ( v9 >= 0 )
    {
      memset(v18, 0, a3);
      if ( (*(_DWORD *)(v8 + 2512) & 2) != 0 )
        *(_DWORD *)v18 |= 1u;
      else
        *(_DWORD *)v18 &= ~1u;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2536),
      2u,
      3u,
      0x43u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v17);
  }
  if ( (byte_140070D49 & 4) != 0 )
  {
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v10, (__int64)&v19);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v13 = (const GUID *)&v19;
      LODWORD(v16) = v9;
      LODWORD(v15) = 0;
      if ( ActivityIdIrp < 0 )
        v13 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v12,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_COMPLETE,
        v13,
        *(_QWORD *)(v8 + 248),
        v15,
        v16);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
