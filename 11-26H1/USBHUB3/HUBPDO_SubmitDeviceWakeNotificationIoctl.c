/*
 * XREFs of HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x14001BC60
 * Callers:
 *     HUBPDO_EvtDeviceEnableWakeAtBus @ 0x140016190 (HUBPDO_EvtDeviceEnableWakeAtBus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBPDO_SubmitDeviceWakeNotificationIoctl(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-41h]
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+38h] [rbp-31h]
  __int64 v15; // [rsp+3Ch] [rbp-2Dh]
  int v16; // [rsp+44h] [rbp-25h]
  _QWORD v17[9]; // [rsp+48h] [rbp-21h] BYREF

  v1 = *a1;
  v2 = 0;
  v13 = 24LL;
  v15 = 0LL;
  v16 = 0;
  v4 = *(_QWORD *)(v1 + 32);
  v5 = a1[2];
  v14 = 0;
  v6 = *(_QWORD *)(v5 + 264);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v6,
         &v13);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v7);
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_14006D128);
  *(_OWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_WORD *)(v9 + 2) = 24;
  KeClearEvent((PRKEVENT)(v9 + 24));
  memset(v17, 0, sizeof(v17));
  v17[2] = a1[3];
  LOBYTE(v17[0]) = 15;
  LODWORD(v17[3]) = 4784139;
  v17[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v6,
    v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v6,
    HUBPDO_WakeNotificationIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v6,
          v4,
          0LL) )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v6);
    v2 = v10;
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        4u,
        5u,
        0x99u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v12);
    }
  }
  return v2;
}
