/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18007E780
 * Callers:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpFindTlsEntry @ 0x18007F0F0 (LdrpFindTlsEntry.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(__int64 a1, _QWORD *a2)
{
  _QWORD *TlsEntry; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock, 0LL);
  TlsEntry = (_QWORD *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *TlsEntry;
    if ( *(_QWORD **)(*TlsEntry + 8LL) != TlsEntry || (v7 = (_QWORD *)TlsEntry[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_BYTE *)qword_1801CB6C8 + ((unsigned __int64)*((unsigned int *)v5 + 16) >> 3)) &= ~(1 << (v5[8] & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap_0();
  return 0LL;
}
