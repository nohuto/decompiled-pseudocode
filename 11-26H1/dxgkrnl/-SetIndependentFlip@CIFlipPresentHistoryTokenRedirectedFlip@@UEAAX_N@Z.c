/*
 * XREFs of ?SetIndependentFlip@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_N@Z @ 0x14004B040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFFFFDFFF | (a2 << 13);
}
