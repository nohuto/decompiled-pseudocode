/*
 * XREFs of ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1403B85CC
 * Callers:
 *     ?VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B5AA0 (-VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkFlushHeapTransitions @ 0x1403B8380 (DxgkFlushHeapTransitions.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403B84EC (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushHeapTransitions(ADAPTER_RENDER *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 1056LL))(*((_QWORD *)this + 96));
}
