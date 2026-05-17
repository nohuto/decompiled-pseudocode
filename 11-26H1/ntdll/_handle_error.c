/*
 * XREFs of _handle_error @ 0x1801303D0
 * Callers:
 *     atan @ 0x1801295F0 (atan.c)
 *     atan2 @ 0x180129860 (atan2.c)
 *     ceil @ 0x18012A230 (ceil.c)
 *     cos @ 0x18012A350 (cos.c)
 *     sin @ 0x18012A6F0 (sin.c)
 *     floor @ 0x18012AC10 (floor.c)
 *     log @ 0x18012AE40 (log.c)
 *     sqrt @ 0x18012C720 (sqrt.c)
 *     tan @ 0x18012D300 (tan.c)
 *     _pow_special @ 0x180131890 (_pow_special.c)
 * Callees:
 *     _call_matherr @ 0x180130280 (_call_matherr.c)
 *     _exception_enabled @ 0x180130300 (_exception_enabled.c)
 *     _raise_exc @ 0x180131040 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x180131370 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1801316F0 (_ctrlfp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  double v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+B0h] [rbp-58h]

  v17 = ctrlfp(8064LL, 65472LL);
  v16 = *(double *)&a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    memset(v18, 0, sizeof(v18));
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( a9 == 2 )
    {
      *(double *)&v19 = a8;
      LODWORD(v20) = 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v16, v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return v16;
}
