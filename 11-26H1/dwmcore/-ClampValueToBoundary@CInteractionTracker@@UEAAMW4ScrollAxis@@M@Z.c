/*
 * XREFs of ?ClampValueToBoundary@CInteractionTracker@@UEAAMW4ScrollAxis@@M@Z @ 0x1801D7DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CInteractionTracker::ClampValueToBoundary(float *a1, int a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // edx

  v3 = 0.0;
  v4 = 0.0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v3 = a1[61];
        v4 = a1[62];
      }
    }
    else
    {
      v3 = a1[50];
      v4 = a1[53];
    }
  }
  else
  {
    v3 = a1[49];
    v4 = a1[52];
  }
  *(float *)&a3 = fminf(fmaxf(*(float *)&a3, v3), v4);
  return *(__m128 *)&a3;
}
