/*
 * XREFs of ??$ReadInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthTrackingInfo@123@AEA_N2PEBG@Z @ 0x180048390
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F91C (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18004FD20 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::HealthTrackingInfo>(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        _BYTE *a4,
        _BYTE *pcbData)
{
  _BYTE *v5; // rax
  const WCHAR *v7; // rdx
  LSTATUS result; // eax

  v5 = pcbData;
  *a4 = 0;
  v7 = (const WCHAR *)(a1 + 216);
  LODWORD(pcbData) = 92;
  *v5 = 1;
  if ( *(_QWORD *)(a1 + 240) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  result = RegGetValueW(HKEY_CURRENT_USER, v7, 0LL, 8u, 0LL, a2, (LPDWORD)&pcbData);
  if ( result || (unsigned int)pcbData <= 4 || *(_BYTE *)a2 != 4 )
  {
    *a2 = 0;
    *(_BYTE *)a2 = 4;
    return (unsigned int)memset_0(a3, 0, 0x58uLL);
  }
  return result;
}
