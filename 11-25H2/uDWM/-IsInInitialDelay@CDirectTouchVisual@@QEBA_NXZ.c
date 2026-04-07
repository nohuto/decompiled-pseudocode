/*
 * XREFs of ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x18002D690
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     <none>
 */

char __fastcall CDirectTouchVisual::IsInInitialDelay(CDirectTouchVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 44);
  result = 0;
  if ( v1 )
  {
    if ( !*(_BYTE *)(v1 + 72) )
      return 1;
  }
  return result;
}
