/*
 * XREFs of MiGetSubsectionCharges @ 0x1404B69E0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiGetAllSubsectionCharges @ 0x1404CE844 (MiGetAllSubsectionCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x1404DEAB8 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSubsectionProtos @ 0x14086AE9C (MiChargeSubsectionProtos.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036E1E8 (MiReturnCrossPartitionCharges.c)
 *     MiGetCrossPartitionCharges @ 0x1404B6A78 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  BOOL v3; // esi
  ULONG *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // ebp

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL) != 0LL;
  v4 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v4, 0LL, *(_QWORD *)(*(_QWORD *)a1 + 64LL) != 0LL, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit(v4, a2, 0) )
    {
      v6 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges((__int64)v4, 0, v3, a2);
      return v6;
    }
    if ( !(unsigned int)MiChargeResident(v4, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v4, a2, 0);
      v6 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
