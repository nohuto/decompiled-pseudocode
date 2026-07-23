/*
 * XREFs of EtwpGetNextGuidEntry @ 0x140912280
 * Callers:
 *     EtwpGetGuidList @ 0x140912440 (EtwpGetGuidList.c)
 *     EtwpDisableTraceProviders @ 0x140913480 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x14091379C (EtwpEnumerateTraceGuids.c)
 *     EtwpSetProviderBinaryTracking @ 0x140917AE8 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76390 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4E130 (EtwpTracingProvEnableCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpGetNextGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  char v5; // r15
  ULONG_PTR v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  signed __int64 *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v14; // rdx
  LegacyAutoBoost *v15; // rdi
  signed __int64 v16; // r9
  _QWORD *v17; // r8
  signed __int64 j; // rdx
  signed __int64 v19; // rax

  v4 = a1 + 720;
  v5 = 0;
  v6 = (ULONG_PTR)a2;
  v7 = 0LL;
  if ( a2 )
    v8 = v4 + 56LL * (((unsigned __int8)a2[10] ^ (unsigned __int8)(a2[11] ^ a2[12] ^ a2[13])) & 0x3F);
  else
    v8 = a1 + 720;
  v9 = (signed __int64 *)(v8 + 48);
  v10 = 16LL * a3;
  v11 = (_QWORD *)(v10 + v8);
  for ( i = v10 - 48; ; v11 = (signed __int64 *)((char *)v9 + i) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
    v16 = 17LL;
    if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v9, 0, v15, (struct _KTHREAD *)v9);
      v16 = 17LL;
    }
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v17 = v11;
    if ( v6 )
      v17 = (_QWORD *)v6;
    while ( 1 )
    {
      v17 = (_QWORD *)*v17;
      if ( v17 == v11 )
        break;
      v7 = v17;
      _m_prefetchw(v17 + 4);
      for ( j = v17[4]; j; j = v19 )
      {
        v19 = _InterlockedCompareExchange64(v17 + 4, j + 1, j);
        if ( j == v19 )
        {
          if ( j < 0 )
            KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)v17, 0LL, 0LL);
          v5 = 1;
          goto LABEL_20;
        }
      }
    }
LABEL_20:
    if ( v16 != _InterlockedCompareExchange64(v9, 0LL, v16) )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((unsigned __int64)v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v6 )
      EtwpUnreferenceGuidEntry(v6);
    if ( v5 )
      return v7;
    v9 += 7;
    if ( v9 == (signed __int64 *)(v4 + 3632) )
      break;
    v6 = 0LL;
  }
  return 0LL;
}
