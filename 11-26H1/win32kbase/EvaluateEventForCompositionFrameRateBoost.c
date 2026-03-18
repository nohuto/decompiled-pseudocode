/*
 * XREFs of EvaluateEventForCompositionFrameRateBoost @ 0x1400A1B90
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400A17AC (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluateEventForCompositionFrameRateBoost(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3104) )
  {
    v7 = 0LL;
    LODWORD(v7) = 2;
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v7);
  }
}
