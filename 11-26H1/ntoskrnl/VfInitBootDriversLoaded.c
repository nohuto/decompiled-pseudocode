/*
 * XREFs of VfInitBootDriversLoaded @ 0x140CE4CB4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     CarInit @ 0x14064D6BC (CarInit.c)
 *     DifInit @ 0x14064F4A0 (DifInit.c)
 *     DifRegisterKernelPlugins @ 0x14064F5EC (DifRegisterKernelPlugins.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     NtSetDebugFilterState @ 0x1408AD360 (NtSetDebugFilterState.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VfInitVerifierComponents @ 0x140C27ED0 (VfInitVerifierComponents.c)
 *     ViLogAndLoadXdv @ 0x140C27F44 (ViLogAndLoadXdv.c)
 *     VfAvlInitializeTreeEx @ 0x140C280DC (VfAvlInitializeTreeEx.c)
 *     VfObjectContextInit @ 0x140C28774 (VfObjectContextInit.c)
 *     VfThunkGetNumberOfWdmThunk @ 0x140C3B4B0 (VfThunkGetNumberOfWdmThunk.c)
 *     VfDriverLoadImage @ 0x140C4CAE0 (VfDriverLoadImage.c)
 *     ViThunkFindAllExportAddresses @ 0x140CE5574 (ViThunkFindAllExportAddresses.c)
 *     VfSuspectDriversParseRegistryString @ 0x140CE5798 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140CE5950 (VfXdvExcludeParseRegistryString.c)
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
    (__int64)&stru_140E27C48.ApcState.Process,
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
      dword_140F09120 = 0;
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
