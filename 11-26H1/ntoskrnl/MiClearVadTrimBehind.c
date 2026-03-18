/*
 * XREFs of MiClearVadTrimBehind @ 0x140442090
 * Callers:
 *     MiFaultTrimBehind @ 0x140441F5C (MiFaultTrimBehind.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
    }
  }
}
