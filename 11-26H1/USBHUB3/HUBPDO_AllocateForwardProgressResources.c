/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x140014BE4
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1400164E0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ebx
  int v7; // [rsp+28h] [rbp-50h]
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v12 = 0LL;
  v9 = 0LL;
  v10 = 0x100000001LL;
  v8 = 0LL;
  LODWORD(v8) = 56;
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *a1;
  *(_QWORD *)&v11 = v2;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(v3 + 16));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v8,
         v4,
         a1 + 282);
  if ( v5 >= 0 )
  {
    a1[284] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[282]);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x9Au,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
