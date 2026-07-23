/*
 * XREFs of CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x14085AFF0 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
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
 *     RtlpFcValidateGovernedFeatures @ 0x1406279F8 (RtlpFcValidateGovernedFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140806C78 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140867C04 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpCleanupSectionState @ 0x140AABB08 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140B2B8DC (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140B3D748 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
 */

__int64 __fastcall CmFcManagerOverwriteFeatureConfigurationSection(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        size_t Size)
{
  __int64 v5; // rbx
  struct _LIST_ENTRY *v7; // r13
  int v9; // eax
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  int SectionFromBuffer; // edi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rsi
  _QWORD *v22; // rbx
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r15
  struct _KLOCK_ENTRIES *v29; // r9
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // [rsp+28h] [rbp-D8h]
  char v39; // [rsp+40h] [rbp-C0h]
  _DWORD v40[2]; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v47[9]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v48[8]; // [rsp+D8h] [rbp-28h] BYREF
  void *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+F0h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v52; // [rsp+100h] [rbp+0h]
  __int64 *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]

  v5 = a3;
  v46 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v7 = 0LL;
  v44 = 0LL;
  v52 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v51 = 0LL;
  memset_0(v47, 0, 0x60uLL);
  v39 = 0;
  v9 = RtlpFcValidateFeatureConfigurationBuffer(a4, Size);
  v11 = 1LL;
  SectionFromBuffer = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_140E09EB0 > 5 && tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
    {
      v42 = 0x1000000LL;
      v53 = &v42;
      v54 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EB0,
        (unsigned __int8 *)word_1400581C2,
        0LL,
        0LL,
        3u,
        &v51);
    }
    goto LABEL_18;
  }
  v40[1] = 1;
  v41 = 0x100000000LL;
  v13 = *((unsigned int *)&v41 + v5);
  v40[0] = 0;
  v40[0] = v40[v5];
  v39 = 1;
  v41 = (__int64)&v47[3 * v13];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.Dpc, 0LL, 0LL, v10);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Timer.Dpc, 0LL);
  v18 = v15;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Timer.Dpc,
      v15,
      (__int64)&CmpFreezeListLock.Timer.Dpc);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v16);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, (__int64)&v46, &v45);
  v19 = v45;
  if ( a2 && v46 != a2 )
  {
    SectionFromBuffer = -1073741823;
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
    if ( v19 )
      RtlpFcBufferManagerDereferenceBuffers(
        (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
        v19,
        v20);
    goto LABEL_18;
  }
  v24 = v46 + 1;
  if ( v46 == -1 )
    v24 = 1LL;
  if ( a4 )
  {
    SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(a4, Size, (__int64)v43);
    if ( SectionFromBuffer < 0 )
      goto LABEL_14;
    v42 = v44;
  }
  v25 = v41;
  SectionFromBuffer = CmFcpMapSection(v43, v41);
  if ( SectionFromBuffer < 0 )
    goto LABEL_14;
  if ( a4 && *(_QWORD *)(v19 + 80) && (v27 = *(_QWORD *)(v19 + 88)) != 0 )
  {
    SectionFromBuffer = CmFcpManagerCreateSection(v27, v24, CmpFreezeListLock.Timer.TimerListEntry.Flink, &v51);
    if ( SectionFromBuffer < 0 )
      goto LABEL_14;
    SectionFromBuffer = CmFcpMapSection(&v51, v48);
    if ( SectionFromBuffer < 0 )
      goto LABEL_14;
    SectionFromBuffer = RtlpFcUpdateGovernedFeaturesEffectiveStates(
                          *(char **)(v19 + 80),
                          *(_QWORD *)(v19 + 88),
                          0LL,
                          0LL,
                          *(_QWORD *)(v25 + 8),
                          v38,
                          (char *)v49,
                          &v50);
    if ( SectionFromBuffer < 0 )
      goto LABEL_14;
    v28 = v50;
    RtlpFcValidateGovernedFeatures((__int64)v49, v50);
    v7 = v52;
  }
  else
  {
    v28 = v50;
  }
  RtlpFcBufferManagerDereferenceBuffers(
    (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
    v19,
    v26);
  v30 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink, 0LL, 0LL, v29);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink, 0LL);
  v32 = v30;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
      v30,
      (__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  if ( v32 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v32, v31);
    else
      *((_BYTE *)v32 + 10) = 1;
  }
  v33 = v42;
  v34 = 3LL * v40[0];
  v35 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink + 3 * v40[0]);
  *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink + v34) = v43[0];
  v43[0] = v35;
  v36 = *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[8 * v34 + 16];
  *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[8 * v34 + 16] = v43[1];
  v44 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].Thread + v34);
  v43[1] = v36;
  *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].Thread + v34) = v33;
  if ( v28 )
  {
    *(struct _EVENT_DATA_DESCRIPTOR *)&CmpFreezeListLock.WaitBlockFill11[80] = v51;
    CmpFreezeListLock.WaitBlock[2].WaitListEntry.Flink = v7;
  }
  RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.WaitBlockFill11[104], v24, v47);
  RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.Timer.Processor, v24);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, v24);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
  CmFcpManagerPublishChangeNotifications(v37, v24);
  SectionFromBuffer = 0;
LABEL_18:
  v21 = 4LL;
  v22 = v47;
  do
  {
    CmFcpUnmapSection(v22, v11);
    v22 += 3;
    --v21;
  }
  while ( v21 );
  CmFcpCleanupSectionState(v43);
  if ( v39 )
    KeLeaveCriticalRegion();
  return (unsigned int)SectionFromBuffer;
}
