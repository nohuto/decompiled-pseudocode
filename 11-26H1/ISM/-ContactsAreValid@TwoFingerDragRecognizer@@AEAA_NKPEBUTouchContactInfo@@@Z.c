/*
 * XREFs of ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801BABC0
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BAAB0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BACE8 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BAD9C (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BAEB8 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801B9F24 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

bool __fastcall TwoFingerDragRecognizer::ContactsAreValid(
        TwoFingerDragRecognizer *this,
        int a2,
        const struct TouchContactInfo *a3)
{
  __int64 i; // r9
  unsigned int v4; // r9d
  int v5; // rcx^4
  __int64 v6; // r10
  int v7; // r11d
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  GestureRecognizer *v10; // rcx
  struct tagPOINT v12; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 != 2 )
    return 0;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)this + i + 7) != *((unsigned __int16 *)a3 + 20 * i + 1) )
      return 0;
  }
  v4 = *((unsigned __int16 *)this + 38);
  v12 = (struct tagPOINT)__PAIR64__(
                           *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 12),
                           *((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11));
  if ( GestureRecognizer::ExceedsThreshold(*(GestureRecognizer **)&v12, &v12, v4, v4) )
    return 0;
  v8 = v7 - (*(_DWORD *)(v6 + 36) - *(_DWORD *)(v6 + 44));
  v9 = *(unsigned __int16 *)(v6 + 86);
  v12.y = *(_DWORD *)(v6 + 40) - *(_DWORD *)(v6 + 48);
  v10 = (GestureRecognizer *)(unsigned int)(v5 - v12.y);
  v12 = (struct tagPOINT)__PAIR64__((unsigned int)v10, v8);
  return !GestureRecognizer::ExceedsThreshold(v10, &v12, v9, v9);
}
