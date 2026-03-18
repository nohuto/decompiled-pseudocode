/*
 * XREFs of KeBugCheck2 @ 0x1405E5F10
 * Callers:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeQueryCurrentStackInformation @ 0x140263F20 (KeQueryCurrentStackInformation.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403EF310 (KeRemoveProcessorAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KiSendThawExecution @ 0x1405023B0 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x140530774 (KiSetDebuggerOwner.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140532BF8 (PpmHvSetVirtualProcessorQos.c)
 *     IoSetBugCheckProgressFlag @ 0x140532C30 (IoSetBugCheckProgressFlag.c)
 *     KiFilterBugCheckInfo @ 0x14054053C (KiFilterBugCheckInfo.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x1405B88D0 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1405BDAC8 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1405BDB54 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405BDF50 (HvlResumeFromRootCrashdump.c)
 *     IoEmitCrashDmpGUID @ 0x1405C65F8 (IoEmitCrashDmpGUID.c)
 *     IoEscalateBugCheck @ 0x1405C6638 (IoEscalateBugCheck.c)
 *     IoNotifyDumpEx @ 0x1405C732C (IoNotifyDumpEx.c)
 *     IoRetryAsMiniDump @ 0x1405C7454 (IoRetryAsMiniDump.c)
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x1405C77E0 (IoSaveInitialBugCheckProgress.c)
 *     KdDecodeDataBlock @ 0x1405E3670 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405E3B4C (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405E7550 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405E7784 (KiBugCheckProgressCpusFrozen.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405E7850 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405E78CC (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x1405E7910 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405E797C (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405E7B6C (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1405E838C (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405E85B4 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405E878C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1405E8854 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405E8A4C (KiScanBugCheckCallbackList.c)
 *     KiYieldWaitForDebugger @ 0x1405E8CBC (KiYieldWaitForDebugger.c)
 *     KeSaveSupervisorState @ 0x1405ECAD4 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1405F6118 (KiSendFreeze.c)
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FA29C (KiHandleMultipleBugchecksDuringRecovery.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D4318 (EnterWheaIpmiContextNoLock.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D4674 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     MmLocateUnloadedDriver @ 0x1406E701C (MmLocateUnloadedDriver.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x14071D434 (IpmiLibAddSelBugcheckRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        struct _LIST_ENTRY *a2,
        void *a3,
        const CHAR *a4,
        CHAR *a5,
        __int64 a6)
{
  void *v6; // rsi
  const CHAR *v7; // r13
  _QWORD *p_Flink; // rdi
  char v11; // r14
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v14; // eax
  unsigned int v15; // edx
  signed __int32 v16; // ecx
  char v17; // cl
  char CurrentStackInformation; // bl
  signed __int32 StackLimit; // eax
  unsigned int v20; // edx
  signed __int32 v21; // ecx
  int v22; // ecx
  __int64 v23; // rdi
  char *v24; // rbx
  signed __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  struct _KTHREAD *v27; // rcx
  unsigned __int64 v29; // r9
  const void *v30; // rdx
  size_t v31; // r8
  void *volatile *p_StackLimit; // r8
  unsigned int v33; // ebx
  char v34; // r14
  char *v35; // rcx
  __int64 v36; // rdx
  _CONTEXT *Context; // rax
  __int64 v38; // r9
  __int128 v39; // xmm1
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  bool v43; // r15
  bool v44; // bl
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 UnloadedDriver; // rax
  ULONG v48; // r15d
  struct _LIST_ENTRY **p_Blink; // rcx
  signed __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  struct _KTHREAD *v53; // rcx
  bool v54; // zf
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v56; // rdx
  wchar_t i; // cx
  bool v58; // di
  char v59; // al
  __int64 v60; // rbx
  unsigned __int8 v61; // cl
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // ecx
  unsigned int v65; // eax
  bool v66; // si
  __int64 v67; // rcx
  __int64 v68; // rdi
  _OWORD *v69; // rax
  char *v70; // rcx
  __int128 v71; // xmm1
  char v72; // bl
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  char v79; // [rsp+51h] [rbp-AFh]
  char v80; // [rsp+54h] [rbp-ACh]
  char v81; // [rsp+58h] [rbp-A8h]
  bool v82; // [rsp+59h] [rbp-A7h]
  char v83; // [rsp+5Ah] [rbp-A6h] BYREF
  bool v84; // [rsp+5Bh] [rbp-A5h]
  PCSTR Format; // [rsp+60h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-90h]
  char v87; // [rsp+78h] [rbp-88h]
  bool v88; // [rsp+79h] [rbp-87h]
  char v89; // [rsp+7Ah] [rbp-86h]
  unsigned int v90; // [rsp+80h] [rbp-80h] BYREF
  unsigned int Number; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v92; // [rsp+90h] [rbp-70h]
  int v93; // [rsp+98h] [rbp-68h]
  struct _KPRCB *CurrentPrcb; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v97)(); // [rsp+B8h] [rbp-48h]
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v99; // [rsp+C8h] [rbp-38h]
  void *v100; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX v101; // [rsp+E0h] [rbp-20h] BYREF
  char v102[1232]; // [rsp+1F0h] [rbp+F0h] BYREF
  char pszDest[192]; // [rsp+6C0h] [rbp+5C0h] BYREF

  v6 = a3;
  v7 = a5;
  v100 = a3;
  v90 = a1;
  v86 = a6;
  memset_0(&v101, 0, sizeof(v101));
  pszDest[0] = 0;
  p_Flink = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 1;
  v95 = 0LL;
  v97 = KiBugCheckProgress;
  v84 = IopAutoReboot != 0;
  v83 = 0;
  v80 = 0;
  v87 = 0;
  v89 = 0;
  Format = 0LL;
  v99 = 0LL;
  v92 = 0LL;
  v82 = 1;
  v88 = 0;
  v93 = 0;
  if ( !_InterlockedExchange(&KiBugCheckDataInitialized, 1) )
  {
    v12 = v90;
    if ( v90 == -1073741103 )
    {
      v12 = 195LL;
      v90 = 195;
    }
    KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink = a2;
    KiDpcWatchdogConfigurationLock.SListFaultAddress = v6;
    KiDpcWatchdogConfigurationLock.QuantumTarget = (unsigned __int64)a4;
    KiDpcWatchdogConfigurationLock.InitialStack = a5;
    if ( !LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
      _InterlockedExchange((volatile __int32 *)&WheapConfigTableLock.WaitBlockFill11[16], 1);
    KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
    IoEmitCrashDmpGUID();
    IoNotifyDumpEx(4);
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(4);
  CurrentPrcb = 0LL;
  Src = 0LL;
  Number = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&Number, (__int64)&Src, (__int64)&CurrentPrcb);
    StackLimit = (signed __int32)KiDpcWatchdogConfigurationLock.StackLimit;
    v20 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (StackLimit & 3) == 3 )
      {
        v11 = 0;
        v79 = 0;
        v81 = 0;
        goto LABEL_48;
      }
      v21 = StackLimit;
      StackLimit = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.StackLimit,
                     v20,
                     StackLimit);
    }
    while ( StackLimit != v21 );
    IoNotifyDumpEx(6);
    if ( CurrentStackInformation )
    {
      if ( Number > 9 || (v22 = 929, !_bittest(&v22, Number)) )
      {
        v23 = 147456LL;
        v24 = (char *)Src;
        if ( (unsigned __int64)((char *)CurrentPrcb - (_BYTE *)Src) > 0x24000
          || (v23 = (char *)CurrentPrcb - (_BYTE *)Src, CurrentPrcb != Src) )
        {
          v25 = (char *)&KiDpcWatchdogConfigurationLock.CycleTime - (_BYTE *)Src;
          v26 = ((unsigned __int64)(v23 - 1) >> 12) + 1;
          do
          {
            if ( MmIsAddressValidEx((__int64)v24) )
              memmove(&v24[v25], v24, 0x1000uLL);
            v24 += 4096;
            --v26;
          }
          while ( v26 );
          v6 = v100;
        }
        IoNotifyDumpEx(7);
        p_Flink = v99;
        v11 = 1;
      }
    }
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v27 = KeGetCurrentThread();
      __asm { rdsspq  r8 }
      v29 = (v27->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( _R8 > v29 && (void *)_R8 < (char *)v27->KernelShadowStackBase - 4096 )
      {
        v30 = (const void *)(_R8 - 256);
        if ( _R8 - 256 < v29 )
          v30 = (const void *)((v27->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096);
        v31 = _R8 - (_QWORD)v30;
        if ( v31 > 0x100 )
          v31 = 256LL;
        memmove(&unk_140FC1330, v30, v31);
      }
    }
    v79 = 1;
    v81 = 1;
    goto LABEL_45;
  }
  v14 = (signed __int32)KiDpcWatchdogConfigurationLock.StackLimit;
  v15 = (16 * KeGetCurrentPrcb()->Number) | 3;
  while ( (v14 & 3) != 3 )
  {
    v16 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.StackLimit, v15, v14);
    if ( v14 == v16 )
    {
      v17 = 1;
      goto LABEL_20;
    }
  }
  v17 = 0;
LABEL_20:
  v81 = v17;
  v11 = v17;
  v79 = v17;
  if ( v17 )
  {
LABEL_45:
    if ( *(int *)&KsepShimDbLock.SchedulerApcFill5[48] <= 0 )
      KiBugcheckOwnerKeepsOthersFrozen = 1;
  }
LABEL_48:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  v33 = v90;
  if ( !qword_140F0FBB0 )
    goto LABEL_51;
  if ( dword_140F0FD40 )
    BYTE1(stru_140F10828.WriteOperationCount) = 0;
  if ( *(_BYTE *)(qword_140F0FBB0 + 2) )
  {
    if ( v11 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v90 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
      v33 = v90;
    }
    LOBYTE(p_StackLimit) = v79;
    v34 = 1;
    v97 = 0LL;
  }
  else
  {
LABEL_51:
    LOBYTE(p_StackLimit) = v79;
    v34 = 0;
  }
  v35 = v102;
  v36 = 9LL;
  Context = CurrentPrcb->Context;
  v38 = 128LL;
  do
  {
    *(_OWORD *)v35 = *(_OWORD *)&Context->P1Home;
    *((_OWORD *)v35 + 1) = *(_OWORD *)&Context->P3Home;
    *((_OWORD *)v35 + 2) = *(_OWORD *)&Context->P5Home;
    *((_OWORD *)v35 + 3) = *(_OWORD *)&Context->ContextFlags;
    *((_OWORD *)v35 + 4) = *(_OWORD *)&Context->SegGs;
    *((_OWORD *)v35 + 5) = *(_OWORD *)&Context->Dr1;
    *((_OWORD *)v35 + 6) = *(_OWORD *)&Context->Dr3;
    v35 += 128;
    v39 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *((_OWORD *)v35 - 1) = v39;
    --v36;
  }
  while ( v36 );
  *(_OWORD *)v35 = *(_OWORD *)&Context->P1Home;
  *((_OWORD *)v35 + 1) = *(_OWORD *)&Context->P3Home;
  *((_OWORD *)v35 + 2) = *(_OWORD *)&Context->P5Home;
  *((_OWORD *)v35 + 3) = *(_OWORD *)&Context->ContextFlags;
  *((_OWORD *)v35 + 4) = *(_OWORD *)&Context->SegGs;
  if ( !(_BYTE)p_StackLimit )
  {
    v60 = (__int64)CurrentPrcb;
    v43 = 1;
    v58 = v88;
    goto LABEL_186;
  }
  if ( ViVerifierEnabled )
  {
    VfNotifyVerifierOfEvent(2LL);
    v33 = v90;
  }
  if ( v33 == 229 )
  {
    KiScanBugCheckCallbackList(v35, v36, p_StackLimit, v38);
    guard_dispatch_icall_no_overrides(0LL, v40);
    HalReturnToFirmware(3);
  }
  if ( v33 > 0xD1 )
  {
    switch ( v33 )
    {
      case 0xD8u:
        *(_QWORD *)&KiBugCheckDriver = (char *)a2 + 88;
        goto LABEL_79;
      case 0xE6u:
        if ( (_DWORD)a2 == 39 )
          IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)8);
        goto LABEL_79;
      case 0xEAu:
        *(_QWORD *)&KiBugCheckDriver = a4;
        goto LABEL_79;
      case 0xEFu:
        v42 = 1LL;
        v44 = 1;
        break;
      case 0xFCu:
        goto LABEL_140;
      case 0x139u:
        v42 = 1LL;
        v44 = 0;
        a4 = Format;
        if ( v86 )
        {
          v41 = v86;
          p_Flink = *(_QWORD **)(v86 + 360);
        }
        else
        {
          p_Flink = v6;
          v41 = 0LL;
          if ( a2 == (struct _LIST_ENTRY *)10 )
            p_Flink = a5;
        }
        v43 = 1;
        v92 = (unsigned __int64)p_Flink;
        goto LABEL_84;
      case 0x13Du:
        v93 = 8;
        goto LABEL_79;
      case 0x14Fu:
        if ( (unsigned __int64)v6 < 0x100 && a5 )
        {
          v53 = CurrentThread;
          if ( *((_QWORD *)a5 + 1) )
            v53 = (struct _KTHREAD *)*((_QWORD *)a5 + 1);
          CurrentThread = v53;
        }
        v42 = 1LL;
        v44 = (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
        break;
      case 0x1C8u:
        v41 = v86;
        v42 = 1LL;
        v89 = 1;
        v43 = 1;
        goto LABEL_82;
      default:
        goto LABEL_123;
    }
    v41 = v86;
    v43 = 1;
    v80 = v44;
    goto LABEL_83;
  }
  switch ( v33 )
  {
    case 0xD1u:
    case 0xAu:
      p_Flink = a5;
      v92 = (unsigned __int64)a5;
      if ( (unsigned __int64)a5 >= ExPoolCodeStart && (unsigned __int64)a5 < ExPoolCodeEnd )
      {
        KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)197;
        goto LABEL_79;
      }
      v51 = KiPcToFileHeader(a5, &v95, 0LL, &v83);
      v42 = 1LL;
      if ( v83 != 1 )
      {
        v41 = v86;
        v43 = 1;
        v44 = 0;
        a4 = Format;
        KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)209;
        if ( v51 )
        {
          KiBugCheckDriverOffset = (_DWORD)a5 - v51;
          *(_QWORD *)&KiBugCheckDriver = v95 + 88;
        }
        goto LABEL_84;
      }
      KiBugCheckDriverOffset = (_DWORD)a5 - v51;
      *(_QWORD *)&KiBugCheckDriver = v95 + 88;
      v52 = KiPcToFileHeader(a2, &v95, 1LL, &v83);
      if ( v52 )
      {
        KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)211;
        KiBugCheckDriverOffset = (_DWORD)a2 - v52;
        *(_QWORD *)&KiBugCheckDriver = v95 + 88;
        goto LABEL_79;
      }
      UnloadedDriver = MmLocateUnloadedDriver(a2);
      a4 = Format;
      v42 = 1LL;
      v41 = v86;
      v7 = Format;
      v44 = 0;
      if ( !UnloadedDriver )
        goto LABEL_99;
      v48 = (_DWORD)a2 - *(_DWORD *)(UnloadedDriver + 16);
      KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)212;
      goto LABEL_98;
    case 0x3Bu:
      p_Flink = a5;
      v92 = (unsigned __int64)a5;
      goto LABEL_79;
    case 0x4Cu:
      v42 = 1LL;
      v44 = 1;
      v87 = 1;
      p_Blink = &KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink;
      v80 = 1;
      KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(unsigned int)a2;
      p_StackLimit = &KiDpcWatchdogConfigurationLock.StackLimit;
      v50 = (_BYTE *)v6 - (_BYTE *)&KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink;
      do
      {
        *p_Blink = *(struct _LIST_ENTRY **)((char *)p_Blink + v50);
        ++p_Blink;
      }
      while ( (__int64)p_Blink < (__int64)&KiDpcWatchdogConfigurationLock.StackLimit );
      v41 = v86;
      v43 = 1;
      goto LABEL_85;
    case 0x50u:
      v41 = v86;
      if ( !v86 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
        {
LABEL_96:
          UnloadedDriver = MmLocateUnloadedDriver(a2);
          a4 = Format;
          v42 = 1LL;
          v44 = 0;
          v7 = Format;
          if ( !UnloadedDriver )
          {
LABEL_99:
            v43 = 1;
            goto LABEL_85;
          }
          v48 = (_DWORD)a2 - *(_DWORD *)(UnloadedDriver + 16);
          KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)206;
LABEL_98:
          *(_QWORD *)&KiBugCheckDriver = UnloadedDriver;
          KiBugCheckDriverOffset = v48;
          goto LABEL_99;
        }
        v41 = (__int64)a4;
      }
      v92 = *(_QWORD *)(v41 + 360);
      p_Flink = (_QWORD *)v92;
      KiDpcWatchdogConfigurationLock.QuantumTarget = v92;
      v46 = KiPcToFileHeader(v92, &v95, 0LL, &v83);
      v86 = v41;
      if ( v46 )
        goto LABEL_80;
      goto LABEL_96;
    case 0x7Bu:
      v41 = v86;
      v42 = 1LL;
      v82 = ((unsigned __int8)a4 & 1) == 0;
      v43 = ((unsigned __int8)a4 & 2) == 0;
      goto LABEL_82;
  }
  if ( v33 != 142 )
  {
    if ( v33 == 160 )
    {
      v42 = 1LL;
      v41 = v86;
      if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        goto LABEL_81;
      a4 = Format;
      v45 = (unsigned __int64)&a2[-15];
      v43 = 1;
      v7 = Format;
      if ( v45 > 1 )
      {
        v44 = 0;
      }
      else
      {
        v44 = 1;
        v80 = 1;
      }
      goto LABEL_85;
    }
    if ( v33 != 190 )
    {
      if ( v33 == 203 )
      {
        p_Flink = &a2->Flink;
        v92 = (unsigned __int64)a2;
LABEL_79:
        v41 = v86;
LABEL_80:
        v42 = 1LL;
LABEL_81:
        v43 = 1;
LABEL_82:
        v44 = 0;
LABEL_83:
        a4 = Format;
LABEL_84:
        v7 = a4;
        goto LABEL_85;
      }
LABEL_123:
      v41 = v86;
      if ( v86 )
      {
        p_Flink = *(_QWORD **)(v86 + 360);
        v92 = (unsigned __int64)p_Flink;
      }
      goto LABEL_80;
    }
  }
LABEL_140:
  v41 = v86;
  if ( !v86 )
  {
    if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_80;
    v41 = (__int64)a4;
    v86 = (__int64)a4;
  }
  a4 = Format;
  v54 = v33 == 142;
  v43 = 1;
  v7 = Format;
  v44 = 0;
  v42 = 1LL;
  if ( !v54 )
  {
    p_Flink = *(_QWORD **)(v41 + 360);
    v92 = (unsigned __int64)p_Flink;
  }
LABEL_85:
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(*(_QWORD *)&KiBugCheckDriver, pszDest, p_StackLimit, v38);
  }
  else if ( p_Flink )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (int)EnterWheaIpmiContextNoLock() >= 0 )
      IpmiLibAddSelBugcheckRecord();
  }
  Flink = KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink;
  BugCheckProgressEfiSafeToCall = LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 265;
  if ( v43 )
  {
    LOBYTE(v42) = v34;
    KiCollectTriageDumpDataBlocks(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink, v42);
  }
  if ( v84 && (PartialDumpControl & 4) != 0 )
  {
    qword_140F4ADF8 = v41;
    KiCrashDumpContext = (__int64)v102;
    qword_140F4ADE8 = (__int64)CurrentThread;
    qword_140F4ADF0 = (__int64)v97;
    byte_140F4AE00 = v44;
    byte_140F4AE01 = v34;
    KiAttemptBugcheckRecovery();
  }
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  guard_dispatch_icall_no_overrides(Flink, v42);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  v56 = 0LL;
  for ( i = 0; i < KiNmiInProgress[0]; ++i )
  {
    if ( qword_140E0AAD8[i] )
    {
      v56 = 1LL;
      break;
    }
  }
  guard_dispatch_icall_no_overrides((unsigned int)v56, v56);
  KiFilterBugCheckInfo(&v90, (__int64)&KiDpcWatchdogConfigurationLock.Header.WaitListHead);
  v58 = !CrashdmpDumpBlock || !v43;
  HvlLogGuestCrashInformation(
    (unsigned int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink,
    (unsigned __int64)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
    (unsigned __int64)KiDpcWatchdogConfigurationLock.SListFaultAddress,
    KiDpcWatchdogConfigurationLock.QuantumTarget,
    (unsigned __int64)KiDpcWatchdogConfigurationLock.InitialStack,
    v58);
  if ( !KdPitchDebugger )
    qword_140E01098 = (__int64)v102;
  v59 = KiBugCheckShouldEnterPostBugCheckDebugger(v90, 0LL);
  v60 = (__int64)CurrentPrcb;
  if ( v59 )
  {
    if ( !CurrentPrcb->NmiActive )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink),
        KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
        KiDpcWatchdogConfigurationLock.SListFaultAddress,
        (const void *)KiDpcWatchdogConfigurationLock.QuantumTarget,
        KiDpcWatchdogConfigurationLock.InitialStack);
      if ( *(_QWORD *)&KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v87 )
      {
        if ( a4 )
          DbgPrintEx(0x65u, 0, a4);
        if ( v7 )
          DbgPrintEx(0x65u, 0, v7);
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      KiBugCheckDebugBreak(3u);
  }
LABEL_186:
  _disable();
  v61 = KeGetCurrentIrql();
  if ( v61 != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v61, 15);
  if ( v79 )
  {
    if ( v81 == 1 )
    {
LABEL_194:
      if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
      {
        KiSetDebuggerOwner(v60);
        *(_QWORD *)&v101.Count = 2097153LL;
        memset_0(&v101.8, 0, sizeof(v101.8));
        RtlpCopyAffinityEx(&v101, v101.Size, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
        KeRemoveProcessorAffinityEx(&v101.Count, *(_DWORD *)(v60 + 36));
        KiSendFreeze(&v101, 0LL);
        KeStallExecutionProcessor(0xF4240u);
      }
      IoSaveInitialBugCheckProgress((int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink);
      IoSaveBugCheckProgress(1);
      LOBYTE(v62) = v58;
      KiBugCheckProgressCpusFrozen(v62);
      if ( *(_DWORD *)(v60 + 35412) )
      {
        if ( PpmPerfVmQosSupported )
        {
          PpmHvSetVirtualProcessorQos(v60, 0);
        }
        else if ( PpmPerfSchedulerDirectedPerfStatesSupported )
        {
          v63 = *(_QWORD *)(v60 + 35264);
          if ( v63 )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(v60 + 35272) + 8LL), v63 + 872);
        }
      }
      if ( v34 )
      {
        v66 = v82;
      }
      else
      {
        v64 = v93;
        if ( v58 )
          v64 = v93 | 4;
        v65 = v64 | 2;
        v66 = v82;
        if ( v84 )
          v65 = v64;
        v67 = v65 | 1;
        if ( v82 )
          v67 = v65;
        KiDisplayBlueScreen(v67);
      }
      HvlPrepareForRootCrashdump(1);
      if ( v34 )
      {
        v68 = 9LL;
      }
      else
      {
        IoSaveBugCheckProgress(2);
        KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
        v68 = 9LL;
        KiInvokeBugCheckEntryCallbacks(9LL, 0LL, 0LL);
        IoSaveBugCheckProgress(5);
        KiInvokeBugCheckAddTriageDumpDataCallbacks();
      }
      if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
        KdEnableDebuggerWithLock(0);
      v69 = *(_OWORD **)(v60 + 36864);
      v70 = v102;
      do
      {
        *v69 = *(_OWORD *)v70;
        v69[1] = *((_OWORD *)v70 + 1);
        v69[2] = *((_OWORD *)v70 + 2);
        v69[3] = *((_OWORD *)v70 + 3);
        v69[4] = *((_OWORD *)v70 + 4);
        v69[5] = *((_OWORD *)v70 + 5);
        v69[6] = *((_OWORD *)v70 + 6);
        v69 += 8;
        v71 = *((_OWORD *)v70 + 7);
        v70 += 128;
        *(v69 - 1) = v71;
        --v68;
      }
      while ( v68 );
      *v69 = *(_OWORD *)v70;
      v69[1] = *((_OWORD *)v70 + 1);
      v69[2] = *((_OWORD *)v70 + 2);
      v69[3] = *((_OWORD *)v70 + 3);
      v69[4] = *((_OWORD *)v70 + 4);
      if ( v43 )
      {
        KdDecodeDataBlock();
        qword_140F4ADE8 = (__int64)CurrentThread;
        qword_140F4ADF0 = (__int64)v97;
        qword_140F4ADF8 = v86;
        byte_140F4AE00 = v80;
        KiCrashDumpContext = (__int64)v102;
        byte_140F4AE01 = v34;
        KiBugCheckWriteCrashDump(&KiCrashDumpContext);
      }
      goto LABEL_230;
    }
  }
  else if ( (unsigned __int8)KiHandleMultipleBugchecksDuringRecovery(LODWORD(KiDpcWatchdogConfigurationLock.StackLimit)) )
  {
    KiBugcheckOwnerKeepsOthersFrozen = 1;
    goto LABEL_194;
  }
  v72 = (char)KiDpcWatchdogConfigurationLock.StackLimit;
  if ( Number != LODWORD(KiDpcWatchdogConfigurationLock.StackLimit) >> 4 )
  {
    KiYieldWaitForDebugger();
    __debugbreak();
  }
  if ( KiHypervisorInitiatedCrashDump
    || (unsigned __int64)((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 0xC) >= 8 )
  {
    IoEscalateBugCheck(16);
    while ( 1 )
      guard_dispatch_icall_no_overrides(v78, v77);
  }
  IoSetBugCheckProgressFlag(0x20000);
  _InterlockedAdd((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.StackLimit, 4u);
  if ( (v72 & 0xC) != 0 )
  {
    IoEscalateBugCheck(8);
    KiBugCheckDebugBreak(4u);
  }
  else
  {
    byte_140F4AE01 = v34;
    KiCrashDumpContext = (__int64)v102;
    qword_140F4ADE8 = (__int64)CurrentThread;
    qword_140F4ADF0 = (__int64)v97;
    qword_140F4ADF8 = v86;
    byte_140F4AE00 = v80;
    IoEscalateBugCheck(4);
    IoRetryAsMiniDump(
      (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink,
      (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
      (int)KiDpcWatchdogConfigurationLock.SListFaultAddress,
      KiDpcWatchdogConfigurationLock.QuantumTarget,
      (__int64)KiDpcWatchdogConfigurationLock.InitialStack,
      KiCrashDumpContext,
      qword_140F4ADE8,
      qword_140F4ADF0,
      byte_140F4AE00);
  }
  v66 = v82;
LABEL_230:
  HvlResumeFromRootCrashdump(0);
  IoSaveBugCheckProgress(99);
  if ( !v34 )
    ((void (*)(void))KiScanBugCheckCallbackList)();
  guard_dispatch_icall_no_overrides(v74, v73);
  IoSaveBugCheckProgress(4);
  IoEscalateBugCheck(32);
  if ( v84 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    guard_dispatch_icall_no_overrides(0LL, v75);
    if ( BYTE1(stru_140F10828.WriteOperationCount) && !BYTE3(stru_140F10828.WriteOperationCount)
      || BYTE2(stru_140F10828.WriteOperationCount)
      || v89
      || (v76 = 3, !v66) )
    {
      v76 = 1;
    }
    HalReturnToFirmware(v76);
  }
  KiBugCheckDebugBreak(4u);
}
