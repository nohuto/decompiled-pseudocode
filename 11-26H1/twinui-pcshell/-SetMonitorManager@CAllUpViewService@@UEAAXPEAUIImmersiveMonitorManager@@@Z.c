/*
 * XREFs of ?SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1800E2870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAllUpViewService::SetMonitorManager(CAllUpViewService *this, struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
}
