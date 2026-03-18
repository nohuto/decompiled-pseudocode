/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x14051C628
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x1402C15D0 (ExSaDecodeHandle.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x14034B4AC (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034B4F0 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x1404B8C8C (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x14051C54C (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x14052769C (RtlpHpLfhThreadDataInitializeSet.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentCreate(unsigned int *a1, unsigned __int8 *a2, int a3)
{
  __int64 v3; // rdi
  int v7; // r14d
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned __int64 v17; // rbp
  unsigned int v18; // r14d
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF

  v3 = 0LL;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[(*a2 >> 1) + 1];
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, a3);
  v9 = (8 * (((unsigned __int64)v8 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v9 + 2 * ((v9 + v8 * v7 + 4095) >> 12) + v8 * v7);
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( v11 <= v12 >> 6 )
  {
    v14 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v14 <= v15 )
      LOBYTE(v14) = v15;
    v16 = 1 << v14;
    if ( v13 > v16 )
      v13 = v16;
  }
  v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)a1, v13);
  if ( v17 )
  {
    if ( a3 >= 1 )
      v18 = v13;
    else
      v18 = RtlpHpLfhSubsegmentComputeCommitUnit(v13, v7);
    if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)a1, v17) >= 0 )
    {
      RtlpHpLfhSubsegmentInitialize(v17, v13, v18, a3, a2, (__int64)a1, 1);
      _InterlockedOr(v20, 0);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 8, 1uLL);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 7, *(unsigned __int16 *)(v17 + 34));
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 20LL) & 0x80u) != 0 && !*(_QWORD *)ExSaDecodeHandle(a1[21]) )
        RtlpHpLfhThreadDataInitializeSet(a1);
      return v17;
    }
    else
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)a1, v17);
    }
  }
  return v3;
}
