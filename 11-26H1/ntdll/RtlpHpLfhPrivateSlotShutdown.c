/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x180094B78
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x180097710 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180016630 (RtlpHpLfhHeatMapQuery.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800953E8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180095A30 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x180096120 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180096160 (RtlpHpLfhContextMetadataFree.c)
 */

unsigned __int64 __fastcall RtlpHpLfhPrivateSlotShutdown(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  unsigned __int8 *v6; // r13
  unsigned __int16 v7; // bx
  int v9; // r9d
  _QWORD *v10; // rax
  int v11; // edi
  _QWORD *v12; // r14
  _QWORD *v13; // r14
  bool v14; // cc
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  _WORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 *v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 result; // rax
  int v23; // r8d
  __int64 *v24; // r8
  __int64 *v25; // rax
  int v26; // r8d
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 v29; // [rsp+20h] [rbp-20h]
  __int64 v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v31; // [rsp+38h] [rbp-8h]
  unsigned __int8 v32; // [rsp+94h] [rbp+54h]

  v32 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v31 = &v30;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v30 = (__int64)&v30;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, &v30, 2LL);
  v10 = (_QWORD *)(a2 + 40);
  v11 = 0;
  v12 = *(_QWORD **)(a2 + 40);
  while ( v12 != v10 )
  {
    v26 = (int)v12;
    v12 = (_QWORD *)*v12;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, a2, v26, 3, 3) )
    {
      v28 = v31;
      if ( (__int64 *)*v31 != &v30 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v27 + 8) = v31;
      *(_QWORD *)v27 = &v30;
      *v28 = v27;
      v31 = (__int64 *)v27;
    }
    else
    {
      *(_WORD *)(v27 + 46) = 0;
    }
    v10 = (_QWORD *)(a2 + 40);
  }
  v13 = *(_QWORD **)(a2 + 24);
  while ( v13 != (_QWORD *)(a2 + 24) )
  {
    v23 = (int)v13;
    v13 = (_QWORD *)*v13;
    RtlpHpLfhOwnerMoveSubsegment(a1, a2, v23, 3, 2);
    v25 = v31;
    if ( (__int64 *)*v31 != &v30 )
      goto LABEL_17;
    v24[1] = (__int64)v31;
    *v24 = (__int64)&v30;
    *v25 = (__int64)v24;
    v31 = v24;
  }
  v14 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6, v9) < 1;
  v15 = 8;
  if ( v14 )
    v15 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, v6, &v30, (2 * (a4 & 1)) | (unsigned int)v15, v29);
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v6 + 10, v16);
  v17 = *(unsigned __int16 *)(a2 + 16);
  v18 = v6 + 88;
  v19 = *(unsigned __int16 *)(a2 + 18);
  if ( (_WORD)v17 )
    v20 = (unsigned __int8 *)(a1 + (v17 << 6) + 16);
  else
    v20 = v6 + 88;
  if ( (_WORD)v19 )
    v18 = (_WORD *)(a1 + (v19 << 6) + 16);
  *v18 = v17;
  *((_WORD *)v20 + 1) = v19;
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6 + 10);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v11) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, a2, (unsigned int)(v11 + 2));
  v21 = (unsigned __int64)*v6 >> 1;
  result = a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 2 * (v21 + ((unsigned __int64)v32 << 7)) + 1472) << 6);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v21) = *(_WORD *)(a1 + 2 * (v21 + ((unsigned __int64)v32 << 7)) + 1472);
  return result;
}
