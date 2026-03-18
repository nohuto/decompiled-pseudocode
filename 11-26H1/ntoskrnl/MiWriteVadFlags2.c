/*
 * XREFs of MiWriteVadFlags2 @ 0x14045BBE0
 * Callers:
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiAllocateImageVad @ 0x1409CD948 (MiAllocateImageVad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v6 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v6 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
  }
}
