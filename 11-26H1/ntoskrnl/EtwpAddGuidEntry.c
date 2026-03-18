/*
 * XREFs of EtwpAddGuidEntry @ 0x140920870
 * Callers:
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1409210D8 (EtwpAllocGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140935A40 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x140936C7C (EtwpFreeGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140939130 (EtwpFindGuidEntryByGuid.c)
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
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // rtt
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rbp
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8

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
    v30 = (AutoBoost *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL, 0LL, v7);
    v32 = v30;
    if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 83, v30, (__int64)(GuidEntryByGuid + 83));
    if ( v32 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v32, v31);
      else
        *((_BYTE *)v32 + 10) = 1;
    }
    v33 = GuidEntryByGuid + 2;
    GuidEntryByGuid[84] = KeGetCurrentThread();
    v34 = v8 + 2;
    v8[82] = GuidEntryByGuid;
    v35 = GuidEntryByGuid[2];
    if ( *(_QWORD **)(v35 + 8) != GuidEntryByGuid + 2 )
      goto LABEL_16;
    *v34 = v35;
    v8[3] = v33;
    *(_QWORD *)(v35 + 8) = v34;
    *v33 = v34;
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21);
  if ( !GuidEntryByGuid )
    goto LABEL_47;
  v22 = v8[2];
  if ( *(_QWORD **)(v22 + 8) != v8 + 2 )
    goto LABEL_16;
  v23 = (_QWORD *)v8[3];
  if ( (_QWORD *)*v23 != v8 + 2 )
    goto LABEL_16;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  v8[82] = 0LL;
LABEL_30:
  GuidEntryByGuid[84] = 0LL;
  _m_prefetchw(GuidEntryByGuid + 83);
  v24 = GuidEntryByGuid[83];
  v25 = v24 - 16;
  if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v25 = 0LL;
  if ( (v24 & 2) != 0
    || (v26 = GuidEntryByGuid[83], v26 != _InterlockedCompareExchange64(GuidEntryByGuid + 83, v25, v24)) )
  {
    ExfReleasePushLock(GuidEntryByGuid + 83);
  }
  KeAbPostRelease((unsigned __int64)(GuidEntryByGuid + 83));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37);
  if ( !v8 )
    return i;
  EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
LABEL_47:
  --v8[4];
  EtwpFreeGuidEntry(v8);
  return i;
}
