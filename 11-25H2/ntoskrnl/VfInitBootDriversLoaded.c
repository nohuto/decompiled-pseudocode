/*
 * XREFs of VfInitBootDriversLoaded @ 0x140C29F60
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     CarInit @ 0x14060AA2C (CarInit.c)
 *     DifRegisterKernelPlugins @ 0x14060CA70 (DifRegisterKernelPlugins.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     NtSetDebugFilterState @ 0x14081ADF0 (NtSetDebugFilterState.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VfInitVerifierComponents @ 0x140B73AF0 (VfInitVerifierComponents.c)
 *     ViLogAndLoadXdv @ 0x140B73B60 (ViLogAndLoadXdv.c)
 *     VfAvlInitializeTreeEx @ 0x140B73CF8 (VfAvlInitializeTreeEx.c)
 *     VfObjectContextInit @ 0x140B74864 (VfObjectContextInit.c)
 *     VfThunkGetNumberOfWdmThunk @ 0x140B872CC (VfThunkGetNumberOfWdmThunk.c)
 *     VfDriverLoadImage @ 0x140B97E14 (VfDriverLoadImage.c)
 *     ViThunkFindAllExportAddresses @ 0x140C2A84C (ViThunkFindAllExportAddresses.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C2AA74 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140C2AC20 (VfXdvExcludeParseRegistryString.c)
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
  VfBugcheckTmpDataLock = 0LL;
  qword_140F034E8 = (__int64)&DifAPIThunkContextHead;
  DifAPIThunkContextHead = (__int64)&DifAPIThunkContextHead;
  DifpPoolTagsSize = (unsigned int)DifpPoolTagsSizeBytes >> 2;
  VfRegularThunksBitMapHeader.Buffer = (unsigned int *)&VfRegularThunksBitMap;
  VfRegularThunksBitMapHeader.SizeOfBitMap = 64;
  RtlSetAllBits(&VfRegularThunksBitMapHeader);
  VfPoolThunksBitMapHeader.SizeOfBitMap = 64;
  VfPoolThunksBitMapHeader.Buffer = (unsigned int *)&VfPoolThunksBitMap;
  RtlSetAllBits(&VfPoolThunksBitMapHeader);
  VfDifThunksBitMapHeader.SizeOfBitMap = 576;
  VfDifThunksBitMapHeader.Buffer = (unsigned int *)&VfDifThunksBitMap;
  RtlSetAllBits(&VfDifThunksBitMapHeader);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&ViAvlNodeLookaside,
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
    if ( (int)VfAvlInitializeTreeEx(
                &ViTargetDriversAvl,
                0LL,
                72,
                (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_140F04180 = 0;
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
    NtSetDebugFilterState(0x5Du, 0, 1u);
    if ( (_DWORD)MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    if ( (unsigned int)(DifPluginConfigDataLength - 1) <= 0xFFFFFFFD )
    {
      Pool2 = (void *)ExAllocatePool2(0x40uLL, (unsigned int)DifPluginConfigDataLength, 0x66436644uLL);
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
