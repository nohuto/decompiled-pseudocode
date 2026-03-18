/*
 * XREFs of MiDeleteVad @ 0x14095BF10
 * Callers:
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 *     MiCreateEnclave @ 0x140875FD4 (MiCreateEnclave.c)
 *     MiCleanVad @ 0x14095B57C (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14095CF04 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140B40254 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     MiManageSubsectionView @ 0x14027DC70 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiIsVadLargePrivate @ 0x14030B6CC (MiIsVadLargePrivate.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MiLockAddressSpaceToo @ 0x140315064 (MiLockAddressSpaceToo.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiDeleteVirtualAddresses @ 0x1403617EC (MiDeleteVirtualAddresses.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiDrainSystemAccessLog @ 0x1403BB21C (MiDrainSystemAccessLog.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiSetVadDeleted @ 0x14046F708 (MiSetVadDeleted.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     MiReturnVadDeleted @ 0x1404A3690 (MiReturnVadDeleted.c)
 *     MiControlAreaRequiresCharge @ 0x1404A9D84 (MiControlAreaRequiresCharge.c)
 *     MiReturnFullProcessCharges @ 0x1404C9B60 (MiReturnFullProcessCharges.c)
 *     MiVadPhysicalMemoryPfnsReferenced @ 0x1404CFA3C (MiVadPhysicalMemoryPfnsReferenced.c)
 *     MiDereferenceControlArea @ 0x1404EF3F0 (MiDereferenceControlArea.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14050151C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14050818C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14052B958 (MiInitPerfMemoryFlags.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407028D4 (MiRemoveUserPhysicalPagesView.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x140A96D34 (MiDereferencePerSessionProtos.c)
 *     MiDereferenceExtendInfo @ 0x140B18EB8 (MiDereferenceExtendInfo.c)
 *     MiDeleteEnclavePages @ 0x140C01AD8 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiDeleteVad(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int VadFlags; // edi
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // r12d
  unsigned __int64 v12; // rdx
  BOOL IsVadLargePrivate; // eax
  int v14; // r8d
  struct _KLOCK_ENTRIES *v15; // r9
  int v16; // r13d
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // r9
  __int64 result; // rax
  char v21; // cl
  struct _KLOCK_ENTRIES *v22; // r9
  void *v23; // rcx
  int v24; // eax
  unsigned int *v25; // rdi
  unsigned int *v26; // rbx
  volatile signed __int64 *v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  unsigned int SessionId; // eax
  bool v31; // zf
  __int64 v32; // rsi
  __int64 v33; // rcx
  char v34; // rax^4
  unsigned __int64 v35; // rcx
  unsigned int inited; // eax
  unsigned int *v37; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-58h]
  unsigned int *v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-48h]
  __int128 v41; // [rsp+40h] [rbp-40h] BYREF
  __int128 v42; // [rsp+50h] [rbp-30h]
  __int128 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  int v45; // [rsp+C0h] [rbp+40h]
  _KPROCESS *Process; // [rsp+D8h] [rbp+58h]

  v39 = 0LL;
  v44 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v6 = (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) << 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = ((*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32)) << 12) | 0xFFF;
  v38 = v6;
  v7 = MiIsVadLargePrivate(BugCheckParameter2) ? 0x40 : 0;
  VadFlags = MiReadVadFlags(BugCheckParameter2);
  v45 = VadFlags & 0x80000;
  if ( (VadFlags & 0x80000) == 0 )
  {
    v23 = *(void **)(BugCheckParameter2 + 136);
    if ( v23 )
    {
      ObfDereferenceObjectWithTag(v23, 0x63536D4Du);
      v9 = (__int64)Process;
    }
  }
  if ( (VadFlags & 0x880000) == 0x880000 )
    MiDeleteEnclavePages(v9, BugCheckParameter2);
  v11 = VadFlags & 0x1C;
  if ( v11 == 12 )
    *((_QWORD *)&v43 + 1) = MiRemoveUserPhysicalPagesView(BugCheckParameter2);
  v12 = *(unsigned int *)(BugCheckParameter2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 34) << 32);
  if ( v12 != 0x7FFFFFFFDLL || (a3 & 0x40000000) != 0 )
    MiSetVadDeleted(BugCheckParameter2, v12, v9, v10);
  else
    v7 |= 0x80u;
  if ( v45 && v11 == 4 )
    MiVadPhysicalMemoryPfnsReferenced(VadFlags);
  IsVadLargePrivate = MiIsVadLargePrivate(BugCheckParameter2);
  v16 = v14 | 0x800;
  if ( !IsVadLargePrivate )
    v16 = v14;
  if ( v7 < 0x80 )
  {
    *(_QWORD *)&v43 = BugCheckParameter2;
    MiDeleteVirtualAddresses(v38, v40, v16, (__int64)&v41);
    if ( (v16 & 0x800) != 0 )
    {
      v28 = v44;
      v29 = *(unsigned int *)(BugCheckParameter2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 34) << 32);
      if ( v44 )
      {
        v44 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v28);
      }
      v32 = v29 - v42;
      *(_QWORD *)(MiLocateLockedVadEvent(BugCheckParameter2, 0x10u) + 40) = v32;
      v33 = *((_QWORD *)&v41 + 1);
      v34 = BYTE12(v41);
      *(_DWORD *)(BugCheckParameter2 + 52) = DWORD2(v41);
      v35 = v33 - v42;
      *(_BYTE *)(BugCheckParameter2 + 34) = v34;
      _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, v35);
      *(_QWORD *)&v42 = 0LL;
    }
  }
  if ( (v16 & 2) != 0 )
  {
    v5 = **(_QWORD **)(BugCheckParameter2 + 80);
    if ( v11 == 8 )
    {
      if ( (MiReadVadFlags2(BugCheckParameter2) & 1) != 0 )
        LOBYTE(v7) = v7 | 0x18;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      if ( (((VadFlags & 0x3E0) - 128) & 0xFFFFFFBF) == 0 )
        _InterlockedAdd((volatile signed __int32 *)(v5 + 92), 0xFFFFFFFF);
      MiGetProtoPteAddress(
        BugCheckParameter2,
        *(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32),
        0,
        &v39);
      if ( (MiReadVadFlags2(BugCheckParameter2) & 1) != 0 )
        LOBYTE(v7) = v7 | 0x20;
      MiGetProtoPteAddress(
        BugCheckParameter2,
        *(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32),
        0,
        &v37);
    }
    if ( (v7 & 8) == 0 )
    {
      if ( v11 != 20 )
      {
        MiDrainSystemAccessLog((__int64)&Process[2].ReadyListHead.Blink);
        if ( v11 == 8 )
        {
          if ( (*(_DWORD *)(v5 + 56) & 8) != 0 && (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
            LOBYTE(v7) = v7 | 2;
          LOBYTE(v7) = v7 | 4;
        }
        else if ( !v45 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress(
            BugCheckParameter2,
            *(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32),
            0,
            &v39);
          MiGetProtoPteAddress(
            BugCheckParameter2,
            *(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32),
            0,
            &v37);
        }
      }
      v21 = v7 | 1;
      if ( *(__int64 *)(BugCheckParameter2 + 128) >= 0 )
        v21 = v7;
      LOBYTE(v7) = v21 | 8;
    }
  }
  v17 = (__int64)Process;
  MiLockAddressSpaceToo((__int64)Process, BugCheckParameter2, a2, v15);
  if ( (v7 & 0x80) == 0 )
  {
    MiRemoveVad(BugCheckParameter2, (v7 & 0x80) + 1, a2);
    MiReturnVadDeleted((__int64)Process);
    if ( a2 )
    {
      v27 = (volatile signed __int64 *)(a2 + 40);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v27);
      KeAbPostRelease((unsigned __int64)v27);
      v17 = (__int64)Process;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 8) = *((_QWORD *)&v41 + 1);
  *(_QWORD *)BugCheckParameter2 = v42;
  if ( (v7 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v18 = v38;
    MiLogPerfMemoryRangeEvent(
      v38,
      *(unsigned int *)(v17 + 464),
      inited,
      (*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
    - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
    + 1);
  }
  else
  {
    v18 = v38;
  }
  if ( (v7 & 1) != 0 )
    MiDereferenceExtendInfo(*(_QWORD *)(BugCheckParameter2 + 128), v5);
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      SessionId = PsGetSessionIdEx(v17);
      MiDereferencePerSessionProtos(v5, SessionId);
    }
    if ( (v7 & 4) != 0 )
    {
      v24 = MiControlAreaRequiresCharge(v5);
      if ( !v24 || v24 == 2 )
        MiReturnCrossPartitionControlAreaCharges(v5);
    }
    MiRemoveSharedCommitNode(v5, v17, 0LL);
    MiManageSubsectionView(*(_QWORD **)(BugCheckParameter2 + 80), (_QWORD *)(BugCheckParameter2 + 104), 4, v22);
  }
  v19 = 0;
  if ( a2 || (v7 & 0x80) != 0 )
    v19 = 1;
  result = MiFinishVadDeletion((_DWORD *)BugCheckParameter2, v18, v40, v19);
  if ( v5 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v5);
    }
    else
    {
      v25 = v39;
      if ( v39 )
      {
        v31 = (v7 & 0x20) == 0;
        v26 = v37;
        if ( !v31 )
          MiDecrementLargeSubsections((__int64 *)v39, (__int64 *)v37);
      }
      else
      {
        v26 = v37;
      }
      return MiUnmapViewSubsections(v5, v25, v26);
    }
  }
  return result;
}
