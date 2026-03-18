/*
 * XREFs of KiCollectTriageDumpDataBlocks @ 0x1405E7B6C
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1404B11EC (KiIsAddressRangeValid.c)
 *     KiMarkBugCheckRegions @ 0x1405407FC (KiMarkBugCheckRegions.c)
 *     IopAddBugcheckTriageThread @ 0x1405D44EC (IopAddBugcheckTriageThread.c)
 *     KiCollectFullProcessName @ 0x1405E7B24 (KiCollectFullProcessName.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1405E8920 (KiSaveCurrentEtwTraceBuffer.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 */

char __fastcall KiCollectTriageDumpDataBlocks(int a1, char a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rdx
  unsigned __int64 QuantumTarget; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rcx
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rcx
  unsigned __int64 v17; // rbx

  KiCollectFullProcessName((__int64)KeGetCurrentThread()->ApcState.Process);
  IoAddTriageDumpDataBlock((ULONG)&KiBugCheckDriver, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&KiBugCheckDriverOffset, (PVOID)4);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    IoAddTriageDumpDataBlock(KiBugCheckDriver, (PVOID)0x10);
    IoAddTriageDumpDataBlock(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (PVOID)*(unsigned __int16 *)(*(_QWORD *)&KiBugCheckDriver + 2LL));
  }
  if ( !a2 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v4 = 4096;
  v5 = a1 - 239;
  if ( v5 )
  {
    v6 = v5 - 26;
    if ( v6 )
    {
      v7 = v6 - 70;
      if ( v7 )
      {
        v8 = v7 - 60;
        if ( v8 )
        {
          if ( v8 != 96 )
            goto LABEL_30;
LABEL_18:
          IoAddTriageDumpDataBlock((ULONG)&KeSwapProcessOrStackThread, (PVOID)8);
          IopAddBugcheckTriageThread(*(__int64 *)&KeSwapProcessOrStackThread);
          goto LABEL_30;
        }
        if ( KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink == (struct _LIST_ENTRY *)396 )
        {
          if ( KdpBreakpointChangeCount )
            IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
          IoAddTriageDumpDataBlock((ULONG)&VslpTraceLog, (PVOID)0xA08);
          if ( VslpHotpatchLog )
          {
            IoAddTriageDumpDataBlock((ULONG)&VslpHotpatchLog, (PVOID)8);
            LODWORD(Flink) = VslpHotpatchLog;
            Blink_low = 327688LL;
LABEL_29:
            IoAddTriageDumpDataBlock((ULONG)Flink, (PVOID)Blink_low);
          }
        }
      }
      else if ( KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink == (struct _LIST_ENTRY *)4
             || KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink == (struct _LIST_ENTRY *)100 )
      {
        goto LABEL_18;
      }
    }
    else
    {
      KiMarkBugCheckRegions(
        (__int64)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
        (__int64)KiDpcWatchdogConfigurationLock.SListFaultAddress,
        KiDpcWatchdogConfigurationLock.QuantumTarget,
        (__int64)KiDpcWatchdogConfigurationLock.InitialStack);
      if ( KiDpcWatchdogConfigurationLock.InitialStack == (void *)47 )
      {
        QuantumTarget = KiDpcWatchdogConfigurationLock.QuantumTarget;
        if ( MmIsAddressValidEx(KiDpcWatchdogConfigurationLock.QuantumTarget + 1288) )
        {
          Flink = *(struct _LIST_ENTRY **)(QuantumTarget + 1288);
          Blink_low = 4096LL;
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    PopInternalAddToDumpFile(0LL, 0LL, 0LL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( CurrentThread->ApcStateIndex == 1 )
    {
      v15 = (__int64)CurrentThread->SavedApcState.Process;
      if ( v15 )
      {
        if ( (_KPROCESS *)v15 != Process )
        {
          IoAddTriageDumpDataBlock(v15, (PVOID)0x840);
          KiCollectFullProcessName(v15);
        }
      }
    }
    if ( LODWORD(CurrentServerSiloGlobals[85].Blink) )
    {
      IoAddTriageDumpDataBlock((_DWORD)CurrentServerSiloGlobals + 1368, (PVOID)0x48);
      if ( LOWORD(CurrentServerSiloGlobals[86].Blink) )
      {
        Flink = CurrentServerSiloGlobals[87].Flink;
        Blink_low = LOWORD(CurrentServerSiloGlobals[86].Blink);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v16 = KeGetCurrentThread();
    v17 = (v16->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (char *)v16->KernelShadowStackBase - v17 - 4096 < (void *)0x1000 )
      v4 = LODWORD(v16->KernelShadowStackBase) - v17 - 4096;
    if ( KiIsAddressRangeValid(v17, v4) )
      IoAddTriageDumpDataBlock(v17, (PVOID)v4);
    IoAddTriageDumpDataBlock((ULONG)&KeKernelCetWrssEnabledScenarios, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetLogging, (PVOID)0x120);
  }
  IoAddTriageDumpDataBlock((ULONG)&KiKernelCetEnabled, (PVOID)1);
  IoAddTriageDumpDataBlock((ULONG)&KiKernelCetAuditModeEnabled, (PVOID)1);
  IoAddTriageDumpDataBlock(0, (PVOID)0x3D8);
  return IoAddTriageDumpDataBlock((ULONG)&KePointerIgnoreBits, (PVOID)8);
}
