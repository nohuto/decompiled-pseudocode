/*
 * XREFs of EvtDriverDeviceAdd @ 0x14002CE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 *     ProcLibDeviceCreate @ 0x140032408 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // r9
  unsigned __int16 v6; // r9
  void *v7; // rdi
  unsigned int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-D8h]
  _QWORD v11[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  _QWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v17)(); // [rsp+A0h] [rbp-60h]
  __int128 v18; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  __int128 v21; // [rsp+C8h] [rbp-38h]
  void *v22; // [rsp+D8h] [rbp-28h]
  _QWORD v23[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v24; // [rsp+1A8h] [rbp+A8h] BYREF
  char v25; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v26; // [rsp+1B8h] [rbp+B8h] BYREF

  v24 = a2;
  HIDWORD(v15[0]) = 0;
  DWORD1(v18) = 0;
  v26 = 0LL;
  HIDWORD(v11[0]) = 0;
  v12 = 0LL;
  LODWORD(v14) = 0;
  v16 = 0LL;
  memset(v23, 0, 0x90uLL);
  v23[5] = EvtDevicePrepareHardware;
  LODWORD(v23[0]) = 144;
  v23[6] = EvtDeviceReleaseHardware;
  v23[14] = EvtDeviceQueryStop;
  v23[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v23);
  v25 = 2;
  LOBYTE(v3) = 22;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v24,
         EvtDeviceSetPower,
         v3,
         &v25,
         1);
  if ( v4 >= 0 )
  {
    v25 = 20;
    LOBYTE(v5) = 27;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
           WdfDriverGlobals,
           v24,
           EvtDeviceWdmIrpPreprocessPnp,
           v5,
           &v25,
           1);
    if ( v4 >= 0 )
    {
      v22 = off_140018040;
      v19 = 0LL;
      v20 = 0x100000001LL;
      v18 = 0LL;
      LODWORD(v18) = 56;
      v21 = 0LL;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
             WdfDriverGlobals,
             &v24,
             &v18,
             &v26);
      if ( v4 >= 0 )
      {
        v7 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v26,
                       off_140018040);
        v4 = ProcLibDeviceCreate(v7);
        if ( v4 >= 0 )
        {
          v15[2] = AcpiCStateIdleComplete;
          v15[0] = 65592LL;
          v15[3] = AcpiCStateIdleComplete;
          v17 = ProcLibThermalNotification;
          v11[1] = v15;
          v11[2] = &GUID_THERMAL_COOLING_INTERFACE;
          v16 = 0LL;
          v15[1] = v7;
          v11[0] = 48LL;
          v12 = 0LL;
          v14 = 0LL;
          v13 = 0LL;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                 WdfDriverGlobals,
                 v26,
                 v11);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                   WdfDriverGlobals,
                   v26,
                   &GUID_DEVINTERFACE_THERMAL_COOLING,
                   0LL);
            if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v6 = 17;
              goto LABEL_19;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 16;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 15;
          v8 = 3;
LABEL_20:
          LODWORD(v10) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            v8,
            v6,
            (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
            v10);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 14;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 12;
LABEL_19:
    v8 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v4;
}
