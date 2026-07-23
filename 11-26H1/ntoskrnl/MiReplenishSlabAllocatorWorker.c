/*
 * XREFs of MiReplenishSlabAllocatorWorker @ 0x1404C2AB0
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiReplenishSlabAllocatorWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  volatile LONG *v6; // rdi
  KIRQL v7; // al
  __int64 v8; // r14
  __int64 *v9; // rbx
  KIRQL v10; // si

  v5 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3]);
  if ( *(_QWORD *)(a1 + 104) >= v5 )
    v5 = *(_QWORD *)(a1 + 104);
  MiReplenishSlabAllocator(a1, v5, 0, a4);
  v6 = (volatile LONG *)(a1 + 16);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
  v8 = a1 + 216;
  *(_QWORD *)(a1 + 208) = 0LL;
  v9 = *(__int64 **)(a1 + 216);
  v10 = v7;
  while ( v9 != (__int64 *)v8 )
  {
    KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
    v9 = (__int64 *)*v9;
  }
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  else
    ExReleaseSpinLockExclusive(v6, v10);
}
