/*
 * XREFs of ?SetPlaneIndex@CIFlipPresentHistoryTokenFlipManager@@UEAAXI@Z @ 0x14005E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetPlaneIndex(CIFlipPresentHistoryTokenFlipManager *this, int a2)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 80LL) = a2;
}
