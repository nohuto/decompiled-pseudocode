/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140AC0D04
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x14085B25C (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404F717C (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14080FC18 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140AC0FD8 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerCreateSection @ 0x140B3D748 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureUsageSubscriptions(__int64 a1, __int64 a2, unsigned int a3)
{
  void *v3; // rsi
  struct _KTHREAD *v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r14
  struct _LIST_ENTRY *v14; // r13
  __int64 v15; // rcx
  int updated; // eax
  __int64 v17; // r8
  int v18; // edi
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rdi
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _BYTE *v26; // rbx
  __int64 v27; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+48h] [rbp-B8h] BYREF
  void *v35; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[48]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v40; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v41[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]

  v3 = 0LL;
  v33 = a2;
  v4 = 0LL;
  v32 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset_0(v38, 0, 0x60uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.Dpc, 0LL, 0LL, v6);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Timer.Dpc, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Timer.Dpc,
      v7,
      (__int64)&CmpFreezeListLock.Timer.Dpc);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, (__int64)&v32, &v37);
  v12 = v37;
  v13 = v32 + 1;
  if ( v32 == -1 )
    v13 = 1LL;
  v14 = (struct _LIST_ENTRY *)v13;
  v15 = *(_QWORD *)(v37 + 56);
  v34 = (struct _LIST_ENTRY *)v13;
  v39 = v13;
  v32 = 0LL;
  updated = RtlpFcUpdateUsageTriggers(v15, v11, v33, a3, 0LL, &v32);
  v18 = updated;
  if ( updated >= 0 )
    goto LABEL_9;
  if ( updated == -2147483643 )
  {
    v18 = CmFcpManagerCreateSection(v32, v13, CmpFreezeListLock.Timer.TimerListEntry.Flink, &v34);
    if ( v18 >= 0 )
    {
      v18 = CmFcpMapSection(&v34, &v39);
      if ( v18 >= 0 )
      {
        v18 = RtlpFcUpdateUsageTriggers(*(_QWORD *)(v12 + 56), v29, v33, a3, v40, v41);
        if ( v18 >= 0 )
        {
          if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer(v40, v41[0]) >= 0 )
          {
            v4 = v36;
            v3 = v35;
            v14 = v34;
LABEL_9:
            RtlpFcBufferManagerDereferenceBuffers(
              (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
              v12,
              v17);
            v20 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink, 0LL, 0LL, v19);
            v9 = _interlockedbittestandset64(
                   (volatile signed __int32 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
                   0LL);
            v22 = v20;
            if ( v9 )
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
                v20,
                (__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
            if ( v22 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v22, v21);
              else
                *((_BYTE *)v22 + 10) = 1;
            }
            v23 = *(void **)&CmpFreezeListLock.WaitBlockFill11[64];
            *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[64] = v3;
            CmpFreezeListLock.WaitBlock[1].WaitListEntry.Blink = v14;
            v3 = v23;
            CmpFreezeListLock.WaitBlock[1].Thread = v4;
            RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.WaitBlockFill11[104], v13, v38);
            RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.Timer.Processor, v13);
            RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, v13);
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
            KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc,
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
            KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
            CmFcpManagerPublishChangeNotifications(v24, v13);
            v18 = 0;
            goto LABEL_19;
          }
          if ( (unsigned int)dword_140E09EB0 > 5 && tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
          {
            v33 = 0x1000000LL;
            v43 = &v33;
            v44 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09EB0,
              (unsigned __int8 *)byte_140058131,
              0LL,
              0LL,
              3u,
              &v42);
          }
          v18 = -1073741595;
        }
      }
    }
    v3 = v35;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
  if ( v12 )
    RtlpFcBufferManagerDereferenceBuffers(
      (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
      v12,
      v30);
LABEL_19:
  v26 = v38;
  v27 = 4LL;
  do
  {
    CmFcpUnmapSection(v26, v25);
    v26 += 24;
    --v27;
  }
  while ( v27 );
  if ( v3 )
    ObfDereferenceObject(v3);
  KeLeaveCriticalRegion();
  return (unsigned int)v18;
}
