/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x140623148
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140622A70 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140622CB0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140622D80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x140622E10 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x140622E30 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
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
