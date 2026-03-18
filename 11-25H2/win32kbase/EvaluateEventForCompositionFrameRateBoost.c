/*
 * XREFs of EvaluateEventForCompositionFrameRateBoost @ 0x1400DD1C0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DD28C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluateEventForCompositionFrameRateBoost(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3104) )
  {
    v5 = 0LL;
    LODWORD(v5) = 2;
    UserSessionState = W32GetUserSessionState(v3, v2);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v5);
  }
}
