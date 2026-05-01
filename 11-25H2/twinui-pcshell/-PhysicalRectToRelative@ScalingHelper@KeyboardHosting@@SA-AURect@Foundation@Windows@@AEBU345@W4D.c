/*
 * XREFs of ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1801426F8
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     GetWorkAreaRect @ 0x180476484 (GetWorkAreaRect.c)
 * Callees:
 *     <none>
 */

float *__fastcall KeyboardHosting::ScalingHelper::PhysicalRectToRelative(float *a1, float *a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v3 = *a2;
  if ( a3 )
  {
    v4 = (float)a3;
    v3 = (float)(v3 * 100.0) / (float)a3;
  }
  else
  {
    v4 = 0.0;
  }
  *a1 = v3;
  v5 = a2[1];
  if ( a3 )
    v5 = (float)(v5 * 100.0) / v4;
  v6 = a2[2];
  a1[1] = v5;
  if ( a3 )
    v6 = (float)(v6 * 100.0) / v4;
  v7 = a2[3];
  a1[2] = v6;
  if ( a3 )
    v7 = (float)(v7 * 100.0) / v4;
  a1[3] = v7;
  return a1;
}
