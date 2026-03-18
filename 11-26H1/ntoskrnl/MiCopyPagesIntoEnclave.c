/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140AEEB74
 * Callers:
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiGetPteFromCopyList @ 0x140285490 (MiGetPteFromCopyList.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiGetPageForEnclave @ 0x1403418D0 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x140341930 (KeAddEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140341AA8 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140341F44 (MiReturnEnclavePage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMakeProtectionMask @ 0x140364A40 (MiMakeProtectionMask.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiGetVmPartition @ 0x14044FD80 (MiGetVmPartition.c)
 *     MiCreatePteCopyList @ 0x1404500A8 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1404E03EC (MiReleasePteCopyList.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  void *PoolMm; // r14
  unsigned int ProtectionMask; // eax
  int v14; // r8d
  int v15; // r13d
  int v16; // ecx
  __int64 v17; // rbx
  signed int v18; // edi
  unsigned __int64 v19; // rdx
  unsigned __int64 PteAddress; // rbx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // r15
  int CurrentProcessorColor; // eax
  unsigned int v26; // r12d
  __int64 v27; // rbx
  size_t v28; // r8
  unsigned __int64 v29; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v31; // r12
  unsigned __int64 PteFromCopyList; // rbx
  __int64 v33; // rdx
  unsigned __int64 ValidPte; // rax
  unsigned int v35; // [rsp+30h] [rbp-1E8h]
  unsigned __int64 v36; // [rsp+38h] [rbp-1E0h]
  char *Src; // [rsp+40h] [rbp-1D8h]
  int v38; // [rsp+48h] [rbp-1D0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v42; // [rsp+78h] [rbp-1A0h]
  __int64 v43; // [rsp+98h] [rbp-180h]
  __int128 v44; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-168h]
  __int128 v46; // [rsp+C0h] [rbp-158h] BYREF
  _OWORD v47[3]; // [rsp+D0h] [rbp-148h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+100h] [rbp-118h] BYREF

  v36 = a4;
  Src = (char *)a5;
  memset(v47, 0, sizeof(v47));
  v44 = 0LL;
  v45 = 0LL;
  memset_0(&MemoryDescriptorList, 0, 0xB8uLL);
  PoolMm = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v15 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v16 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v14;
  v38 = (32 * (*(_DWORD *)(a2 + 72) & 2)) | v16 | 1;
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
    v15 = ProtectionMask & 2 | 4;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v47);
  v17 = MiComputePageCommitment(a4, a4 + a6 - 1, a2, 0LL, 0LL);
  v18 = v17 != 0 ? 0xC0000018 : 0;
  KiUnstackDetachProcess((__int64)v47, 0);
  if ( v17 )
    return (unsigned int)v18;
  PteAddress = MiGetPteAddress(v36);
  BugCheckParameter4 = PteAddress;
  v42 = PteAddress + 8 * (v19 - 1);
  if ( v19 > 0x14 )
    LODWORD(v19) = 20;
  MiCreatePteCopyList(v19 + 1, (__int64)&v44, v21, v22);
  if ( DWORD1(v44) )
  {
    v23 = a5;
    if ( (a5 & 0xFFF) == 0
      || (CurrentProcessorColor = MmGetCurrentProcessorColor(),
          (PoolMm = (void *)ExAllocatePoolMm(256LL, 0x10000uLL, 1145400653, CurrentProcessorColor | 0x80000000)) != 0LL) )
    {
      MiGetVmPartition((__int64)&BugCheckParameter1[2].ReadyListHead.Blink);
      v18 = 0;
      *a8 = 0LL;
      v43 = (__int64)(*(_QWORD *)(a2 + 88) << 25) >> 16;
      while ( PteAddress <= v42 )
      {
        v26 = 16;
        if ( (unsigned __int64)((__int64)(v42 - PteAddress + 8) >> 3) < 0x10 )
          v26 = (__int64)(v42 - PteAddress + 8) >> 3;
        v35 = v26;
        if ( PoolMm )
        {
          v27 = v26;
          v28 = (unsigned __int64)v26 << 12;
          if ( a3 )
            RtlCopyFromUser(PoolMm, (void *)v23, v28);
          else
            RtlCopyVolatileMemory(PoolMm, (const void *)v23, v28);
          v23 = (__int64)PoolMm;
        }
        else if ( a3 == 1 )
        {
          v27 = v26;
          ProbeForRead((volatile void *)v23, (unsigned __int64)v26 << 12, 1u);
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8 * (((((unsigned __int64)v26 << 12) + (v23 & 0xFFF) + 4095) >> 12) + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)(v23 & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = v23 & 0xFFF;
          MemoryDescriptorList.ByteCount = v26 << 12;
          v46 = 0LL;
          v18 = MiProbeAndLockPages((__int64)&MemoryDescriptorList, &v46);
          if ( v18 < 0 )
            break;
          v23 = (__int64)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v23 )
            goto LABEL_15;
        }
        else
        {
          v27 = v26;
        }
        Src += 4096 * v27;
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v47);
        v29 = v23 - v36;
        while ( v26 )
        {
          PageForEnclave = MiGetPageForEnclave(a2);
          v31 = PageForEnclave;
          if ( PageForEnclave == -1 )
          {
            v18 = -1073741801;
            break;
          }
          PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v44, PageForEnclave, -1LL);
          v18 = KeAddEnclavePage(v43, v29 + v36, (__int64)(PteFromCopyList << 25) >> 16, v36, v38, a9);
          *(_QWORD *)PteFromCopyList = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( v18 < 0 )
          {
            MiReturnEnclavePage(v31, v33);
            break;
          }
          MiInitializeEnclavePfn(v31, BugCheckParameter4, v15, 0);
          ValidPte = MiMakeValidPte(BugCheckParameter4, v31, v15 | 0x80000000);
          MiWriteEnclavePte(BugCheckParameter4, ValidPte, a2, 0, 1);
          v36 += 4096LL;
          BugCheckParameter4 += 8LL;
          v26 = --v35;
          *a8 += 4096LL;
        }
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
        KiUnstackDetachProcess((__int64)v47, 0);
        v23 = (__int64)Src;
        PteAddress = BugCheckParameter4;
      }
    }
    else
    {
LABEL_15:
      v18 = -1073741670;
    }
    if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
      MmUnlockPages(&MemoryDescriptorList);
    if ( PoolMm )
      ExFreePoolWithTag(PoolMm, 0);
    MiReleasePteCopyList((__int64)&v44);
    return (unsigned int)v18;
  }
  return 3221225626LL;
}
