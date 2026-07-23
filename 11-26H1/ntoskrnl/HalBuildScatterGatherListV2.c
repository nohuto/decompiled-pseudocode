/*
 * XREFs of HalBuildScatterGatherListV2 @ 0x14035BE20
 * Callers:
 *     HalGetScatterGatherList @ 0x14035B550 (HalGetScatterGatherList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpCalculateScatterGatherListSize @ 0x14035C470 (HalpCalculateScatterGatherListSize.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalpQueueMapBufferWorker @ 0x140436E5C (HalpQueueMapBufferWorker.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaQueueAdapter @ 0x14058BBD8 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalBuildScatterGatherListV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char *P,
        unsigned int a10)
{
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // r8
  char *v18; // r12
  __int64 v19; // rdx
  unsigned int v20; // r11d
  unsigned int v21; // r14d
  char *v22; // rbx
  __int64 *v23; // r10
  int v24; // ecx
  unsigned int v25; // ecx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // esi
  char *v34; // rbx
  _QWORD *v35; // rdi
  bool v36; // zf
  unsigned __int8 CurrentIrql; // r14
  KSPIN_LOCK *v38; // rcx
  char v39; // r12
  __int64 v40; // rdx
  char v41; // al
  _QWORD *v42; // rcx
  __int64 v43; // r8
  char *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 MapRegisters; // rax
  char v48; // bl
  __int64 v49; // rcx
  __int64 v50; // r8
  int AdapterCallbackV2; // eax
  int v52; // [rsp+20h] [rbp-58h]
  int v53; // [rsp+28h] [rbp-50h]
  unsigned int v54; // [rsp+40h] [rbp-38h] BYREF
  char *Pool2; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v56; // [rsp+50h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  char v60; // [rsp+C0h] [rbp+48h]
  int v62; // [rsp+D0h] [rbp+58h]

  v10 = a4;
  LODWORD(v56) = 0;
  LODWORD(Pool2) = 0;
  v54 = 0;
  if ( !a3 )
    return 3221225485LL;
  result = HalpCalculateScatterGatherListSize(a1, a3, a4, a5, (__int64)&v54, (__int64)&v56, (__int64)&Pool2);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(a1 + 440) )
    {
      v33 = (unsigned int)Pool2;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 445) || a8 )
        goto LABEL_5;
      v33 = (unsigned int)Pool2;
      if ( !(_DWORD)Pool2 )
      {
        v10 = a4;
LABEL_5:
        if ( P )
        {
          if ( a10 >= v54 )
          {
            v17 = P;
            Pool2 = P;
LABEL_8:
            v18 = v17 + 16;
            v19 = *(_QWORD *)(a3 + 32) + *(unsigned int *)(a3 + 44);
            v20 = a5;
            v21 = v10 & 0xFFF;
            *((_QWORD *)v17 + 1) = 0LL;
            v22 = v17 + 16;
            v23 = (__int64 *)a3;
            v24 = *(_DWORD *)(a3 + 40) - v10;
            v56 = (__int64 *)a3;
            v25 = v19 + v24;
            v26 = (_QWORD *)(a3 + 8 * (((v10 - (v19 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 6));
            if ( a5 )
            {
              do
              {
                v27 = *v23;
                v28 = v20;
                if ( v25 <= v20 )
                  v28 = v25;
                v29 = v20 - v28;
                if ( !v27 )
                  v28 = v20;
                v20 = 0;
                if ( v27 )
                  v20 = v29;
                v62 = v20;
                if ( !*(_BYTE *)(a1 + 445) )
                {
                  if ( v23 == (__int64 *)a3 )
                    v43 = a4;
                  else
                    v43 = v23[4] + v21;
                  LOBYTE(v53) = 0;
                  LOBYTE(v52) = a8;
                  HalpDmaFlushBuffer(v29, v23, v43, v28, v52, v53);
                  v20 = v62;
                  v23 = v56;
                }
                if ( v28 )
                {
                  do
                  {
                    v30 = 4096 - v21;
                    v31 = v21 + (*v26 << 12);
                    *((_DWORD *)v22 + 2) = 4096 - v21;
                    *(_QWORD *)v22 = v31;
                    if ( 4096 - v21 > v28 )
                    {
                      *((_DWORD *)v22 + 2) = v28;
                      v30 = v28;
                    }
                    v28 -= v30;
                    if ( v22 != v18
                      && v31 == *((_QWORD *)v22 - 3) + *((unsigned int *)v22 - 4)
                      && ((*v26 ^ (*v26 - 1LL)) & 0xFFFFFFFFFFF00000uLL) == 0 )
                    {
                      *((_DWORD *)v22 - 4) += v30;
                      v22 -= 24;
                    }
                    v22 += 24;
                    ++v26;
                    v21 = 0;
                  }
                  while ( v28 );
                  v23 = v56;
                }
                v32 = *v23;
                v56 = (__int64 *)v32;
                v23 = (__int64 *)v32;
                if ( !v32 )
                  break;
                v21 = *(_DWORD *)(v32 + 44);
                v26 = (_QWORD *)(v32 + 48);
                v25 = *(_DWORD *)(v32 + 40);
              }
              while ( v20 );
              v17 = Pool2;
            }
            *(_DWORD *)v17 = (v22 - v17 - 16) / 24;
            if ( P )
              *((_QWORD *)v17 + 1) = 1LL;
            guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a2 + 32), v17);
            return 0LL;
          }
          return 3221225507LL;
        }
        Pool2 = (char *)ExAllocatePool2(0x42uLL);
        v17 = Pool2;
        if ( Pool2 )
          goto LABEL_8;
        return 3221225626LL;
      }
    }
    v34 = P;
    if ( P )
    {
      if ( a10 < v54 )
        return 3221225507LL;
      *(_DWORD *)P |= 1u;
    }
    else
    {
      v44 = (char *)ExAllocatePool2(0x42uLL);
      v34 = v44;
      if ( !v44 )
        return 3221225626LL;
      *(_DWORD *)v44 = 0;
    }
    *((_QWORD *)v34 + 4) = a4;
    *((_QWORD *)v34 + 15) = a6;
    *((_QWORD *)v34 + 16) = a7;
    v34[152] = a8;
    *((_QWORD *)v34 + 1) = a3;
    v35 = v34 + 48;
    *((_DWORD *)v34 + 10) = a5;
    *((_QWORD *)v34 + 2) = 0LL;
    *((_QWORD *)v34 + 18) = a1;
    v36 = *(_BYTE *)(a1 + 440) == 0;
    *((_QWORD *)v34 + 10) = v34;
    if ( !v36 )
      v33 = (unsigned int)v56;
    *((_DWORD *)v34 + 11) = v33;
    *((_QWORD *)v34 + 12) = a2;
    *((_QWORD *)v34 + 13) = *(_QWORD *)(a2 + 32);
    *((_DWORD *)v34 + 17) &= ~4u;
    *((_QWORD *)v34 + 9) = HalpAllocateAdapterCallbackV2;
    CurrentIrql = 0;
    *((_DWORD *)v34 + 22) = v33;
    v60 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
      }
      v60 = 1;
    }
    v38 = (KSPIN_LOCK *)(a1 + 208);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v39 = 0;
    if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    {
      KeAcquireInStackQueuedSpinLock(v38, &LockHandle);
    }
    else
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 208);
      LockHandle.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v40 = _InterlockedExchange64((volatile __int64 *)v38, (__int64)&LockHandle);
        if ( v40 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v40, v16);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
      }
    }
    v41 = *(_BYTE *)(a1 + 216);
    *(_BYTE *)(a1 + 216) = 1;
    if ( v41 == 1 )
    {
      v42 = *(_QWORD **)(a1 + 200);
      if ( *v42 != a1 + 192 )
        __fastfail(3u);
      *v35 = a1 + 192;
      v39 = 1;
      *((_QWORD *)v34 + 7) = v42;
      *v42 = v35;
      *(_QWORD *)(a1 + 200) = v35;
    }
    v34[68] = v39;
    if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v39 )
      goto LABEL_82;
    *(_DWORD *)(a1 + 248) = v33;
    *(_QWORD *)(a1 + 352) = v35;
    if ( !v33 || !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 248) = 0;
      goto LABEL_74;
    }
    if ( v33 <= *(_DWORD *)(a1 + 232) )
    {
      MapRegisters = HalpDmaAllocateMapRegisters(a1, v33);
      *(_QWORD *)(a1 + 240) = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(a1);
        v48 = 1;
        HalpQueueMapBufferWorker(a1, v33);
LABEL_75:
        v49 = *(_QWORD *)(a1 + 432);
        if ( v49 )
          guard_dispatch_icall_no_overrides(v49, v45, v46);
        if ( v48 )
          goto LABEL_82;
        v50 = *(_QWORD *)(a1 + 240);
        *(_QWORD *)(a1 + 352) = v35;
        AdapterCallbackV2 = HalpAllocateAdapterCallbackV2(v35[6], v35[7], v50, v35[4]);
        if ( AdapterCallbackV2 != 2 )
        {
          if ( AdapterCallbackV2 != 3 )
          {
LABEL_82:
            if ( v60 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
            }
            return 0LL;
          }
          *(_DWORD *)(a1 + 248) = 0;
        }
        IoFreeAdapterChannelV2(a1);
        goto LABEL_82;
      }
LABEL_74:
      v48 = 0;
      goto LABEL_75;
    }
    *(_DWORD *)(a1 + 248) = 0;
    IoFreeAdapterChannelV2(a1);
    if ( v60 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    ExFreePoolWithTag(v34, 0);
    return 3221225626LL;
  }
  return result;
}
