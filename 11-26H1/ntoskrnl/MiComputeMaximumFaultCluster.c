/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x1403A7780
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRspInIstStack @ 0x1403A8BB8 (KiRspInIstStack.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  _QWORD *v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // r8
  char v11; // cl
  __int16 v12; // cx
  bool v13; // al
  void *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  struct _LIST_ENTRY *Address; // rbx
  volatile signed __int32 *v28; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v4 = *a1;
  v5 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == (v2 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( (v2 & 1) != 0 )
    {
      v11 = *(_BYTE *)v6;
      if ( *(_BYTE *)v6 == 1 || v11 == 3 || v11 == 6 )
        return 1LL;
      goto LABEL_32;
    }
    if ( v2 )
    {
      v12 = *(_WORD *)(v2 + 368);
      v13 = 0;
      if ( v12 == 16 )
      {
        if ( (*(_DWORD *)(v2 + 376) & 0x200) != 0 )
          goto LABEL_25;
        v15 = *(_QWORD *)(v2 + 384);
        v16 = (unsigned int)KeIstStackSize;
        v17 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
        if ( KiKvaShadow )
          v16 = 464LL;
        if ( v15 > v17 || v15 < v17 - v16 )
        {
          if ( !KiKvaShadow
            || (v18 = *(_QWORD *)(v17 + 8), v15 > v18)
            || v15 < v18 - (unsigned int)(KeIstStackSize - 32) )
          {
            if ( !(unsigned int)KiRspInIstStack(2LL, v15) )
            {
LABEL_25:
              v14 = &ExpInterlockedPopEntrySListFault;
              v13 = KiDynamicTraceEnabled
                 && (v19 = *(_QWORD *)(v2 + 360), v19 >= stru_140FC11F0.ReadTransferCount)
                 && v19 < stru_140FC11F0.WriteTransferCount
                 && KeGetCurrentIrql() == 15;
LABEL_30:
              if ( *(void **)(v2 + 360) == v14 || v13 )
                return 1LL;
            }
          }
        }
      }
      else if ( v12 == 51 )
      {
        v14 = *(void **)&stru_140FC11F0.SchedulerAssistPriorityFloor;
        goto LABEL_30;
      }
    }
LABEL_32:
    v10 = 1LL;
    if ( (unsigned __int8)((unsigned __int64)*((unsigned int *)a1 + 20) >> 9) > 1uLL )
      v10 = (unsigned __int8)((unsigned __int64)*((unsigned int *)a1 + 20) >> 9);
    v9 = 0;
    goto LABEL_35;
  }
  if ( (v2 & 1) != 0 && (*(_BYTE *)v6 == 2 || *(_BYTE *)v6 == 5) )
  {
    v8 = (_QWORD *)(16LL * *(_QWORD *)(v6 + 24) + *(_QWORD *)(v6 + 8));
    v9 = 1;
    v10 = (((*v8 & 0xFFFuLL) + v8[1] + 4095LL) >> 12) - ((v4 - (*v8 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  }
  else
  {
    v10 = 1LL;
    v9 = 1;
  }
LABEL_35:
  if ( v10 == 1 )
    return 1LL;
  if ( a2 )
  {
    if ( a2 > v10 )
      a2 = v10;
    v10 = a2;
  }
  v21 = 512LL - (((unsigned int)(v5 >> 9) >> 3) & 0x1FF);
  v22 = v21;
  if ( v10 <= v21 )
    v22 = v10;
  if ( v5 < 0xFFFF800000000000uLL )
  {
    Address = (struct _LIST_ENTRY *)a1[11];
    if ( Address )
      goto LABEL_63;
    MiLockVadTree(1u, 0xFFFFF68000000000uLL, v10);
    Address = MiLocateAddress(v5);
    v28 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v28, 0xBFFFFFFF);
      _InterlockedDecrement(v28);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v28, retaddr);
    }
    if ( Address )
LABEL_63:
      v21 = (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) - (v5 >> 12) + 1;
    else
      v21 = 1LL;
    goto LABEL_64;
  }
  if ( v9 )
    goto LABEL_64;
  v21 = 1LL;
  if ( (_UNKNOWN *)a1[7] != &unk_140E370C0 )
    goto LABEL_64;
  MiLockVadTree(5u, 0xFFFFF68000000000uLL, v10);
  Flink = stru_140E34D88.Header.WaitListHead.Flink;
  if ( !stru_140E34D88.Header.WaitListHead.Flink )
    goto LABEL_52;
  while ( 1 )
  {
    v24 = Flink[2].Flink;
    v25 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
    if ( v5 < (unsigned __int64)v24 + v25 )
      break;
    Flink = Flink->Blink;
LABEL_51:
    if ( !Flink )
      goto LABEL_52;
  }
  if ( v5 < v25 )
  {
    Flink = Flink->Flink;
    goto LABEL_51;
  }
  v21 = 8LL;
  v26 = ((unsigned __int64)v24 >> 12) - ((v5 - v25) >> 12);
  if ( v26 < 8 )
    v21 = v26;
LABEL_52:
  MiUnlockVadTree(5, 0x11u);
LABEL_64:
  if ( v22 > v21 )
    return v21;
  return v22;
}
