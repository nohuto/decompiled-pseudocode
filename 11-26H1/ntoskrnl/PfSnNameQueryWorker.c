/*
 * XREFs of PfSnNameQueryWorker @ 0x14021A980
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnVolumeKeyQuery @ 0x140A8F6CC (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  unsigned __int64 *Count; // r14
  unsigned __int64 v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    Count = (unsigned __int64 *)a1[67].Count;
    v5 = v3;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 10LL;
    ExReleaseSpinLockExclusive(v2, v3);
    v6 = (void *)Count[1];
    if ( (int)guard_dispatch_icall_no_overrides(a1[44].Count, v6, &v8) >= 0 )
      PfSnVolumeKeyQuery(a1, v8, v6);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v5);
  ExReleaseRundownProtection_0(a1 + 45);
}
