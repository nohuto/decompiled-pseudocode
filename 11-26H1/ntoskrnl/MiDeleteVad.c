/*
 * XREFs of MiDeleteVad @ 0x140A017D0
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140B42284 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiManageSubsectionView @ 0x14027D1E0 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiLockAddressSpaceToo @ 0x140317094 (MiLockAddressSpaceToo.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDeleteVirtualAddresses @ 0x14036358C (MiDeleteVirtualAddresses.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiFinishVadDeletion @ 0x14043B7B8 (MiFinishVadDeletion.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiReturnVadDeleted @ 0x14049D1A0 (MiReturnVadDeleted.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     MiVadPhysicalMemoryPfnsReferenced @ 0x1404C946C (MiVadPhysicalMemoryPfnsReferenced.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14052DE78 (MiInitPerfMemoryFlags.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407075A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     MiDereferenceExtendInfo @ 0x140B1B300 (MiDereferenceExtendInfo.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  int v17; // r13d
  unsigned __int64 v18; // rdi
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rsi
  char v21; // r9
  __int64 result; // rax
  char v23; // cl
  struct _KLOCK_ENTRIES *v24; // r9
  void *v25; // rcx
  int v26; // eax
  unsigned int *v27; // rdi
  unsigned int *v28; // rbx
  volatile signed __int64 *v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  unsigned int SessionId; // eax
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // rcx
  char v36; // rax^4
  unsigned __int64 v37; // rcx
  unsigned int inited; // eax
  unsigned int *v39; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-58h]
  unsigned int *v41; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-48h]
  __int128 v43; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h]
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+C0h] [rbp+40h]
  _KPROCESS *Process; // [rsp+D8h] [rbp+58h]

  v41 = 0LL;
  v46 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v6 = (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) << 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = ((*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32)) << 12) | 0xFFF;
  v40 = v6;
  v7 = MiIsVadLargePrivate(BugCheckParameter2) ? 0x40 : 0;
  VadFlags = MiReadVadFlags(BugCheckParameter2);
  v47 = VadFlags & 0x80000;
  if ( (VadFlags & 0x80000) == 0 )
  {
    v25 = *(void **)(BugCheckParameter2 + 136);
    if ( v25 )
    {
      ObfDereferenceObjectWithTag(v25, 0x63536D4Du);
      v9 = (__int64)Process;
    }
  }
  if ( (VadFlags & 0x880000) == 0x880000 )
    MiDeleteEnclavePages(v9, BugCheckParameter2);
  v11 = VadFlags & 0x1C;
  if ( v11 == 12 )
    *((_QWORD *)&v45 + 1) = MiRemoveUserPhysicalPagesView(BugCheckParameter2);
  v12 = *(unsigned int *)(BugCheckParameter2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 34) << 32);
  if ( v12 != 0x7FFFFFFFDLL || (a3 & 0x40000000) != 0 )
    MiSetVadDeleted(BugCheckParameter2, v12, v9, v10);
  else
    v7 |= 0x80u;
  if ( v47 && v11 == 4 )
    MiVadPhysicalMemoryPfnsReferenced(VadFlags);
  IsVadLargePrivate = MiIsVadLargePrivate(BugCheckParameter2);
  v17 = v15 | 0x800;
  if ( !IsVadLargePrivate )
    v17 = v15;
  if ( v7 < 0x80 )
  {
    *(_QWORD *)&v45 = BugCheckParameter2;
    MiDeleteVirtualAddresses(v40, v42, v17, (__int64)&v43);
    if ( (v17 & 0x800) != 0 )
    {
      v30 = v46;
      v31 = *(unsigned int *)(BugCheckParameter2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 34) << 32);
      if ( v46 )
      {
        v46 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v30);
      }
      v34 = v31 - v44;
      *(_QWORD *)(MiLocateLockedVadEvent(BugCheckParameter2, 0x10u) + 40) = v34;
      v35 = *((_QWORD *)&v43 + 1);
      v36 = BYTE12(v43);
      *(_DWORD *)(BugCheckParameter2 + 52) = DWORD2(v43);
      v37 = v35 - v44;
      *(_BYTE *)(BugCheckParameter2 + 34) = v36;
      _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, v37);
      *(_QWORD *)&v44 = 0LL;
    }
  }
  if ( (v17 & 2) != 0 )
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
        &v41);
      if ( (MiReadVadFlags2(BugCheckParameter2) & 1) != 0 )
        LOBYTE(v7) = v7 | 0x20;
      MiGetProtoPteAddress(
        BugCheckParameter2,
        *(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32),
        0,
        &v39);
    }
    if ( (v7 & 8) == 0 )
    {
      if ( v11 != 20 )
      {
        MiDrainSystemAccessLog((__int64)&Process[2].ReadyListHead.Blink, v14, v15);
        if ( v11 == 8 )
        {
          if ( (*(_DWORD *)(v5 + 56) & 8) != 0 && (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
            LOBYTE(v7) = v7 | 2;
          LOBYTE(v7) = v7 | 4;
        }
        else if ( !v47 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress(
            BugCheckParameter2,
            *(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32),
            0,
            &v41);
          MiGetProtoPteAddress(
            BugCheckParameter2,
            *(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32),
            0,
            &v39);
        }
      }
      v23 = v7 | 1;
      if ( *(__int64 *)(BugCheckParameter2 + 128) >= 0 )
        v23 = v7;
      LOBYTE(v7) = v23 | 8;
    }
  }
  v18 = (unsigned __int64)Process;
  MiLockAddressSpaceToo((__int64)Process, BugCheckParameter2, a2, v16);
  if ( (v7 & 0x80) == 0 )
  {
    MiRemoveVad(BugCheckParameter2, (v7 & 0x80) + 1, a2);
    MiReturnVadDeleted((__int64)Process);
    if ( a2 )
    {
      v29 = (volatile signed __int64 *)(a2 + 40);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v29);
      KeAbPostRelease((unsigned __int64)v29);
      v18 = (unsigned __int64)Process;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 8) = *((_QWORD *)&v43 + 1);
  *(_QWORD *)BugCheckParameter2 = v44;
  if ( (v7 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v20 = v40;
    MiLogPerfMemoryRangeEvent(
      v40,
      *(unsigned int *)(v18 + 464),
      inited,
      (*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
    - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
    + 1);
  }
  else
  {
    v20 = v40;
  }
  if ( (v7 & 1) != 0 )
    MiDereferenceExtendInfo(*(_QWORD *)(BugCheckParameter2 + 128), v5);
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      SessionId = PsGetSessionIdEx(v18);
      MiDereferencePerSessionProtos(v5, SessionId);
    }
    if ( (v7 & 4) != 0 )
    {
      v26 = MiControlAreaRequiresCharge(v5);
      if ( !v26 || v26 == 2 )
        MiReturnCrossPartitionControlAreaCharges(v5);
    }
    MiRemoveSharedCommitNode(v5, v18, 0, v19);
    MiManageSubsectionView(*(_QWORD **)(BugCheckParameter2 + 80), (_QWORD *)(BugCheckParameter2 + 104), 4, v24);
  }
  v21 = 0;
  if ( a2 || (v7 & 0x80) != 0 )
    v21 = 1;
  result = MiFinishVadDeletion((_DWORD *)BugCheckParameter2, v20, v42, v21);
  if ( v5 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v5);
    }
    else
    {
      v27 = v41;
      if ( v41 )
      {
        v33 = (v7 & 0x20) == 0;
        v28 = v39;
        if ( !v33 )
          MiDecrementLargeSubsections((__int64 *)v41, (__int64 *)v39);
      }
      else
      {
        v28 = v39;
      }
      return MiUnmapViewSubsections(v5, v27, v28);
    }
  }
  return result;
}
