/*
 * XREFs of HalpDmaInit @ 0x140CB0700
 * Callers:
 *     HalpDmaInitSystem @ 0x140BEBA70 (HalpDmaInitSystem.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x1405857EC (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaCvmMakeMasterAdapterMapRegistersShared @ 0x1405892CC (HalpDmaCvmMakeMasterAdapterMapRegistersShared.c)
 *     HalpDmaInitializeControllers @ 0x14058B92C (HalpDmaInitializeControllers.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB0100 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaInitializeCvmSupport @ 0x140CB0B80 (HalpDmaInitializeCvmSupport.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
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
    if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, qword_140FBCE68, dword_140FBCE60, v0) >= 0 )
    {
      qword_140FBCE30 = 0xFFFFFFLL;
      dword_140FBCE3C = 2;
      if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, qword_140FBD048, dword_140FBD040, v5) >= 0 )
      {
        qword_140FBD010 = 0xFFFFFFLL;
        dword_140FBD01C = 3;
        if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, qword_140FBCF48, dword_140FBCF40, v6) >= 0 )
        {
          dword_140FBCF1C = 2;
          if ( (int)HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV3, qword_140FBD128, dword_140FBD120, v7) >= 0 )
          {
            dword_140FBD0FC = 3;
            if ( (int)HalpDmaAllocateEmergencyResources(v8) >= 0 && (int)HalpDmaAllocateMappingResources() >= 0 )
              HalpDmaInitializeControllers();
          }
        }
      }
    }
  }
}
