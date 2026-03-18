/*
 * XREFs of Device_QueryCapabilities @ 0x140044908
 * Callers:
 *     Controller_CreateWdfDevice @ 0x140074FB4 (Controller_CreateWdfDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Device_QueryCapabilities(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int16 v5; // r9
  char v6; // bl
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A8h]
  _QWORD v13[9]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v15[4]; // [rsp+C8h] [rbp-40h] BYREF

  v12 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  memset(v13, 0, sizeof(v13));
  memset(v15, 0, sizeof(v15));
  v2 = *(_QWORD *)(a1 + 88);
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 336))(WdfDriverGlobals, v2);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01033 + 1976))(
             WdfDriverGlobals,
             0LL,
             v3,
             &v10);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v5 = 285;
    goto LABEL_19;
  }
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x34 )
      LODWORD(v11) = -1;
    else
      LODWORD(v11) = *(_DWORD *)(WdfStructures + 416);
  }
  else
  {
    LODWORD(v11) = 24;
  }
  *(_QWORD *)((char *)&v11 + 4) = 0xC00000BB00000000uLL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01033 + 1992))(
    WdfDriverGlobals,
    v10,
    &v11);
  v13[1] = v15;
  LODWORD(v15[0]) = 65600;
  *((_QWORD *)&v15[0] + 1) = -1LL;
  LOWORD(v13[0]) = 2331;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 2016))(
    WdfDriverGlobals,
    v10,
    v13);
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x35 )
      LODWORD(v14) = -1;
    else
      LODWORD(v14) = *(_DWORD *)(WdfStructures + 424);
  }
  else
  {
    LODWORD(v14) = 16;
  }
  DWORD1(v14) = 2;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01033 + 2024))(
         WdfDriverGlobals,
         v10,
         v3,
         &v14);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2032))(WdfDriverGlobals, v10);
  if ( v6 && (int)result >= 0 )
  {
    v7 = v15[1];
    *(_OWORD *)(a1 + 24) = v15[0];
    v8 = v15[2];
    *(_OWORD *)(a1 + 40) = v7;
    v9 = v15[3];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 72) = v9;
    goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 286;
LABEL_19:
    result = WPP_RECORDER_SF_qd(
               *(_QWORD *)(a1 + 16),
               2u,
               4u,
               v5,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               *(_QWORD *)(a1 + 88),
               result);
  }
LABEL_20:
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
  return result;
}
