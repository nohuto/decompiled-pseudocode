/*
 * XREFs of ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800CD2FC
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsHolding(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 34) && !*((_QWORD *)this + 35) )
    return *((_QWORD *)this + 36) == 0LL;
  return result;
}
