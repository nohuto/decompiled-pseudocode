/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x1404ED0DC
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140B290F8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404ED330 (PsFreeEnclaveModuleInfo.c)
 *     MmGetEnclaveModuleList @ 0x140704FE8 (MmGetEnclaveModuleList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, _QWORD *a2, unsigned int *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbp
  int EnclaveModuleList; // r12d
  unsigned int v6; // r14d
  char *Pool2; // r13
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  AutoBoost *v11; // rdi
  __int64 v12; // r8
  _QWORD **v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // rsi
  _QWORD *v18; // rdi
  int v20; // [rsp+60h] [rbp+8h]

  v4 = (unsigned __int64 *)(a1 + 1624);
  EnclaveModuleList = 0;
  v20 = 0;
  v6 = 0;
  Pool2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 1624, 0LL, 0LL, a4);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v10, (__int64)v4);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v11 + 33) |= 2u;
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = *(_QWORD *)(a1 + 1608);
  if ( v12 )
  {
    v13 = *(_QWORD ***)(v12 + 8);
    v14 = v13;
    while ( v14 )
    {
      v15 = (_QWORD *)*v14;
      v14 = v15;
      if ( ((unsigned __int8)v15 & 1) != 0 )
        break;
LABEL_16:
      if ( !v15 )
        goto LABEL_18;
      ++v6;
    }
    for ( ++v13;
          (unsigned __int64)v13 < *(_QWORD *)(v12 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v12 + 4) >> 5);
          ++v13 )
    {
      v14 = *v13;
      if ( ((unsigned __int8)*v13 & 1) == 0 )
      {
        v15 = *v13;
        goto LABEL_16;
      }
    }
LABEL_18:
    if ( v6 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v16 = *(_QWORD *)(a1 + 1608);
        v17 = *(_QWORD **)(v16 + 8);
        v18 = v17;
        while ( v18 )
        {
          v18 = (_QWORD *)*v18;
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
LABEL_28:
          if ( v18 )
          {
            EnclaveModuleList = MmGetEnclaveModuleList(v18[4], &Pool2[16 * v20], &Pool2[16 * v20 + 8]);
            if ( EnclaveModuleList >= 0 && ++v20 < v6 )
              continue;
          }
          goto LABEL_31;
        }
        for ( ++v17;
              (unsigned __int64)v17 < *(_QWORD *)(v16 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v16 + 4) >> 5);
              ++v17 )
        {
          v18 = (_QWORD *)*v17;
          if ( (*v17 & 1) == 0 )
            goto LABEL_28;
        }
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(Pool2);
  }
  else
  {
    *a2 = Pool2;
    *a3 = v6;
  }
  return (unsigned int)EnclaveModuleList;
}
