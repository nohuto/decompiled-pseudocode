/*
 * XREFs of MiClearVadTrimBehind @ 0x14043ABA0
 * Callers:
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiClearVadTrimBehind(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  KIRQL v6; // si
  volatile LONG *v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 72) & 0xFFFFFFFD;
  if ( a2 )
  {
    v6 = 17;
  }
  else
  {
    v7 = (volatile LONG *)(a1 + 64);
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive(v7);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  if ( !a2 )
  {
    if ( v6 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
    }
  }
}
