/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@UEAA_NXZ @ 0x180270E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x1801CB0D8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  float *v1; // rcx
  float *v2; // rcx
  char v3; // r8

  if ( CInteractionTracker::IsOutOfBounds((float *)this, 0)
    || CInteractionTracker::IsOutOfBounds(v1, 1)
    || CInteractionTracker::IsOutOfBounds(v2, 2) )
  {
    return 1;
  }
  return v3;
}
