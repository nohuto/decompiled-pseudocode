/*
 * XREFs of KiQueryCpuPartitionAffinityProcess @ 0x1404D5808
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeQueryCpuPartitionAffinityEx @ 0x14052B518 (KeQueryCpuPartitionAffinityEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall KiQueryCpuPartitionAffinityProcess(__int64 a1, struct _KAFFINITY_EX *a2)
{
  _QWORD **v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rbx

  memset_0(&a2->8, 0, 8LL * a2->Count);
  a2->Count = 1;
  KeGetCurrentIrql();
  v4 = (_QWORD **)(a1 + 432);
  v5 = *v4;
  if ( *v4 == v4 )
  {
    KeQueryCpuPartitionAffinityEx(KiSystemCpuPartition, a2);
  }
  else
  {
    do
    {
      v6 = *(v5 - 3);
      v5 = (_QWORD *)*v5;
      KxAcquireSpinLock((PKSPIN_LOCK)(v6 + 8));
      RtlOrAffinityEx(a2, *(struct _KAFFINITY_EX **)v6, (__int64)a2);
      KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 8));
    }
    while ( v5 != v4 );
  }
}
