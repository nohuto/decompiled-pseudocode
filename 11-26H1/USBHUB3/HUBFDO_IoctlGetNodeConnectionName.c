/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x140030520 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x140033D50 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64); // rax
  int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int DeviceInterfacePath; // ebx
  __int64 v12; // rbx
  _WORD *v13; // rax
  size_t v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  size_t *v19; // r8
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+28h] [rbp-50h]
  void *v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256);
  Size[0] = 0LL;
  v8 = 0;
  v9 = v5(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_14006D270);
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
                          WdfDriverGlobals,
                          a2,
                          a3,
                          &v24,
                          0LL);
  if ( DeviceInterfacePath >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((_DWORD)v10, 4, a4, (_DWORD)v24, 10LL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_17;
    v8 = *(unsigned __int16 *)v24;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v12 )
      goto LABEL_14;
    do
    {
      if ( v12 != v10[334]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v12,
                                   off_14006D1D0)
                               + 48) == v8 )
      {
        break;
      }
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              v12,
              1LL);
    }
    while ( v12 );
    if ( v12
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v12,
                                    off_14006D1D0)
                                + 24)
                    + 1640LL) & 2) != 0 )
    {
      memset(v24, 0, a3);
      *(_DWORD *)v24 = v8;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (__int64)&GUID_DEVINTERFACE_USB_HUB,
                              v12,
                              &v25,
                              0LL,
                              v10[317]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v25,
        &v26);
      v13 = HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)&v26, Size);
      v14 = Size[0];
      *((_DWORD *)v24 + 1) = LODWORD(Size[0]) + 10;
      if ( v14 <= a3 - 8 )
      {
        memmove((char *)v24 + 8, v13, v14);
        v15 = *((unsigned int *)v24 + 1);
LABEL_16:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v15);
        DeviceInterfacePath = 0;
        goto LABEL_17;
      }
    }
    else
    {
LABEL_14:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *((_DWORD *)v24 + 1) = 10;
    }
    v15 = 10LL;
    *((_WORD *)v24 + 4) = 0;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = DeviceInterfacePath;
    WPP_RECORDER_SF_d(v10[317], 2u, 3u, 0x45u, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v23);
  }
LABEL_17:
  if ( (byte_140070D49 & 4) != 0 )
  {
    *(_OWORD *)Size = 0LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v16, (__int64)Size);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v19 = Size;
      LODWORD(v22) = DeviceInterfacePath;
      LODWORD(v21) = v8;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v19,
        v10[31],
        v21,
        v22);
    }
  }
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
