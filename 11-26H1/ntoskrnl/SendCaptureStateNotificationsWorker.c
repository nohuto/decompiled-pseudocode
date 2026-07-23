/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x140833730
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 *     EtwpGetEnableInfoIndex @ 0x140475ED0 (EtwpGetEnableInfoIndex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1409159B8 (EtwpBuildNotificationPacket.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SendCaptureStateNotificationsWorker(__int16 *a1)
{
  __int64 v2; // r15
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx
  char v7; // r12
  __int64 v8; // rsi
  __int128 *Pool2; // rax
  __int128 *v10; // r13
  __int128 *v11; // r15
  __int64 v12; // rdi
  __int64 GuidEntryByGuid; // rax
  struct _KLOCK_ENTRIES *v14; // r9
  _QWORD *v15; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v17; // r12
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rdi
  signed __int64 v21; // r9
  __int64 *v22; // rdi
  bool v23; // zf
  int v24; // ecx
  unsigned __int8 v25; // cf
  int v26; // eax
  __int64 v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  __int64 v30; // rtt
  AutoBoost *v31; // rax
  AutoBoost *v32; // rdi
  int v33; // edx
  __int64 v35; // [rsp+20h] [rbp-99h]
  __int64 v36; // [rsp+28h] [rbp-91h]
  __int128 *v37; // [rsp+30h] [rbp-89h]
  __int128 v38; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v39[2]; // [rsp+50h] [rbp-69h] BYREF
  char v40[32]; // [rsp+58h] [rbp-61h] BYREF
  __int128 v41; // [rsp+78h] [rbp-41h]
  int v42; // [rsp+98h] [rbp-21h] BYREF
  __int16 v43; // [rsp+9Eh] [rbp-1Bh]
  int v44; // [rsp+128h] [rbp+6Fh] BYREF
  int v45; // [rsp+130h] [rbp+77h]
  __int64 v46; // [rsp+138h] [rbp+7Fh] BYREF

  v46 = 0LL;
  v38 = 0LL;
  memset_0(v40, 0, 0x70uLL);
  v2 = *((_QWORD *)a1 + 168);
  v36 = v2;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 344), 0LL, 0LL, v3);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v4, (__int64)(a1 + 344));
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  *(_DWORD *)(v2 + 64) = 0;
  v7 = 1;
  if ( !*((_DWORD *)a1 + 80) || (v8 = *(unsigned __int16 *)(v2 + 16), !(_WORD)v8) )
  {
    v10 = 0LL;
    goto LABEL_49;
  }
  Pool2 = (__int128 *)ExAllocatePool2(0x100uLL);
  v37 = Pool2;
  v10 = Pool2;
  if ( !Pool2 )
  {
    v7 = 1;
    goto LABEL_49;
  }
  memmove(Pool2, *(const void **)(v2 + 24), 16LL * (unsigned int)v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
  KeAbPostRelease((unsigned __int64)(a1 + 344));
  v39[0] = 3;
  v39[1] = 120;
  v11 = v10;
  v35 = v8;
  v12 = v8;
  do
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(*((_QWORD *)a1 + 170), v11, 0LL);
    v15 = (_QWORD *)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      goto LABEL_35;
    CurrentThread = KeGetCurrentThread();
    v17 = (unsigned __int64 *)(GuidEntryByGuid + 664);
    --CurrentThread->KernelApcDisable;
    v18 = (AutoBoost *)KeAbPreAcquire(GuidEntryByGuid + 664, 0LL, 0LL, v14);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
    v21 = 0LL;
    if ( v20 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v20, v19);
      else
        *((_BYTE *)v20 + 10) = 1;
    }
    v22 = (__int64 *)v15[7];
    v15[84] = KeGetCurrentThread();
    v41 = *v11;
    while ( v22 != v15 + 7 )
    {
      v23 = (*((_BYTE *)v22 + 98) & 1) == 0;
      v44 = v21;
      if ( v23
        && EtwpGetEnableInfoIndex((__int64)v15, *(_DWORD *)a1, &v44)
        && (v24 = *((unsigned __int16 *)v22 + 50), v25 = _bittest(&v24, (unsigned __int8)v44), v45 = v24, v25) )
      {
        EtwpComputeRegEntryEnableInfo(v22, &v42);
        v43 = *a1;
        v42 = 2;
        v26 = EtwpBuildNotificationPacket(v15, v39, (unsigned __int16)v45, &v46);
        v21 = 0LL;
        if ( v26 >= 0 )
        {
          EtwpSendDataBlock(v22, v46, v27, 0LL);
          EtwpUnreferenceDataBlock(v46);
          v21 = 0LL;
          goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        v22 = (__int64 *)*v22;
      }
    }
    v15[84] = v21;
    _m_prefetchw(v15 + 83);
    v28 = v15[83];
    v29 = v28 - 16;
    if ( (v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v29 = v21;
    if ( (v28 & 2) != 0 || (v30 = v15[83], v30 != _InterlockedCompareExchange64(v15 + 83, v29, v28)) )
      ExfReleasePushLock(v15 + 83);
    KeAbPostRelease((unsigned __int64)(v15 + 83));
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry((ULONG_PTR)v15);
    v12 = v35;
LABEL_35:
    ++v11;
    v35 = --v12;
  }
  while ( v12 );
  v10 = v37;
  v7 = 0;
  if ( *((_DWORD *)a1 + 80) )
  {
    *((_QWORD *)&v38 + 1) = -1LL;
    v31 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 344), 0LL, 0LL, v14);
    v32 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v31, (__int64)(a1 + 344));
    v33 = 0;
    if ( v32 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v32, 0LL);
      else
        *((_BYTE *)v32 + 10) = 1;
    }
    v7 = 1;
    if ( *(_WORD *)(v36 + 16) != (_WORD)v33 && *(_DWORD *)(v36 + 64) == v33 )
    {
      ExSetTimer(*(_QWORD *)(v36 + 8), *(_QWORD *)v36, 0LL, (ULONG_PTR)&v38);
      *(_DWORD *)(v36 + 64) = 1;
    }
  }
LABEL_49:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
    KeAbPostRelease((unsigned __int64)(a1 + 344));
  }
  return EtwpReleaseLoggerContext(a1, 0LL);
}
