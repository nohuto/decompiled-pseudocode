/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x18007D24C
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x180119CC8 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x1800B31A8 (_o_log10_0.c)
 *     pow @ 0x1800B31B4 (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) <= a2 )
    return o_log10_0(a2) * 20.0;
  else
    return DOUBLE_N192_0;
}
