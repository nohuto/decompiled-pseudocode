/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1802616F4
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float y; // xmm4_4
  float z; // xmm5_4
  float w; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  struct D2D_VECTOR_4F *result; // rax
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm3_4
  float v13; // xmm2_4

  y = a3->y;
  z = a3->z;
  w = a3->w;
  v7 = a4->x - a3->x;
  v8 = a4->y - y;
  result = this;
  v10 = a4->z - z;
  v11 = a4->w - w;
  v12 = (float)((float)((float)(retstr->y * v8) + (float)(retstr->x * v7)) + (float)(retstr->z * v10))
      + (float)(retstr->w * v11);
  if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 0.0000011920929 )
  {
    *this = *a3;
  }
  else
  {
    v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(a3->x * retstr->x) + (float)(y * retstr->y)) + (float)(z * retstr->z))
                       + (float)(w * retstr->w)) ^ _xmm)
        / v12;
    this->x = (float)(v13 * v7) + a3->x;
    this->y = (float)(v13 * v8) + y;
    this->z = (float)(v13 * v10) + z;
    this->w = (float)(v13 * v11) + w;
  }
  return result;
}
