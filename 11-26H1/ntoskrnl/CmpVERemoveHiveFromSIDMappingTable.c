/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x1408B7ECC
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    for ( i = 0; v2 < *(_DWORD *)&WheapPfaLock.ApcStateFill[24]; i = ++v2 )
    {
      if ( *((_QWORD *)&WheapPfaLock.ApcState.Process->ProfileListHead.Flink + 4 * v2) == a1 )
        break;
    }
    v4 = 4LL * v2;
    ExFreePoolWithTag((&WheapPfaLock.ApcState.Process->Header.WaitListHead.Flink)[v4], 0);
    memmove(
      (char *)WheapPfaLock.ApcState.Process + v4 * 8,
      &WheapPfaLock.ApcState.Process->ProfileListHead.Blink + 4 * v2,
      32LL * (unsigned int)(--*(_DWORD *)&WheapPfaLock.ApcStateFill[24] - i));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  }
}
