/*
 * XREFs of ?SetVidPnSourceId@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAXI@Z @ 0x14004E180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetVidPnSourceId(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        int a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 24LL) = a2;
}
