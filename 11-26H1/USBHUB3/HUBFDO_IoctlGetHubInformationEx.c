/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x14007DA20
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // edx
  char *v11; // rcx
  char *v12; // rcx
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
    v9 = HUBFDO_IoctlValidateParameters(v8, 0, a4, 0, 77LL, a3);
    if ( v9 >= 0 )
    {
      memset(v21, 0, a3);
      *((_WORD *)v21 + 2) = *(_WORD *)(v8 + 48);
      switch ( *(_DWORD *)(v8 + 2232) )
      {
        case 1:
          *(_DWORD *)v21 = 2;
          v12 = (char *)v21;
          *(_OWORD *)((char *)v21 + 6) = *(_OWORD *)(v8 + 1196);
          *(_OWORD *)(v12 + 22) = *(_OWORD *)(v8 + 1212);
          *(_OWORD *)(v12 + 38) = *(_OWORD *)(v8 + 1228);
          *(_OWORD *)(v12 + 54) = *(_OWORD *)(v8 + 1244);
          *(_DWORD *)(v12 + 70) = *(_DWORD *)(v8 + 1260);
          *((_WORD *)v12 + 37) = *(_WORD *)(v8 + 1264);
          v12[76] = *(_BYTE *)(v8 + 1266);
          break;
        case 2:
          *(_DWORD *)v21 = 3;
          v11 = (char *)v21;
          *(_QWORD *)((char *)v21 + 6) = *(_QWORD *)(v8 + 1196);
          *(_DWORD *)(v11 + 14) = *(_DWORD *)(v8 + 1204);
          break;
        case 4:
          *(_DWORD *)v21 = 1;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v8 + 2536),
              v10,
              4,
              73,
              (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
          }
          break;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2536),
      2u,
      3u,
      0x48u,
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
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
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
           77LL);
}
