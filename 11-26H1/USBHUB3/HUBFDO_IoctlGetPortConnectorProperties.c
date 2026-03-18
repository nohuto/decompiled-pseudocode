/*
 * XREFs of HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x140033D50 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x140085BD0 (HUBCONNECTOR_GetCompanionPort.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortConnectorProperties(__int64 a1, __int64 a2, size_t a3, int a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // r15
  int v10; // esi
  __int16 v11; // bx
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  PWDF_DRIVER_GLOBALS v15; // rcx
  __int64 v16; // rax
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  size_t *v19; // r8
  __int64 v21; // rax
  __int64 CompanionPort; // rax
  unsigned __int16 *v23; // rcx
  _WORD *v24; // rax
  __int16 v25; // r10
  size_t v26; // r8
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-38h]
  __int64 v30; // [rsp+28h] [rbp-30h]
  int v31; // [rsp+28h] [rbp-30h]
  void *v32; // [rsp+30h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-20h] BYREF

  v32 = 0LL;
  Size[0] = 0LL;
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
          &v32,
          0LL);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = v10;
      WPP_RECORDER_SF_d(v9[317], 2u, 3u, 0x4Au, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v31);
    }
    goto LABEL_11;
  }
  v10 = HUBFDO_IoctlValidateParameters((_DWORD)v9, 18, a4, (_DWORD)v32, 18LL, a3);
  if ( v10 < 0 )
    goto LABEL_11;
  v7 = *(unsigned __int16 *)v32;
  v11 = *((_WORD *)v32 + 6);
  memset(v32, 0, a3);
  *(_DWORD *)v32 = v7;
  *((_WORD *)v32 + 6) = v11;
  *((_DWORD *)v32 + 1) = 18;
  for ( i = (_QWORD *)v9[297]; ; i = (_QWORD *)*i )
  {
    v13 = i - 31;
    if ( v9 + 297 == i )
    {
      v14 = WdfFunctions_01015;
      v10 = -1073741811;
      v15 = WdfDriverGlobals;
LABEL_10:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v14 + 2200))(v15, a2, 18LL);
      goto LABEL_11;
    }
    if ( *((_WORD *)v13 + 100) == (_WORD)v7 )
      break;
  }
  if ( (*((_DWORD *)v13 + 51) & 8) != 0 )
    *((_DWORD *)v32 + 2) |= 2u;
  if ( (*((_DWORD *)v13 + 51) & 1) != 0 )
    *((_DWORD *)v32 + 2) |= 1u;
  if ( (*((_DWORD *)v13 + 51) & 0x200) != 0 )
    *((_DWORD *)v32 + 2) |= 4u;
  if ( (*((_DWORD *)v13 + 51) & 0x1000) != 0 )
    *((_DWORD *)v32 + 2) |= 8u;
  v14 = WdfFunctions_01015;
  v15 = WdfDriverGlobals;
  if ( *((_WORD *)v32 + 6) > 1u )
    goto LABEL_10;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v21 + 56),
    0LL);
  CompanionPort = HUBCONNECTOR_GetCompanionPort(v13, *((unsigned __int16 *)v32 + 6));
  if ( CompanionPort )
  {
    v23 = (unsigned __int16 *)(*(_QWORD *)CompanionPort + 2560LL);
    *((_WORD *)v32 + 7) = *(_WORD *)(CompanionPort + 200);
    v24 = HUBMISC_StripSymbolicNamePrefix(v23, Size);
    if ( v24 )
    {
      v26 = Size[0];
      *((_DWORD *)v32 + 1) = LODWORD(Size[0]) + 18;
      if ( a3 - 18 >= v26 )
      {
        memmove((char *)v32 + 16, v24, v26);
        v27 = a3;
        goto LABEL_32;
      }
    }
    *((_WORD *)v32 + 8) = v25;
  }
  v27 = 18LL;
LABEL_32:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2, v27);
  v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v28 + 56));
LABEL_11:
  if ( (byte_140070D49 & 4) != 0 )
  {
    *(_OWORD *)Size = 0LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v16, (__int64)Size);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v19 = Size;
      LODWORD(v30) = v10;
      LODWORD(v29) = v7;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_PORT_CONNECTOR_PROPERTIES_COMPLETE,
        (const GUID *)v19,
        v9[31],
        v29,
        v30);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
