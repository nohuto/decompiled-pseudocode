/*
 * XREFs of EtwpAddGuidEntry @ 0x1408FC380
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1408FCBE8 (EtwpAllocGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14091281C (EtwpFreeGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *GuidEntryByGuid; // r13
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  struct _KTHREAD *v11; // rax
  unsigned __int64 *v12; // rbp
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  _QWORD *i; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rtt
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // rbp
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v8 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v8 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3);
      if ( !GuidEntryByGuid )
      {
        --v8[4];
        EtwpFreeGuidEntry(v8);
        return 0LL;
      }
    }
  }
  v9 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
  v10 = (_QWORD *)(v9 + 16 * v3);
  if ( GuidEntryByGuid )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v26 = (AutoBoost *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL, 0LL, v7);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 83, v26, (__int64)(GuidEntryByGuid + 83));
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, v27);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    v29 = GuidEntryByGuid + 2;
    GuidEntryByGuid[84] = KeGetCurrentThread();
    v30 = v8 + 2;
    v8[82] = GuidEntryByGuid;
    v31 = GuidEntryByGuid[2];
    if ( *(_QWORD **)(v31 + 8) != GuidEntryByGuid + 2 )
      goto LABEL_16;
    *v30 = v31;
    v8[3] = v29;
    *(_QWORD *)(v31 + 8) = v30;
    *v29 = v30;
  }
  v11 = KeGetCurrentThread();
  v12 = (unsigned __int64 *)(v9 + 48);
  --v11->KernelApcDisable;
  v13 = (AutoBoost *)KeAbPreAcquire(v9 + 48, 0LL, 0LL, v7);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  for ( i = (_QWORD *)*v10; ; i = (_QWORD *)*i )
  {
    if ( i == v10 )
      goto LABEL_15;
    v17 = *(_QWORD *)a2 - i[5];
    if ( *(_QWORD *)a2 == i[5] )
      v17 = *((_QWORD *)a2 + 1) - i[6];
    if ( !v17 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      break;
  }
  if ( !i )
  {
LABEL_15:
    v18 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) == v10 )
    {
      *v8 = v18;
      i = v8;
      v8[1] = v10;
      v18[1] = v8;
      *v10 = v8;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((unsigned __int64)v12);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v8 = 0LL;
      if ( !GuidEntryByGuid )
        return i;
      goto LABEL_30;
    }
LABEL_16:
    __fastfail(3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease((unsigned __int64)v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !GuidEntryByGuid )
    goto LABEL_47;
  v20 = v8[2];
  if ( *(_QWORD **)(v20 + 8) != v8 + 2 )
    goto LABEL_16;
  v21 = (_QWORD *)v8[3];
  if ( (_QWORD *)*v21 != v8 + 2 )
    goto LABEL_16;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  v8[82] = 0LL;
LABEL_30:
  GuidEntryByGuid[84] = 0LL;
  _m_prefetchw(GuidEntryByGuid + 83);
  v22 = GuidEntryByGuid[83];
  v23 = v22 - 16;
  if ( (v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0
    || (v24 = GuidEntryByGuid[83], v24 != _InterlockedCompareExchange64(GuidEntryByGuid + 83, v23, v22)) )
  {
    ExfReleasePushLock(GuidEntryByGuid + 83);
  }
  KeAbPostRelease((unsigned __int64)(GuidEntryByGuid + 83));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v8 )
    return i;
  EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
LABEL_47:
  --v8[4];
  EtwpFreeGuidEntry(v8);
  return i;
}
