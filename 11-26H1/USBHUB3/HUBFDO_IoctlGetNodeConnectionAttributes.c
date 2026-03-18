/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DCD4
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(__int64 a1, __int64 a2, size_t a3, int a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+28h] [rbp-60h]
  void *v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF

  v21 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_14006D270);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v21,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((_DWORD)v9, 4, a4, (_DWORD)v21, 12LL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v21;
      memset(v21, 0, a3);
      *(_DWORD *)v21 = v7;
      *((_DWORD *)v21 + 2) = 0;
      for ( i = (_QWORD *)v9[297]; ; i = (_QWORD *)*i )
      {
        v12 = i - 31;
        if ( v9 + 297 == i )
        {
          *((_DWORD *)v21 + 1) = 3;
          goto LABEL_10;
        }
        if ( *((unsigned __int16 *)v12 + 100) == v7 )
          break;
      }
      *((_DWORD *)v21 + 1) = *((_DWORD *)v12 + 356);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = v10;
    WPP_RECORDER_SF_d(v9[317], 2u, 3u, 0x42u, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v20);
  }
LABEL_10:
  if ( (byte_140070D49 & 4) != 0 )
  {
    v22 = 0LL;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v13, (__int64)&v22);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v16 = (const GUID *)&v22;
      LODWORD(v19) = v10;
      LODWORD(v18) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE,
        v16,
        v9[31],
        v18,
        v19);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           12LL);
}
