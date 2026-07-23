/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x14063C9A0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1403487D0 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x140348850 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403497A0 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14034B5AC (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

unsigned __int64 __fastcall RtlpHpLfhPrivateSlotShutdown(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  unsigned __int8 *v6; // r13
  unsigned __int16 v7; // bx
  _QWORD *v9; // rax
  int v10; // esi
  _QWORD *v11; // r14
  int v12; // r8d
  __int64 v13; // r8
  __int64 **v14; // rax
  _QWORD *v15; // r14
  bool v16; // cc
  int v17; // r9d
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int16 v20; // r8
  _WORD *v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 *v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 result; // rax
  int v26; // r8d
  __int64 **v27; // r8
  __int64 **v28; // rax
  __int64 v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v30; // [rsp+38h] [rbp-8h]
  unsigned __int8 v31; // [rsp+94h] [rbp+54h]

  v31 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v30 = (__int64 **)&v29;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v29 = (__int64)&v29;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, &v29, 2u);
  v9 = (_QWORD *)(a2 + 40);
  v10 = 0;
  v11 = *(_QWORD **)(a2 + 40);
  while ( v11 != v9 )
  {
    v12 = (int)v11;
    v11 = (_QWORD *)*v11;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, a2, v12, 3, 3) )
    {
      v14 = v30;
      if ( *v30 != &v29 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v30;
      *(_QWORD *)v13 = &v29;
      *v14 = (__int64 *)v13;
      v30 = (__int64 **)v13;
    }
    else
    {
      *(_WORD *)(v13 + 46) = 0;
    }
    v9 = (_QWORD *)(a2 + 40);
  }
  v15 = *(_QWORD **)(a2 + 24);
  while ( v15 != (_QWORD *)(a2 + 24) )
  {
    v26 = (int)v15;
    v15 = (_QWORD *)*v15;
    RtlpHpLfhOwnerMoveSubsegment(a1, a2, v26, 3, 2);
    v28 = v30;
    if ( *v30 != &v29 )
      goto LABEL_20;
    v27[1] = (__int64 *)v30;
    *v27 = &v29;
    *v28 = (__int64 *)v27;
    v30 = v27;
  }
  v16 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6) < 1;
  v17 = 8;
  if ( v16 )
    v17 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, v6, &v29, (2 * (a4 & 1)) | (unsigned int)v17);
  if ( (a4 & 1) == 0 )
    RtlpHpAcquireLockExclusive((int *)v6 + 20, *(unsigned __int8 *)(a1 + 73), v18, v19);
  v20 = *(_WORD *)(a2 + 16);
  v21 = v6 + 88;
  v22 = *(unsigned __int16 *)(a2 + 18);
  if ( v20 )
    v23 = (unsigned __int8 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 16) << 6) + 16);
  else
    v23 = v6 + 88;
  if ( (_WORD)v22 )
    v21 = (_WORD *)(a1 + (v22 << 6) + 16);
  *v21 = v20;
  *((_WORD *)v23 + 1) = v22;
  if ( (a4 & 1) == 0 )
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(v6 + 80));
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v10) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, a2, v10 + 2);
  v24 = (unsigned __int64)*v6 >> 1;
  result = a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 2 * (v24 + ((unsigned __int64)v31 << 7)) + 1472) << 6);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v24) = *(_WORD *)(a1 + 2 * (v24 + ((unsigned __int64)v31 << 7)) + 1472);
  return result;
}
