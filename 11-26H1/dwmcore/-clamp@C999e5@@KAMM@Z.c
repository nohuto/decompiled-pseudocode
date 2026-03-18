/*
 * XREFs of ?clamp@C999e5@@KAMM@Z @ 0x1802B5DF4
 * Callers:
 *     ?FromD2DColor@C999e5@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1802B5CE8 (-FromD2DColor@C999e5@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall C999e5::clamp(float a1)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( a1 >= 0.0 )
    return fminf(a1, 65408.0);
  return v1;
}
