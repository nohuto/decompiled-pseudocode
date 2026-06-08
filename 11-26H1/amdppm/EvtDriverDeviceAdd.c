/*
 * XREFs of EvtDriverDeviceAdd @ 0x140042DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     ProcLibDeviceCreate @ 0x14002E308 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // edx
  int v5; // ebx
  __int64 v6; // r9
  int v7; // r9d
  char *v8; // rdi
  int v9; // r8d
  __int64 v11; // [rsp+28h] [rbp-D8h]
  _QWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  _QWORD v16[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v18)(__int64, int); // [rsp+A0h] [rbp-60h]
  __int128 v19; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int128 v22; // [rsp+C8h] [rbp-38h]
  void *v23; // [rsp+D8h] [rbp-28h]
  _QWORD v24[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v25; // [rsp+1A8h] [rbp+A8h] BYREF
  char v26; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v27; // [rsp+1B8h] [rbp+B8h] BYREF

  v25 = a2;
  HIDWORD(v16[0]) = 0;
  DWORD1(v19) = 0;
  v27 = 0LL;
  HIDWORD(v12[0]) = 0;
  v13 = 0LL;
  LODWORD(v15) = 0;
  v17 = 0LL;
  memset(v24, 0, 0x90uLL);
  v24[5] = EvtDevicePrepareHardware;
  LODWORD(v24[0]) = 144;
  v24[6] = EvtDeviceReleaseHardware;
  v24[14] = EvtDeviceQueryStop;
  v24[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v24);
  v26 = 2;
  LOBYTE(v3) = 22;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v25,
         EvtDeviceSetPower,
         v3,
         &v26,
         1);
  if ( v5 >= 0 )
  {
    v26 = 20;
    LOBYTE(v6) = 27;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
           WdfDriverGlobals,
           v25,
           EvtDeviceWdmIrpPreprocessPnp,
           v6,
           &v26,
           1);
    if ( v5 >= 0 )
    {
      v23 = off_1400150A8;
      v20 = 0LL;
      v21 = 0x100000001LL;
      v19 = 0LL;
      LODWORD(v19) = 56;
      v22 = 0LL;
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
             WdfDriverGlobals,
             &v25,
             &v19,
             &v27);
      if ( v5 >= 0 )
      {
        v8 = (char *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v27,
                       off_1400150A8);
        v5 = ProcLibDeviceCreate(v8);
        if ( v5 >= 0 )
        {
          v16[2] = AcpiCStateIdleComplete;
          v16[0] = 65592LL;
          v16[3] = AcpiCStateIdleComplete;
          v18 = ProcLibThermalNotification;
          v12[1] = v16;
          v12[2] = &GUID_THERMAL_COOLING_INTERFACE;
          v17 = 0LL;
          v16[1] = v8;
          v12[0] = 48LL;
          v13 = 0LL;
          v15 = 0LL;
          v14 = 0LL;
          v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                 WdfDriverGlobals,
                 v27,
                 v12);
          if ( v5 >= 0 )
          {
            v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                   WdfDriverGlobals,
                   v27,
                   &GUID_DEVINTERFACE_THERMAL_COOLING,
                   0LL);
            if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v7 = 17;
              goto LABEL_19;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v7 = 16;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 15;
          v9 = 3;
LABEL_20:
          LODWORD(v11) = v5;
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            v9,
            v7,
            (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
            v11);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 14;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
      goto LABEL_19;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 12;
LABEL_19:
    v9 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v5;
}
