/*
 * XREFs of ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x140223544
 * Callers:
 *     _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x1401112D0 (_lambda_c9e4fec9532ca8e5b5101c78de254c3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DCompositionBoostCompositionClockForInput @ 0x14004F0D8 (DCompositionBoostCompositionClockForInput.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ @ 0x140123674 (-CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0 (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer(CCompositionRefreshRateBooster *this)
{
  int v2; // r8d
  int v3; // eax

  CPushLock::AcquireLockExclusive(this);
  if ( !(unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !gbIgnoreStressedOutStuff && !*((_BYTE *)this + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 525);
    *((_BYTE *)this + 16) = 0;
    v3 = DCompositionBoostCompositionClockForInput(0);
    if ( gbIgnoreStressedOutStuff || v3 >= 0 )
      goto LABEL_12;
    v2 = 529;
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    if ( (int)DCompositionBoostCompositionClockForInput(0) >= 0 )
    {
LABEL_12:
      InputTraceLogging::Win32k::CompositionRefreshRateUnboost();
      goto LABEL_13;
    }
    v2 = 514;
LABEL_11:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v2);
    goto LABEL_12;
  }
LABEL_13:
  CPushLock::ReleaseLock(this);
}
