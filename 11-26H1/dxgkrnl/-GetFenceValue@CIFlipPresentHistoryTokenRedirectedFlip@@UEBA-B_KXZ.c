/*
 * XREFs of ?GetFenceValue@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA?B_KXZ @ 0x14004BB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetFenceValue(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return **((_QWORD **)this + 1);
}
