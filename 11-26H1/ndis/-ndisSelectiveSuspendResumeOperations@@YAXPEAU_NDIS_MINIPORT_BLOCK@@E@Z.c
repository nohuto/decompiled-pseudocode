/*
 * XREFs of ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C65F4
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x14006E2D0 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C6C20 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400099A0 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x140052CB0 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1400563B0 (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6364 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6A00 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  unsigned int Flags; // eax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _NET_BUFFER_LIST *v9; // r14
  struct _NET_BUFFER_LIST *v10; // rsi
  KIRQL v11; // dl
  struct _LIST_ENTRY v12; // [rsp+20h] [rbp-28h] BYREF
  KIRQL NewIrql; // [rsp+58h] [rbp+10h] BYREF

  Flags = a1->Flags;
  SelectiveSuspend = a1->SelectiveSuspend;
  v12 = 0LL;
  if ( (Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v6 = NewIrql;
  if ( a2 )
  {
    *((_DWORD *)SelectiveSuspend + 126) &= ~0x10u;
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 248), 0, 0);
    v7 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 84) += v7;
    *((_QWORD *)SelectiveSuspend + 83) = v7;
    v8 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81);
    *((_QWORD *)SelectiveSuspend + 86) += v8 / 10000;
    *((_QWORD *)SelectiveSuspend + 85) = v8 / 10000;
  }
  v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
  *((_QWORD *)SelectiveSuspend + 68) = 0LL;
  *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
  v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
  *((_QWORD *)SelectiveSuspend + 70) = 0LL;
  *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
  ndisMoveLinkedList(&v12, (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584));
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  if ( v9 )
    ndisReplaySendNbls(a1, v9, 0);
  if ( v10 )
    ndisReplayRecvNbls(a1, v10);
  ndisReplayDirectOids(a1, &v12, 0);
  ndisSetIdleTimer(a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ndisSetWakeUpTimer(a1);
  v11 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
}
