/*
 * XREFs of CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x140854CD4 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404FDC3C (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1406249A8 (RtlpFcValidateGovernedFeatures.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x1408011D8 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140861818 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpCleanupSectionState @ 0x140AADA48 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140ABEF18 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140ABF140 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140ABF21C (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140B2939C (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140B3B4C8 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4CA88 (CmFcpMapSection.c)
 */

__int64 __fastcall CmFcManagerOverwriteFeatureConfigurationSection(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        size_t Size)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // r13
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
  unsigned __int64 v52; // [rsp+100h] [rbp+0h]
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
        (unsigned __int8 *)byte_1400571CF,
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
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.WaitBlockFill11[160], 0LL, 0LL, v10);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.WaitBlockFill11[160], 0LL);
  v18 = v15;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.WaitBlockFill11[160],
      v15,
      (__int64)&CmpFreezeListLock.WaitBlockFill11[160]);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v16);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.600, (__int64)&v46, &v45);
  v19 = v45;
  if ( a2 && v46 != a2 )
  {
    SectionFromBuffer = -1073741823;
LABEL_14:
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160],
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160]);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.WaitBlockFill11[160]);
    if ( v19 )
      RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&CmpFreezeListLock.600, v19, v20);
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
    SectionFromBuffer = CmFcpManagerCreateSection(v27, v24, CmpFreezeListLock.WaitBlock[3].WaitListEntry.Flink, &v51);
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
  RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&CmpFreezeListLock.600, v19, v26);
  v30 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink, 0LL, 0LL, v29);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.WaitBlockFill11[152], 0LL);
  v32 = v30;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
      v30,
      (__int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  if ( v32 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v32, v31);
    else
      *((_BYTE *)v32 + 10) = 1;
  }
  v33 = v42;
  v34 = 3LL * v40[0];
  v35 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[3].SparePtr + 3 * v40[0]);
  *(&CmpFreezeListLock.LastXStateSaveDebugInfo + v34) = v43[0];
  v43[0] = v35;
  v36 = *((_QWORD *)&CmpFreezeListLock.ThreadFlags2 + v34);
  *((_QWORD *)&CmpFreezeListLock.ThreadFlags2 + v34) = v43[1];
  v44 = *((_QWORD *)&CmpFreezeListLock.QueueListEntry.Flink + v34);
  v43[1] = v36;
  *((_QWORD *)&CmpFreezeListLock.QueueListEntry.Flink + v34) = v33;
  if ( v28 )
  {
    *(struct _EVENT_DATA_DESCRIPTOR *)&CmpFreezeListLock.Affinity = v51;
    CmpFreezeListLock.NpxState = v7;
  }
  RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.600, v24, v47);
  RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.WaitBlock[3].Thread, v24);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, v24);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160]);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.WaitBlockFill11[160]);
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
