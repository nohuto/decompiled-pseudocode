/*
 * XREFs of SleepstudyHelper_AcquireComponentLock @ 0x140617100
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall SleepstudyHelper_AcquireComponentLock(KSPIN_LOCK *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // di

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( a1 == (KSPIN_LOCK *)&unk_140F0A850 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      *a2 = CurrentIrql;
    }
    else
    {
      *a2 = KeAcquireSpinLockRaiseToDpc(a1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
