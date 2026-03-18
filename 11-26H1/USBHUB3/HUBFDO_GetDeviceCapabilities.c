/*
 * XREFs of HUBFDO_GetDeviceCapabilities @ 0x14000E0B8
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBFDO_GetDeviceCapabilities(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // edx
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  __int128 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h]
  _QWORD v14[9]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v15; // [rsp+98h] [rbp+1Fh] BYREF

  v13 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v6,
         &v11);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v12 = 24LL;
    DWORD2(v12) = -1073741637;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 1992))(
      WdfDriverGlobals,
      v11,
      &v12);
    memset(a2, 0, 0x40uLL);
    v8 = v11;
    *a2 = 65600;
    a2[2] = -1;
    a2[3] = -1;
    LOWORD(v14[0]) = 2331;
    v14[1] = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v8,
      v14);
    *(_QWORD *)&v15 = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 2024))(
            WdfDriverGlobals,
            v11,
            v6,
            &v15)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(a3, v9, 5, 10, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v11);
  }
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v7;
}
