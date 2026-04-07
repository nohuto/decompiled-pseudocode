/*
 * XREFs of ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800CD330
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsOKToCleanup(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 34) && !*((_QWORD *)this + 35) && !*((_QWORD *)this + 36) )
    return *((_QWORD *)this + 37) == 0LL;
  return result;
}
