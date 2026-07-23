/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1403681E0
 * Callers:
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
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
    v6 = ExAcquireSpinLockExclusive(&dword_140E3BF00);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x32uLL) )
    {
      if ( byte_140E2C71C )
        byte_140E2C71C = 0;
      v2 = 1;
      goto LABEL_22;
    }
    if ( i != 1 )
      break;
    if ( byte_140E2C71C )
    {
      if ( dword_140E2C718 == dword_140E3BF40 )
        goto LABEL_22;
      byte_140E2C71C = 0;
    }
LABEL_14:
    KeResetEvent(&Object);
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BF00);
    else
      ExReleaseSpinLockExclusive(&dword_140E3BF00, v6);
  }
  if ( i != 258 )
  {
    Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    goto LABEL_14;
  }
  if ( !byte_140E2C71C )
  {
    dword_140E2C718 = dword_140E3BF40;
    byte_140E2C71C = 1;
  }
LABEL_22:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BF00);
  else
    ExReleaseSpinLockExclusive(&dword_140E3BF00, v6);
  return v2;
}
