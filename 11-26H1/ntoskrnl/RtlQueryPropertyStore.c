/*
 * XREFs of RtlQueryPropertyStore @ 0x14061A6C0
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140536920 (bsearch.c)
 *     RtlpAcquirePropStoreLockShared @ 0x14061A97C (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x14061AA20 (RtlpReleasePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2)
{
  char v4; // al
  void *StackBase; // rdx
  unsigned int v6; // ebx
  char v7; // di
  _QWORD *v8; // rax

  v4 = RtlpAcquirePropStoreLockShared((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
  StackBase = NormalizationListLock.StackBase;
  v6 = 0;
  v7 = v4;
  if ( NormalizationListLock.StackBase
    && (v8 = bsearch(
               Key,
               NormalizationListLock.StackBase,
               HIDWORD(NormalizationListLock.ThreadLock),
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    *a2 = v8[2];
  }
  else
  {
    v6 = -1073741275;
  }
  LOBYTE(StackBase) = v7;
  RtlpReleasePropStoreLockShared((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, StackBase);
  return v6;
}
