/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x140042BBC
 * Callers:
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  bool v1; // zf
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // r9d
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[128] == 0LL;
  v8 = 0LL;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 3584))(
           WdfDriverGlobals,
           *a1,
           &v8);
    if ( (v3 & 0x80000000) == 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3600))(WdfDriverGlobals, v8);
      a1[128] = v6;
      if ( v6 )
        return v3;
      v3 = -1073741436;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v5 = 289;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v5 = 288;
    }
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(a1[9], v4, 4, v5, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v3);
    return v3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[9], 2, 4, 287, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  return (unsigned int)-1073741436;
}
