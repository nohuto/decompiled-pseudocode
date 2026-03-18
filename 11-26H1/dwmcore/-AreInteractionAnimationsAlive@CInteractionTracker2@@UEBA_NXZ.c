/*
 * XREFs of ?AreInteractionAnimationsAlive@CInteractionTracker2@@UEBA_NXZ @ 0x1801E10F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker2::AreInteractionAnimationsAlive(CInteractionTracker2 *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 81) )
  {
    if ( *((_QWORD *)this + 82) )
      return *((_QWORD *)this + 83) != 0LL;
  }
  return result;
}
