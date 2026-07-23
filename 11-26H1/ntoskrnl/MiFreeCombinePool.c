/*
 * XREFs of MiFreeCombinePool @ 0x1404E67E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 */

void __fastcall MiFreeCombinePool(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx

  v1 = (volatile LONG *)(a1 + 88);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v3);
  do
  {
    v5 = (_QWORD *)*v4;
    MiFreeProtoPool(v4, 4096LL);
    v4 = v5;
  }
  while ( v5 );
}
