/*
 * XREFs of MmFreeMappingAddress @ 0x140B12E50
 * Callers:
 *     SmFpCleanup @ 0x1403F02E0 (SmFpCleanup.c)
 *     DifMmFreeMappingAddressWrapper @ 0x140666BA0 (DifMmFreeMappingAddressWrapper.c)
 *     PnprFreeMappingReserve @ 0x1407AF0E4 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1407AF578 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB0100 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiRemoveMappingNode @ 0x1404D7514 (MiRemoveMappingNode.c)
 *     MiRemovePteTracker @ 0x1404ED38C (MiRemovePteTracker.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rbx
  _QWORD *v4; // rax
  void *v5; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v7; // r10
  unsigned __int64 *PteAddress; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v4[3]);
  v9 = (unsigned __int64)PteAddress;
  v10 = &PteAddress[BugCheckParameter4];
  while ( v9 < (unsigned __int64)v10 )
  {
    if ( ((unsigned __int64 *)v9 == PteAddress || (v9 & 0xFFF) == 0) && (*(_QWORD *)MiGetPteAddress(v9) & 0x80u) != 0LL )
      KeBugCheckEx(0xDAu, 0x109uLL, v7, v2, BugCheckParameter4);
    if ( *(_QWORD *)v9 )
      KeBugCheckEx(0xDAu, 0x103uLL, v7, v2, BugCheckParameter4);
    v9 += 8LL;
  }
  if ( (dword_140FBE20C & 1) != 0 )
    MiRemovePteTracker(0LL, v7, BugCheckParameter4);
  MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
