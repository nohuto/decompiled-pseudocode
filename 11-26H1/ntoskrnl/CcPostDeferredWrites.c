/*
 * XREFs of CcPostDeferredWrites @ 0x14039D37C
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x14038BB90 (CcReapPrivateVolumeCachemap.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1404D6DC0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x1405B4980 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcPostDeferredWrites(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  _QWORD **v3; // r14
  KSPIN_LOCK *v6; // r12
  _QWORD *v7; // rsi
  KIRQL v8; // al
  _QWORD *v9; // rdi
  KIRQL v10; // dl
  unsigned int v11; // r9d
  unsigned int v12; // ebx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  struct _KEVENT *v16; // rcx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (_QWORD **)(a2 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v3 = (_QWORD **)(a1 + 1168);
  v6 = (KSPIN_LOCK *)(a1 + 1216);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(v6);
    v9 = *v3;
    v10 = v8;
    NewIrql = v8;
    if ( *v3 != v3 )
    {
      while ( 1 )
      {
        v7 = 0LL;
        if ( v9 == v3 )
          goto LABEL_14;
        v7 = v9 - 3;
        if ( *(_BYTE *)(a1 + 1294) > 1u )
          break;
        v11 = *((_DWORD *)v7 + 4);
        v12 = v11 + v2;
        if ( CcCanIWriteStreamEx(a1, a2, v7[1], v11, v2, 2, 0LL)
          && (!*((_BYTE *)v7 + 88)
           || MEMORY[0xFFFFF78000000320] >= (__int64)(v7[12]
                                                    + (unsigned int)(10000 * CcSoftThrottleDelay)
                                                    / (unsigned __int64)KeMaximumIncrement)) )
        {
          v13 = *v9;
          v2 = v12;
          if ( *(_QWORD **)(*v9 + 8LL) == v9 )
          {
            v14 = (_QWORD *)v7[4];
            goto LABEL_12;
          }
          goto LABEL_19;
        }
        v9 = (_QWORD *)*v9;
      }
      v13 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_19;
      v14 = (_QWORD *)v9[1];
LABEL_12:
      if ( (_QWORD *)*v14 != v9 )
LABEL_19:
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
LABEL_14:
      v10 = NewIrql;
    }
    KeReleaseSpinLock(v6, v10);
    if ( !v7 )
      break;
    v16 = (struct _KEVENT *)v7[5];
    if ( v16 )
    {
      KeSetEvent(v16, 0, 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v7[7], v7[8], v15);
      ExFreePoolWithTag(v7, 0x77446343u);
      CcDereferencePartitionAndPrivateVolumeCacheMap(a1, a2);
    }
  }
}
