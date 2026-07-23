/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x14043D434
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14043E8C0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceScbRankChange @ 0x1406C897C (EtwTraceScbRankChange.c)
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 */

__int64 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 CurrentIrql; // r15
  unsigned int v5; // r14d
  unsigned __int8 v6; // r15
  __int64 v7; // rdi
  struct _KPRCB *v8; // rsi
  __int64 v9; // rbp
  int v10; // r13d
  __int64 v11; // rdx
  __int16 v12; // r12
  __int64 v13; // r9
  __int64 result; // rax
  __int16 v15; // ax
  char v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  struct _SINGLE_LIST_ENTRY *v19; // r9
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 v23; // [rsp+88h] [rbp+10h]
  struct _SINGLE_LIST_ENTRY v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h]

  v23 = a2;
  v3 = a1;
  v22 = 0LL;
  v24.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeMaximumProcessors )
  {
    v6 = v23;
    while ( 1 )
    {
      v7 = 464LL * v5;
      v8 = (struct _KPRCB *)KiProcessorBlock[v5];
      v9 = v7 + v3 + 128;
      if ( v8 )
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v5], 0, (unsigned __int64 *)&v22);
      v10 = *(_DWORD *)(v7 + v3 + 268);
      v11 = *(unsigned __int16 *)(v7 + v3 + 256);
      a3 = *(_QWORD *)(v9 + 144);
      v12 = *(_WORD *)(v7 + v3 + 256) & 2;
      if ( v6 )
        break;
      *(_DWORD *)(v7 + v3 + 268) = v10 - (((unsigned int)v11 >> 3) & 1);
      if ( a3 )
      {
        v11 = -(((unsigned int)v11 >> 3) & 1);
        _InterlockedAdd((volatile signed __int32 *)a3, v11);
      }
      *(_WORD *)(v7 + v3 + 256) &= ~8u;
      v15 = *(_WORD *)(v7 + v3 + 256);
      if ( *(_DWORD *)(v7 + v3 + 268) )
      {
        if ( (v15 & 1) != 0 )
        {
          v16 = 0;
          goto LABEL_33;
        }
LABEL_13:
        if ( v8 )
          goto LABEL_14;
        goto LABEL_15;
      }
      if ( v8 )
      {
        if ( (v15 & 1) == 0 )
        {
LABEL_24:
          *(_WORD *)(v7 + v3 + 256) &= ~4u;
LABEL_14:
          KiCheckForEffectivePriorityChange(
            v8,
            (union _KISOLATION_UNIT_LOCK_HANDLE *)v11,
            (struct _KSCB *)(v7 + v3 + 128));
          KiReleasePrcbLocksForIsolationUnit(&v22);
          if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
          {
            a3 = *(unsigned int *)(v7 + v3 + 268);
            if ( v10 != (_DWORD)a3 || (v12 != 0) != ((*(_WORD *)(v7 + v3 + 256) >> 1) & 1) )
            {
              LOBYTE(v13) = (*(_BYTE *)(v7 + v3 + 256) & 2) != 0;
              EtwTraceScbRankChange(v3, v5, a3, v13);
            }
          }
          goto LABEL_15;
        }
        v17 = v7 + v3 + 128;
        do
        {
          v18 = *(_QWORD *)(v17 + 440);
          if ( !v18 )
            break;
          v17 = *(_QWORD *)(v17 + 440);
        }
        while ( !*(_DWORD *)(v18 + 140) );
        v19 = &v24;
        if ( *(_DWORD *)(v17 + 140) )
          v19 = 0LL;
        KiMoveScbThreadsToNewReadylist(
          (struct _KSCB *)(v7 + v3 + 128),
          (struct _KSCB *)(v17 & -(__int64)(*(_DWORD *)(v17 + 140) != 0)),
          0LL,
          v19);
        v11 = 1LL;
        v20 = *(_QWORD *)(v9 + 424);
        if ( (*(_BYTE *)(v9 + 432) & 1) != 0 )
        {
          if ( v20 )
          {
            v20 ^= v9 + 424;
            goto LABEL_41;
          }
        }
        else
        {
LABEL_41:
          if ( v20 )
            goto LABEL_24;
        }
        KiRemoveSchedulingGroupQueue(v8, (struct _KSCB *)(v7 + v3 + 128), 1);
        goto LABEL_24;
      }
LABEL_15:
      if ( ++v5 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v25;
        goto LABEL_17;
      }
    }
    LOWORD(v11) = v11 | 8;
    *(_WORD *)(v7 + v3 + 256) = v11;
    *(_DWORD *)(v7 + v3 + 268) = v10 + 1;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3);
    *(_WORD *)(v7 + v3 + 256) |= 4u;
    if ( (*(_WORD *)(v7 + v3 + 256) & 1) != 0 )
    {
      v16 = 1;
LABEL_33:
      KiResortScbQueue(v8, (struct _KSCB *)(v7 + v3 + 128), v16);
    }
    goto LABEL_13;
  }
LABEL_17:
  LOBYTE(a3) = CurrentIrql;
  *(_DWORD *)(v3 + 4) ^= (*(_DWORD *)(v3 + 4) ^ (4 * v23)) & 4;
  result = KiProcessDeferredReadyList(CurrentPrcb, &v24, a3, 4LL);
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
    return EtwTraceSchedulingGroup(v3, 1380LL);
  return result;
}
