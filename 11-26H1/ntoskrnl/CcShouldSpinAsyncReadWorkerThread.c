/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x140389F7C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 a1, _QWORD *a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  unsigned __int64 *v8; // rbx
  char v9; // di
  _QWORD **v10; // r14
  unsigned int i; // ecx
  AutoBoost *v13; // rax
  AutoBoost *v14; // rsi
  signed __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  unsigned __int64 v20; // rtt

  v4 = a2[2];
  v6 = (unsigned int)a4;
  v8 = (unsigned __int64 *)(v4 + 1160);
  v9 = 1;
  v10 = (_QWORD **)(a2[29] + 16LL * (unsigned int)a4);
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (unsigned __int64 *)(a1 + 1224);
  for ( i = 0; i < LODWORD(EmpParseLock.OtherOperationCount); ++i )
  {
    if ( *(_DWORD *)(a2[35] + 404LL * (unsigned int)a4 + 4LL * i) <= 0x3Eu )
      return 0;
  }
  if ( a3 )
  {
    *a3 = 0LL;
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, a4);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v13, (__int64)v8);
    v15 = 0LL;
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v14 + 33) |= 2u;
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v16 = *v10;
    if ( *v10 != v10 )
    {
      if ( (_QWORD **)v16[1] != v10 || (v17 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
        __fastfail(3u);
      *v10 = v17;
      v17[1] = v10;
      *a3 = v16;
      ++*(_DWORD *)(a2[30] + 4 * v6);
      CcReferencePartitionAndPrivateVolumeCacheMap(a1, v4);
    }
    _m_prefetchw(v8);
    v18 = *v8;
    v19 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = v15;
    if ( (v18 & 2) != 0 || (v20 = *v8, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v19, v18)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((unsigned __int64)v8);
    if ( !*a3 )
      _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
  }
  return v9;
}
