/*
 * XREFs of ?SetDxgContext@CIFlipPresentHistoryTokenFlipManager@@UEAAX_K@Z @ 0x14005DCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetDxgContext(
        CIFlipPresentHistoryTokenFlipManager *this,
        __int64 a2)
{
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 72LL) = a2;
}
