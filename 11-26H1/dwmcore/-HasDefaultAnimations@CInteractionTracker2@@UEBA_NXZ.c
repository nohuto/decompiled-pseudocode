/*
 * XREFs of ?HasDefaultAnimations@CInteractionTracker2@@UEBA_NXZ @ 0x180273E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker2::HasDefaultAnimations(CInteractionTracker2 *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 98) || *((_QWORD *)this + 99) )
    return 1;
  return result;
}
