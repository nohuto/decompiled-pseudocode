/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800C1840
 * Callers:
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpFindTlsEntry @ 0x1800C1900 (LdrpFindTlsEntry.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(__int64 a1, unsigned int **a2)
{
  unsigned int *TlsEntry; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  unsigned int **v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (unsigned int *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *(_QWORD *)TlsEntry;
    if ( *(unsigned int **)(*(_QWORD *)TlsEntry + 8LL) != TlsEntry
      || (v7 = (unsigned int **)*((_QWORD *)TlsEntry + 1), *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = (unsigned int *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_BYTE *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v5[16] >> 3)) &= ~(1 << (v5[16] & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap_0(LdrpTlsHeap, 0, v5);
  return 0LL;
}
