/*
 * XREFs of AlpcpAllocateMessage @ 0x1409BCB60
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1408E7C0C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  char v7; // dl
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  char v10; // al
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v15; // ebx
  struct _KLOCK_ENTRIES *v16; // r9
  signed __int32 v17; // eax
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rbx
  unsigned __int64 QuantumTarget; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  _QWORD *SListFaultAddress; // rax
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 **v27; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v29; // r8
  _QWORD *v30; // rax
  void *volatile ***v31; // rdx
  void *volatile **v32; // rax
  void *volatile **v33; // r8
  void *volatile *StackBase; // r8

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 288;
  }
  else
  {
    v4 = 840LL;
  }
  if ( a3 || v4 > 0x348 )
  {
    v5 = guard_dispatch_icall_no_overrides(1LL, v4);
    v7 = 0;
  }
  else
  {
    v5 = (__int64)ExAllocateFromNPagedLookasideList(&AlpcpLookasides);
    v7 = 2;
  }
  v8 = v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 16) = 512;
    v9 = v5 + 48;
    *(_DWORD *)(v5 + 18) = 0;
    *(_WORD *)(v5 + 22) = 0;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    v10 = *(_BYTE *)(v5 + 16);
    *(_QWORD *)(v8 + 24) = 1LL;
    *(_BYTE *)(v8 + 16) = v7 | v10 & 0xFD;
    if ( v8 != -48 )
    {
      v11 = (AutoBoost *)KeAbPreAcquire(v8 + 32, 0LL, 0LL, v6);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 - 16), v11, v9 - 16);
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v12);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      *(_BYTE *)(v9 - 32) |= 1u;
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0x10000uLL) + 0x10000;
      if ( BugCheckParameter4 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v9, 0x26uLL, BugCheckParameter4);
      v15 = *(_DWORD *)(v9 + 264);
      memset_0((void *)v9, 0, 0x118uLL);
      *(_WORD *)(v9 + 242) = 40;
      --*(_WORD *)(v9 - 30);
      *(_DWORD *)(v9 + 264) = v15 & 0x7FFFFFFF;
      do
        v17 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v17 );
      *(_DWORD *)(v9 + 272) = v17;
      if ( !LODWORD(AlpcpMessageLogLock.CycleTime) )
        goto LABEL_30;
      v18 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL, 0LL, v16);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&AlpcpMessageLogLock, v18, (__int64)&AlpcpMessageLogLock);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v20, v19);
        else
          *((_BYTE *)v20 + 10) = 1;
      }
      QuantumTarget = AlpcpMessageLogLock.QuantumTarget;
      if ( (unsigned __int64 *)AlpcpMessageLogLock.QuantumTarget == &AlpcpMessageLogLock.QuantumTarget )
      {
        QuantumTarget = (unsigned __int64)AlpcpMessageLogLock.Header.WaitListHead.Blink;
        if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink == &AlpcpMessageLogLock.Header.WaitListHead.Blink )
          goto LABEL_27;
        if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink->Blink != &AlpcpMessageLogLock.Header.WaitListHead.Blink )
          goto LABEL_35;
        Flink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
        if ( AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink->Blink != AlpcpMessageLogLock.Header.WaitListHead.Blink )
          goto LABEL_35;
        AlpcpMessageLogLock.Header.WaitListHead.Blink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
        Flink->Blink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.Header.WaitListHead.Blink;
        *(_DWORD *)(QuantumTarget + 44) = 0;
        v29 = *(_QWORD *)(QuantumTarget + 16);
        if ( *(_QWORD *)(v29 + 8) != QuantumTarget + 16 )
          goto LABEL_35;
        v30 = *(_QWORD **)(QuantumTarget + 24);
        if ( *v30 != QuantumTarget + 16 )
          goto LABEL_35;
        *v30 = v29;
        v31 = (void *volatile ***)(QuantumTarget + 48);
        *(_QWORD *)(v29 + 8) = v30;
        while ( 1 )
        {
          v32 = *v31;
          if ( *v31 == (void *volatile **)v31 )
            break;
          if ( v32[1] != (void *volatile *)v31 )
            goto LABEL_35;
          v33 = (void *volatile **)*v32;
          if ( *((void *volatile ***)*v32 + 1) != v32 )
            goto LABEL_35;
          *v31 = v33;
          v33[1] = (void *volatile *)v31;
          StackBase = (void *volatile *)AlpcpMessageLogLock.StackBase;
          if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackBase != (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit )
            goto LABEL_35;
          *v32 = &AlpcpMessageLogLock.StackLimit;
          v32[1] = StackBase;
          *StackBase = v32;
          AlpcpMessageLogLock.StackBase = v32;
        }
      }
      else
      {
        if ( *(struct _KTHREAD **)(AlpcpMessageLogLock.QuantumTarget + 8) != (struct _KTHREAD *)&AlpcpMessageLogLock.QuantumTarget )
          goto LABEL_35;
        v22 = *(_QWORD *)AlpcpMessageLogLock.QuantumTarget;
        if ( *(_QWORD *)(*(_QWORD *)AlpcpMessageLogLock.QuantumTarget + 8LL) != AlpcpMessageLogLock.QuantumTarget )
          goto LABEL_35;
        AlpcpMessageLogLock.QuantumTarget = *(_QWORD *)AlpcpMessageLogLock.QuantumTarget;
        *(_QWORD *)(v22 + 8) = &AlpcpMessageLogLock.QuantumTarget;
      }
      if ( !QuantumTarget )
      {
LABEL_27:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.Header.Lock);
        KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock);
LABEL_30:
        result = 0LL;
        *(_WORD *)(v9 + 242) = 40;
        *a1 = v9;
        return result;
      }
      *(_QWORD *)(QuantumTarget + 32) = v9;
      *(_DWORD *)(QuantumTarget + 40) = *(_DWORD *)(v9 + 264);
      *(_DWORD *)(QuantumTarget + 44) = 1;
      SListFaultAddress = AlpcpMessageLogLock.SListFaultAddress;
      if ( *(struct _KTHREAD **)AlpcpMessageLogLock.SListFaultAddress == (struct _KTHREAD *)&AlpcpMessageLogLock.Header.WaitListHead.Blink )
      {
        *(_QWORD *)QuantumTarget = &AlpcpMessageLogLock.Header.WaitListHead.Blink;
        v25 = (unsigned __int64 *)(QuantumTarget + 16);
        *(_QWORD *)(QuantumTarget + 8) = SListFaultAddress;
        *SListFaultAddress = QuantumTarget;
        AlpcpMessageLogLock.SListFaultAddress = (void *)QuantumTarget;
        v26 = AlpcpMessageLogLock.ThreadLock + 16LL * ((*(_DWORD *)(QuantumTarget + 40) >> 2) & 0x3FF);
        v27 = *(unsigned __int64 ***)(v26 + 8);
        if ( *v27 == (unsigned __int64 *)v26 )
        {
          *v25 = v26;
          *(_QWORD *)(QuantumTarget + 24) = v27;
          *v27 = v25;
          *(_QWORD *)(v26 + 8) = v25;
          goto LABEL_27;
        }
      }
LABEL_35:
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
