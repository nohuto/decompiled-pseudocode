/*
 * XREFs of ?Deinitialize@Worker@SmFx@@QEAAXXZ @ 0x1400E9EA0
 * Callers:
 *     ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400E93B8 (--1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ.c)
 *     ?Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E93E8 (-Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SmFx::Worker::Deinitialize(struct _IO_WORKITEM **this)
{
  struct _IO_WORKITEM *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *this = 0LL;
    this[1] = 0LL;
    this[2] = 0LL;
    this[3] = 0LL;
  }
}
