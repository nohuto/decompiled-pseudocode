/*
 * XREFs of ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x140023B50
 * Callers:
 *     ??_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z @ 0x140023B30 (--_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x140022CCC (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::~CIFlipPresentHistoryTokenFlipManager(CFlipManagerToken **this)
{
  *this = (CFlipManagerToken *)&CIFlipPresentHistoryTokenFlipManager::`vftable';
  CFlipManagerToken::UnlockAndRelease(this[1]);
  *this = (CFlipManagerToken *)&CIFlipPresentHistoryTokenData::`vftable';
}
