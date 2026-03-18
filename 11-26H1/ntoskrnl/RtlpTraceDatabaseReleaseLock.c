/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1406200F8
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14061FA20 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14061FC60 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14061FD30 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x14061FDC0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x14061FDE0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (v1 & 4) != 0 )
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 56), *(_BYTE *)(a1 + 40));
  else
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  return 1;
}
