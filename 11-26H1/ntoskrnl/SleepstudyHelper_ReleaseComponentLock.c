/*
 * XREFs of SleepstudyHelper_ReleaseComponentLock @ 0x140617180
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 */

__int64 __fastcall SleepstudyHelper_ReleaseComponentLock(KSPIN_LOCK *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi

  v2 = 0;
  v3 = a2;
  if ( a1 )
  {
    if ( a1 == (KSPIN_LOCK *)&unk_140F0A850 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      __writecr8(v3);
    }
    else
    {
      KeReleaseSpinLock(a1, a2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
