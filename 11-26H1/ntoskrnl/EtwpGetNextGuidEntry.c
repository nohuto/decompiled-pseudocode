/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1409366D0
 * Callers:
 *     EtwpGetGuidList @ 0x1409368A0 (EtwpGetGuidList.c)
 *     EtwpDisableTraceProviders @ 0x1409378E0 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x140937BFC (EtwpEnumerateTraceGuids.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093BF48 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A693C0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4C3A0 (EtwpTracingProvEnableCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
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
  _QWORD **v11; // rbp
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v14; // rdx
  LegacyAutoBoost *v15; // rdi
  signed __int64 v16; // r9
  _QWORD **v17; // rax
  _QWORD *v18; // r8
  signed __int64 j; // rdx
  signed __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8

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
  v11 = (_QWORD **)(v10 + v8);
  for ( i = v10 - 48; ; v11 = (_QWORD **)((char *)v9 + i) )
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
      v17 = (_QWORD **)v6;
    v18 = *v17;
LABEL_12:
    if ( v18 != v11 )
    {
      v7 = v18;
      _m_prefetchw(v18 + 4);
      for ( j = v18[4]; ; j = v20 )
      {
        if ( !j )
        {
          v18 = (_QWORD *)*v18;
          goto LABEL_12;
        }
        v20 = _InterlockedCompareExchange64(v18 + 4, j + 1, j);
        if ( j == v20 )
          break;
      }
      if ( j < 0 )
        KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)v18, 0LL, 0LL);
      v5 = 1;
    }
    if ( v16 != _InterlockedCompareExchange64(v9, 0LL, v16) )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((unsigned __int64)v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22);
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
