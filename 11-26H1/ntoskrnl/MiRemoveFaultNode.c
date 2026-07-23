/*
 * XREFs of MiRemoveFaultNode @ 0x1404F0028
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     MiReleaseScrubProtection @ 0x140710C10 (MiReleaseScrubProtection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // si
  char v4; // bl
  volatile LONG *v5; // rdi
  __int64 *v6; // rcx

  v2 = a1;
  if ( *(_BYTE *)(a1 + 69) )
  {
    if ( a2 )
    {
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
    }
    v4 = *(_BYTE *)(v2 + 70);
    v5 = &dword_140E2EBF0;
    if ( v4 )
      v5 = &dword_140E2EBE0;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    v6 = &qword_140E2EBF8;
    if ( v4 )
      v6 = &qword_140E2EBE8;
    RtlAvlRemoveNode((unsigned __int64 *)v6, v2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    *(_BYTE *)(v2 + 69) = 0;
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
