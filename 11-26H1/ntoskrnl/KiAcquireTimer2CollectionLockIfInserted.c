/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x14037C7E0
 * Callers:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 1) & 1) == 0 )
    return 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
