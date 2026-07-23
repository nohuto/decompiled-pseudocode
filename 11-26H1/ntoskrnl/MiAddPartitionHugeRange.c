/*
 * XREFs of MiAddPartitionHugeRange @ 0x1406EFCE8
 * Callers:
 *     MiHotAddHugeRange @ 0x14086E030 (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140CFED70 (MiCreateHugeIoRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     MiMemoryRangeAlreadyExists @ 0x1406EE5C0 (MiMemoryRangeAlreadyExists.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 *     MiUpdateMirrorBitmaps @ 0x140B68B5C (MiUpdateMirrorBitmaps.c)
 */

__int64 __fastcall MiAddPartitionHugeRange(unsigned __int16 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rbx
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // rdi
  int v8; // r13d
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  _KSCHEDULING_GROUP *v12; // rsi
  KIRQL v14; // r15
  __int64 *v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // r9
  bool v18; // zf
  bool i; // zf
  __int64 *v20; // r12
  __int64 v21; // rbx
  unsigned __int64 j; // rbp
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  v26 = (int)a4;
  v25 = a3;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = (int)a4;
  CurrentThread = KeGetCurrentThread();
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v23 = (__int64)CurrentThread;
  v8 = a3;
  if ( !(_DWORD)a4 )
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread, a3, a4);
  if ( (unsigned int)MiMemoryRangeAlreadyExists(v4, v7) )
    goto LABEL_38;
  v10 = *(_QWORD *)(a2 + 32) >> 18;
  v11 = v10 & 0x3FFFFF;
  v12 = (_KSCHEDULING_GROUP *)((*(_QWORD *)(a2 + 40) >> 18) & 0x3FFFFFLL);
  if ( !(unsigned int)MiUpdateMirrorBitmaps(1LL, v10 & 0x3FFFFF, v12) )
  {
    if ( !v5 )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  if ( (_KSCHEDULING_GROUP *volatile)v11 >= stru_140E2ED08.SchedulingGroup )
    goto LABEL_12;
  if ( (unsigned __int64)v12 > 1 )
  {
    if ( (char *)stru_140E2ED08.SchedulingGroup - v11 >= (char *)v12 )
    {
      v15 = (__int64 *)(*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags + 8 * (v11 >> 6));
      v16 = *v15;
      v17 = *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags
          + 8 * (((unsigned __int64)&v12[-1].PerProcessor[1].LastReportedCycles + v11 + 7) >> 6);
      if ( v15 != (__int64 *)v17 )
      {
        for ( i = ((-1LL << v10) & v16) == 0; i; i = *v15 == 0 )
        {
          if ( ++v15 == (__int64 *)v17 )
          {
            v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v12 - 1)) & *v15) == 0;
            goto LABEL_22;
          }
        }
        goto LABEL_12;
      }
      v18 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v12) << v10) & v16) == 0;
LABEL_22:
      if ( v18 )
        goto LABEL_23;
    }
LABEL_12:
    if ( v14 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
    else
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v14);
LABEL_38:
    if ( !v5 )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225496LL;
  }
  if ( v12 != (_KSCHEDULING_GROUP *)1
    || _bittest64((const signed __int64 *)(*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags + 8 * (v11 >> 6)), v10 & 0x3F) )
  {
    goto LABEL_12;
  }
LABEL_23:
  v20 = (__int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v11);
  if ( v8 == 3 )
    v21 = (16LL * (*a1 & 0x7FF)) | 3;
  else
    v21 = 16403LL;
  for ( j = 0LL; j < (unsigned __int64)v12; ++j )
  {
    MiLockHugePfnAtDpc((__int64)v20);
    RtlSetBitsEx((__int64)&stru_140E2ED08.SchedulingGroup, v10 & 0x3FFFFF, 1uLL);
    *v20 = v21;
    if ( v25 == 3 )
      MiUpdateHugePageCounts(a1, v10, 1LL);
    else
      MiInsertHugeRangeInList(a1, v10, v25 == 1);
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4
                                * (((((__int64)v20 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v20 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    ++v20;
    v10 = (v10 + 1) ^ ((v10 + 1) ^ v10) & 0xFFFFFFFFFFC00000uLL;
  }
  if ( v14 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v14);
  if ( !v26 )
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v23);
  return 0LL;
}
