/*
 * XREFs of MiWriteVadFlags2 @ 0x140455410
 * Callers:
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiWriteVadFlags2(__int64 a1, int a2, int a3)
{
  _DWORD *v6; // rdi
  KIRQL v7; // si
  volatile LONG *v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = (_DWORD *)(a1 + 64);
  if ( a3 )
  {
    v7 = 17;
  }
  else
  {
    v8 = (volatile LONG *)(a1 + 64);
    if ( KeGetCurrentIrql() == 2 )
    {
      v7 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    }
    else
    {
      v7 = ExAcquireSpinLockExclusive(v8);
    }
  }
  *(_DWORD *)(a1 + 72) = a2;
  if ( !a3 )
  {
    if ( v7 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v6 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v6 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
  }
}
