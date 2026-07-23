/*
 * XREFs of AlpcpAllocateMessage @ 0x14098DB40
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  char *InitialStack; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  _QWORD *ThreadLock; // rax
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *v26; // r8
  struct _LIST_ENTRY *Blink; // rax
  __int64 v28; // rax
  char **v29; // r8
  void **v30; // rax
  void ****v31; // rdx
  void ***v32; // rax
  void **v33; // r8
  void **QuantumTarget; // r8

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
      if ( !AlpcpMessageLogEnabled )
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
      InitialStack = (char *)AlpcpMessageLogLock.InitialStack;
      if ( AlpcpMessageLogLock.InitialStack == &AlpcpMessageLogLock.InitialStack )
      {
        InitialStack = (char *)AlpcpMessageLogLock.StackBase;
        if ( AlpcpMessageLogLock.StackBase == &AlpcpMessageLogLock.StackBase )
          goto LABEL_27;
        if ( *((struct _KTHREAD **)AlpcpMessageLogLock.StackBase + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.StackBase )
          goto LABEL_35;
        v28 = *(_QWORD *)AlpcpMessageLogLock.StackBase;
        if ( *(void **)(*(_QWORD *)AlpcpMessageLogLock.StackBase + 8LL) != AlpcpMessageLogLock.StackBase )
          goto LABEL_35;
        AlpcpMessageLogLock.StackBase = *(void **)AlpcpMessageLogLock.StackBase;
        *(_QWORD *)(v28 + 8) = &AlpcpMessageLogLock.StackBase;
        *((_DWORD *)InitialStack + 11) = 0;
        v29 = (char **)*((_QWORD *)InitialStack + 2);
        if ( v29[1] != InitialStack + 16 )
          goto LABEL_35;
        v30 = (void **)*((_QWORD *)InitialStack + 3);
        if ( *v30 != InitialStack + 16 )
          goto LABEL_35;
        *v30 = v29;
        v31 = (void ****)(InitialStack + 48);
        v29[1] = (char *)v30;
        while ( 1 )
        {
          v32 = *v31;
          if ( *v31 == (void ***)v31 )
            break;
          if ( v32[1] != (void **)v31 )
            goto LABEL_35;
          v33 = *v32;
          if ( (*v32)[1] != v32 )
            goto LABEL_35;
          *v31 = (void ***)v33;
          v33[1] = v31;
          QuantumTarget = (void **)AlpcpMessageLogLock.QuantumTarget;
          if ( *(struct _KTHREAD **)AlpcpMessageLogLock.QuantumTarget != (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress )
            goto LABEL_35;
          *v32 = &AlpcpMessageLogLock.SListFaultAddress;
          v32[1] = QuantumTarget;
          *QuantumTarget = v32;
          AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)v32;
        }
      }
      else
      {
        if ( *((struct _KTHREAD **)AlpcpMessageLogLock.InitialStack + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.InitialStack )
          goto LABEL_35;
        v22 = *(_QWORD *)AlpcpMessageLogLock.InitialStack;
        if ( *(void **)(*(_QWORD *)AlpcpMessageLogLock.InitialStack + 8LL) != AlpcpMessageLogLock.InitialStack )
          goto LABEL_35;
        AlpcpMessageLogLock.InitialStack = *(void **)AlpcpMessageLogLock.InitialStack;
        *(_QWORD *)(v22 + 8) = &AlpcpMessageLogLock.InitialStack;
      }
      if ( !InitialStack )
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
      *((_QWORD *)InitialStack + 4) = v9;
      *((_DWORD *)InitialStack + 10) = *(_DWORD *)(v9 + 264);
      *((_DWORD *)InitialStack + 11) = 1;
      ThreadLock = (_QWORD *)AlpcpMessageLogLock.ThreadLock;
      if ( *(struct _KTHREAD **)AlpcpMessageLogLock.ThreadLock == (struct _KTHREAD *)&AlpcpMessageLogLock.StackBase )
      {
        *(_QWORD *)InitialStack = &AlpcpMessageLogLock.StackBase;
        v25 = (struct _LIST_ENTRY *)(InitialStack + 16);
        *((_QWORD *)InitialStack + 1) = ThreadLock;
        *ThreadLock = InitialStack;
        AlpcpMessageLogLock.ThreadLock = (unsigned __int64)InitialStack;
        v26 = &AlpcpMessageLogLock.Header.WaitListHead.Flink[(*((_DWORD *)InitialStack + 10) >> 2) & 0x3FF];
        Blink = v26->Blink;
        if ( Blink->Flink == v26 )
        {
          v25->Flink = v26;
          *((_QWORD *)InitialStack + 3) = Blink;
          Blink->Flink = v25;
          v26->Blink = v25;
          goto LABEL_27;
        }
      }
LABEL_35:
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
