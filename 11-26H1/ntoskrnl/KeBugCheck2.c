/*
 * XREFs of KeBugCheck2 @ 0x1405E8880
 * Callers:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeQueryCurrentStackInformation @ 0x140263490 (KeQueryCurrentStackInformation.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x140532C74 (KiSetDebuggerOwner.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140535098 (PpmHvSetVirtualProcessorQos.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     KiFilterBugCheckInfo @ 0x1405429BC (KiFilterBugCheckInfo.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x1405BB140 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1405C0338 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1405C03C4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405C07C0 (HvlResumeFromRootCrashdump.c)
 *     IoEmitCrashDmpGUID @ 0x1405C8EC8 (IoEmitCrashDmpGUID.c)
 *     IoEscalateBugCheck @ 0x1405C8F08 (IoEscalateBugCheck.c)
 *     IoNotifyDumpEx @ 0x1405C9BFC (IoNotifyDumpEx.c)
 *     IoRetryAsMiniDump @ 0x1405C9D24 (IoRetryAsMiniDump.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x1405CA0B0 (IoSaveInitialBugCheckProgress.c)
 *     KdDecodeDataBlock @ 0x1405E5FE0 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405E64BC (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405E9EC0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405EA0F4 (KiBugCheckProgressCpusFrozen.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405EA1C0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405EA23C (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x1405EA280 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405EA2EC (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1405EACFC (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405EB0FC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1405EB1C4 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405EB3BC (KiScanBugCheckCallbackList.c)
 *     KiYieldWaitForDebugger @ 0x1405EB62C (KiYieldWaitForDebugger.c)
 *     KeSaveSupervisorState @ 0x1405EF444 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FCCBC (KiHandleMultipleBugchecksDuringRecovery.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D8398 (EnterWheaIpmiContextNoLock.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D86F4 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     MmLocateUnloadedDriver @ 0x1406EBCCC (MmLocateUnloadedDriver.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x1407220C4 (IpmiLibAddSelBugcheckRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        _XSAVE_FORMAT *a4,
        unsigned __int64 a5,
        _XSAVE_FORMAT *a6)
{
  unsigned __int64 v6; // rsi
  const CHAR *v7; // r13
  __int64 High; // rdi
  char v11; // r14
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v14; // eax
  unsigned int v15; // edx
  signed __int32 v16; // ecx
  char v17; // cl
  char CurrentStackInformation; // bl
  signed __int32 InitialStack; // eax
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
  KSPIN_LOCK *v32; // r8
  unsigned int v33; // ebx
  char v34; // r14
  char *v35; // rcx
  __int64 v36; // rdx
  _CONTEXT *Context; // rax
  __int64 v38; // r9
  __int128 v39; // xmm1
  __int64 v40; // rdx
  _XSAVE_FORMAT *v41; // rsi
  __int64 v42; // rdx
  bool v43; // r15
  bool v44; // bl
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 UnloadedDriver; // rax
  ULONG v48; // r15d
  __int64 *v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  struct _KTHREAD *v53; // rcx
  bool v54; // zf
  __int64 v55; // rcx
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
  _XSAVE_FORMAT *v86; // [rsp+70h] [rbp-90h]
  char v87; // [rsp+78h] [rbp-88h]
  bool v88; // [rsp+79h] [rbp-87h]
  char v89; // [rsp+7Ah] [rbp-86h]
  unsigned int v90; // [rsp+80h] [rbp-80h] BYREF
  unsigned int Number; // [rsp+88h] [rbp-78h] BYREF
  __int64 v92; // [rsp+90h] [rbp-70h]
  int v93; // [rsp+98h] [rbp-68h]
  struct _KPRCB *CurrentPrcb; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v97)(); // [rsp+B8h] [rbp-48h]
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v100; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX v101; // [rsp+E0h] [rbp-20h] BYREF
  char v102[1232]; // [rsp+1F0h] [rbp+F0h] BYREF
  char pszDest[192]; // [rsp+6C0h] [rbp+5C0h] BYREF

  v6 = a3;
  v7 = (const CHAR *)a5;
  v100 = a3;
  v90 = a1;
  v86 = a6;
  memset_0(&v101, 0, sizeof(v101));
  pszDest[0] = 0;
  High = 0LL;
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
    KiBugCheckData = v12;
    qword_140F4B108 = a2;
    qword_140F4B110 = v6;
    qword_140F4B118 = (__int64)a4;
    qword_140F4B120 = a5;
    if ( !*(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
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
    InitialStack = (signed __int32)KiDpcWatchdogConfigurationLock.InitialStack;
    v20 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (InitialStack & 3) == 3 )
      {
        v11 = 0;
        v79 = 0;
        v81 = 0;
        goto LABEL_48;
      }
      v21 = InitialStack;
      InitialStack = _InterlockedCompareExchange(
                       (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.InitialStack,
                       v20,
                       InitialStack);
    }
    while ( InitialStack != v21 );
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
          v25 = (char *)&KiDpcWatchdogConfigurationLock.FirstArgument - (_BYTE *)Src;
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
        High = v99;
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
        memmove(&unk_140FC2330, v30, v31);
      }
    }
    v79 = 1;
    v81 = 1;
    goto LABEL_45;
  }
  v14 = (signed __int32)KiDpcWatchdogConfigurationLock.InitialStack;
  v15 = (16 * KeGetCurrentPrcb()->Number) | 3;
  while ( (v14 & 3) != 3 )
  {
    v16 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.InitialStack, v15, v14);
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
    if ( SLODWORD(KsepShimDbLock.QueueListEntry.Flink) <= 0 )
      BYTE4(KiDpcWatchdogConfigurationLock.InitialStack) = 1;
  }
LABEL_48:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  v33 = v90;
  if ( !qword_140F10470 )
    goto LABEL_51;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140F10470 + 2) )
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
    LOBYTE(v32) = v79;
    v34 = 1;
    v97 = 0LL;
  }
  else
  {
LABEL_51:
    LOBYTE(v32) = v79;
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
  if ( !(_BYTE)v32 )
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
    KiScanBugCheckCallbackList(v35, v36, v32, v38);
    guard_dispatch_icall_no_overrides(0LL, v40);
    HalReturnToFirmware(3);
  }
  if ( v33 > 0xD1 )
  {
    switch ( v33 )
    {
      case 0xD8u:
        *(_QWORD *)&KiBugCheckDriver = a2 + 88;
        goto LABEL_79;
      case 0xE6u:
        if ( (_DWORD)a2 == 39 )
          IoAddTriageDumpDataBlock(v6, (PVOID)8);
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
        a4 = (_XSAVE_FORMAT *)Format;
        if ( v86 )
        {
          v41 = v86;
          High = v86->XmmRegisters[12].High;
        }
        else
        {
          High = v6;
          v41 = 0LL;
          if ( a2 == 10 )
            High = a5;
        }
        v43 = 1;
        v92 = High;
        goto LABEL_84;
      case 0x13Du:
        v93 = 8;
        goto LABEL_79;
      case 0x14Fu:
        if ( v6 < 0x100 && a5 )
        {
          v53 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v53 = *(struct _KTHREAD **)(a5 + 8);
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
      High = a5;
      v92 = a5;
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        KiBugCheckData = 197LL;
        goto LABEL_79;
      }
      v51 = KiPcToFileHeader(a5, &v95, 0LL, &v83);
      v42 = 1LL;
      if ( v83 != 1 )
      {
        v41 = v86;
        v43 = 1;
        v44 = 0;
        a4 = (_XSAVE_FORMAT *)Format;
        KiBugCheckData = 209LL;
        if ( v51 )
        {
          KiBugCheckDriverOffset = a5 - v51;
          *(_QWORD *)&KiBugCheckDriver = v95 + 88;
        }
        goto LABEL_84;
      }
      KiBugCheckDriverOffset = a5 - v51;
      *(_QWORD *)&KiBugCheckDriver = v95 + 88;
      v52 = KiPcToFileHeader(a2, &v95, 1LL, &v83);
      if ( v52 )
      {
        KiBugCheckData = 211LL;
        KiBugCheckDriverOffset = a2 - v52;
        *(_QWORD *)&KiBugCheckDriver = v95 + 88;
        goto LABEL_79;
      }
      UnloadedDriver = MmLocateUnloadedDriver(a2);
      a4 = (_XSAVE_FORMAT *)Format;
      v42 = 1LL;
      v41 = v86;
      v7 = Format;
      v44 = 0;
      if ( !UnloadedDriver )
        goto LABEL_99;
      v48 = a2 - *(_DWORD *)(UnloadedDriver + 16);
      KiBugCheckData = 212LL;
      goto LABEL_98;
    case 0x3Bu:
      High = a5;
      v92 = a5;
      goto LABEL_79;
    case 0x4Cu:
      v42 = 1LL;
      v44 = 1;
      v87 = 1;
      v49 = &qword_140F4B108;
      v80 = 1;
      KiBugCheckData = (unsigned int)a2;
      v32 = &KiNmiCallbackListLock;
      v50 = v6 - (_QWORD)&qword_140F4B108;
      do
      {
        *v49 = *(__int64 *)((char *)v49 + v50);
        ++v49;
      }
      while ( (__int64)v49 < (__int64)&KiNmiCallbackListLock );
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
          a4 = (_XSAVE_FORMAT *)Format;
          v42 = 1LL;
          v44 = 0;
          v7 = Format;
          if ( !UnloadedDriver )
          {
LABEL_99:
            v43 = 1;
            goto LABEL_85;
          }
          v48 = a2 - *(_DWORD *)(UnloadedDriver + 16);
          KiBugCheckData = 206LL;
LABEL_98:
          *(_QWORD *)&KiBugCheckDriver = UnloadedDriver;
          KiBugCheckDriverOffset = v48;
          goto LABEL_99;
        }
        v41 = a4;
      }
      v92 = v41->XmmRegisters[12].High;
      High = v92;
      qword_140F4B118 = v92;
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
      a4 = (_XSAVE_FORMAT *)Format;
      v45 = a2 - 240;
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
        High = a2;
        v92 = a2;
LABEL_79:
        v41 = v86;
LABEL_80:
        v42 = 1LL;
LABEL_81:
        v43 = 1;
LABEL_82:
        v44 = 0;
LABEL_83:
        a4 = (_XSAVE_FORMAT *)Format;
LABEL_84:
        v7 = (const CHAR *)a4;
        goto LABEL_85;
      }
LABEL_123:
      v41 = v86;
      if ( v86 )
      {
        High = v86->XmmRegisters[12].High;
        v92 = High;
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
    v41 = a4;
    v86 = a4;
  }
  a4 = (_XSAVE_FORMAT *)Format;
  v54 = v33 == 142;
  v43 = 1;
  v7 = Format;
  v44 = 0;
  v42 = 1LL;
  if ( !v54 )
  {
    High = v41->XmmRegisters[12].High;
    v92 = High;
  }
LABEL_85:
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(*(_QWORD *)&KiBugCheckDriver, pszDest, v32, v38);
  }
  else if ( High )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !*(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (int)EnterWheaIpmiContextNoLock() >= 0 )
      IpmiLibAddSelBugcheckRecord();
  }
  v55 = KiBugCheckData;
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v43 )
  {
    LOBYTE(v42) = v34;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v42);
  }
  if ( v84 && (PartialDumpControl & 4) != 0 )
  {
    KiDpcWatchdogConfigurationLock.StateSaveArea = v41;
    KiDpcWatchdogConfigurationLock.CycleTime = (volatile unsigned __int64)v102;
    *(_QWORD *)&KiDpcWatchdogConfigurationLock.CurrentRunTime = CurrentThread;
    KiDpcWatchdogConfigurationLock.KernelStack = v97;
    LOBYTE(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v44;
    BYTE1(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v34;
    KiAttemptBugcheckRecovery();
  }
  BYTE4(KiDpcWatchdogConfigurationLock.InitialStack) = 1;
  guard_dispatch_icall_no_overrides(v55, v42);
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
  KiFilterBugCheckInfo(&v90, (__int64)&KiBugCheckData);
  v58 = !CrashdmpDumpBlock || !v43;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140F4B108, qword_140F4B110, qword_140F4B118, qword_140F4B120, v58);
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
        KiBugCheckData,
        (const void *)qword_140F4B108,
        (const void *)qword_140F4B110,
        (const void *)qword_140F4B118,
        (const void *)qword_140F4B120);
      if ( *(_QWORD *)&KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v87 )
      {
        if ( a4 )
          DbgPrintEx(0x65u, 0, (PCSTR)a4);
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
        RtlpCopyAffinityEx(&v101, v101.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        KeRemoveProcessorAffinityEx(&v101.Count, *(_DWORD *)(v60 + 36));
        KiSendFreeze(&v101, 0LL);
        KeStallExecutionProcessor(0xF4240u);
      }
      IoSaveInitialBugCheckProgress(KiBugCheckData);
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
        *(_QWORD *)&KiDpcWatchdogConfigurationLock.CurrentRunTime = CurrentThread;
        KiDpcWatchdogConfigurationLock.KernelStack = v97;
        KiDpcWatchdogConfigurationLock.StateSaveArea = v86;
        LOBYTE(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v80;
        KiDpcWatchdogConfigurationLock.CycleTime = (volatile unsigned __int64)v102;
        BYTE1(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v34;
        KiBugCheckWriteCrashDump(&KiDpcWatchdogConfigurationLock.CycleTime);
      }
      goto LABEL_230;
    }
  }
  else if ( (unsigned __int8)KiHandleMultipleBugchecksDuringRecovery(LODWORD(KiDpcWatchdogConfigurationLock.InitialStack)) )
  {
    BYTE4(KiDpcWatchdogConfigurationLock.InitialStack) = 1;
    goto LABEL_194;
  }
  v72 = (char)KiDpcWatchdogConfigurationLock.InitialStack;
  if ( Number != LODWORD(KiDpcWatchdogConfigurationLock.InitialStack) >> 4 )
  {
    KiYieldWaitForDebugger();
    __debugbreak();
  }
  if ( KiHypervisorInitiatedCrashDump
    || (unsigned __int64)((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 0xC) >= 8 )
  {
    IoEscalateBugCheck(16);
    while ( 1 )
      guard_dispatch_icall_no_overrides(v78, v77);
  }
  IoSetBugCheckProgressFlag(0x20000);
  _InterlockedAdd((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.InitialStack, 4u);
  if ( (v72 & 0xC) != 0 )
  {
    IoEscalateBugCheck(8);
    KiBugCheckDebugBreak(4u);
  }
  else
  {
    BYTE1(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v34;
    KiDpcWatchdogConfigurationLock.CycleTime = (volatile unsigned __int64)v102;
    *(_QWORD *)&KiDpcWatchdogConfigurationLock.CurrentRunTime = CurrentThread;
    KiDpcWatchdogConfigurationLock.KernelStack = v97;
    KiDpcWatchdogConfigurationLock.StateSaveArea = v86;
    LOBYTE(KiDpcWatchdogConfigurationLock.SchedulingGroup) = v80;
    IoEscalateBugCheck(4);
    IoRetryAsMiniDump(
      KiBugCheckData,
      qword_140F4B108,
      qword_140F4B110,
      qword_140F4B118,
      qword_140F4B120,
      KiDpcWatchdogConfigurationLock.CycleTime,
      *(__int64 *)&KiDpcWatchdogConfigurationLock.CurrentRunTime,
      (__int64)KiDpcWatchdogConfigurationLock.KernelStack,
      (char)KiDpcWatchdogConfigurationLock.SchedulingGroup);
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
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v89
      || (v76 = 3, !v66) )
    {
      v76 = 1;
    }
    HalReturnToFirmware(v76);
  }
  KiBugCheckDebugBreak(4u);
}
