/*
 * XREFs of ExSweepHandleTable @ 0x140958F4C
 * Callers:
 *     ObKillProcess @ 0x140958EE4 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall ExSweepHandleTable(struct _KPROCESS *a1, __int64 a2, char a3)
{
  char v3; // r13
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v7; // rbx
  int v8; // r12d
  __int64 *v9; // rsi
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // r8
  int v12; // eax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax
  char v19; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KeStackAttachProcess(a1, &ApcState);
    v3 = 1;
    v19 = 1;
  }
  --CurrentThread->KernelApcDisable;
  v7 = 4LL;
  v8 = 0;
  v9 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, 4LL);
  if ( v9 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v9);
        v11 = *v9;
        if ( ((unsigned __int8)*v9 & (unsigned __int8)v10) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v9, v11);
          LOBYTE(v10) = 1;
        }
        else
        {
LABEL_8:
          v7 += 4LL;
          v9 += 2;
          if ( (v7 & 0x3FF) == 0 )
          {
            v7 += 4LL;
            v9 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v7);
            if ( !v9 )
            {
              v3 = v19;
              goto LABEL_11;
            }
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v9, v11 - 1, v11) )
      {
        v12 = ObCloseHandleTableEntry2(a2, v9, a1, v7, a3, (char)v10, 0LL);
        --CurrentThread->KernelApcDisable;
        LOBYTE(v10) = 1;
        if ( v12 >= 0 )
          ++v8;
        goto LABEL_8;
      }
    }
  }
LABEL_11:
  v13 = (AutoBoost *)KeAbPreAcquire(a2 + 64, 0LL, 0LL, v10);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 64), v13, a2 + 64);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17);
  if ( v3 == 1 )
    return KiUnstackDetachProcess((__int64)&ApcState, 0);
  return result;
}
