/*
 * XREFs of IvtAttachDeviceDomainInternal @ 0x1405A8178
 * Callers:
 *     IvtAttachDeviceDomain @ 0x1405A8160 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x1405A87F0 (IvtDetachDeviceDomain.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x14043417C (IvtFlushTbInternal.c)
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtUpdateTranslationStructures @ 0x14052B598 (IvtUpdateTranslationStructures.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IvtBuildDefaultDomain @ 0x1405A8490 (IvtBuildDefaultDomain.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x1405A8F60 (IvtGetDomainId.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtAttachDeviceDomainInternal(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // r8
  bool v7; // r15
  char v8; // r12
  __int64 result; // rax
  int v10; // edx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v13; // r8
  __int64 v14; // r14
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  unsigned __int8 v23; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v25[112]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v26[48]; // [rsp+E0h] [rbp-98h] BYREF
  int v27; // [rsp+110h] [rbp-68h]

  memset_0(v25, 0, sizeof(v25));
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 48);
    v8 = 0;
    result = IvtBuildDefaultDomain(a1, v25, v6);
    if ( (int)result < 0 )
      return result;
    a3 = v25;
  }
  result = IvtAllocateTranslationStructures(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    BugCheckParameter4 = IvtGetDomainId(a1, a2);
    v14 = BugCheckParameter4;
    if ( !v8 )
    {
      v15 = *(_QWORD *)(a2 + 24);
      if ( BugCheckParameter4 != v15 )
        KeBugCheckEx(0x1D9u, 2uLL, 0xFFFFFFFFC00000DDuLL, v15, BugCheckParameter4);
    }
    v16 = *(_QWORD *)(a2 + 88);
    v17 = *(_QWORD *)(a2 + 80);
    if ( v16 )
    {
      if ( v17 )
        v7 = v16 != v17;
      *(_QWORD *)(a2 + 80) = v16;
    }
    *(_QWORD *)(a2 + 88) = 0LL;
    IvtUpdateTranslationStructures(a1, a2, v13, 0LL, (__int64)a3, 0, v14);
    *(_QWORD *)(a2 + 24) = *((unsigned int *)a3 + 12);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v18 = *(_QWORD *)(a2 + 16);
    if ( v18 )
    {
      *(_BYTE *)(v18 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v18 + 88));
      v19 = (_QWORD *)(a2 + 56);
      v20 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v20 + 8) != a2 + 56 || (v21 = *(_QWORD **)(a2 + 64), (_QWORD *)*v21 != v19) )
LABEL_26:
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      HalpReleaseHighLevelLock((KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) + 88LL), *(_BYTE *)(*(_QWORD *)(a2 + 16) + 96LL));
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 16) + 52LL));
    }
    else
    {
      v19 = (_QWORD *)(a2 + 56);
    }
    if ( v8 )
    {
      a3[96] = HalpAcquireHighLevelLock((PKSPIN_LOCK)a3 + 11);
      v22 = (_QWORD *)*((_QWORD *)a3 + 8);
      if ( (_BYTE *)*v22 != a3 + 56 )
        goto LABEL_26;
      v19[1] = v22;
      *v19 = a3 + 56;
      *v22 = v19;
      *((_QWORD *)a3 + 8) = v19;
      HalpReleaseHighLevelLock((KSPIN_LOCK *)a3 + 11, a3[96]);
      _InterlockedAdd((volatile signed __int32 *)a3 + 13, 1u);
    }
    memset_0(v26, 0, 0x70uLL);
    v27 = v14;
    v23 = KeGetCurrentIrql();
    if ( v23 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v23, 15);
    if ( v14 == 0x10000 )
      a3 = 0LL;
    else
      IvtFlushTbInternal(a1, 0LL, 0, (__int64)v26, 1, *(_QWORD *)a2, 0LL, 0, 0LL);
    IvtFlushTbInternal(a1, 0LL, 0, (__int64)a3, 1, *(_QWORD *)a2, 0LL, 0, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    __writecr8(v23);
    if ( v7 )
      IvtFreeScalableModePasidTables(a1, v17);
    return 0LL;
  }
  return result;
}
