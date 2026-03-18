/*
 * XREFs of ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x14014CCC4
 * Callers:
 *     _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x14014CC90 (_lambda_c9e4fec9532ca8e5b5101c78de254c3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1400A98F0 (DCompositionBoostCompositionClockForInput.c)
 *     ?CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ @ 0x1400F1B80 (-CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer(CCompositionRefreshRateBooster *this)
{
  CPushLock::AcquireLockExclusive(this);
  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    if ( (int)DCompositionBoostCompositionClockForInput(0LL) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 512LL);
    InputTraceLogging::Win32k::CompositionRefreshRateUnboost();
  }
  CPushLock::ReleaseLock(this);
}
