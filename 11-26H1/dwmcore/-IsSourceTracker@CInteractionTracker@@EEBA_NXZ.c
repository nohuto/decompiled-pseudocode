/*
 * XREFs of ?IsSourceTracker@CInteractionTracker@@EEBA_NXZ @ 0x1801DAD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::IsSourceTracker(CInteractionTracker *this)
{
  return *((_BYTE *)this + 596) >> 7;
}
