/*
 * XREFs of EvaluatePointerEventForCompositionFrameRateBoost @ 0x1400A1CBC
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140062CC0 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400A17AC (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluatePointerEventForCompositionFrameRateBoost(__int64 a1, int a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  __int64 UserSessionState; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3104) )
  {
    v7[0] = 0LL;
    v7[1] = a1;
    UserSessionState = W32GetUserSessionState(0, v4, v5);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)v7);
  }
}
