/*
 * XREFs of CcGetPartitionWithCreate @ 0x1403E1F28
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x1405B2188 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 */

_BYTE *__fastcall CcGetPartitionWithCreate(__int64 a1)
{
  _BYTE *v1; // rbx
  _BYTE *v2; // rsi
  __int64 Partition; // rax
  KIRQL v6; // bp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE **)(a1 + 8);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    goto LABEL_2;
  Partition = CcCreatePartition();
  v1 = (_BYTE *)Partition;
  if ( Partition )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 768), &LockHandle);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.ReadOperationCount);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = v1;
      v1 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      ++WORD2(EmpParseLock.KernelShadowStack);
      *(_QWORD *)(a1 + 8) = v1;
      v1[1293] = 1;
      if ( PsReferencePartitionSafe(a1) )
        PsDereferencePartition(a1);
      else
        v1[1294] = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.ReadOperationCount, v6);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v2 || (v2[1294] = 2, CcDeletePartition(v2), v1) )
    {
LABEL_2:
      if ( v1[1294] >= 2u )
        KeBugCheckEx(0x34u, 0x692uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  return v1;
}
