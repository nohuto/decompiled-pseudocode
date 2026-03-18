/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x14015F460
 * Callers:
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x14015F2D0 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 * Callees:
 *     _finite @ 0x1401C7A30 (_finite.c)
 *     ?FloatingPointExceptionFilter@@YAKJ@Z @ 0x1402193EC (-FloatingPointExceptionFilter@@YAKJ@Z.c)
 *     sqrtf_0 @ 0x14024BBE8 (sqrtf_0.c)
 */

__int64 __fastcall D3DXMatrixDeterminant(float *a1, const struct _D3DMATRIX *a2)
{
  unsigned int v3; // ebx
  float _13; // xmm1_4
  float _14; // xmm2_4
  float _23; // xmm3_4
  float _24; // xmm4_4
  float v8; // xmm9_4
  float v9; // xmm11_4
  float v10; // xmm8_4
  float v11; // xmm12_4
  float v12; // xmm10_4
  float v13; // xmm13_4
  float v14; // xmm6_4

  v3 = 0;
  _13 = a2->_13;
  _14 = a2->_14;
  _23 = a2->_23;
  _24 = a2->_24;
  v8 = (float)(_24 * _13) - (float)(_23 * _14);
  v9 = (float)(a2->_34 * _13) - (float)(a2->_33 * _14);
  v10 = (float)(a2->_44 * _13) - (float)(a2->_43 * _14);
  v11 = (float)(a2->_34 * _23) - (float)(a2->_33 * _24);
  v12 = (float)(a2->_44 * _23) - (float)(a2->_43 * _24);
  v13 = (float)(a2->_44 * a2->_33) - (float)(a2->_43 * a2->_34);
  v14 = 1.0
      / sqrtf_0(
          (float)((float)((float)((float)((float)((float)(a2->_12 * v12) - (float)(a2->_22 * v10))
                                        + (float)(a2->_42 * v8))
                                * a2->_31)
                        + (float)((float)((float)((float)(a2->_22 * v9) - (float)(a2->_32 * v8)) - (float)(a2->_12 * v11))
                                * a2->_41))
                + (float)((float)((float)((float)(a2->_32 * v10) - (float)(a2->_42 * v9)) - (float)(a2->_12 * v13))
                        * a2->_21))
        + (float)((float)((float)((float)(a2->_22 * v13) - (float)(a2->_32 * v12)) + (float)(a2->_42 * v11)) * a2->_11));
  if ( finite(v14) )
  {
    *a1 = v14;
    return 1;
  }
  return v3;
}
