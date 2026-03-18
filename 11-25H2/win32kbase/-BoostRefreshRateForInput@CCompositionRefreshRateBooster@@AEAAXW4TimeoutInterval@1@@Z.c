/*
 * XREFs of ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x140192D0C
 * Callers:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DD28C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 * Callees:
 *     DCompositionBoostCompositionClockForInput @ 0x14004F0D8 (DCompositionBoostCompositionClockForInput.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ @ 0x1400E4570 (-IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ.c)
 *     ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x140118408 (-CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x140192BE4 (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0 (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CCompositionRefreshRateBooster::BoostRefreshRateForInput(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned int v7; // edi
  char v8; // si

  if ( !(unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline(a1)
    || (UserSessionState = W32GetUserSessionState(v5, v4),
        CInputThreadBase::IsInputProcessingActive(*(CInputThreadBase **)(UserSessionState + 3104))) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 561LL);
      v7 = *(_DWORD *)(a1 + 36);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 32);
    }
    v8 = 0;
    CPushLock::AcquireLockExclusive((CPushLock *)a1);
    if ( *(_BYTE *)(a1 + 16) )
    {
      v8 = 1;
    }
    else
    {
      if ( (int)DCompositionBoostCompositionClockForInput(1) >= 0 )
      {
        *(_BYTE *)(a1 + 16) = 1;
        v8 = 1;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 573LL);
      }
      InputTraceLogging::Win32k::CompositionRefreshRateBoost(v7);
    }
    CPushLock::ReleaseLock((CPushLock *)a1);
    if ( v8 )
      CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)a1, v7);
  }
}
