/*
 * XREFs of ?IsClosePointF@@YA_NAEBUD2D_POINT_2F@@0M@Z @ 0x180144200
 * Callers:
 *     ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x1801437BC (-TryAddEdgeFromEndPoints@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClosePointF(const struct D2D_POINT_2F *a1, const struct D2D_POINT_2F *a2, float a3)
{
  __int32 v3; // xmm1_4

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->x - a2->x) & v3)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->y - a2->y) & v3);
}
