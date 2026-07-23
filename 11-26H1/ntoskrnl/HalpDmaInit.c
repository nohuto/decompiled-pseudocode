/*
 * XREFs of HalpDmaInit @ 0x140CB6740
 * Callers:
 *     HalpDmaInitSystem @ 0x140BF1A70 (HalpDmaInitSystem.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x140587D0C (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaCvmMakeMasterAdapterMapRegistersShared @ 0x14058B99C (HalpDmaCvmMakeMasterAdapterMapRegistersShared.c)
 *     HalpDmaInitializeControllers @ 0x14058E0AC (HalpDmaInitializeControllers.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB6140 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaInitializeCvmSupport @ 0x140CB6BC0 (HalpDmaInitializeCvmSupport.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 */

void HalpDmaInit()
{
  int v0; // r9d
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  __int64 v8; // rcx

  HalpCoreDmaAlignment = KeLargestCacheLine;
  if ( !(unsigned int)Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline()
    || (int)HalpDmaInitializeCvmSupport() >= 0
    && (!HalpDmaCvmConfiguration
     || (HalpDmaCvmMakeMasterAdapterMapRegistersShared(), v1 >= 0)
     && (HalpDmaCvmMakeMasterAdapterMapRegistersShared(), v2 >= 0)
     && (HalpDmaCvmMakeMasterAdapterMapRegistersShared(), v3 >= 0)
     && (HalpDmaCvmMakeMasterAdapterMapRegistersShared(), v4 >= 0)) )
  {
    if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, qword_140FBD208, dword_140FBD200, v0) >= 0 )
    {
      qword_140FBD1D0 = 0xFFFFFFLL;
      dword_140FBD1DC = 2;
      if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, qword_140FBD3E8, dword_140FBD3E0, v5) >= 0 )
      {
        qword_140FBD3B0 = 0xFFFFFFLL;
        dword_140FBD3BC = 3;
        if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, qword_140FBD2E8, dword_140FBD2E0, v6) >= 0 )
        {
          dword_140FBD2BC = 2;
          if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV3, qword_140FBD4C8, dword_140FBD4C0, v7) >= 0 )
          {
            dword_140FBD49C = 3;
            if ( (int)HalpDmaAllocateEmergencyResources(v8) >= 0 && (int)HalpDmaAllocateMappingResources() >= 0 )
              HalpDmaInitializeControllers();
          }
        }
      }
    }
  }
}
