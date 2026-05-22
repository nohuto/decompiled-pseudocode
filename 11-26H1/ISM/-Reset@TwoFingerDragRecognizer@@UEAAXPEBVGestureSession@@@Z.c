/*
 * XREFs of ?Reset@TwoFingerDragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801BB100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerDragRecognizer::Reset(TwoFingerDragRecognizer *this, const struct GestureSession *a2)
{
  *((_WORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 5) = 0;
}
