/*
 * XREFs of MiMarkPendingCommitRequests @ 0x1404AE0D0
 * Callers:
 *     MiComputeUnusedSegmentReduction @ 0x1404BE03C (MiComputeUnusedSegmentReduction.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

unsigned __int64 __fastcall MiMarkPendingCommitRequests(__int64 a1)
{
  volatile LONG *v1; // rdi
  __int64 **v3; // r14
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  __int64 *v6; // rdx
  KIRQL v7; // si
  unsigned __int64 v8; // rcx

  v1 = (volatile LONG *)(a1 + 2112);
  v3 = (__int64 **)(a1 + 2320);
  v4 = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  v6 = *v3;
  v7 = v5;
  while ( v6 != (__int64 *)v3 )
  {
    v8 = v4 + v6[3];
    if ( v8 <= v4 )
    {
      KeSetEvent((PRKEVENT)(a1 + 2296), 0, 0);
      break;
    }
    *((_BYTE *)v6 + 79) |= 0x40u;
    v4 = v8;
    v6 = (__int64 *)*v6;
  }
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v7);
  return v4;
}
