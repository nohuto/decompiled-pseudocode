/*
 * XREFs of MiGetSubsectionCharges @ 0x1404AFE30
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiGetAllSubsectionCharges @ 0x1404C8274 (MiGetAllSubsectionCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x1404D8198 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSubsectionProtos @ 0x14087127C (MiChargeSubsectionProtos.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiGetCrossPartitionCharges @ 0x1404AFEC8 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  BOOL v3; // esi
  ULONG *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // ebp

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL) != 0LL;
  v4 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
