/*
 * XREFs of KiInitializeKernel @ 0x140BFC190
 * Callers:
 *     KiSystemStartup @ 0x140BEF640 (KiSystemStartup.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeHaltOnAddress @ 0x1403E89C0 (KeHaltOnAddress.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x1405E7A40 (KiFatalFilter.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E7B14 (KiInitializeProcessorCycleAccumulation.c)
 *     KeCompactServiceTable @ 0x1405EBF24 (KeCompactServiceTable.c)
 *     KiStartPrcbThreads @ 0x1405EE314 (KiStartPrcbThreads.c)
 *     KeGetTopologyIdForProcessor @ 0x1405F1314 (KeGetTopologyIdForProcessor.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405F1588 (KiAddProcessorToCoreControlBlock.c)
 *     KiInitializeCoreControlBlock @ 0x1405F2454 (KiInitializeCoreControlBlock.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1405F5B74 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiInitializeAndStartInitialThread @ 0x1405F921C (KiInitializeAndStartInitialThread.c)
 *     KiStartIdleThread @ 0x1405F9500 (KiStartIdleThread.c)
 *     RtlGetXSaveFeatureFlags @ 0x14061C470 (RtlGetXSaveFeatureFlags.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 *     KiEnableXSave @ 0x140BEF020 (KiEnableXSave.c)
 *     KiDetectFpuLeakage @ 0x140BEF930 (KiDetectFpuLeakage.c)
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 *     KiConfigureProcessorBlock @ 0x140BF9A10 (KiConfigureProcessorBlock.c)
 *     KeInitializeClockOtherProcessors @ 0x140BFAEF0 (KeInitializeClockOtherProcessors.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140BFB6C8 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     KiInitializeTopologyStructures @ 0x140BFCBB4 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformation @ 0x140BFCFC0 (KiSetCacheInformation.c)
 *     KiSetControlEnforcement @ 0x140BFD410 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x140C03E34 (PoInitializePrcb.c)
 *     KiSetPageAttributesTable @ 0x140C1275C (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x140C13A9C (KiCheckMicrocode.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     KiIsKernelCfgActive @ 0x140CCE274 (KiIsKernelCfgActive.c)
 *     KiInitSystem @ 0x140CCFE5C (KiInitSystem.c)
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140CE037C (RtlInitKernelModeSpecialMachineFrameEntries.c)
 */

