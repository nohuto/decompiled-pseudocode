/*
 * XREFs of Controller_ConfigureSxWakeSettings @ 0x140073F24
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ConfigureSxWakeSettings(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // edx
  _DWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int16 v7; // [rsp+40h] [rbp-18h]
  __int16 v8; // [rsp+42h] [rbp-16h]

  v8 = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x12 )
      v5[0] = -1;
    else
      v5[0] = *(_DWORD *)(WdfStructures + 144);
  }
  else
  {
    v5[0] = 20;
  }
  v2 = *a1;
  v5[1] = 5;
  v6 = 1LL;
  v7 = 257;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01033 + 376))(
             WdfDriverGlobals,
             v2,
             v5);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    return WPP_RECORDER_SF_d(a1[9], v4, 4, 33, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, result);
  }
  return result;
}
