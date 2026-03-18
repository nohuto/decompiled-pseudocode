/*
 * XREFs of MiInitializeDataVad @ 0x1409C5B30
 * Callers:
 *     MiMapViewOfDataSection @ 0x1409C47B0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiWriteVadFlags2 @ 0x14045BBE0 (MiWriteVadFlags2.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiComputeContiguousSubsectionPte @ 0x14049129C (MiComputeContiguousSubsectionPte.c)
 *     MiUpdateVadStartVpn @ 0x14049B0E4 (MiUpdateVadStartVpn.c)
 *     MiInsertVadEvent @ 0x14049B0F8 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x1404B8DBC (MiLocateExclusiveSecure.c)
 *     MiWriteSecureFlags @ 0x1404CD974 (MiWriteSecureFlags.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiCreateExtendInfo @ 0x1409C6A2C (MiCreateExtendInfo.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiInitializeDataVad(__int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  __int64 result; // rax
  __int64 ExtendInfo; // rax
  __int64 v14; // rcx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _KPROCESS *Process; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+68h] [rbp+10h]

  v2 = a1[15];
  v3 = *a1;
  v4 = a1[13];
  v19 = a1[16];
  v5 = *(_QWORD *)(*a1 + 88);
  MiUpdateVadStartVpn(v4, v2 >> 12);
  *(_DWORD *)(v4 + 28) = v19 >> 12;
  *(_BYTE *)(v4 + 33) = v6 >> 44;
  v7 = a1[3];
  if ( (*(_DWORD *)(v3 + 40) & 0x2000) != 0 )
  {
    ExtendInfo = MiCreateExtendInfo(*(_QWORD *)v7, a1[1]);
    if ( !ExtendInfo )
      return 3221225626LL;
    *(_QWORD *)(v4 + 128) = ExtendInfo;
  }
  if ( (a1[4] & 5) == 5 )
  {
    v8 = *(unsigned int *)(v4 + 24);
    v9 = *(unsigned int *)(v4 + 28);
    v10 = (v9 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
        - (v8 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
        + 1;
    *(_DWORD *)(v4 + 52) = v9 - v8 + 1;
    *(_BYTE *)(v4 + 34) = BYTE4(v10);
  }
  *(_QWORD *)(v4 + 96) = MiComputeContiguousSubsectionPte(*(_QWORD *)(v4 + 80), (v19 >> 12) + a1[11] - (v2 >> 12));
  if ( (*(_DWORD *)(v3 + 40) & 0x400000) != 0 || (*(_DWORD *)(v11 + 56) & 0x4000) != 0 )
  {
    if ( (MiReadVadFlags(v4) & 2) == 0 || !MiLocateExclusiveSecure(v14) )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(64LL, 0x68uLL, 1699966285, CurrentProcessorColor | 0x80000000);
      if ( PoolMm )
      {
        *(_WORD *)(PoolMm + 8) = 2;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_BYTE *)(PoolMm + 11) = (unsigned __int8)Process >> 4;
        *(_QWORD *)(PoolMm + 32) = v19;
        *(_QWORD *)(PoolMm + 40) = Process;
        *(_QWORD *)(PoolMm + 48) = v4;
        MiWriteSecureFlags((_QWORD *)(PoolMm + 24), v2 | 4);
        MiInsertVadEvent(v4, v18, 1);
        goto LABEL_6;
      }
    }
    return 3221225626LL;
  }
LABEL_6:
  if ( (*(_DWORD *)(v3 + 40) & 0x20000000) != 0 )
  {
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 48) & 0xFFFFFFE3 | 0x14;
    *((_DWORD *)a1 + 28) |= 1u;
  }
  MiWriteVadFlags2(v4, *((_DWORD *)a1 + 28), 1);
  if ( !*(_QWORD *)(v7 + 64) )
  {
    result = MiInsertSharedCommitNode(v7, v5, 0LL);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)a1 + 14) |= 4u;
  }
  if ( a1[8] && !(unsigned int)MiChargeSegmentCommit(*(_QWORD *)(v4 + 80), a1[9]) )
    return 3221225773LL;
  result = MiInsertVadCharges(v4, v5);
  if ( (int)result >= 0 )
  {
    if ( !*(_QWORD *)(v7 + 64) )
    {
      if ( *(int *)(v7 + 56) < 0 )
        *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 48) & 0xFFF9FFFF | 0x20000;
      if ( (*(_DWORD *)(v7 + 60) & 0x800) != 0 )
        *(_DWORD *)(v4 + 48) |= 0x800000u;
    }
    return 0LL;
  }
  return result;
}
