/*
 * XREFs of ExSweepHandleTable @ 0x1409FE810
 * Callers:
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     ObKillProcess @ 0x1409FE7A8 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall ExSweepHandleTable(struct _KPROCESS *a1, __int64 a2, char a3)
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
  $241382875694CED3D471BC5892DE3337 *result; // rax
  char v17; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KeStackAttachProcess(a1, &ApcState);
    v3 = 1;
    v17 = 1;
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
              v3 = v17;
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
  result = ($241382875694CED3D471BC5892DE3337 *)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 == 1 )
    return KiUnstackDetachProcess((__int64)&ApcState, 0);
  return result;
}
