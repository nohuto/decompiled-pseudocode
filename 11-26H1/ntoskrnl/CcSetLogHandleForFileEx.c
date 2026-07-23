/*
 * XREFs of CcSetLogHandleForFileEx @ 0x140475F50
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  __int64 **v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v38; // [rsp+48h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-89h] BYREF
  __int128 v40; // [rsp+68h] [rbp-71h] BYREF
  __int128 v41; // [rsp+78h] [rbp-61h]
  __int128 v42; // [rsp+88h] [rbp-51h]
  __int128 v43; // [rsp+98h] [rbp-41h]
  __int128 v44; // [rsp+A8h] [rbp-31h]
  __int128 v45; // [rsp+B8h] [rbp-21h]
  __int128 v46; // [rsp+C8h] [rbp-11h]
  __int128 v47; // [rsp+D8h] [rbp-1h]
  __int128 v48; // [rsp+E8h] [rbp+Fh]
  __int64 v49; // [rsp+F8h] [rbp+1Fh]

  v38 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&v37.LockQueue.Lock = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x22FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD **)(v9 + 536);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x23EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v11 = &CcMasterLock;
  v37.LockQueue.Lock = 0LL;
  *(_QWORD *)&v37.OldIrql = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
  }
  LOBYTE(v38) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v13 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v37.LockQueue.Lock);
    if ( v13 )
      KxWaitForLockOwnerShip((volatile signed __int64)&v37.LockQueue.Lock, v13, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v37.LockQueue.Lock, (volatile __int64 *)&CcMasterLock);
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v10 + 96;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v14 = _InterlockedExchange64(v10 + 96, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v14, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v10 + 96);
  }
  if ( *(_QWORD *)(v9 + 248) )
  {
    v23 = *(_QWORD *)(v9 + 120);
    if ( *(_QWORD *)(v23 + 8) != v9 + 120 )
      goto LABEL_20;
    v24 = *(_QWORD **)(v9 + 128);
    if ( *v24 != v9 + 120 )
      goto LABEL_20;
    v17 = CcEnablePerVolumeLazyWriter == 0;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( !v17 )
    {
      v25 = *(_QWORD *)(v9 + 584);
      if ( *(_QWORD *)(v25 + 8) != v9 + 584 )
        goto LABEL_20;
      v26 = *(_QWORD **)(v9 + 592);
      if ( *v26 != v9 + 584 )
        goto LABEL_20;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
    }
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 248) = 0LL;
    goto LABEL_33;
  }
  v15 = (_QWORD *)(v9 + 120);
  if ( !*(_DWORD *)(v9 + 112) )
  {
    v16 = (_QWORD *)v10[83];
    if ( (_QWORD *)*v16 != v10 + 82 )
      goto LABEL_20;
    v17 = CcEnablePerVolumeLazyWriter == 0;
    *v15 = v10 + 82;
    *(_QWORD *)(v9 + 128) = v16;
    *v16 = v15;
    v10[83] = v15;
    if ( !v17 )
    {
      v18 = *(_QWORD *)(v9 + 600) + 624LL;
LABEL_19:
      v19 = *(__int64 ***)(v18 + 8);
      v20 = (__int64 *)(v9 + 584);
      if ( *v19 != (__int64 *)v18 )
        goto LABEL_20;
      *v20 = v18;
      *(_QWORD *)(v9 + 592) = v19;
      *v19 = v20;
      *(_QWORD *)(v18 + 8) = v20;
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  v27 = (_QWORD *)v10[91];
  if ( (_QWORD *)*v27 != v10 + 90 )
LABEL_20:
    __fastfail(3u);
  v17 = CcEnablePerVolumeLazyWriter == 0;
  *v15 = v10 + 90;
  *(_QWORD *)(v9 + 128) = v27;
  *v27 = v15;
  v10[91] = v15;
  if ( !v17 )
  {
    v18 = *(_QWORD *)(v9 + 600) + 688LL;
    goto LABEL_19;
  }
LABEL_28:
  if ( !*(_QWORD *)(*(_QWORD *)(v9 + 512) + 48LL) )
  {
    memset_0(&v40, 0, 0x98uLL);
    *(_QWORD *)&v41 = a4;
    *((_QWORD *)&v40 + 1) = a3;
    *(_QWORD *)&v40 = a2;
    *((_QWORD *)&v48 + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *((_QWORD *)&v47 + 1) = Object;
    }
    v28 = *(_QWORD *)(v9 + 512);
    v29 = v41;
    *(_OWORD *)(v28 + 48) = v40;
    v30 = v42;
    *(_OWORD *)(v28 + 64) = v29;
    v31 = v43;
    *(_OWORD *)(v28 + 80) = v30;
    v32 = v44;
    *(_OWORD *)(v28 + 96) = v31;
    v33 = v45;
    *(_OWORD *)(v28 + 112) = v32;
    v34 = v46;
    *(_OWORD *)(v28 + 128) = v33;
    v35 = v48;
    *(_OWORD *)(v28 + 144) = v34;
    v36 = v49;
    *(_OWORD *)(v28 + 160) = v47;
    *(_OWORD *)(v28 + 176) = v35;
    *(_QWORD *)(v28 + 192) = v36;
  }
  v21 = *(_QWORD *)(v9 + 512) + 48LL;
  *(_QWORD *)(v9 + 248) = v21;
  if ( (*(_DWORD *)(v9 + 152) & 0x1000000) == 0 )
  {
    v22 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v22 )
      _InterlockedAdd64((volatile signed __int64 *)(v21 + 24), v22);
  }
  *(_DWORD *)(v9 + 152) |= 0x1000000u;
LABEL_33:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&v37.LockQueue.Lock);
}
