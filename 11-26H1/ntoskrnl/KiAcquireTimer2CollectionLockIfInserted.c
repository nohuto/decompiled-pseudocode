/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x14037AA30
 * Callers:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 1) & 1) == 0 )
    return 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
  }
  if ( (*(_BYTE *)(a1 + 1) & 1) == 0 )
  {
    KxReleaseSpinLock(&KiTimer2CollectionLock);
    return 0;
  }
  return 1;
}
