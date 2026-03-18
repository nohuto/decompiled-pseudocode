/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140B739A0
 * Callers:
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B8C51C (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140648924 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14064B288 (ExDisableAllLookasideLists.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x14076A560 (PsSetCreateProcessNotifyRoutine.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x140B72314 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140B73AF0 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140B81AD4 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase0 @ 0x140B86358 (VfFaultsInitPhase0.c)
 *     VfPoolInitPhase1 @ 0x140B8A410 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B8B35C (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // eax

  v5 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
      ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
      MmLockPagableDataSection((PVOID)&ViShortTime);
    }
    if ( v5 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v6 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v6 = 2491;
    MmVerifierData = v6;
    if ( v5 == 1 )
    {
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v6 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
    *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
    *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      LOBYTE(a4) = 1;
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier,
        a4);
      VfFaultsInitPhase0();
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    ViFullyInitialized = 1;
  }
}
