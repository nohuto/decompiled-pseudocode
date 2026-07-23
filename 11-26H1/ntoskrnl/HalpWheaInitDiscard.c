/*
 * XREFs of HalpWheaInitDiscard @ 0x140CB5BFC
 * Callers:
 *     HalpWheaInitSystem @ 0x140BF1670 (HalpWheaInitSystem.c)
 * Callees:
 *     WheaConfigureErrorSource @ 0x140C05E90 (WheaConfigureErrorSource.c)
 *     HalpInitializeWheaPhysicalMappings @ 0x140CBAA0C (HalpInitializeWheaPhysicalMappings.c)
 *     KeHwPolicyLocateResource @ 0x140CD0520 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall HalpWheaInitDiscard(int a1)
{
  _DISPATCHER_HEADER *v1; // rax
  struct _LIST_ENTRY *v2; // rdx
  void *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v1 = (_DISPATCHER_HEADER *)HalpHvEpCpuid;
    v2 = (struct _LIST_ENTRY *)HalpHvEpWriteMsr;
    v3 = HalpHvEpReadMsr;
  }
  else
  {
    v1 = (_DISPATCHER_HEADER *)HalpWheaNativeCpuid;
    v2 = (struct _LIST_ENTRY *)HalpWheaNativeWriteMsr;
    v3 = HalpWheaNativeReadMsr;
  }
  HalpDeviceBlockUnblockPushLock.WaitListEntry.Blink = v2;
  HalpDeviceBlockUnblockPushLock.Queue = v1;
  HalpDeviceBlockUnblockPushLock.Teb = v3;
  if ( (int)KeHwPolicyLocateResource(a1, 102, 1, (unsigned int)&v18, (__int64)&v17) >= 0 && v17 >= 0x18 )
  {
    v4 = *(_QWORD *)(v18 + 16);
    if ( (v4 & 1) != 0 )
      HalpMcaRecoveryPolicy |= 1uLL;
    if ( (v4 & 2) != 0 )
      HalpMcaRecoveryPolicy |= 2uLL;
  }
  v16[0] = HalpDeviceBlockUnblockPushLock.Teb;
  v16[1] = HalpDeviceBlockUnblockPushLock.WaitListEntry.Blink;
  PshedSetHalEnlightenments(v16);
  HalpInitializeWheaPhysicalMappings();
  off_140E00918[0] = (__int64 (__fastcall *)())HalpWheaInitProcessorGenericSection;
  WheaConfigureErrorSource(0, (__int64)&HalpMachineCheckConfiguration, v5, v6);
  WheaConfigureErrorSource(1, (__int64)&HalpMachineCheckConfiguration, v7, v8);
  WheaConfigureErrorSource(3, (__int64)&HalpNmiConfiguration, v9, v10);
  WheaConfigureErrorSource(5, (__int64)&HalpGenericConfiguration, v11, v12);
  WheaConfigureErrorSource(12, (__int64)&HalpGenericConfiguration, v13, v14);
  return 0LL;
}
