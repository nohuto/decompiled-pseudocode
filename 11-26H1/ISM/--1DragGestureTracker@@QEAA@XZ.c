/*
 * XREFs of ??1DragGestureTracker@@QEAA@XZ @ 0x1801A4FE8
 * Callers:
 *     ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x18014DC80 (--R-$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragGestureTracker::~DragGestureTracker(DragGestureTracker *this)
{
  if ( *((_QWORD *)this + 2) )
    DestroyInteractionContext();
}
