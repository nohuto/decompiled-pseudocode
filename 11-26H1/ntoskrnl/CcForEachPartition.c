/*
 * XREFs of CcForEachPartition @ 0x140259934
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x1405B3550 (CcNotifyWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1405B3DB0 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140B114C0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG_PTR __fastcall CcForEachPartition(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbp
  char v5; // bl
  void *i; // rcx
  LONG_PTR result; // rax
  _QWORD *v12; // rdi
  KIRQL v13; // al
  __int64 v14; // rdx
  KIRQL v15; // r8
  char v16; // al
  char v17; // si
  signed __int64 v18; // rax
  signed __int64 v19; // rtt

  v4 = 0LL;
  v5 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v12 = (_QWORD *)result;
    if ( !result )
      break;
    v13 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
    v14 = v12[1];
    v15 = v13;
    if ( v14 )
    {
      v4 = v12[1];
      if ( *(_BYTE *)(v14 + 1294) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v14 + 1296));
          v18 = *(_QWORD *)(v14 + 1296);
          while ( (unsigned __int64)(v18 + 1) > 1 )
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 1296), v18 + 1, v18);
            if ( v19 == v18 )
              goto LABEL_6;
          }
          if ( v18 )
            __fastfail(0xEu);
          v5 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1296)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v15);
    if ( v5 )
    {
      v16 = CcEnablePerVolumeLazyWriter && !a4
          ? CcForEachPrivateVolumeCacheMap(v4, a1, a2)
          : guard_dispatch_icall_no_overrides(v4, 0LL, a2);
      v17 = v16;
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !v17 )
        return ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
