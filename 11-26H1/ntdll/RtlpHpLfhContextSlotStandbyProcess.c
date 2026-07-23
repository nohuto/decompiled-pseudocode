/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x180072140 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextCleanup @ 0x180072B10 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180062C50 (RtlpHpLfhOwnerFreeListProcess.c)
 */

void __fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  _RTL_SRWLOCK *v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  unsigned __int8 *v8; // r15
  int v9; // r9d
  char v10; // r9
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  unsigned __int64 v14[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v14[1] = (unsigned __int64)v14;
  v14[0] = (unsigned __int64)v14;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v5 = (_RTL_SRWLOCK *)(a1 + 128);
    while ( 1 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v6 = *(_QWORD **)(a1 + 160);
      if ( !v6 )
        break;
      *(_QWORD *)(a1 + 160) = *v6;
      RtlReleaseSRWLockExclusive(v5);
      v7 = v6 - 2;
      v8 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v6 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v6 - 2), v14, 0);
      if ( (a2 & 1) != 0 )
      {
        v10 = 8;
      }
      else
      {
        v13 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v8, v9);
        v10 = 4;
        if ( v13 >= 1 )
          v10 = 8;
      }
      RtlpHpLfhBucketAddSubsegment(a1, (_RTL_SRWLOCK *)v8, v14, v10);
      if ( (_QWORD *)v6[3] == v6 + 3 )
      {
        RtlAcquireSRWLockExclusive(v5);
        *v7 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 152) = v7;
        RtlReleaseSRWLockExclusive(v5);
      }
      else
      {
        *v6 = v2;
        v2 = v6;
      }
      if ( !*(_QWORD *)(a1 + 160) )
        goto LABEL_9;
    }
    RtlReleaseSRWLockExclusive(v5);
LABEL_9:
    if ( v2 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v11 = *(_QWORD **)(a1 + 160);
      do
      {
        v12 = (_QWORD *)*v2;
        *v2 = v11;
        v11 = v2;
        *(_QWORD *)(a1 + 160) = v2;
        v2 = v12;
      }
      while ( v12 );
      RtlReleaseSRWLockExclusive(v5);
    }
  }
}
