/*
 * XREFs of MiAppendSubsectionChain @ 0x1404C17E8
 * Callers:
 *     MiExtendSection @ 0x140A6590C (MiExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFinishExtendAppend @ 0x1404829A0 (MiFinishExtendAppend.c)
 *     MiGetAllSubsectionCharges @ 0x1404C8274 (MiGetAllSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, int a3, int a4, int a5, _QWORD *a6)
{
  __int64 v6; // r13
  __int64 v11; // rsi
  volatile LONG *v12; // r14
  KIRQL OldIrql; // bp
  int AllSubsectionCharges; // ebx

  v6 = *a1;
  v11 = 0LL;
  v12 = (volatile LONG *)(*a1 + 72);
  OldIrql = ExAcquireSpinLockExclusive(v12);
  AllSubsectionCharges = MiGetAllSubsectionCharges((int)a1, a2, a3, a4, a5, OldIrql);
  if ( AllSubsectionCharges >= 0 )
    v11 = MiFinishExtendAppend(a1, a2, a6);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  else
    ExReleaseSpinLockExclusive(v12, OldIrql);
  if ( v11 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v6 + 60) & 0x3FF)),
      1LL,
      v11);
  return (unsigned int)AllSubsectionCharges;
}
