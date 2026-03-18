/*
 * XREFs of ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400A17AC
 * Callers:
 *     EvaluateEventForCompositionFrameRateBoost @ 0x1400A1B90 (EvaluateEventForCompositionFrameRateBoost.c)
 *     EvaluatePointerEventForCompositionFrameRateBoost @ 0x1400A1CBC (EvaluatePointerEventForCompositionFrameRateBoost.c)
 * Callees:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        CCompositionRefreshRateBooster *this,
        const struct InputHelper::CompositionFrameRateBoostCandidateEvent *a2)
{
  _DWORD *v2; // r8
  int v3; // edx

  if ( *((_BYTE *)this + 40) )
  {
    if ( *(_DWORD *)a2 )
    {
      LODWORD(v2) = *(_DWORD *)a2 - 1;
      if ( *(_DWORD *)a2 == 1 )
      {
        if ( (*((_WORD *)a2 + 4) & 0xC00) == 0 )
        {
          if ( !*((_BYTE *)a2 + 10) )
            return;
          v3 = 0;
          goto LABEL_7;
        }
      }
      else if ( *(_DWORD *)a2 != 2 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 628LL);
        return;
      }
LABEL_12:
      v3 = 1;
LABEL_7:
      CCompositionRefreshRateBooster::BoostRefreshRateForInput((__int64)this, v3, (int)v2);
      return;
    }
    v2 = (_DWORD *)*((_QWORD *)a2 + 1);
    if ( (*v2 == 2 || *v2 == 3) && (v2[3] & 4) != 0 )
      goto LABEL_12;
  }
}
