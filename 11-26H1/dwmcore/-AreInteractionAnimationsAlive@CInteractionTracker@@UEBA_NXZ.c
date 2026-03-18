/*
 * XREFs of ?AreInteractionAnimationsAlive@CInteractionTracker@@UEBA_NXZ @ 0x1801C6CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::AreInteractionAnimationsAlive(CInteractionTracker *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 52) )
  {
    if ( *((_QWORD *)this + 53) )
      return *((_QWORD *)this + 54) != 0LL;
  }
  return result;
}
