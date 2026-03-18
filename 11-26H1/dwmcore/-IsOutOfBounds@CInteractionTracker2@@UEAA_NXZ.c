/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker2@@UEAA_NXZ @ 0x1802741E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker2@@QEAA_NW4ScrollAxis@@@Z @ 0x180274160 (-IsOutOfBounds@CInteractionTracker2@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker2::IsOutOfBounds(CInteractionTracker2 *this)
{
  float *v1; // rcx
  float *v2; // rcx
  char v3; // r8

  if ( CInteractionTracker2::IsOutOfBounds((float *)this, 0)
    || CInteractionTracker2::IsOutOfBounds(v1, 1)
    || CInteractionTracker2::IsOutOfBounds(v2, 2) )
  {
    return 1;
  }
  return v3;
}
