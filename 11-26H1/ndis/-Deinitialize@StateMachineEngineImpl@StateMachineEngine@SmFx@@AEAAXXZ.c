/*
 * XREFs of ?Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E93E8
 * Callers:
 *     ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400E93B8 (--1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ.c)
 * Callees:
 *     ?Deinitialize@Worker@SmFx@@QEAAXXZ @ 0x1400E9EA0 (-Deinitialize@Worker@SmFx@@QEAAXXZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::Deinitialize(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  KSPIN_LOCK *v1; // rbx
  void *v3; // rcx

  v1 = (KSPIN_LOCK *)((char *)this + 1000);
  **((_QWORD **)this + 131) = 0LL;
  *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
  *((_DWORD *)this + 248) = 0;
  KeReleaseSpinLock(v1, *((_BYTE *)v1 + 9));
  SmFx::Worker::Deinitialize((SmFx::StateMachineEngine::StateMachineEngineImpl *)((char *)this + 1016));
  v3 = (void *)*((_QWORD *)this + 109);
  if ( v3 )
  {
    ExFreePool(v3);
    *((_QWORD *)this + 109) = 0LL;
  }
  *((_BYTE *)this + 1008) = 0;
}
