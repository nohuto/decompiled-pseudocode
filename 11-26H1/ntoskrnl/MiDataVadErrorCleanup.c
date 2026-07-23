/*
 * XREFs of MiDataVadErrorCleanup @ 0x1409976EC
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiDereferenceExtendInfo @ 0x140B1B300 (MiDereferenceExtendInfo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    MiReleaseVadEventBlocks(v8);
    ExFreePoolWithTag(v8, 0);
  }
}
