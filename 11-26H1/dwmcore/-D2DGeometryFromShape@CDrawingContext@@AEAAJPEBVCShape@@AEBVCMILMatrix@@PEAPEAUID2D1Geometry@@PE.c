/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801810A0
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  const struct CMILMatrix *v5; // r10
  char v6; // cl
  char v7; // di
  char v8; // al
  __int64 result; // rax
  unsigned int v10; // ebx
  __int32 v11; // xmm2_4

  v5 = a3;
  *a4 = 0LL;
  v6 = *((_BYTE *)a3 + 65);
  if ( (v6 & 0x20) != 0 || 4 * (v6 & 0xF0) == 0 )
  {
    if ( (v6 & 0x20) != 0 )
    {
      v7 = 1;
    }
    else
    {
      COERCE_FLOAT(v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & v11) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & v11) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)a3 + 15) & v11))
                        - 1.0) & v11) < 0.000081380211 )
      {
        v7 = 1;
        v8 = -16;
      }
      else
      {
        v7 = 0;
        v8 = 16;
      }
      *((_BYTE *)a3 + 65) = v8 ^ (v8 ^ v6) & 0xCF;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v7 )
    v5 = 0LL;
  LODWORD(result) = (*(__int64 (__fastcall **)(const struct CShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a2 + 24LL))(
                      a2,
                      v5,
                      a4);
  v10 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x975u, 0LL);
    return v10;
  }
  if ( !a5 )
    return v10;
  *a5 = v7 ^ 1;
  return (unsigned int)result;
}
