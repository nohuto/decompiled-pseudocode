/*
 * XREFs of _handle_qnan1 @ 0x180130D40
 * Callers:
 *     fabs @ 0x18012A880 (fabs.c)
 * Callees:
 *     _errno @ 0x180106E40 (_errno.c)
 *     _umatherr @ 0x180131120 (_umatherr.c)
 *     _ctrlfp @ 0x180131460 (_ctrlfp.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall handle_qnan1(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( matherr_flag )
  {
    *errno() = 33;
    ctrlfp(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    umatherr(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
