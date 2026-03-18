/*
 * XREFs of ?GetIndependentFlipCandidate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14005D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCandidate(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 92LL);
}
