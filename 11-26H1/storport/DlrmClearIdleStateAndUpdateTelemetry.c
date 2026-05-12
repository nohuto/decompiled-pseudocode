/*
 * XREFs of DlrmClearIdleStateAndUpdateTelemetry @ 0x14012CF58
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     <none>
 */

void __fastcall DlrmClearIdleStateAndUpdateTelemetry(__int64 a1)
{
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned __int64 v3; // rcx

  if ( a1 )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 12), 3u) )
    {
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v3 = _InterlockedExchange64((volatile __int64 *)(a1 + 288), 0LL);
      if ( v3 )
      {
        if ( UnbiasedInterruptTime > v3 )
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 296), UnbiasedInterruptTime - v3);
      }
    }
  }
}
