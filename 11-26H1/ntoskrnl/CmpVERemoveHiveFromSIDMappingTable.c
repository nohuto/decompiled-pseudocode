/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x1408BE49C
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpVERemoveHiveFromSIDMappingTable(__int64 a1)
{
  unsigned int v2; // edi
  int i; // esi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 4120) & 2) != 0 )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
    v2 = 0;
    for ( i = 0; v2 < HIDWORD(WheapPfaLock.Teb); i = ++v2 )
    {
      if ( *((_QWORD *)&WheapPfaLock.Queue[1].Lock + 4 * v2) == a1 )
        break;
    }
    v4 = 4LL * v2;
    ExFreePoolWithTag((&WheapPfaLock.Queue->WaitListHead.Flink)[v4], 0);
    memmove(
      (char *)WheapPfaLock.Queue + v4 * 8,
      &WheapPfaLock.Queue[1].WaitListHead + 2 * v2,
      32LL * (unsigned int)(--HIDWORD(WheapPfaLock.Teb) - i));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  }
}
