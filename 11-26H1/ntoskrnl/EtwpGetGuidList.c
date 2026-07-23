/*
 * XREFs of EtwpGetGuidList @ 0x140912440
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpGetTraceGuidList @ 0x140ADDEB4 (EtwpGetTraceGuidList.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetGuidList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int *a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // ebp
  struct _KLOCK_ENTRIES *v11; // r9
  _QWORD *NextGuidEntry; // r15
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  char v16; // r12
  ULONG_PTR v17; // rsi
  __int64 v18; // r13
  signed __int64 *v19; // r14
  _QWORD **i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v22; // rdx
  LegacyAutoBoost *v23; // rbx
  signed __int64 v24; // r9
  _QWORD **v25; // rax
  _QWORD *v26; // r8
  signed __int64 j; // rdx
  signed __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-58h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v34 = (unsigned int)a4;
  v5 = a3;
  v6 = a2;
  v7 = 0;
  v8 = (unsigned int)a4;
  v9 = a1;
  v10 = 0;
  NextGuidEntry = EtwpGetNextGuidEntry(a1, 0LL, a2, a4);
  while ( 1 )
  {
    v13 = v10;
    if ( !NextGuidEntry )
      break;
    v14 = NextGuidEntry + 5;
    if ( v6 )
      goto LABEL_7;
    v15 = *v14 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *v14 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v15 = NextGuidEntry[6] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( v15 )
    {
LABEL_7:
      if ( ++v10 > 0xFFFFFFF )
      {
        v7 = -2147483643;
        *a5 = v10;
        return v7;
      }
      if ( v10 <= v8 )
        *(_OWORD *)(v5 + 16 * v13) = *(_OWORD *)v14;
    }
    v16 = 0;
    v17 = (ULONG_PTR)NextGuidEntry;
    NextGuidEntry = 0LL;
    v18 = v9
        + 720
        + 56LL
        * (((unsigned __int8)*(_DWORD *)v14 ^ (unsigned __int8)(*((_DWORD *)v14 + 1) ^ *((_DWORD *)v14 + 2) ^ *((_DWORD *)v14 + 3))) & 0x3F);
    v30 = 16LL * v6;
    v19 = (signed __int64 *)(v18 + 48);
    for ( i = (_QWORD **)(v30 + v18); ; i = (_QWORD **)(v18 + v30) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v19, 0LL, 0LL, v11);
      v24 = 17LL;
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v19, 0, v23, (struct _KTHREAD *)v19);
        v24 = 17LL;
      }
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v23, v22);
        else
          *((_BYTE *)v23 + 10) = 1;
      }
      v25 = i;
      if ( v17 )
        v25 = (_QWORD **)v17;
      v26 = *v25;
LABEL_19:
      if ( v26 != i )
      {
        NextGuidEntry = v26;
        _m_prefetchw(v26 + 4);
        for ( j = v26[4]; ; j = v28 )
        {
          if ( !j )
          {
            v26 = (_QWORD *)*v26;
            goto LABEL_19;
          }
          v28 = _InterlockedCompareExchange64(v26 + 4, j + 1, j);
          if ( j == v28 )
            break;
        }
        if ( j < 0 )
          KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)v26, 0LL, 0LL);
        v16 = 1;
      }
      v7 = 0;
      if ( v24 != _InterlockedCompareExchange64(v19, 0LL, v24) )
        ExfReleasePushLockShared(v19);
      KeAbPostRelease((unsigned __int64)v19);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v17 )
        EtwpUnreferenceGuidEntry(v17);
      if ( v16 )
        break;
      v18 += 56LL;
      v19 += 7;
      if ( v18 == a1 + 4304 )
      {
        NextGuidEntry = 0LL;
        break;
      }
      v17 = 0LL;
    }
    v6 = a2;
    v8 = v34;
    v5 = a3;
    v9 = a1;
  }
  *a5 = v10;
  if ( v10 > v8 )
    return (unsigned int)-1073741789;
  return v7;
}
