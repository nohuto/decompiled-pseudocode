/*
 * XREFs of MiPartitionTrimmedEnough @ 0x1404BB97C
 * Callers:
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiTrimDelayNeeded @ 0x1403E435C (MiTrimDelayNeeded.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiLogContinueTrim @ 0x1406FC9F0 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiPartitionTrimmedEnough(__int64 a1, __int64 a2, int a3, KIRQL a4)
{
  int v4; // eax
  unsigned __int64 v7; // r12
  volatile LONG *v9; // r14
  volatile LONG *v10; // rcx
  __int64 v11; // r15
  KIRQL v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  volatile LONG *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  volatile LONG *v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  __int64 v21; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == 3 || v4 == 2 )
  {
    v18 = (volatile LONG *)(a1 + 21384);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 21384));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 272));
    v19 = *(_QWORD *)(a1 + 18520);
    if ( *(_QWORD *)(a2 + 16) < v19 )
      v20 = v19 - *(_QWORD *)(a2 + 56);
    else
      v20 = 0LL;
    *(_QWORD *)(a1 + 18520) = v20;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 272));
    ExAcquireSpinLockExclusiveAtDpcLevel(v18);
    return 1LL;
  }
  v7 = *(_QWORD *)(a1 + 22464);
  if ( v7 < *(_QWORD *)(a2 + 48) )
  {
    if ( *(_QWORD *)(a2 + 16) >= *(_QWORD *)(a2 + 56) )
    {
      if ( v7 >= 0x420 )
        return 1LL;
      *(_QWORD *)(a2 + 16) = 0LL;
    }
    if ( !a3 )
      return 0LL;
    v9 = (volatile LONG *)(a1 + 21384);
    v10 = (volatile LONG *)(a1 + 21384);
    if ( a4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, a4);
    if ( !(unsigned int)MiTrimDelayNeeded(a1, a2) )
      goto LABEL_22;
    *(_BYTE *)(a2 + 27) = 1;
    v11 = 0LL;
    v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 272));
    v13 = 8LL;
    v14 = (_QWORD *)(a1 + 18528);
    do
    {
      v11 += *v14++;
      --v13;
    }
    while ( v13 );
    v15 = (volatile LONG *)(a1 + 272);
    v21 = *(_QWORD *)(a1 + 18528);
    if ( v12 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v15);
    else
      ExReleaseSpinLockShared(v15, v12);
    if ( v11 - v21 < *(_QWORD *)(a2 + 48) - v7 && !*(_BYTE *)(a1 + 18616) )
      KeSetEvent((PRKEVENT)(a1 + 21264), 0, 0);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    ++*(_DWORD *)(a1 + 18772);
    if ( *(_QWORD *)(a1 + 22464) < *(_QWORD *)(a2 + 48) )
    {
LABEL_22:
      v16 = a1;
      if ( *(_BYTE *)(a2 + 24) < 4u )
      {
        MiUpdatePartitionMemoryUsage(a1);
        ++*(_BYTE *)(a2 + 24);
        if ( stru_140E366D8.FirstArgument
          && *(_DWORD *)stru_140E366D8.FirstArgument
          && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL) )
        {
          MiLogContinueTrim(v17, a1, a2);
        }
        ExAcquireSpinLockExclusive(v9);
        return 0LL;
      }
      while ( !(unsigned int)MiSufficientAvailablePages(v16, 0x32uLL)
           && (unsigned __int64)MiPurgePartitionStandby(a1, 8LL, 64LL, 0) >= 0x40 )
        v16 = a1;
    }
    ExAcquireSpinLockExclusive(v9);
  }
  return 1LL;
}
