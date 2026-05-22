/*
 * XREFs of SignedNormalize @ 0x18017FED8
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall SignedNormalize(float a1, float a2, float a3)
{
  float v3; // xmm3_4

  if ( a1 >= 0.0 )
    v3 = FLOAT_1_0;
  else
    v3 = FLOAT_N1_0;
  return (float)(fminf(fmaxf(COERCE_FLOAT(LODWORD(a1) & _xmm) - a2, 0.0), a3 - a2) / (float)(a3 - a2)) * v3;
}
