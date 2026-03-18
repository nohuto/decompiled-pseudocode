/*
 * XREFs of ?SetIndependentFlipForceNotifyDwm@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x14005D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipForceNotifyDwm(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 85LL) = a2;
}
