/*
 * XREFs of ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400A17AC (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 * Callees:
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x14006ED8C (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1400A98F0 (DCompositionBoostCompositionClockForInput.c)
 *     ?IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ @ 0x14012A73C (-IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ.c)
 *     ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x14014D41C (-CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::BoostRefreshRateForInput(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  unsigned int v6; // edi
  char v7; // si

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( CInputThreadBase::IsInputProcessingActive(*(CInputThreadBase **)(UserSessionState + 3104)) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 541LL);
      v6 = *(_DWORD *)(a1 + 36);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 32);
    }
    v7 = 0;
    CPushLock::AcquireLockExclusive((CPushLock *)a1);
    if ( *(_BYTE *)(a1 + 16) )
    {
      v7 = 1;
    }
    else
    {
      if ( (int)DCompositionBoostCompositionClockForInput(1) >= 0 )
      {
        *(_BYTE *)(a1 + 16) = 1;
        v7 = 1;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 553LL);
      }
      InputTraceLogging::Win32k::CompositionRefreshRateBoost(v6);
    }
    CPushLock::ReleaseLock((CPushLock *)a1);
    if ( v7 )
      CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)a1, v6);
  }
}
