/*
 * XREFs of MiRetryNonPagedAllocation @ 0x140366440
 * Callers:
 *     MiGetPoolPages @ 0x140365A30 (MiGetPoolPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x14028EAB0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

__int64 __fastcall MiRetryNonPagedAllocation(int a1)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *Timeout; // rbp
  NTSTATUS i; // esi
  KIRQL v6; // di

  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 0LL;
  v2 = 0;
  if ( !KeAreInterruptsEnabled() || a1 )
    return 0LL;
  if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x32uLL) )
    return 1LL;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&Object, WrFreePage, 0, 0, Timeout) )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140E3BD80);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x32uLL) )
    {
      if ( byte_140E2C59C )
        byte_140E2C59C = 0;
      v2 = 1;
      goto LABEL_22;
    }
    if ( i != 1 )
      break;
    if ( byte_140E2C59C )
    {
      if ( dword_140E2C598 == dword_140E3BDC0 )
        goto LABEL_22;
      byte_140E2C59C = 0;
    }
LABEL_14:
    KeResetEvent(&Object);
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BD80);
    else
      ExReleaseSpinLockExclusive(&dword_140E3BD80, v6);
  }
  if ( i != 258 )
  {
    Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    goto LABEL_14;
  }
  if ( !byte_140E2C59C )
  {
    dword_140E2C598 = dword_140E3BDC0;
    byte_140E2C59C = 1;
  }
LABEL_22:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BD80);
  else
    ExReleaseSpinLockExclusive(&dword_140E3BD80, v6);
  return v2;
}
