/*
 * XREFs of ?IsSourceTracker@CInteractionTracker2@@EEBA_NXZ @ 0x180219670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker2::IsSourceTracker(CInteractionTracker2 *this)
{
  return *((_BYTE *)this + 829) & 1;
}
