/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x1801CB0D8
 * Callers:
 *     ?IsOutOfBounds@CInteractionTracker@@UEAA_NXZ @ 0x180270E10 (-IsOutOfBounds@CInteractionTracker@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::IsOutOfBounds(float *a1, int a2)
{
  char result; // al
  int v3; // edx
  float v4; // xmm1_4
  float v5; // xmm0_4
  bool v6; // cc
  float v7; // xmm1_4

  result = 0;
  if ( !a2 )
  {
    v4 = a1[46];
    if ( v4 > a1[52] )
      return 1;
    v5 = a1[49];
LABEL_5:
    v6 = v5 <= v4;
LABEL_6:
    if ( v6 )
      return result;
    return 1;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = a1[47];
    if ( v4 > a1[53] )
      return 1;
    v5 = a1[50];
    goto LABEL_5;
  }
  if ( v3 == 1 )
  {
    v7 = a1[60];
    if ( a1[61] > v7 )
      return 1;
    v6 = v7 <= a1[62];
    goto LABEL_6;
  }
  return result;
}
