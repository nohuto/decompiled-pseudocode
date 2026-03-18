/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140223160
 * Callers:
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1402236D0 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x140084168 (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rax
  DXG_VMBUS_CHANNEL_BASE *v3; // rbx

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140168448)(a1);
  v3 = (DXG_VMBUS_CHANNEL_BASE *)(v2 + 4712);
  KeSetEvent(*(PRKEVENT *)(v2 + 4768), 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel(v3);
}
