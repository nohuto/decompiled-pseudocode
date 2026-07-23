/*
 * XREFs of CcIsThereDirtyData @ 0x140259630
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     CcIsThereDirtyDataHelper @ 0x14025A064 (CcIsThereDirtyDataHelper.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  __int64 v1; // rbp
  char v2; // di
  void *v3; // rcx
  _QWORD *NextPartitionUnsafe; // rsi
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // r8
  char IsThereDirtyDataHelper; // bl
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v2 = 0;
  *(_QWORD *)&v12 = Vpb;
  v3 = 0LL;
  BYTE8(v12) = 0;
  while ( 1 )
  {
    NextPartitionUnsafe = (_QWORD *)PsGetNextPartitionUnsafe(v3);
    if ( !NextPartitionUnsafe )
      return BYTE8(v12);
    v5 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
    v6 = NextPartitionUnsafe[1];
    v7 = v5;
    if ( v6 )
    {
      v1 = NextPartitionUnsafe[1];
      if ( *(_BYTE *)(v6 + 1294) >= 2u )
      {
        _m_prefetchw((const void *)(v6 + 1296));
        v10 = *(_QWORD *)(v6 + 1296);
        while ( (unsigned __int64)(v10 + 1) > 1 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1296), v10 + 1, v10);
          if ( v11 == v10 )
            goto LABEL_6;
        }
        if ( v10 )
          __fastfail(0xEu);
        v2 = 0;
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 1296)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v2 = 1;
      }
    }
    KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v7);
    if ( v2 )
    {
      IsThereDirtyDataHelper = CcIsThereDirtyDataHelper(v1, 0LL, &v12);
      CcDereferencePartition(v1);
      v2 = 0;
      if ( !IsThereDirtyDataHelper )
      {
        ObfDereferenceObjectWithTag(NextPartitionUnsafe, 0x6E457350u);
        return BYTE8(v12);
      }
    }
    v3 = NextPartitionUnsafe;
  }
}
