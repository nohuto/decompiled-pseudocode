/*
 * XREFs of ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x14005F5D0
 * Callers:
 *     ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x140071060 (-UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z.c)
 *     ??1NdisWdfIdle@@QEAA@XZ @ 0x1400762B0 (--1NdisWdfIdle@@QEAA@XZ.c)
 *     ndisWdfIdleTimerFired @ 0x1400B2FF0 (ndisWdfIdleTimerFired.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x14005F6A0 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x140060030 (-SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z.c)
 *     ?EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x140060070 (-EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ?LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z @ 0x1400E9998 (-LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2)
{
  KIRQL v4; // al
  unsigned __int8 v5; // si
  int v6; // ecx
  bool v7; // di
  SmFx::StateMachineEngine::StateMachineEngineImpl *v8; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
  *((_BYTE *)this + 1009) = v4;
  v5 = v4;
  v6 = *((_DWORD *)this + 248);
  if ( v6 == 5 )
  {
    if ( a2 == *((_WORD *)this + 440) )
    {
      SmFx::StateMachineEngine::StateMachineEngineImpl::LogEventEnqueue(this, a2);
      *((_WORD *)this + 440) = 0;
      goto LABEL_5;
    }
    v7 = 0;
  }
  else
  {
    v7 = v6 == 1;
  }
  if ( !SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEventWithDisposition(this, a2) )
    return;
  if ( !v7 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
    return;
  }
LABEL_5:
  SmFx::StateMachineEngine::StateMachineEngineImpl::SetRunningDetails(this, v5, 0);
  SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(v8);
}
