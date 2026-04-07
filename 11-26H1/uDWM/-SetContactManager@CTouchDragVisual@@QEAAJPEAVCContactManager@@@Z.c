/*
 * XREFs of ?SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z @ 0x180079464
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchDragVisual::SetContactManager(CTouchDragVisual *this, struct CContactManager *a2)
{
  *((_QWORD *)this + 49) = a2;
  return 0LL;
}
