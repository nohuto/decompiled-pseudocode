/*
 * XREFs of KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     KiAttemptFastRemovePriQueue @ 0x1403F0270 (KiAttemptFastRemovePriQueue.c)
 *     KiActivateWaiterKQueue @ 0x1403F0370 (KiActivateWaiterKQueue.c)
 *     KiWakeQueueWaiter @ 0x1403F07C0 (KiWakeQueueWaiter.c)
 */

void __fastcall KiActivateWaiterQueueWithThreadLock(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  volatile signed __int32 *v4; // rax
  char v5; // al
  _QWORD *v6; // rsi
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  ULONG_PTR v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  volatile LONG *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rdi
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax

  v2 = (ULONG_PTR)a2;
  _m_prefetchw((const void *)a2);
  if ( (*(_BYTE *)a2 & 0x7F) == 0x15 )
  {
    v14 = (unsigned __int8)*(_DWORD *)(a1 + 540);
    *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
    v4 = (volatile signed __int32 *)(v2 + 536 + 4 * v14);
  }
  else
  {
    v4 = a2 + 10;
  }
  _InterlockedDecrement(v4);
  if ( _interlockedbittestandset((volatile signed __int32 *)v2, 7u) )
    v5 = 0;
  else
    v5 = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v5 )
  {
    if ( (*(_BYTE *)v2 & 0x7F) == 0x15 )
    {
      if ( *(_QWORD *)(v2 + 8) == v2 + 8 )
        goto LABEL_9;
      if ( !*(_DWORD *)(v2 + 4) )
        goto LABEL_9;
      v8 = KiAttemptFastRemovePriQueue(v2);
      v9 = (_QWORD *)v8;
      if ( !v8 || (unsigned __int8)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), v2, v8, 0) )
        goto LABEL_9;
      ++*(_DWORD *)(v2 + 4);
      v10 = v2 + 24;
      v11 = *(_QWORD *)(v2 + 24);
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
      {
        *v9 = v11;
        v9[1] = v10;
        *(_QWORD *)(v11 + 8) = v9;
        *(_QWORD *)v10 = v9;
        goto LABEL_9;
      }
    }
    else
    {
      if ( *(_DWORD *)(v2 + 40) >= *(_DWORD *)(v2 + 44) )
        goto LABEL_9;
      v6 = *(_QWORD **)(v2 + 24);
      v7 = v2 + 24;
      if ( v6 == (_QWORD *)(v2 + 24) || *(_QWORD *)(v2 + 8) == v2 + 8 )
        goto LABEL_9;
      v12 = *v6;
      v13 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) == v6 && (_QWORD *)*v13 == v6 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *v6 = 0LL;
        if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), v2, v6) )
        {
          --*(_DWORD *)(v2 + 4);
LABEL_9:
          _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
          return;
        }
        v22 = *(_QWORD *)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) == v7 )
        {
          *v6 = v22;
          v6[1] = v7;
          *(_QWORD *)(v22 + 8) = v6;
          *(_QWORD *)v7 = v6;
          goto LABEL_9;
        }
      }
    }
    goto LABEL_16;
  }
  v15 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((v2 >> 4) & 0x3F));
  ExAcquireSpinLockSharedAtDpcLevel(v15);
  v2 = *(_QWORD *)(a1 + 232);
  if ( v2 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232), v16, v17);
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      ExReleaseSpinLockSharedFromDpcLevel(v15);
      return;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v15);
  if ( v2 )
  {
    if ( (*(_BYTE *)v2 & 0x7F) != 0x15 )
    {
      KiActivateWaiterKQueue(v2);
      return;
    }
    if ( *(_QWORD *)(v2 + 8) == v2 + 8 )
      goto LABEL_9;
    if ( !*(_DWORD *)(v2 + 4) )
      goto LABEL_9;
    v18 = KiAttemptFastRemovePriQueue(v2);
    v19 = (_QWORD *)v18;
    if ( !v18 || (unsigned __int8)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), v2, v18, 0) )
      goto LABEL_9;
    ++*(_DWORD *)(v2 + 4);
    v20 = v2 + 24;
    v21 = *(_QWORD *)(v2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
    {
      *v19 = v21;
      v19[1] = v20;
      *(_QWORD *)(v21 + 8) = v19;
      *(_QWORD *)v20 = v19;
      goto LABEL_9;
    }
LABEL_16:
    __fastfail(3u);
  }
}
