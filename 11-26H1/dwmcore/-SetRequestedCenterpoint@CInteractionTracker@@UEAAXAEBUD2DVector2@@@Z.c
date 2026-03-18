/*
 * XREFs of ?SetRequestedCenterpoint@CInteractionTracker@@UEAAXAEBUD2DVector2@@@Z @ 0x1802711C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetRequestedCenterpoint(CInteractionTracker *this, const struct D2DVector2 *a2)
{
  *(_QWORD *)((char *)this + 252) = *(_QWORD *)a2;
}
