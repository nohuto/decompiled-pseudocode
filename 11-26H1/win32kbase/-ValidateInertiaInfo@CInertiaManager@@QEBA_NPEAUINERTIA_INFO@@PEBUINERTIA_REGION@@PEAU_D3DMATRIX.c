/*
 * XREFs of ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x14015F2D0
 * Callers:
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 * Callees:
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x14015F460 (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 *     ?FloatingPointExceptionFilter@@YAKJ@Z @ 0x1402193EC (-FloatingPointExceptionFilter@@YAKJ@Z.c)
 *     sqrt_0 @ 0x14024BBD6 (sqrt_0.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall CInertiaManager::ValidateInertiaInfo(
        CInertiaManager *this,
        struct INERTIA_INFO *a2,
        D3DVALUE *a3,
        struct _D3DMATRIX *a4,
        double *a5)
{
  char v8; // bl
  int v9; // ecx
  double v10; // xmm7_8
  double v11; // xmm8_8
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v15; // [rsp+90h] [rbp+8h] BYREF
  D3DVALUE *v16; // [rsp+A0h] [rbp+18h]
  struct _D3DMATRIX *v17; // [rsp+A8h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v8 = 1;
  v9 = *((_DWORD *)a2 + 2);
  if ( v9 == 1 || ((v9 - 2) & 0xFFFFFFF9) == 0 && v9 != 6 )
  {
    v10 = *(float *)a2;
    v11 = *((float *)a2 + 1);
    v12 = sqrt_0(v10 * v10 + v11 * v11);
    if ( v12 <= 0.0 )
    {
      v8 = 0;
    }
    else
    {
      v13 = v10 / v12;
      *(float *)a2 = v13;
      *((float *)a2 + 1) = v11 / v12;
    }
    if ( !v8 )
      return v8;
    if ( !a3 )
    {
      *a5 = 0.0;
      return v8;
    }
    memset(a4, 0, sizeof(struct _D3DMATRIX));
    a4->_11 = a3[4];
    a4->_12 = a3[5];
    a4->_21 = a3[6];
    a4->_22 = a3[7];
    a4->_33 = 1.0;
    a4->_41 = a3[8];
    a4->_42 = a3[9];
    a4->_44 = 1.0;
    if ( (unsigned int)D3DXMatrixDeterminant(&v15, a4) )
    {
      *a5 = v12;
      return v8;
    }
  }
  return 0;
}
