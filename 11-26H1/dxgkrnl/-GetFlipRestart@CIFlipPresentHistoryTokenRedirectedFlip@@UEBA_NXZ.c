/*
 * XREFs of ?GetFlipRestart@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x14004D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetFlipRestart(CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x20) != 0;
}
