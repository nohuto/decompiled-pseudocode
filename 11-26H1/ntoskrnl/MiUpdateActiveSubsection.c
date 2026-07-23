/*
 * XREFs of MiUpdateActiveSubsection @ 0x1406FCE68
 * Callers:
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiUpdateActiveSubsection(_QWORD *BugCheckParameter2)
{
  int v1; // edi
  ULONG_PTR v2; // rbx
  int FileExtents; // r15d
  unsigned __int64 v4; // r12
  volatile LONG *v5; // rbp
  KIRQL v6; // si
  int v7; // r13d
  BOOL v8; // r14d
  volatile LONG *v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = (ULONG_PTR)BugCheckParameter2;
  v11 = *BugCheckParameter2;
  FileExtents = 0;
  v4 = 0LL;
  v5 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( !*(_QWORD *)(v2 + 8) || (*(_DWORD *)(v2 + 32) & 0x40000) == 0 )
      goto LABEL_12;
    if ( (int)MiReferenceSubsection((__int64 *)v2, 0) < 2 )
      break;
    v7 = *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 52);
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v6);
    FileExtents = MiAllocateFileExtents((struct _KTHREAD *)v2, 0, 0LL);
    v8 = 0;
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( FileExtents >= 0 )
      v8 = v7 != *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 52);
    v4 += MiDecrementSubsections((_QWORD *)v2, (_QWORD *)v2, 0);
    if ( v8 )
      goto LABEL_13;
    if ( FileExtents < 0 )
      goto LABEL_14;
LABEL_12:
    v2 = *(_QWORD *)(v2 + 16);
LABEL_13:
    if ( !v2 )
    {
LABEL_14:
      v9 = (volatile LONG *)(v11 + 72);
      if ( v6 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      else
        ExReleaseSpinLockExclusive(v9, v6);
      if ( v4 )
      {
        LOBYTE(v1) = *(_QWORD *)(v11 + 64) != 0LL;
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v11 + 60) & 0x3FF)),
          v1,
          v4);
      }
      return (unsigned int)FileExtents;
    }
  }
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v6);
  return 0LL;
}
