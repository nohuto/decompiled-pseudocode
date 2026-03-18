/*
 * XREFs of CcPostDeferredWrites @ 0x14039B61C
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x140389DE0 (CcReapPrivateVolumeCachemap.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x140399E5C (CcFlushCachePostProcessOneRange.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14046D008 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1404AA000 (CcUnpinRepinnedBcb.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1404DD6E0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x1405B2170 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x1405B26C4 (CcExitPartition.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039C160 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
                                                    / (unsigned __int64)(unsigned int)KeMaximumIncrement)) )
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
