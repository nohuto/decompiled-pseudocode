/*
 * XREFs of ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800AF650
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MILMatrix3x2::Is2DAxisAlignedPreservingApprox(MILMatrix3x2 *this)
{
  __int32 v1; // xmm2_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(*((_DWORD *)this + 1) & v1) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 2) & v1) < 0.0000081380213
      || COERCE_FLOAT(*(_DWORD *)this & v1) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 3) & v1) < 0.0000081380213;
}
