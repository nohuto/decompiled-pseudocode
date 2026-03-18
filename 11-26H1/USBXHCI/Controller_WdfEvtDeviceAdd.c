/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x140078A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1400407F0 (Controller_AddControllerToGlobalControllerList.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140042A34 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Device_IsSecureDevice @ 0x1400448F8 (Device_IsSecureDevice.c)
 *     Etw_ControllerCreate @ 0x14004F2F8 (Etw_ControllerCreate.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Command_Create @ 0x140073580 (Command_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140073BAC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ConfigureSxWakeSettings @ 0x140073F24 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x140074FB4 (Controller_CreateWdfDevice.c)
 *     DeviceSlot_Create @ 0x140079940 (DeviceSlot_Create.c)
 *     Interrupter_Create @ 0x14007AD30 (Interrupter_Create.c)
 *     IoControl_Create @ 0x14007C5E8 (IoControl_Create.c)
 *     Register_Create @ 0x14007C7CC (Register_Create.c)
 *     RootHub_Create @ 0x14007D704 (RootHub_Create.c)
 *     Wmi_Create @ 0x14007E598 (Wmi_Create.c)
 *     IntelPptFilter_Create @ 0x14007E824 (IntelPptFilter_Create.c)
 *     SecureChannel_Create @ 0x14007F2B8 (SecureChannel_Create.c)
 *     Controller_ExecuteDSM @ 0x140080FE4 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // ebx
  int v5; // r9d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // [rsp+38h] [rbp-9h] BYREF
  __int64 v17; // [rsp+40h] [rbp-1h] BYREF
  __int64 v18; // [rsp+48h] [rbp+7h] BYREF
  int v19; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp+17h] BYREF
  __int128 v21; // [rsp+78h] [rbp+37h]
  __int64 v22; // [rsp+88h] [rbp+47h]

  v21 = 0LL;
  v20[0] = 56LL;
  LOBYTE(v21) = 0;
  v20[2] = 0LL;
  v20[3] = 0x1000000000LL;
  v22 = 0x200000002LL;
  v20[1] = 0xC800000400LL;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v16 = 0LL;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v20, &v17);
  v4 = ((__int64 (__fastcall *)(__int64, __int64))qword_14006BCA8)(UcxDriverGlobals, a2);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 10;
    goto LABEL_4;
  }
  v4 = Controller_CreateWdfDevice(a2, v17, &v18, (unsigned int *)&v19);
  if ( v4 < 0 )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v18,
         off_14006B240);
  if ( Device_IsSecureDevice(v7) )
  {
    v4 = SecureChannel_Create(v8, v8 + 96);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 11;
LABEL_4:
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(v17, v3, 4, v5, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v4);
        goto LABEL_5;
      }
      goto LABEL_5;
    }
  }
  v4 = Controller_Create(v18, v17, v19, (__int64 *)&v16);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 12;
      goto LABEL_4;
    }
LABEL_5:
    if ( v16 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v16[1]);
    return (unsigned int)v4;
  }
  v9 = v16;
  *(_OWORD *)((char *)v16 + 180) = *(_OWORD *)(v7 + 24);
  *(_OWORD *)((char *)v9 + 196) = *(_OWORD *)(v7 + 40);
  *(_OWORD *)((char *)v9 + 212) = *(_OWORD *)(v7 + 56);
  *(_OWORD *)((char *)v9 + 228) = *(_OWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 8) = v16;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1640))(
    WdfDriverGlobals,
    v16[1],
    Controller_WdfEvtDeviceAdd,
    335LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v4 = IoControl_Create(v18, v16, v16 + 10);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 13;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Register_Create(v16, v16 + 11);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 14;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Interrupter_Create(v18, v16, v16 + 16);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 15;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = DeviceSlot_Create(v10, v16, v16 + 17);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 16;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Command_Create(v11, (__int64)v16, v16 + 18);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 17;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v13 = v16 + 21;
  if ( (v16[92] & 0x800000) != 0 )
  {
    v4 = IntelPptFilter_Create(v18, v16, v13);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 18;
        goto LABEL_4;
      }
      goto LABEL_5;
    }
  }
  else
  {
    *v13 = 0LL;
  }
  v4 = RootHub_Create(v12, v16, v16 + 19);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 19;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = Wmi_Create(v18, v16, v16 + 20);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 20;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  *(_QWORD *)v7 = g_UsbXhciTriageInfo;
  Controller_ConfigureS0IdleSettings((__int64)v16);
  Controller_ConfigureSxWakeSettings(v16);
  KeInitializeSpinLock((PKSPIN_LOCK)v16 + 5);
  v14 = v16 + 6;
  v16[7] = (__int64)(v16 + 6);
  *v14 = (__int64)v14;
  *((_DWORD *)v16 + 16) = 0;
  *((_DWORD *)v16 + 198) = 5;
  Controller_AddControllerToGlobalControllerList((__int64)v16);
  Etw_ControllerCreate(v15, (__int64)v16);
  Controller_QueryControllerCapabilitiesFromACPI((__int64)v16);
  if ( (v16[93] & 1) != 0 )
    Controller_ExecuteDSM(v16, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL);
  return (unsigned int)v4;
}
