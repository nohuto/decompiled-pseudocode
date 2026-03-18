/*
 * XREFs of VfInitBootDriversLoaded @ 0x140CDE91C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     CarInit @ 0x140649ADC (CarInit.c)
 *     DifInit @ 0x14064B8C0 (DifInit.c)
 *     DifRegisterKernelPlugins @ 0x14064BA0C (DifRegisterKernelPlugins.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     NtSetDebugFilterState @ 0x1408A6EF0 (NtSetDebugFilterState.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     VfInitVerifierComponents @ 0x140C21EC0 (VfInitVerifierComponents.c)
 *     ViLogAndLoadXdv @ 0x140C21F34 (ViLogAndLoadXdv.c)
 *     VfAvlInitializeTreeEx @ 0x140C220CC (VfAvlInitializeTreeEx.c)
 *     VfObjectContextInit @ 0x140C22764 (VfObjectContextInit.c)
 *     VfThunkGetNumberOfWdmThunk @ 0x140C354A0 (VfThunkGetNumberOfWdmThunk.c)
 *     VfDriverLoadImage @ 0x140C46AD0 (VfDriverLoadImage.c)
 *     ViThunkFindAllExportAddresses @ 0x140CDF1DC (ViThunkFindAllExportAddresses.c)
 *     VfSuspectDriversParseRegistryString @ 0x140CDF400 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140CDF5B8 (VfXdvExcludeParseRegistryString.c)
 */

void VfInitBootDriversLoaded()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rdx
  void *Pool2; // rax
  __int64 v4; // rdx
  PVOID *v5; // rbx
  __int64 v6; // rax
  PVOID *v7; // rbx
  __int64 v8; // rdx
  PVOID v9; // rdx
  __int64 v10; // rcx
  PVOID *v11; // rbx

  ViNumberOfWdmThunks = VfThunkGetNumberOfWdmThunk();
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    CarInit();
  DifInit();
  VfBugcheckTmpDataLock = 0LL;
  VfRegularThunksBitMapHeader.Buffer = (unsigned int *)&VfRegularThunksBitMap;
  VfRegularThunksBitMapHeader.SizeOfBitMap = 64;
  RtlSetAllBits(&VfRegularThunksBitMapHeader);
  VfPoolThunksBitMapHeader.SizeOfBitMap = 64;
  VfPoolThunksBitMapHeader.Buffer = (unsigned int *)&VfPoolThunksBitMap;
  RtlSetAllBits(&VfPoolThunksBitMapHeader);
  VfDifThunksBitMapHeader.SizeOfBitMap = 736;
  VfDifThunksBitMapHeader.Buffer = (unsigned int *)&VfDifThunksBitMap;
  RtlSetAllBits(&VfDifThunksBitMapHeader);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&stru_140E27B08.ApcState.Process,
    0LL,
    (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
    512,
    48,
    1413572182,
    16,
    VfInitializedWithoutReboot);
  _InterlockedExchange(&ViAvlInitialized, 1);
  if ( !VfSafeMode )
  {
    if ( (int)VfAvlInitializeTreeEx(&ViTargetDriversAvl, 0LL, 72, (RTL_AVL_FREE_ROUTINE *)ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_140F08DA0 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  ViThunkFindAllExportAddresses(&VfRegularThunks, v0, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(&VfPoolThunks, v1, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(&VfDifThunks, v2, &VfDifThunksBitMapHeader);
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
  {
    NtSetDebugFilterState(0x5Du, 0, 1);
    if ( (_DWORD)MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    if ( (unsigned int)(DifPluginConfigDataLength - 1) <= 0xFFFFFFFD )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)DifPluginConfigDataLength, 0x66436644u);
      DifPluginCfgContext = (__int64)Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, DifPluginConfigData, (unsigned int)DifPluginConfigDataLength);
        DifPluginCfgContextSize = (unsigned int)DifPluginConfigDataLength / 0xC;
      }
    }
    DifRegisterKernelPlugins();
    VfInitVerifierComponents(MmVerifierData, (unsigned int)ViVerifyAllDrivers, (unsigned int)KernelVerifier, 0);
    v5 = (PVOID *)PsLoadedModuleList;
    ViFullyInitialized = 1;
    v6 = *((_QWORD *)PsLoadedModuleList + 6) + *((unsigned int *)PsLoadedModuleList + 16);
    ViDriverKernelBase = *((_QWORD *)PsLoadedModuleList + 6);
    ViDriverKernelEnd = v6;
    if ( KernelVerifier )
      VfDriverLoadImage((__int64)PsLoadedModuleList, v4, 1u);
    v7 = (PVOID *)*v5;
    ViLogAndLoadXdv();
    while ( v7 != &PsLoadedModuleList )
    {
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 11), &XdvName, 1u) )
        VfDriverLoadImage((__int64)v7, v8, 0);
      v7 = (PVOID *)*v7;
    }
  }
  else
  {
    v9 = PsLoadedModuleList;
    v10 = *((_QWORD *)PsLoadedModuleList + 6);
    v11 = *(PVOID **)PsLoadedModuleList;
    ViDriverKernelEnd = v10 + *((unsigned int *)PsLoadedModuleList + 16);
    ViDriverKernelBase = v10;
    while ( v11 != &PsLoadedModuleList )
    {
      VfDriverLoadImage((__int64)v11, (__int64)v9, 0);
      v11 = (PVOID *)*v11;
    }
  }
}
