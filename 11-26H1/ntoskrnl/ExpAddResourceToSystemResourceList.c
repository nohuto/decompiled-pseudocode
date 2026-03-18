/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x140260A5C
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140652410 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406CE730 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CC68FC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 *     DifIsPluginEnabled @ 0x14064C7D0 (DifIsPluginEnabled.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(struct _SINGLE_LIST_ENTRY *a1)
{
  KIRQL v2; // al
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // r10d
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  Next = ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead.Next;
  v4 = v2;
  result = (__int64)&ExSaPageGroupDescriptorArrayLock.Spare36;
  if ( ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead.Next->Next != (struct _SINGLE_LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.Spare36 )
    __fastfail(3u);
  a1->Next = (struct _SINGLE_LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.Spare36;
  a1[1].Next = Next;
  Next->Next = a1;
  ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead.Next = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
    || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
  {
    ExpResourceSpinLock = 0;
  }
  else
  {
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  }
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
  if ( KernelVerifier == 1 )
  {
    result = DifIsPluginEnabled(48LL);
    if ( (_BYTE)result )
      return DifObjTrkInsertItem(v6, a1, v6 + 56, 0LL);
  }
  return result;
}
