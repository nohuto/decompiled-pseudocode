/*
 * XREFs of _handle_errorf @ 0x14053CBA0
 * Callers:
 *     sqrtf @ 0x140539D80 (sqrtf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _call_matherr @ 0x14053C8D0 (_call_matherr.c)
 *     _exception_enabled @ 0x14053C950 (_exception_enabled.c)
 *     _raise_excf @ 0x14053D380 (_raise_excf.c)
 *     _ctrlfp @ 0x14053D3F0 (_ctrlfp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

float __fastcall handle_errorf(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  float v15; // xmm6_4
  float v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v19[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+80h] [rbp-88h]
  __int128 v21; // [rsp+90h] [rbp-78h]
  __int128 v22; // [rsp+A0h] [rbp-68h]
  __int128 v23; // [rsp+B0h] [rbp-58h]

  v18 = ctrlfp(8064LL, 65472LL);
  v17 = *(float *)&a3;
  v13 = exception_enabled(a5, v18);
  v15 = a8;
  if ( !v13 )
  {
    memset(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    if ( a9 == 2 )
    {
      *(float *)&v20 = a8;
      LODWORD(v21) = 1;
    }
    raise_excf((unsigned int)v19, (unsigned int)&v18, a5, a2, (__int64)&a7, (__int64)&v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, v14, COERCE__INT64(v15), v17, v18);
  xHalTimerWatchdogStop();
  ctrlfp(v18, 65472LL);
  return v17;
}
