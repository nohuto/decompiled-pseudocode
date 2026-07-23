/*
 * XREFs of CcGetDirtyPages @ 0x140259A70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  __int64 v4; // rbp
  char v5; // di
  void *v6; // rcx
  _QWORD *NextPartitionUnsafe; // rsi
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r8
  char DirtyPagesHelper; // bl
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _QWORD v15[4]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v16; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v15[0] = LogHandle;
  v5 = 0;
  v15[2] = Context1;
  v6 = 0LL;
  v15[3] = Context2;
  v16.QuadPart = 0LL;
  v15[1] = DirtyPageRoutine;
  while ( 1 )
  {
    NextPartitionUnsafe = (_QWORD *)PsGetNextPartitionUnsafe(v6);
    if ( !NextPartitionUnsafe )
      return v16;
    v8 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
    v9 = NextPartitionUnsafe[1];
    v10 = v8;
    if ( v9 )
    {
      v4 = NextPartitionUnsafe[1];
      if ( *(_BYTE *)(v9 + 1294) >= 2u )
      {
        _m_prefetchw((const void *)(v9 + 1296));
        v13 = *(_QWORD *)(v9 + 1296);
        while ( (unsigned __int64)(v13 + 1) > 1 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 1296), v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_6;
        }
        if ( v13 )
          __fastfail(0xEu);
        v5 = 0;
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 1296)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v10);
    if ( v5 )
    {
      DirtyPagesHelper = CcGetDirtyPagesHelper(v4, 0LL, v15);
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !DirtyPagesHelper )
      {
        ObfDereferenceObjectWithTag(NextPartitionUnsafe, 0x6E457350u);
        return v16;
      }
    }
    v6 = NextPartitionUnsafe;
  }
}
