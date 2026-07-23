/*
 * XREFs of MiConsumeOverCommit @ 0x1405024A0
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiConsumeOverCommit(_QWORD *a1, __int64 a2, __int64 a3)
{
  volatile LONG *v4; // rdi
  unsigned int v7; // ebx
  volatile LONG *v8; // rcx
  KIRQL v9; // bp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx

  v4 = (volatile LONG *)(a1 + 2159);
  v7 = 0;
  v8 = (volatile LONG *)(a1 + 2159);
  if ( KeGetCurrentIrql() == 2 )
  {
    v9 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive(v8);
  }
  v10 = a1[2888];
  v11 = v10 + a2;
  if ( v10 + a2 <= v10 || v11 + a3 < v11 || v11 + a3 > a1[2931] )
  {
    v7 = 1;
    a1[2161] += a2;
  }
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v9);
  return v7;
}
