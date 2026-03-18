/*
 * XREFs of ?SetIndependentFlipRequestDwmConfirm@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_N@Z @ 0x14004C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipRequestDwmConfirm(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFFEFFFFF | (a2 << 20);
}
