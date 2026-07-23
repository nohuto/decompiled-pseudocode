/*
 * XREFs of SshpIterateParentBlockers @ 0x140257F0C
 * Callers:
 *     SshpBlockerActiveDereference @ 0x140257E48 (SshpBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140257E90 (SleepstudyHelperBlockerActiveReference.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     SshpBlockerActiveReferenceOperationCallback @ 0x140257FF0 (SshpBlockerActiveReferenceOperationCallback.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SshpIterateParentBlockers(PKSPIN_LOCK SpinLock, __int64 a2, __int64 a3)
{
  PKSPIN_LOCK v5; // rdi
  KSPIN_LOCK *v6; // rbx
  char v7; // r14
  KSPIN_LOCK *v8; // rbp
  char active; // al
  KSPIN_LOCK **v10; // rcx
  KSPIN_LOCK *v11; // rbp

  v5 = SpinLock;
  v6 = 0LL;
  v7 = 1;
  do
  {
    v8 = v6;
    v6 = v5;
    if ( v5 != SpinLock )
      KeAcquireSpinLockRaiseToDpc(v5);
    LOBYTE(a2) = 1;
    active = SshpBlockerActiveReferenceOperationCallback(v5, a2, a3);
    v10 = (KSPIN_LOCK **)(v5 + 37);
    v5 = (PKSPIN_LOCK)v5[37];
    *v10 = v8;
  }
  while ( active && v5 );
  do
  {
    v11 = (KSPIN_LOCK *)v6[37];
    v6[37] = (KSPIN_LOCK)v5;
    v5 = v6;
    if ( v7 )
      v7 = SshpBlockerActiveReferenceOperationCallback(v6, 0LL, a3);
    if ( v6 != SpinLock )
    {
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
      __writecr8(2uLL);
    }
    v6 = v11;
  }
  while ( v11 );
}
