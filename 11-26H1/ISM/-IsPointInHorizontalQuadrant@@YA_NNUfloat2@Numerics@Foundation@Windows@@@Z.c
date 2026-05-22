/*
 * XREFs of ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C0AEC
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     _o_atan2f_0 @ 0x18009AB24 (_o_atan2f_0.c)
 */

bool __fastcall IsPointInHorizontalQuadrant(__int64 a1)
{
  double v1; // xmm0_8
  double v2; // xmm6_8
  double v3; // xmm1_8

  v2 = v1 * 0.5;
  *(_QWORD *)&v3 = COERCE_UNSIGNED_INT64(o_atan2f_0(a1)) & _xmm;
  return v2 > v3 || v3 > 3.141592741012573 - v2;
}
