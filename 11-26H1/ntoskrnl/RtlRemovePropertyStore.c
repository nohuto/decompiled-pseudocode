/*
 * XREFs of RtlRemovePropertyStore @ 0x14061D890
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061D980 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061DA3C (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __cdecl RtlRemovePropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  char v4; // al
  __int64 v5; // r8
  unsigned __int64 ThreadLock; // rdx
  NTSTATUS v7; // edi
  char v8; // si
  unsigned __int64 *v9; // rax
  unsigned int StackBase; // ebx

  v4 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
  ThreadLock = NormalizationListLock.ThreadLock;
  v7 = 0;
  v8 = v4;
  if ( NormalizationListLock.ThreadLock
    && (v9 = (unsigned __int64 *)bsearch(
                                   (const void *)Key,
                                   (const void *)NormalizationListLock.ThreadLock,
                                   LODWORD(NormalizationListLock.StackBase),
                                   0x18uLL,
                                   RtlpComparePropertyEntry)) != 0LL )
  {
    StackBase = (unsigned int)NormalizationListLock.StackBase;
    *Context = v9[2];
    memmove(v9, v9 + 3, 24 * (StackBase - (__int64)((__int64)v9 - NormalizationListLock.ThreadLock) / 24) - 24);
    LODWORD(NormalizationListLock.StackBase) = StackBase - 1;
  }
  else
  {
    v7 = -1073741275;
  }
  LOBYTE(ThreadLock) = v8;
  RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, ThreadLock, v5);
  return v7;
}
