/*
 * XREFs of ?HasDefaultAnimations@CInteractionTracker@@UEBA_NXZ @ 0x180270CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::HasDefaultAnimations(CInteractionTracker *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 69) || *((_QWORD *)this + 70) )
    return 1;
  return result;
}
