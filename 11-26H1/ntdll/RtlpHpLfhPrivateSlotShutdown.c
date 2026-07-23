/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x18006251C
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800645D0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180062D88 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x180063AC0 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180063B00 (RtlpHpLfhContextMetadataFree.c)
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
  __int64 v16; // r8
  _WORD *v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 *v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 result; // rax
  int v22; // r8d
  __int64 *v23; // r8
  __int64 *v24; // rax
  int v25; // r8d
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-20h]
  __int64 v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-8h]
  unsigned __int8 v31; // [rsp+94h] [rbp+54h]

  v31 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v30 = &v29;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v29 = (__int64)&v29;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, &v29, 2LL);
  v10 = (_QWORD *)(a2 + 40);
  v11 = 0;
  v12 = *(_QWORD **)(a2 + 40);
  while ( v12 != v10 )
  {
    v25 = (int)v12;
    v12 = (_QWORD *)*v12;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, a2, v25, 3, 3) )
    {
      v27 = v30;
      if ( (__int64 *)*v30 != &v29 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v26 + 8) = v30;
      *(_QWORD *)v26 = &v29;
      *v27 = v26;
      v30 = (__int64 *)v26;
    }
    else
    {
      *(_WORD *)(v26 + 46) = 0;
    }
    v10 = (_QWORD *)(a2 + 40);
  }
  v13 = *(_QWORD **)(a2 + 24);
  while ( v13 != (_QWORD *)(a2 + 24) )
  {
    v22 = (int)v13;
    v13 = (_QWORD *)*v13;
    RtlpHpLfhOwnerMoveSubsegment(a1, a2, v22, 3, 2);
    v24 = v30;
    if ( (__int64 *)*v30 != &v29 )
      goto LABEL_17;
    v23[1] = (__int64)v30;
    *v23 = (__int64)&v29;
    *v24 = (__int64)v23;
    v30 = v23;
  }
  v14 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6, v9) < 1;
  v15 = 8;
  if ( v14 )
    v15 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, v6, &v29, (2 * (a4 & 1)) | (unsigned int)v15, v28);
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v6 + 10);
  v16 = *(unsigned __int16 *)(a2 + 16);
  v17 = v6 + 88;
  v18 = *(unsigned __int16 *)(a2 + 18);
  if ( (_WORD)v16 )
    v19 = (unsigned __int8 *)(a1 + (v16 << 6) + 16);
  else
    v19 = v6 + 88;
  if ( (_WORD)v18 )
    v17 = (_WORD *)(a1 + (v18 << 6) + 16);
  *v17 = v16;
  *((_WORD *)v19 + 1) = v18;
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v6 + 10);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v11) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, a2, (unsigned int)(v11 + 2));
  v20 = (unsigned __int64)*v6 >> 1;
  result = a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 2 * (v20 + ((unsigned __int64)v31 << 7)) + 1472) << 6);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v20) = *(_WORD *)(a1 + 2 * (v20 + ((unsigned __int64)v31 << 7)) + 1472);
  return result;
}
