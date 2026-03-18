/*
 * XREFs of RtlRemovePropertyStore @ 0x14061A840
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140536920 (bsearch.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061A930 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061A9EC (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall RtlRemovePropertyStore(void *Key, _QWORD *a2)
{
  char v4; // al
  __int64 v5; // r8
  void *StackBase; // rdx
  unsigned int v7; // edi
  char v8; // si
  _QWORD *v9; // rax
  unsigned int ThreadLock_high; // ebx

  v4 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
  StackBase = NormalizationListLock.StackBase;
  v7 = 0;
  v8 = v4;
  if ( NormalizationListLock.StackBase
    && (v9 = bsearch(
               Key,
               NormalizationListLock.StackBase,
               HIDWORD(NormalizationListLock.ThreadLock),
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    ThreadLock_high = HIDWORD(NormalizationListLock.ThreadLock);
    *a2 = v9[2];
    memmove(v9, v9 + 3, 24 * (ThreadLock_high - ((char *)v9 - (char *)NormalizationListLock.StackBase) / 24) - 24);
    HIDWORD(NormalizationListLock.ThreadLock) = ThreadLock_high - 1;
  }
  else
  {
    v7 = -1073741275;
  }
  LOBYTE(StackBase) = v8;
  RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, StackBase, v5);
  return v7;
}
