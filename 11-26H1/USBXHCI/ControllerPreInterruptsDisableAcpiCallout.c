/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x14002879C
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140028380 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  __int64 v8; // [rsp+30h] [rbp-39h]
  _DWORD v9[2]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v11[3]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v12; // [rsp+88h] [rbp+1Fh] BYREF
  int v13; // [rsp+90h] [rbp+27h] BYREF
  __int128 v14; // [rsp+94h] [rbp+2Bh]

  HIDWORD(v11[0]) = 0;
  HIDWORD(v10[0]) = 0;
  v12 = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B240);
  v4 = *(_QWORD *)(result + 8);
  if ( _bittest64((const signed __int64 *)(v4 + 736), 0x36u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 72), v3, 4, 81, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a1);
    }
    v11[1] = v9;
    v9[0] = 1114203457;
    v10[1] = &v13;
    v9[1] = 1229804112;
    v11[0] = 1LL;
    v11[2] = 8LL;
    v14 = 0LL;
    v13 = 1114596673;
    v10[0] = 1LL;
    v10[2] = 20LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 336))(WdfDriverGlobals, a1);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01033 + 1488))(
               WdfDriverGlobals,
               v5,
               0LL,
               3325956LL,
               v11,
               v10,
               0LL,
               &v12);
    if ( (int)result >= 0 )
    {
      if ( v13 == 1114596673 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 84;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 83;
      }
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_q(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               v7,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 72),
               4u,
               4u,
               0x52u,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               a1,
               v8);
    }
  }
  return result;
}
