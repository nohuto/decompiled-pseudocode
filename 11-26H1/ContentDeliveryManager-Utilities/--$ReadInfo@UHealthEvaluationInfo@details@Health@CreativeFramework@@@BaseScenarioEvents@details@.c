/*
 * XREFs of ??$ReadInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x1800482EC
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F91C (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        _BYTE *a4,
        _BYTE *pcbData)
{
  _BYTE *v5; // rax
  const WCHAR *v7; // rdx
  LSTATUS result; // eax

  v5 = pcbData;
  *a4 = 0;
  v7 = (const WCHAR *)(a1 + 216);
  LODWORD(pcbData) = 36;
  *v5 = 1;
  if ( *(_QWORD *)(a1 + 240) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  result = RegGetValueW(HKEY_CURRENT_USER, v7, L"HealthEvaluation", 8u, 0LL, a2, (LPDWORD)&pcbData);
  if ( result || (unsigned int)pcbData <= 4 || *(_BYTE *)a2 != 4 )
  {
    *a2 = 0;
    *(_BYTE *)a2 = 4;
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  return result;
}
