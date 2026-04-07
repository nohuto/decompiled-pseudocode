/*
 * XREFs of ??_0D2DVector2@@QEAAAEAU0@M@Z @ 0x1800E9F00
 * Callers:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800188F4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall D2DVector2::operator/=(float *a1, float a2)
{
  float *result; // rax
  float v3; // xmm0_4

  result = a1;
  v3 = (float)(1.0 / a2) * *a1;
  a1[1] = (float)(1.0 / a2) * a1[1];
  *a1 = v3;
  return result;
}
