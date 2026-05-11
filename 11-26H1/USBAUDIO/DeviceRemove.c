/*
 * XREFs of DeviceRemove @ 0x14000BF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14000BEAC (McGenEventUnregister_EtwUnregister.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     WmiUnregisterProvider @ 0x14002E704 (WmiUnregisterProvider.c)
 */

NTSTATUS __fastcall DeviceRemove(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  PDEVICE_OBJECT v5; // rcx
  void *v6; // rcx
  KIRQL v7; // al
  __int64 v8; // r8
  _QWORD *v9; // rdx

  v3 = *(_QWORD **)(a1 + 16);
  v5 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline(v5, a2, a3) && v3[66] )
    v3[66] = PoRegisterDeviceForIdleDetection(*(PDEVICE_OBJECT *)(a1 + 32), 0, 0, PowerDeviceD3);
  v6 = (void *)v3[65];
  if ( v6 )
  {
    PoDeletePowerRequest(v6);
    v3[65] = 0LL;
  }
  (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 24))(a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v8 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v9 = (_QWORD *)v3[1], (_QWORD *)*v9 != v3) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  --WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v7);
  WmiUnregisterProvider(a1);
  return McGenEventUnregister_EtwUnregister();
}
