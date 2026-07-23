/*
 * XREFs of RtlQueryPropertyStore @ 0x14061D710
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     RtlpAcquirePropStoreLockShared @ 0x14061D9CC (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x14061DA70 (RtlpReleasePropStoreLockShared.c)
 */

NTSTATUS __cdecl RtlQueryPropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  char v4; // al
  unsigned __int64 ThreadLock; // rdx
  NTSTATUS v6; // ebx
  char v7; // di
  _QWORD *v8; // rax

  v4 = RtlpAcquirePropStoreLockShared((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
  ThreadLock = NormalizationListLock.ThreadLock;
  v6 = 0;
  v7 = v4;
  if ( NormalizationListLock.ThreadLock
    && (v8 = bsearch(
               (const void *)Key,
               (const void *)NormalizationListLock.ThreadLock,
               LODWORD(NormalizationListLock.StackBase),
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    *Context = v8[2];
  }
  else
  {
    v6 = -1073741275;
  }
  LOBYTE(ThreadLock) = v7;
  RtlpReleasePropStoreLockShared((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, ThreadLock);
  return v6;
}
