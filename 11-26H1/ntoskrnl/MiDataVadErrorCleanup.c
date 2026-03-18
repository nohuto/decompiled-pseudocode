/*
 * XREFs of MiDataVadErrorCleanup @ 0x1409C670C
 * Callers:
 *     MiMapViewOfDataSection @ 0x1409C47B0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDereferenceControlArea @ 0x1404EF3F0 (MiDereferenceControlArea.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiReleaseVadEventBlocks @ 0x14095C4CC (MiReleaseVadEventBlocks.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiDereferenceExtendInfo @ 0x140B18EB8 (MiDereferenceExtendInfo.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDataVadErrorCleanup(__int64 *a1)
{
  __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rcx
  _QWORD *v8; // rbx
  void *v9; // rcx
  __int64 *SubsectionNode; // rax

  v1 = *a1;
  CurrentThread = KeGetCurrentThread();
  v4 = a1[17];
  v5 = *(_QWORD *)(*a1 + 88);
  if ( v4 )
    MiUnlockVad((__int64)CurrentThread, v4);
  if ( (a1[7] & 1) != 0 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v5);
  v6 = a1[3];
  if ( (a1[7] & 4) != 0 )
    MiRemoveSharedCommitNode(a1[3], v5, 0LL);
  if ( (a1[7] & 2) != 0 )
  {
    SubsectionNode = (__int64 *)MiLocateSubsectionNode(v6, *(_QWORD *)a1[2] - 1LL + *(_QWORD *)(v1 + 32), 0);
    MiDecrementLargeSubsections((__int64 *)a1[10], SubsectionNode);
  }
  v7 = (__int64 *)a1[10];
  if ( v7 )
    MiRemoveViewsFromSectionWithPfn(v7, a1[12], 4);
  MiDereferenceControlArea(v6);
  v8 = (_QWORD *)a1[13];
  if ( v8 )
  {
    if ( (__int64)v8[16] < 0 )
      MiDereferenceExtendInfo(v8[16], v6);
    v9 = (void *)v8[17];
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x63536D4Du);
    MiReleaseVadEventBlocks((__int64)v8);
    ExFreePoolWithTag(v8, 0);
  }
}
