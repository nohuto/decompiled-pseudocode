/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x140A7A600
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     IopFreeCompletionListPackets @ 0x140A7A574 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x140A7A5E0 (IoFreeMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A8D900 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(ULONG_PTR BugCheckParameter2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( *(_BYTE *)(BugCheckParameter2 + 16) == 4 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 56) )
    {
      guard_dispatch_icall_no_overrides(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 64));
    }
    else if ( *(_BYTE *)(BugCheckParameter2 + 72) )
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[7].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      if ( *(_BYTE *)(BugCheckParameter2 + 16) == 3 )
        ExReturnPoolQuota(BugCheckParameter2);
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter2);
    }
    else
    {
      ++P->FreeMisses;
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
