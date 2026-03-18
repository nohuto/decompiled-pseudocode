/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker2@@QEAA_NW4ScrollAxis@@@Z @ 0x180274160
 * Callers:
 *     ?IsOutOfBounds@CInteractionTracker2@@UEAA_NXZ @ 0x1802741E0 (-IsOutOfBounds@CInteractionTracker2@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker2::IsOutOfBounds(float *a1, int a2)
{
  char result; // al
  int v3; // edx
  float v4; // xmm1_4
  bool v5; // cc
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  if ( !a2 )
  {
    v6 = a1[106];
    if ( v6 > a1[112] )
      return 1;
    v7 = a1[109];
    goto LABEL_10;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = a1[107];
    if ( v6 > a1[113] )
      return 1;
    v7 = a1[110];
LABEL_10:
    v5 = v7 <= v6;
LABEL_11:
    if ( v5 )
      return result;
    return 1;
  }
  if ( v3 != 1 )
    return result;
  v4 = a1[120];
  if ( a1[121] <= v4 )
  {
    v5 = v4 <= a1[122];
    goto LABEL_11;
  }
  return 1;
}
