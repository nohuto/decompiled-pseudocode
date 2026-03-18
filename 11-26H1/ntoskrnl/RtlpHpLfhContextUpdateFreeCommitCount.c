/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x140349D0C
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x140349360 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403499A0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 */

char __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 *a1, __int64 a2, signed __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *((__int16 *)a1 + 37);
  _InterlockedAdd64((__int64 *)((char *)a1 + v4 + 24), a3);
  if ( a3 > 0 )
  {
    v5 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
    LOBYTE(v4) = *((_BYTE *)a1 + v5 + 92);
    if ( !(_BYTE)v4 )
    {
      *((_BYTE *)a1 + v5 + 92) = 1;
      v6 = *a1;
      if ( BYTE1(**(_QWORD **)(v6 + 56)) == 1 )
        LODWORD(v4) = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Tag;
      else
        LODWORD(v4) = ExSaPageGroupDescriptorArrayLock.SystemCallNumber;
      if ( !(_DWORD)v4 )
        LOBYTE(v4) = RtlpHpEnvCompactionSchedule(*(_QWORD *)(v6 + 56), v5, a3, a4);
    }
  }
  return v4;
}
