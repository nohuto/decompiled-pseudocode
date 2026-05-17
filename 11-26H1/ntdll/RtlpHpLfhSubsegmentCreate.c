/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1800C0E1C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpLogHeapSubSegmentActivate @ 0x180016F40 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180038044 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800752EC (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x1800C10B0 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x1800C10F0 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1800C11AC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1800C1680 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int16 *__fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  unsigned __int16 *v14; // rbp
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int (__fastcall *v17)(__int64, unsigned __int16 *, _QWORD, int *); // rax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rcx
  void **TlsExpansionSlots; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v28; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  int v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v31 = 0;
  v29 = 0;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[(*(unsigned __int8 *)a2 >> 1) + 1];
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, (unsigned int)a3);
  v9 = (8 * (((unsigned __int64)v8 + 31) >> 5) + 79) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v8 * (_DWORD)v7 + v9 + 2 * ((v8 * (unsigned int)v7 + v9 + 4095) >> 12));
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( v11 <= v12 >> 6 )
  {
    v19 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v19 <= v20 )
      LOBYTE(v19) = v20;
    v21 = 1 << v19;
    if ( v13 > v21 )
      v13 = v21;
  }
  v14 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, _QWORD, int *, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
                              *(_QWORD *)a1,
                              v13,
                              &v29,
                              &v31);
  if ( v14 )
  {
    if ( a3 >= 1 || (v29 & 1) != 0 )
      v15 = v13;
    else
      v15 = RtlpHpLfhSubsegmentComputeCommitUnit(v13, (unsigned int)v7);
    v16 = *(_QWORD *)a1;
    v17 = (int (__fastcall *)(__int64, unsigned __int16 *, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v30 = 0;
    if ( v17(v16, v14, v15, &v30) < 0 )
    {
      ((void (__fastcall *)(_QWORD, unsigned __int16 *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v14,
        v13,
        0LL);
      return (unsigned __int16 *)v3;
    }
    RtlpHpLfhSubsegmentInitialize(v14, (__int64)a2, a1, v30 == 0);
    _InterlockedOr(v27, 0);
    _InterlockedAdd64(a2 + 8, 1uLL);
    _InterlockedAdd64(a2 + 7, v14[17]);
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 20LL) >= 0 )
      return v14;
    v22 = (unsigned __int16)*(_DWORD *)(a1 + 84);
    if ( v22 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
        goto LABEL_25;
      v23 = (unsigned __int64)TlsExpansionSlots[v22 - 64];
    }
    else
    {
      v23 = __readgsqword(8 * v22 + 5248);
    }
    if ( v23 )
    {
      v28 = v23;
LABEL_26:
      RtlpLogHeapSubSegmentAlloc(*(_QWORD *)(*(_QWORD *)a1 + 56LL), (__int64)v14, v13, v7, 2);
      RtlpLogHeapSubSegmentInitialize(*(_QWORD *)(*(_QWORD *)a1 + 56LL), (__int64)v14, v7 >> 4, v14[17], BYTE4(v28));
      RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)a1 + 56LL), (__int64)v14, v25, v26);
      return v14;
    }
LABEL_25:
    v28 = RtlpHpLfhThreadDataInitializeSet(a1);
    goto LABEL_26;
  }
  return (unsigned __int16 *)v3;
}
