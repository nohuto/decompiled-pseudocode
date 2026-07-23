/*
 * XREFs of PpmHeteroRegisterWpsUpdatesAmd @ 0x1407E8B10
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PpmHeteroRegisterWpsUpdatesAmd(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG v4; // r14d
  __int64 v5; // r13
  ULONG MaximumProcessorCount; // r15d
  ULONG i; // esi
  unsigned int v8; // ebp
  __int64 Prcb; // rax
  __int64 v10; // rbp

  v2 = 0;
  if ( a2 )
  {
    if ( !PpmHeteroHgsEnabled
      || PpmHeteroHgsVendor != 1
      || !*(_QWORD *)(a2 + 64)
      || !*(_QWORD *)(a2 + 8)
      || !*(_QWORD *)(a2 + 72)
      || !*(_QWORD *)(a2 + 80) )
    {
      return (unsigned int)-1073741811;
    }
    if ( PpmHeteroHgsTableEntry || PpmHeteroCheckWpsTableUpdated || PpmHeteroAcknowledgeWpsUpdate )
      return (unsigned int)-1073741616;
    v4 = *(_DWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 64);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( v4 > MaximumProcessorCount )
      return (unsigned int)-1073741811;
    for ( i = 0; i < v4; ++i )
    {
      v8 = 0;
      if ( MaximumProcessorCount )
      {
        while ( *(_DWORD *)(v5 + 4LL * i) != *(_DWORD *)(KeGetPrcb(v8) + 212) )
        {
          if ( ++v8 >= MaximumProcessorCount )
            goto LABEL_23;
        }
        Prcb = KeGetPrcb(v8);
        v10 = Prcb;
        if ( Prcb )
        {
          *(_WORD *)(Prcb + 35422) = i;
          *(_WORD *)(Prcb + 35418) = i * *(_WORD *)(a2 + 20);
          if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( *(_QWORD *)(a2 + 32) )
              *(_WORD *)(v10 + 35450) = i * *(_WORD *)(a2 + 44);
            if ( *(_QWORD *)(a2 + 48) )
              *(_DWORD *)(v10 + 35464) = *(_DWORD *)(*(_QWORD *)(a2 + 48) + *(_DWORD *)(a2 + 56) * i);
          }
        }
      }
LABEL_23:
      ;
    }
    if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(a2 + 32) )
      {
        PpmHeteroHgsParkingHintEnabled = 1;
        PpmHeteroWpsParkingUpdateReasonEnabled = 1;
      }
      PpmHeteroWpsParkingTableEntry = *(_QWORD *)(a2 + 32);
    }
    PpmHeteroHgsTableEntry = *(_QWORD *)(a2 + 8);
    PpmHeteroWpsUpdateInterfaceHandle = *(_QWORD *)a2;
    PpmHeteroCheckWpsTableUpdated = *(_QWORD *)(a2 + 72);
    PpmHeteroAcknowledgeWpsUpdate = *(_QWORD *)(a2 + 80);
    PpmHeteroHgsCapabilityBits = *(_DWORD *)(a2 + 24);
    PpmHeteroHgsDynamicUpdateEnabled = *(_BYTE *)(a2 + 88);
    if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() && *(_QWORD *)(a2 + 48) )
      PpmHeteroWpsDetectContainmentFromMask = (__int64)PpmHeteroWpsDetectContainmentFromMaskAmd;
  }
  return v2;
}
