/*
 * XREFs of HUBREG_WriteStringToDeviceHardwareKey @ 0x14008D288
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_WriteStringToDeviceHardwareKey(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v6; // rax
  int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v6,
         1LL,
         131078LL,
         0LL,
         &v11);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v8 = 98;
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1960))(
         WdfDriverGlobals,
         v11,
         &g_SymbolicName,
         a3);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 99;
LABEL_7:
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v8,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v10);
  }
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v7;
}
