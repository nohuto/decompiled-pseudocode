/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x140619A30
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspFindVsmEnclaveThread @ 0x140ACC5E0 (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // rsi
  __int64 Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  _QWORD *v14; // rdi
  bool v15; // r8
  _QWORD *v16; // rax
  int VsmEnclaveThread; // eax

  v4 = 0LL;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 32) = a3;
    *(_DWORD *)(Pool2 + 36) = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v11, a1 + 112);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = *(_QWORD **)(a1 + 104);
  if ( !a3 )
  {
    while ( v14 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(a2, v14);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v14 = (_QWORD *)v14[1];
      }
      else
      {
        v14 = (_QWORD *)*v14;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), (__int64)v14);
    goto LABEL_26;
  }
  v15 = 0;
  if ( !v14 )
    goto LABEL_25;
  while ( (int)PspFindVsmEnclaveThread(a2, v14) >= 0 )
  {
    v16 = (_QWORD *)v14[1];
    if ( !v16 )
    {
      v15 = 1;
      goto LABEL_25;
    }
LABEL_23:
    v14 = v16;
  }
  v16 = (_QWORD *)*v14;
  if ( *v14 )
    goto LABEL_23;
  v15 = 0;
LABEL_25:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v14, v15, v4);
  v14 = 0LL;
LABEL_26:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  KeLeaveCriticalRegion();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return 0LL;
}
