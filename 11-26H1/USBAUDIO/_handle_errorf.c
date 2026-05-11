/*
 * XREFs of _handle_errorf @ 0x14001BC60
 * Callers:
 *     _powf_special @ 0x14001BF10 (_powf_special.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x14001A8E0 (_set_errno_from_matherr.c)
 *     _call_matherr @ 0x14001B990 (_call_matherr.c)
 *     _exception_enabled @ 0x14001BA10 (_exception_enabled.c)
 *     _raise_excf @ 0x14001C490 (_raise_excf.c)
 *     _ctrlfp @ 0x14001C500 (_ctrlfp.c)
 *     __security_check_cookie @ 0x14001C6A0 (__security_check_cookie.c)
 */

float __fastcall handle_errorf(char *a1, int a2, int a3, int a4, int a5, unsigned int a6, float a7, float a8, int a9)
{
  BOOL v13; // eax
  float v14; // xmm6_4
  float v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+B0h] [rbp-58h]

  v17 = ctrlfp(8064LL, 65472LL);
  v16 = *(float *)&a3;
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
      *(float *)&v19 = a8;
      LODWORD(v20) = 1;
    }
    raise_excf((unsigned int)v18, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v16, v17);
  set_errno_from_matherr();
  ctrlfp(v17, 65472LL);
  return v16;
}
