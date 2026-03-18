/*
 * XREFs of HUBFDO_IoctlGetHubCapsEx @ 0x14007D7E4
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

__int64 __fastcall HUBFDO_IoctlGetHubCapsEx(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  _DWORD *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+28h] [rbp-28h]
  void *v21; // [rsp+30h] [rbp-20h] BYREF
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF

  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_14006D270);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v21,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0, a4, 0, 4LL, a3);
    if ( v9 >= 0 )
    {
      memset(v21, 0, a3);
      if ( (*(_DWORD *)(v8 + 2512) & 2) != 0 )
        *(_DWORD *)v21 |= 1u;
      else
        *(_DWORD *)v21 &= ~1u;
      v10 = v21;
      v11 = *(_DWORD *)v21;
      if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
      {
        v12 = v11 | 8;
        *(_DWORD *)v21 = v12;
        v11 = v12 | 4;
        *(_DWORD *)v21 = v11;
        v10 = v21;
      }
      if ( !*(_BYTE *)(v8 + 240) || *(_DWORD *)(v8 + 256) == 2 )
      {
        v11 |= 2u;
        *v10 = v11;
        v10 = v21;
      }
      if ( !*(_BYTE *)(v8 + 240) )
      {
        v11 |= 0x10u;
        *v10 = v11;
        v10 = v21;
      }
      if ( (*(_DWORD *)(v8 + 40) & 0x100) != 0 )
        *v10 = v11 | 0x20;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2536),
      2u,
      3u,
      0x44u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v20);
  }
  if ( (byte_140070D49 & 4) != 0 )
  {
    v22 = 0LL;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v13, (__int64)&v22);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v16 = (const GUID *)&v22;
      LODWORD(v19) = v9;
      LODWORD(v18) = 0;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_EX_COMPLETE,
        v16,
        *(_QWORD *)(v8 + 248),
        v18,
        v19);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
