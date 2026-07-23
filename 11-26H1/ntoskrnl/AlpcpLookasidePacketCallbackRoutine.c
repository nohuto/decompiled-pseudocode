/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140268B10
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     AlpcpQueueIoCompletion @ 0x1402686B0 (AlpcpQueueIoCompletion.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoFreeMiniCompletionPacket @ 0x140A82520 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  int v5; // ebp
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // di
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  volatile signed __int64 *v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // r9
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  void *v18; // rdi
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a2[2];
  v4 = 0;
  v24 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v23 = (volatile signed __int64 *)v3;
    v8 = 0LL;
    v22 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v24) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)v3, (__int64)&v22) )
        KxWaitForLockOwnerShip(&v22);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v22, v3);
    }
    v10 = *(_DWORD *)(v3 + 16);
    if ( v10 )
    {
      *(_DWORD *)(v3 + 16) = v10 - 1;
    }
    else
    {
      v11 = *(_DWORD *)(v3 + 20);
      if ( v11 )
      {
        v8 = -1LL;
        *(_DWORD *)(v3 + 20) = v11 - 1;
      }
      else
      {
        --*(_DWORD *)(v3 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v3 + 32);
        *(_QWORD *)(v3 + 32) = a2;
        if ( !*(_DWORD *)(v3 + 12) && *(_DWORD *)(v3 + 24) )
          v5 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&v22);
      v12 = v22;
      if ( !v22 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v23, 0LL, (signed __int64)&v22) == &v22 )
          goto LABEL_20;
        v12 = KxWaitForLockChainValid(&v22);
      }
      v22 = 0LL;
      v13 = v23;
      if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v23)) & 4) != 0 )
      {
        _InterlockedOr(v20, 0);
        KiWakeAddressAll(v12 + 8, v13, a3);
      }
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(&v22, retaddr);
    }
LABEL_20:
    v14 = (unsigned __int8)v24;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    __writecr8(v14);
    if ( !a1 )
      break;
    v15 = *(_QWORD *)(v3 + 40);
    _m_prefetchw((const void *)(v15 - 48));
    v16 = *(_QWORD *)(v15 - 48);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 - 48), v16 + 1, v16);
      if ( v17 == v16 )
      {
        ObpTraceObjectReferenceIfActive(v15 - 48, 1LL, 1953261124LL);
        v18 = *(void **)(v3 + 40);
        v19 = *(_QWORD *)(v3 + 48);
        LOBYTE(v21) = 0;
        AlpcpQueueIoCompletion((__int64)v18, v19, v8, a1, v21, 0);
        ObfDereferenceObjectWithTag(v18, 0x746C6644u);
        goto LABEL_23;
      }
    }
  }
LABEL_23:
  if ( v5 )
  {
    if ( *(_DWORD *)(v3 + 8) )
    {
      do
        IoFreeMiniCompletionPacket(*(_QWORD *)(v3 + 24LL * v4++ + 64));
      while ( v4 < *(_DWORD *)(v3 + 8) );
    }
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
