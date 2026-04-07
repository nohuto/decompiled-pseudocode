/*
 * XREFs of ??_0D2DVector3@@QEAAAEAU0@M@Z @ 0x1800E9F2C
 * Callers:
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800E9FF0 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall D2DVector3::operator/=(float *a1, float a2)
{
  float *result; // rax
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4

  result = a1;
  v3 = 1.0 / a2;
  v4 = (float)(1.0 / a2) * *a1;
  v5 = (float)(1.0 / a2) * a1[1];
  v6 = v3 * a1[2];
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  return result;
}
