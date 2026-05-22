/*
 * XREFs of ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801B9F24
 * Callers:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801B9CF8 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801BABC0 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BACE8 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BB808 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BB908 (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::ExceedsThreshold(
        GestureRecognizer *this,
        const struct tagPOINT *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int x; // eax
  unsigned int y; // eax
  bool result; // al

  x = -a2->x;
  if ( a2->x > 0 )
    x = a2->x;
  if ( x > a3 )
    return 1;
  y = -a2->y;
  if ( a2->y > 0 )
    y = a2->y;
  if ( y > a4 )
    return 1;
  result = 0;
  if ( !a3 || !a4 )
    return 1;
  return result;
}
