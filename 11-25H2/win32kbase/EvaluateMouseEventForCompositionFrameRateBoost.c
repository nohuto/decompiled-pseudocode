/*
 * XREFs of EvaluateMouseEventForCompositionFrameRateBoost @ 0x1400DD218
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DD28C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluateMouseEventForCompositionFrameRateBoost(__int64 a1, __int64 a2)
{
  __int16 v2; // bx
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v3 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3104) )
  {
    v7 = 0LL;
    LODWORD(v7) = 1;
    BYTE10(v7) = v3;
    WORD4(v7) = v2;
    UserSessionState = W32GetUserSessionState(v5, v4);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v7);
  }
}
