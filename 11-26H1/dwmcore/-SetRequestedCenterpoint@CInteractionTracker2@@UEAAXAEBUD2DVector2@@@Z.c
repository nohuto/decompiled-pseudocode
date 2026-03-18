/*
 * XREFs of ?SetRequestedCenterpoint@CInteractionTracker2@@UEAAXAEBUD2DVector2@@@Z @ 0x180276C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::SetRequestedCenterpoint(CInteractionTracker2 *this, const struct D2DVector2 *a2)
{
  *(_QWORD *)((char *)this + 492) = *(_QWORD *)a2;
}
