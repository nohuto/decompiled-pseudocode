/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D44B0 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x140146808 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x140146BA0 (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140147A38 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x140190E54 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14019118C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x140191C10 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int8 (*v2)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 (*v3)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8

  RtlRunOnceInitialize(&stru_14011E9D0);
  ndisIfInterfaceSubsystemInitialize();
  qword_14011E9E0 = (__int64)&qword_14011E9D8;
  qword_14011E9D8 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8;
  qword_14011E9F0 = (__int64)&qword_14011E9E8;
  qword_14011E9E8 = (__int64)&qword_14011E9E8;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_14011E8E0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_14011E930.Parameter = 0LL;
  stru_14011E930.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  stru_14011E930.List.Flink = 0LL;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v1, v0, v2);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    ndisRegisterKnobs(&stru_14011C730, 1LL, v3, 0LL);
  return 0LL;
}
