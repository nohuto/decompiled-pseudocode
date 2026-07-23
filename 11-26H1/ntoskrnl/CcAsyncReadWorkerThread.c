/*
 * XREFs of CcAsyncReadWorkerThread @ 0x14038BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 */

__int64 __fastcall CcAsyncReadWorkerThread(__int64 *StartContext)
{
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  AutoBoost *v11; // rbp
  __int64 **v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // r8
  unsigned __int64 v15; // rtt
  __int64 v16; // [rsp+50h] [rbp+8h]

  result = StartContext[9];
  v3 = *((unsigned int *)StartContext + 9);
  v4 = StartContext[8];
  v5 = StartContext[7];
  v6 = (unsigned __int64 *)(v4 + 1160);
  v7 = *(_QWORD *)(result + 280) + 404 * v3;
  v8 = *(_QWORD *)(result + 232) + 16 * v3;
  v16 = result;
  if ( !CcEnablePerVolumeLazyWriter )
    v6 = (unsigned __int64 *)(v5 + 1224);
  if ( *((_DWORD *)StartContext + 8) == 3 )
  {
    *(_DWORD *)(v7 + 4LL * *((unsigned int *)StartContext + 10)) = 0;
    CcAsyncReadWorker(StartContext);
    *(_DWORD *)(v7 + 4LL * *((unsigned int *)StartContext + 10)) = -1;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, v9);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v10, (__int64)v6);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v11 + 33) |= 2u;
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = *(__int64 ***)(v8 + 8);
    if ( *v12 != (__int64 *)v8 )
      __fastfail(3u);
    StartContext[1] = (__int64)v12;
    *StartContext = v8;
    *v12 = StartContext;
    *(_QWORD *)(v8 + 8) = StartContext;
    --*(_DWORD *)(*(_QWORD *)(v16 + 240) + 4 * v3);
    _m_prefetchw(v6);
    v13 = *v6;
    v14 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v6, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v14, v13)) )
      ExfReleasePushLock(v6);
    KeAbPostRelease((unsigned __int64)v6);
    return CcDereferencePartitionAndPrivateVolumeCacheMap(v5, v4);
  }
  return result;
}
