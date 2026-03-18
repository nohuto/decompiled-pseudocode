/*
 * XREFs of MiDeleteSegmentPages @ 0x140478E6C
 * Callers:
 *     MiInitializeImageExtents @ 0x14086D3A0 (MiInitializeImageExtents.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiGetCommittedPages @ 0x14045C518 (MiGetCommittedPages.c)
 *     MiDeleteSubsectionPages @ 0x1404919FC (MiDeleteSubsectionPages.c)
 *     MiDeleteSubsectionExtents @ 0x1404B6680 (MiDeleteSubsectionExtents.c)
 */

void __fastcall MiDeleteSegmentPages(_QWORD *a1)
{
  BOOL v2; // ebp
  __int64 v3; // r15
  __int64 v4; // r14
  __int16 v5; // bx
  struct _KTHREAD *i; // rdi
  KIRQL v7; // bp
  volatile LONG *v8; // rcx
  __int64 CommittedPages; // rax
  __int64 v10; // rdi
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*((_DWORD *)a1 + 15) & 0x3FF));
  if ( a1[8] )
    v2 = (a1[7] & 0x20) == 0;
  v5 = ((unsigned __int16)*(_DWORD *)(*a1 + 12LL) >> 10) & 1;
  for ( i = (struct _KTHREAD *)(a1 + 16); i; i = (struct _KTHREAD *)i->Header.WaitListHead.Blink )
  {
    v3 += MiDeleteSubsectionPages(i);
    if ( v2 )
      MiDeleteSubsectionExtents(i);
  }
  v11 = 0;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  while ( 1 )
  {
    v8 = (volatile LONG *)(a1 + 9);
    if ( !a1[4] )
      break;
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      ExReleaseSpinLockExclusive(v8, v7);
    KeYieldProcessorEx(&v11);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, v7);
  CommittedPages = MiGetCommittedPages(a1);
  v10 = CommittedPages;
  if ( CommittedPages )
  {
    if ( v5 )
      MiReturnResident(v4, CommittedPages - v3);
    MiReturnCommit(v4, v10 - v3, 0);
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 23480), -v10);
  }
}
