/*
 * XREFs of ?PromoteToSourceTracker@CInteractionTracker@@EEAAXXZ @ 0x1801DDBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::PromoteToSourceTracker(CInteractionTracker *this)
{
  *((_BYTE *)this + 596) |= 0x80u;
}
