/*
 * XREFs of MiGetAllSubsectionCharges @ 0x1404C8274
 * Callers:
 *     MiAppendSubsectionChain @ 0x1404C17E8 (MiAppendSubsectionChain.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocateSubsectionProtos @ 0x1404503C4 (MiAllocateSubsectionProtos.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiChargeSubsectionProtos @ 0x14087127C (MiChargeSubsectionProtos.c)
 */

__int64 __fastcall MiGetAllSubsectionCharges(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        KIRQL OldIrql)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  char v10; // r14
  volatile LONG *v11; // rcx
  int SubsectionProtos; // ebp
  volatile LONG *v14; // rcx
  int SubsectionCharges; // edi
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h]

  v6 = *(_QWORD *)a1;
  v7 = 0;
  BugCheckParameter2 = *(_QWORD *)(a2 + 16);
  v10 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    return 0LL;
  while ( (v10 & 1) == 0 )
  {
    v11 = (volatile LONG *)(v6 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    else
      ExReleaseSpinLockExclusive(v11, OldIrql);
    v10 |= 1u;
    SubsectionProtos = MiAllocateSubsectionProtos(*(_QWORD *)(a2 + 16), a3, a4);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
    if ( SubsectionProtos < 0 )
      return (unsigned int)SubsectionProtos;
    if ( !*(_QWORD *)(v6 + 48) )
      return 0LL;
  }
  if ( (a1[12] & 0x3FFFFFFF) == 0 || (v10 & 2) != 0 )
    return 0LL;
  v14 = (volatile LONG *)(v6 + 72);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, OldIrql);
  SubsectionCharges = MiChargeSubsectionProtos(BugCheckParameter2);
  if ( SubsectionCharges >= 0 )
  {
    if ( a5 )
      SubsectionCharges = MiGetSubsectionCharges((__int64)a1, a5);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
    if ( SubsectionCharges < 0 )
      return (unsigned int)SubsectionCharges;
    return v7;
  }
  else
  {
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
    return (unsigned int)SubsectionCharges;
  }
}
