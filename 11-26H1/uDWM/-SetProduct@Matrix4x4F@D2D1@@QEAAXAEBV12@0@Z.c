/*
 * XREFs of ?SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z @ 0x180096768
 * Callers:
 *     ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x180095E0C (--DMatrix4x4F@D2D1@@QEBA-AV01@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall D2D1::Matrix4x4F::SetProduct(
        D2D1::Matrix4x4F *this,
        const struct D2D1::Matrix4x4F *a2,
        const struct D2D1::Matrix4x4F *a3)
{
  *(float *)this = (float)((float)((float)(*(float *)a2 * *(float *)a3)
                                 + (float)(*((float *)a3 + 4) * *((float *)a2 + 1)))
                         + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
                 + (float)(*((float *)a2 + 3) * *((float *)a3 + 12));
  *((float *)this + 1) = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 1))
                                       + (float)(*((float *)a3 + 1) * *(float *)a2))
                               + (float)(*((float *)a3 + 9) * *((float *)a2 + 2)))
                       + (float)(*((float *)a2 + 3) * *((float *)a3 + 13));
  *((float *)this + 2) = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 1))
                                       + (float)(*((float *)a3 + 2) * *(float *)a2))
                               + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
                       + (float)(*((float *)a2 + 3) * *((float *)a3 + 14));
  *((float *)this + 3) = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3))
                                       + (float)(*((float *)a3 + 7) * *((float *)a2 + 1)))
                               + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
                       + (float)(*((float *)a3 + 15) * *((float *)a2 + 3));
  *((float *)this + 4) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 4))
                                       + (float)(*((float *)a2 + 4) * *(float *)a3))
                               + (float)(*((float *)a2 + 6) * *((float *)a3 + 8)))
                       + (float)(*((float *)a2 + 7) * *((float *)a3 + 12));
  *((float *)this + 5) = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 5))
                                       + (float)(*((float *)a3 + 1) * *((float *)a2 + 4)))
                               + (float)(*((float *)a3 + 9) * *((float *)a2 + 6)))
                       + (float)(*((float *)a2 + 7) * *((float *)a3 + 13));
  *((float *)this + 6) = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 5))
                                       + (float)(*((float *)a3 + 2) * *((float *)a2 + 4)))
                               + (float)(*((float *)a2 + 6) * *((float *)a3 + 10)))
                       + (float)(*((float *)a2 + 7) * *((float *)a3 + 14));
  *((float *)this + 7) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 7))
                                       + (float)(*((float *)a2 + 4) * *((float *)a3 + 3)))
                               + (float)(*((float *)a2 + 6) * *((float *)a3 + 11)))
                       + (float)(*((float *)a2 + 7) * *((float *)a3 + 15));
  *((float *)this + 8) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 4))
                                       + (float)(*((float *)a2 + 8) * *(float *)a3))
                               + (float)(*((float *)a2 + 10) * *((float *)a3 + 8)))
                       + (float)(*((float *)a2 + 11) * *((float *)a3 + 12));
  *((float *)this + 9) = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 9))
                                       + (float)(*((float *)a3 + 1) * *((float *)a2 + 8)))
                               + (float)(*((float *)a3 + 9) * *((float *)a2 + 10)))
                       + (float)(*((float *)a2 + 11) * *((float *)a3 + 13));
  *((float *)this + 10) = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 9))
                                        + (float)(*((float *)a3 + 2) * *((float *)a2 + 8)))
                                + (float)(*((float *)a2 + 10) * *((float *)a3 + 10)))
                        + (float)(*((float *)a2 + 11) * *((float *)a3 + 14));
  *((float *)this + 11) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 7))
                                        + (float)(*((float *)a2 + 8) * *((float *)a3 + 3)))
                                + (float)(*((float *)a2 + 10) * *((float *)a3 + 11)))
                        + (float)(*((float *)a2 + 11) * *((float *)a3 + 15));
  *((float *)this + 12) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 4))
                                        + (float)(*((float *)a2 + 12) * *(float *)a3))
                                + (float)(*((float *)a2 + 14) * *((float *)a3 + 8)))
                        + (float)(*((float *)a2 + 15) * *((float *)a3 + 12));
  *((float *)this + 13) = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 13))
                                        + (float)(*((float *)a3 + 1) * *((float *)a2 + 12)))
                                + (float)(*((float *)a3 + 9) * *((float *)a2 + 14)))
                        + (float)(*((float *)a2 + 15) * *((float *)a3 + 13));
  *((float *)this + 14) = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 13))
                                        + (float)(*((float *)a3 + 2) * *((float *)a2 + 12)))
                                + (float)(*((float *)a2 + 14) * *((float *)a3 + 10)))
                        + (float)(*((float *)a2 + 15) * *((float *)a3 + 14));
  *((float *)this + 15) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 7))
                                        + (float)(*((float *)a2 + 12) * *((float *)a3 + 3)))
                                + (float)(*((float *)a2 + 14) * *((float *)a3 + 11)))
                        + (float)(*((float *)a2 + 15) * *((float *)a3 + 15));
}
