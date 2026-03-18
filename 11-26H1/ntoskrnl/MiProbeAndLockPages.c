/*
 * XREFs of MiProbeAndLockPages @ 0x1403A016C
 * Callers:
 *     CcZeroDataInCache @ 0x14039EF58 (CcZeroDataInCache.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmProbeAndLockPages @ 0x14039FC20 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404CCA58 (MmProbeAndLockPagesPrivate.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     MiCopyVmReadBytes @ 0x140A228B0 (MiCopyVmReadBytes.c)
 *     MiQueryPtePrepare @ 0x140A90EB4 (MiQueryPtePrepare.c)
 *     MmProbeAndLockProcessPages @ 0x140A9A0D0 (MmProbeAndLockProcessPages.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLockKernelScpSection @ 0x140CFAD28 (MiLockKernelScpSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x1402EE280 (MiProbeAndLockPacket.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A0340 (MiUnlockProbePacketWorkingSet.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x1404F3E20 (MiAddMdlTracker.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EA99C (MmUnlockPhysicalPagesByVa.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x140A82B94 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPages(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // r15d
  unsigned __int64 SystemRegionType; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r14
  PMDL v14; // rbx
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rbx
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD v24[3]; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-71h]
  __int64 v27; // [rsp+58h] [rbp-69h]
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-39h]
  __int64 v29; // [rsp+A0h] [rbp-21h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  __int64 v32; // [rsp+C8h] [rbp+7h]
  PVOID P; // [rsp+D0h] [rbp+Fh]

  memset_0(&v25, 0, 0xB8uLL);
  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(unsigned int *)(a1 + 40);
  *a2 |= 0x100000000000000uLL;
  v6 = *(_QWORD *)(a1 + 32) + v4;
  *(_OWORD *)&v24[1] = *(_OWORD *)a2;
  result = MiProbeAndLockPrepare((__int64)&v25, a1, v6, v5, (__int64)&v24[1]);
  if ( (int)result >= 0 )
  {
    v10 = MiProbeAndLockPacket((__int64)&v25, v8, v9);
    SystemRegionType = MiUnlockProbePacketWorkingSet(&v25);
    v13 = v30;
    v14 = MemoryDescriptorList;
    v15 = (v30 >> 57) & 1;
    if ( (v30 & 0x200000000000000LL) == 0 )
    {
      v16 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
      if ( (MmTrackLockedPages & 1) != 0 )
        MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v16);
      if ( (_DWORD)SystemRegionType == 4 )
      {
        SystemRegionType = DifObjTrkIsKvEnabledForPlugin(56LL);
        if ( (_BYTE)SystemRegionType )
          SystemRegionType = DifObjTrkInsertItem(v19, v16, v14->ByteCount, v14);
      }
    }
    v17 = v29;
    if ( v10 < 0 )
    {
      if ( v15 )
      {
        v23 = v26;
        if ( v26 > v25 )
          SystemRegionType = MmUnlockPhysicalPagesByVa(v25, v26 - v25, v12, (v13 >> 1) & 3);
        LODWORD(SystemRegionType) = KeGetPcr()->Prcb.Number;
        _InterlockedAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(v17 + 1040) + ((((SystemRegionType >> 1) & 3) + 9) << 6)),
          -(__int64)((v27 - v23) >> 12));
      }
      else
      {
        MmUnlockPages(v14);
      }
      ++stru_140E2EB88.QueuePriority;
    }
    v18 = (volatile signed __int32 *)P;
    if ( P )
    {
      v20 = v32;
      v21 = v31 + (((unsigned __int64)*((unsigned __int8 *)P + 34) << 32) | *((unsigned int *)P + 13));
      *((_DWORD *)P + 13) += v31;
      *((_BYTE *)v18 + 34) = BYTE4(v21);
      v22 = v20 - v31;
      if ( v22 )
        MiReturnFullProcessCommitment(v17, v22);
      MiUnlockAndDereferenceVad(v18);
    }
    return (unsigned int)v10;
  }
  return result;
}
