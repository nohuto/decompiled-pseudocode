/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x1405BC1D8
 * Callers:
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405BC94C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1405BCA4C (HvlpGetLpcbByApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1405BCE58 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1405BCF2C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1405BD36C (HvlpSelectVpSet.c)
 *     HvlpUpdateLpcbIndex @ 0x1405BDDCC (HvlpUpdateLpcbIndex.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405C0168 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpApplyIoCachePolicy @ 0x1405C231C (HvlpApplyIoCachePolicy.c)
 *     HvlpMapEarlyPages @ 0x1405C24F8 (HvlpMapEarlyPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlpDiscoverTopologyLocal @ 0x140794700 (HvlpDiscoverTopologyLocal.c)
 *     MmAllocateIndependentPages @ 0x140B3F870 (MmAllocateIndependentPages.c)
 */

__int64 HvlStartBootLogicalProcessors()
{
  unsigned int v0; // r12d
  unsigned int v2; // esi
  unsigned int MaximumProcessorCount; // eax
  __int64 v4; // rbx
  unsigned int v5; // r15d
  size_t v6; // rdi
  void *IndependentPages; // rax
  unsigned __int64 v8; // r14
  signed int ApicIdAndNumaNode; // edi
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  __int64 Blink_low; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned __int16 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  __int64 LpcbByApicId; // rax
  char v22; // r11
  size_t v23; // rbx
  void *v24; // rax
  unsigned int *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned int i; // ebx
  _DWORD *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int16 v32; // bx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // [rsp+30h] [rbp-59h]
  __int128 v37; // [rsp+38h] [rbp-51h] BYREF
  __int64 v38; // [rsp+48h] [rbp-41h]
  unsigned __int64 v39; // [rsp+50h] [rbp-39h]
  __int128 v40; // [rsp+60h] [rbp-29h]
  __int128 v41; // [rsp+70h] [rbp-19h]
  __int128 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+90h] [rbp+7h]
  __int64 v44; // [rsp+98h] [rbp+Fh]
  int v45; // [rsp+F0h] [rbp+67h]
  int v46; // [rsp+F8h] [rbp+6Fh]
  __int64 v47; // [rsp+108h] [rbp+7Fh] BYREF

  v0 = KiMaximumGroupSize;
  v43 = 0LL;
  LOWORD(v44) = 0;
  v47 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v45 = 0;
  v2 = 0;
  guard_dispatch_icall_no_overrides(11LL, 64LL);
  HvlpQueryProcessorNode = 0LL;
  HvlpQueryProximityId = 0LL;
  HvlpQueryProximityNode = 0LL;
  HvlpQueryNodeDistance = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v4 = MaximumProcessorCount;
  v5 = 104 * MaximumProcessorCount;
  v6 = 40 * MaximumProcessorCount;
  v36 = 40 * MaximumProcessorCount;
  v46 = 104 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPages(v6, 0xFFFFFFFFLL);
  v8 = (unsigned __int64)IndependentPages;
  if ( !IndependentPages )
  {
    ApicIdAndNumaNode = -1073741670;
LABEL_49:
    if ( HvlpVpStatsPages )
    {
      MmFreeIndependentPages(HvlpVpStatsPages, v2);
      HvlpVpStatsPages = 0LL;
      HvlpVpStatsPagesCount = 0;
    }
    if ( HvlpLogicalProcessorRegions )
    {
      MmFreeIndependentPages((unsigned __int64)HvlpLogicalProcessorRegions, v5);
      HvlpLogicalProcessorRegions = 0LL;
      HvlpLogicalProcessorRegionsCount = 0;
    }
    return (unsigned int)ApicIdAndNumaNode;
  }
  memset_0(IndependentPages, 0, v6);
  v10 = (_LIST_ENTRY *)MmAllocateIndependentPages(v5, 0xFFFFFFFFLL);
  HvlpLogicalProcessorRegions = v10;
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, v5);
    CurrentPrcb = KeGetCurrentPrcb();
    *v11 = stru_140E3EAA8.ThreadListEntry;
    HvlpLogicalProcessorRegionsCount = v4;
    v11[1] = stru_140E3EAA8.MutantListHead;
    v11[2] = *(_LIST_ENTRY *)&stru_140E3EAA8.AbWaitEntryCount;
    v11[3] = *(_LIST_ENTRY *)&stru_140E3EAA8.PropagateBoostsEntry.Next;
    v11[4] = *(_LIST_ENTRY *)stru_140E3EAA8.PriorityFloorCounts;
    v11[5] = *(_LIST_ENTRY *)&stru_140E3EAA8.PriorityFloorCounts[16];
    v11[6].Flink = *(struct _LIST_ENTRY **)&stru_140E3EAA8.PriorityFloorSummary;
    HIDWORD(v11->Flink) = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &v11->Blink, (char *)&v11->Flink + 2);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_46;
    Blink_low = LODWORD(v11->Blink);
    v14 = *(unsigned __int16 *)(KeNodeBlock[WORD1(v11->Flink)] + 2);
    LOWORD(v11[6].Flink) = v14;
    v11[1].Blink = (struct _LIST_ENTRY *)CurrentPrcb->StatisticsPage;
    HIDWORD(v11[1].Flink) = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v14, Blink_low, (char *)&v11->Blink + 4, &v11[1]);
    HvlpVirtualProcessorCount = 0;
    LODWORD(HvlpLogicalProcessorCount) = 1;
    LOBYTE(v11->Flink) = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v4, v8);
    if ( ApicIdAndNumaNode < 0 )
    {
      v2 = 0;
      goto LABEL_28;
    }
    v15 = 1;
    if ( (unsigned int)v4 > 1 )
    {
      v16 = (unsigned __int16 *)(v8 + 48);
      do
      {
        if ( *((_BYTE *)v16 - 7) )
        {
          if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v16 - 1), *v16) < 0 )
            break;
          LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
          *((_BYTE *)v16 - 6) = 1;
        }
        ++v15;
        v16 += 20;
      }
      while ( v15 < (unsigned int)v4 );
    }
    ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v4, v8, v0);
    if ( ApicIdAndNumaNode < 0 )
    {
LABEL_46:
      v5 = v46;
      goto LABEL_47;
    }
    if ( (_DWORD)v4 )
    {
      v19 = v8 + 1;
      v20 = v4;
      do
      {
        if ( *(_BYTE *)v19 || *(_BYTE *)(v19 + 2) )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v19 + 3));
          if ( v22 )
          {
            ++HvlpVirtualProcessorCount;
            *(_BYTE *)(LpcbByApicId + 1) = 1;
          }
          if ( *(_BYTE *)(v19 + 2) )
          {
            ++HvlpActiveProcessorCount;
            *(_BYTE *)(LpcbByApicId + 98) = 1;
          }
        }
        v19 += 40LL;
        --v20;
      }
      while ( v20 );
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v2 = 8 * HvlpVirtualProcessorCount;
      v45 = 8 * HvlpVirtualProcessorCount;
      v23 = (unsigned int)(8 * HvlpVirtualProcessorCount);
      v24 = (void *)MmAllocateIndependentPages(v23, 0xFFFFFFFFLL);
      HvlpVpStatsPages = (__int64)v24;
      if ( !v24 )
      {
        ApicIdAndNumaNode = -1073741670;
LABEL_28:
        v5 = v46;
        goto LABEL_48;
      }
      memset_0(v24, 0, v23);
      HvlpVpStatsPagesCount = HvlpVirtualProcessorCount;
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v25 = (unsigned int *)HvlpLogicalProcessorRegions;
      HIDWORD(v37) = 0;
      *(_QWORD *)&v37 = -1LL;
      DWORD2(v37) = *((_DWORD *)HvlpLogicalProcessorRegions + 5);
      ApicIdAndNumaNode = HvlpMapStatisticsPage(65538LL, &v37, &v47);
      if ( ApicIdAndNumaNode < 0 )
      {
LABEL_34:
        v2 = v45;
        goto LABEL_28;
      }
      v27 = v25[5];
      v28 = HvlpVpStatsPages;
      *(_QWORD *)(v28 + 8 * v27) = HvlpMapEarlyPages(v47, v26, 2LL);
      v18 = v25[5];
      if ( !*(_QWORD *)(HvlpVpStatsPages + 8 * v18) )
      {
        ApicIdAndNumaNode = -1073741670;
        goto LABEL_34;
      }
    }
    if ( (HvlpRootFlags & 0x800) == 0 )
      goto LABEL_42;
    if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x68uLL, HvlpCompareActiveLpcbs);
      for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
      {
        ApicIdAndNumaNode = HvlpUpdateLpcbIndex((char *)HvlpLogicalProcessorRegions + 104 * i, i);
        if ( ApicIdAndNumaNode < 0 )
          goto LABEL_34;
      }
    }
    v38 = 0LL;
    LODWORD(v39) = 0;
    v37 = 0LL;
    v30 = HvlpAcquireHypercallPage((__int64)&v37, 1, 0LL, 8LL);
    v31 = v39;
    v30[1] = HvlpActiveProcessorCount;
    *v30 = 5;
    v32 = HvcallInitiateHypercall(135LL, v31);
    HvlpReleaseHypercallPage((unsigned int *)&v37, v33, v34, v35);
    v18 = v32;
    LOWORD(v18) = -v32;
    ApicIdAndNumaNode = v32 != 0 ? 0xC0000001 : 0;
    if ( !v32 )
    {
LABEL_42:
      ApicIdAndNumaNode = 0;
      if ( !KeDynamicPartitioningSupported )
        HvlNotifyAllProcessorsStarted(v18, v17, v19);
      HvlpApplyIoCachePolicy(v18, v17, v19);
    }
    goto LABEL_34;
  }
  ApicIdAndNumaNode = -1073741670;
LABEL_47:
  v2 = 0;
LABEL_48:
  MmFreeIndependentPages(v8, v36);
  if ( ApicIdAndNumaNode < 0 )
    goto LABEL_49;
  return (unsigned int)ApicIdAndNumaNode;
}
