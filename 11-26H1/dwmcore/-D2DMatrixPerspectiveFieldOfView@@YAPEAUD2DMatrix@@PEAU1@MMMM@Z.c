/*
 * XREFs of ?D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x180292CEC
 * Callers:
 *     ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x180211C50 (-Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     tanf_0 @ 0x1802B97A4 (tanf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixPerspectiveFieldOfView(
        struct D2DMatrix *a1,
        float a2,
        float a3,
        float a4,
        float a5)
{
  float v6; // xmm0_4
  struct D2DMatrix *result; // rax
  float v8; // xmm0_4

  if ( a2 <= 0.0 || a2 >= 3.1415927 || a4 <= 0.0 || a5 <= 0.0 || a4 >= a5 )
    return 0LL;
  v6 = tanf_0(a2 * 0.5);
  *((_QWORD *)a1 + 1) = 0LL;
  *((_DWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 6) = 0LL;
  result = a1;
  *((_DWORD *)a1 + 11) = -1082130432;
  v8 = 1.0 / v6;
  *((float *)a1 + 5) = v8;
  *(float *)a1 = v8 / a3;
  *((float *)a1 + 10) = a5 / (float)(a4 - a5);
  *((float *)a1 + 14) = (float)(a4 * a5) / (float)(a4 - a5);
  return result;
}
