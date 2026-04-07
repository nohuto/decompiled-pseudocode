/*
 * XREFs of ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ @ 0x1800B83F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectTouchVisual::IsOKToCleanup(CIndirectTouchVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 36) )
    return *((_QWORD *)this + 37) == 0LL;
  return result;
}