void __fastcall KiInitializeKernel(
        struct _KPROCESS *a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPRCB *a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 FeatureBits; // r14
  unsigned __int8 CpuVendor; // al
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // r13d
  int v18; // eax
  __int64 v19; // r14
  char XSaveFeatureFlags; // al
  __int64 v21; // rcx
  bool v22; // r8
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  ULONG_PTR v36; // r8
  __int64 v37; // r10
  __int64 i; // r9
  int TopologyIdForProcessor; // eax
  __int64 v40; // rcx
  int v41; // r9d
  int v42; // r11d
  __int64 v43; // r14
  __int64 v44; // rbx
  int v45; // r14d
  unsigned int v46; // ebx
  ULONG_PTR BugCheckParameter1[3]; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-2A0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-298h]
  __int64 v50; // [rsp+58h] [rbp-290h]
  unsigned __int8 *p_CpuVendor; // [rsp+60h] [rbp-288h]
  struct _KPROCESS *v52; // [rsp+68h] [rbp-280h]
  unsigned __int64 v53; // [rsp+70h] [rbp-278h]
  struct _KPRCB *v54; // [rsp+78h] [rbp-270h]
  __int64 v55; // [rsp+80h] [rbp-268h]
  __int128 v56; // [rsp+88h] [rbp-260h] BYREF
  _DWORD v57[7]; // [rsp+A0h] [rbp-248h] BYREF
  int v58; // [rsp+BCh] [rbp-22Ch]

  v48 = a3;
  v49 = a2;
  v52 = a1;
  v53 = a2;
  v54 = a4;
  v50 = a6;
  v55 = a6;
  v56 = 0LL;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 776) = 1;
  }
  FeatureBits = a4->FeatureBits;
  BugCheckParameter1[0] = FeatureBits;
  p_CpuVendor = &a4->CpuVendor;
  CpuVendor = a4->CpuVendor;
  if ( CpuVendor == 2 || ((CpuVendor - 1) & 0xFD) == 0 )
    KiSetHardwareSpeculationControlFeatures((__int64)a4, FeatureBits);
  KiCheckMicrocode(a4);
  memset_0(v57, 0, 0x200uLL);
  _fxsave(v57);
  if ( a5 )
  {
    if ( KiFpuLeakage )
    {
      FeatureBits |= 0x20000000000uLL;
      BugCheckParameter1[0] = FeatureBits;
    }
    KiSetPageAttributesTable();
    KiInitializeTopologyStructures((ULONG_PTR)a4);
    v17 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v9;
    if ( v9 )
      FeatureBits |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v10 = __readcr3();
      __writecr3(v10);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v11 = __readcr4();
      if ( (v11 & 0x20080) != 0 )
      {
        __writecr4(v11 ^ 0x80);
        __writecr4(v11);
      }
      else
      {
        v12 = __readcr3();
        __writecr3(v12);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      FeatureBits |= 0x80000000uLL;
    else
      FeatureBits = FeatureBits & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    BugCheckParameter1[0] = FeatureBits;
    v13 = __readcr4();
    __writecr4(v13 | 0x18);
    if ( KiFlushPcid )
    {
      v14 = __readcr3();
      __writecr3(v14);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v15 = __readcr4();
      if ( (v15 & 0x20080) != 0 )
      {
        __writecr4(v15 ^ 0x80);
        __writecr4(v15);
      }
      else
      {
        v16 = __readcr3();
        __writecr3(v16);
      }
    }
    KiConfigureProcessorBlock((__int64)a4);
    KiInitializeTopologyStructures((ULONG_PTR)a4);
    v17 = 65471;
    v18 = 65471;
    if ( v58 )
      v18 = v58;
    KiMxCsrMask = v18;
    KeCompactServiceTable((int *)KiServiceTable, (unsigned __int8 *)&KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiInitializeCoreControlBlock((__int64)&a4->LocalCoreControlBlock, &a4->LocalCoreControlBlockShadow.Lock);
  KiAddProcessorToCoreControlBlock(&a4->LocalCoreControlBlock.ProcessorCount, (ULONG_PTR)a4);
  KiSetCacheInformation();
  PoInitializePrcb(a4);
  a4->ProcessorProfileControlArea = 0LL;
  a4->ProfileEventIndexAddress = &a4->ProfileEventIndexAddress;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v19 = FeatureBits | 0x800000;
    BugCheckParameter1[0] = v19;
    XSaveFeatureFlags = RtlGetXSaveFeatureFlags();
    v21 = v19;
    if ( (XSaveFeatureFlags & 8) != 0 )
    {
      v19 |= 0x8000uLL;
      BugCheckParameter1[0] = v19;
      v21 = v19;
    }
    if ( (XSaveFeatureFlags & 0x10) != 0 )
    {
      v21 = v19 | 0x4000000000LL;
      BugCheckParameter1[0] = v19 | 0x4000000000LL;
    }
    if ( (XSaveFeatureFlags & 0x40) != 0 )
      BugCheckParameter1[0] = v21 | 0x80000000000000LL;
  }
  KiSetControlEnforcement(a4, BugCheckParameter1);
  v22 = 0;
  _RAX = 0LL;
  __asm { cpuid }
  if ( *p_CpuVendor == 2 && (unsigned int)_RAX >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v22 = (_RCX & 0x20000000) != 0;
  }
  v33 = BugCheckParameter1[0];
  if ( v22 && (_bittest64(&KeEnabledSupervisorXStateFeatures, 0xAu) & ((BugCheckParameter1[0] & 0x800000) != 0)) != 0 )
    v33 = BugCheckParameter1[0] | 0x100000000000000LL;
  if ( a5 )
  {
    if ( v58 )
      v17 = v58;
    v36 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (v33 & 0x8000000) == 0 )
      v36 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *p_CpuVendor == 2 && a4->CpuType == 6 && a4->CpuModel == 23 && a4->CpuStepping == 10 )
    {
      KeGetTopologyIdForProcessor((__int64)a4, 4);
      for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(v41 + 1) )
      {
        TopologyIdForProcessor = KeGetTopologyIdForProcessor(KiProcessorBlock[i], 4);
        if ( v42 == TopologyIdForProcessor )
        {
          v37 = v40;
          break;
        }
      }
      v33 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v37 + 36832) & 0x100000) != 0 )
        v33 |= 0x100000uLL;
    }
    if ( v33 != v36
      || v17 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != a4->CFlushSize
      || *(_DWORD *)(KiProcessorBlock[0] + 160) != a4->CoresPerPhysicalProcessor
      || *(_DWORD *)(KiProcessorBlock[0] + 164) != a4->LogicalProcessorsPerCore )
    {
      KeBugCheckEx(0x3Eu, v33, v36, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = a4->CpuType;
    KeProcessorRevision = a4->CpuStep;
    KeFeatureBits = v33;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem(v52);
    v34 = __rdtsc();
    KiWaitNever = __ROR8__(v34 ^ __ROL8__(v34, 43), v34 & 0xF);
    v35 = __rdtsc();
    stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)__ROL8__(v35 ^ __ROR8__(v35, 47), v35 & 0xF);
    HviGetHypervisorFeatures(&v56);
    if ( (WORD6(v56) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
    if ( (unsigned int)KiIsKernelCfgActive() )
      RtlInitKernelModeSpecialMachineFrameEntries();
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave(0LL);
  *(_QWORD *)(MmWriteableSharedUserData + 760) = 195LL;
  *(_BYTE *)(MmWriteableSharedUserData + 630) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 631) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 634) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 636) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 637) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 638) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 642) = 1;
  if ( (v33 & 0x80000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 641) = 1;
  if ( (v33 & 0x4000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 635) = 1;
  if ( (v33 & 0x800000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 645) = 1;
  if ( (v33 & 0x10000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 650) = 1;
  if ( (v33 & 0x4000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 648) = 1;
  if ( (v33 & 0x8000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 649) = 1;
  if ( (v33 & 0x100000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 656) = 1;
  if ( (v33 & 0x400000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 660) = 1;
  if ( (v33 & 0x800000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 664) = 1;
  if ( (v33 & 0x1000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 665) = 1;
  if ( (v33 & 0x2000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 666) = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v33 & 0x4000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 667) = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v33 & 0x8000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 668) = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 && (v33 & 0x10000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 669) = 1;
  if ( (v33 & 0x40000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 670) = 1;
  if ( (v33 & 0x200000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 688) = 1;
  if ( (v33 & 0x400000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 689) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 749) = KiVirtFlags;
  v43 = v49;
  if ( a5 )
  {
    KiStartIdleThread(v49, a4, v48);
    v44 = v50;
  }
  else
  {
    v44 = v50;
    KiInitializeAndStartInitialThread(v49, v48, (__int64)a4, v50);
  }
  if ( a5 )
  {
    KiStartPrcbThreads((__int64)a4);
    if ( !(unsigned __int8)HalInitSystem(1uLL, 0LL) )
      KeBugCheck(0x5Cu);
  }
  else
  {
    InitBootProcessor(v44);
  }
  if ( *p_CpuVendor == 1 )
    KiConfigureAmdTprLowerInterruptDelayWorkaround((ULONG_PTR)a4, a5);
  KiCompleteKernelInit((__int64)a4, v43, a5);
  v45 = KiBootProcessorsStarted;
  *(_QWORD *)(v44 + 136) = 0LL;
  v46 = 0;
  while ( 1 )
  {
    LODWORD(BugCheckParameter1[0]) = KiBarrierWait;
    if ( !KiBarrierWait )
      break;
    if ( (++v46 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      if ( v45 )
        HvlNotifyLongSpinWait(v46);
      else
        KeHaltOnAddress((__int64)&KiBarrierWait, (__int64)BugCheckParameter1, 4LL);
    }
    else
    {
      _mm_pause();
    }
  }
  if ( a5 )
    KiInitializeProcessorCycleAccumulation((__int64)a4);
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( a5 )
      KeInitializeClockOtherProcessors((__int64)a4);
  }
}
