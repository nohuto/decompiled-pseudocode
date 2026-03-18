/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4
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
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x1406E2E14 (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x1408011D8 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpCleanupSectionState @ 0x140AADA48 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140ABEF18 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140ABF140 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140ABF21C (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B19608 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140B2939C (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140B3B4C8 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4CA88 (CmFcpMapSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // edi
  __int64 v18; // r14
  __int64 v19; // rcx
  int updated; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int8 *v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  AutoBoost *v29; // rax
  void *v30; // rdx
  signed __int8 v31; // cf
  AutoBoost *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // rsi
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v50[9]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-38h] BYREF
  void *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h] BYREF
  _KAFFINITY_EX *v54; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v55; // [rsp+E8h] [rbp-18h]
  __int64 *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]

  v6 = a3;
  v46 = 0LL;
  v43 = (unsigned int)Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState;
  if ( (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState & 0x10) == 0 )
    Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(v43, 3);
  v44 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v55 = 0LL;
  memset_0(v50, 0, 0x60uLL);
  v45 = 0x100000000LL;
  v8 = *((unsigned int *)&v45 + v6);
  v43 = 0x100000000LL;
  LODWORD(v43) = *((_DWORD *)&v43 + v6);
  v45 = 3 * v8;
  v9 = &v50[3 * v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.WaitBlockFill11[160], 0LL, 0LL, v11);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.WaitBlockFill11[160], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.WaitBlockFill11[160],
      v12,
      (__int64)&CmpFreezeListLock.WaitBlockFill11[160]);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.600, (__int64)&v46, &v49);
  v16 = v49;
  if ( a2 && v46 != a2 )
  {
    v17 = -1073741823;
LABEL_34:
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160],
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.WaitBlockFill11[160]);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.WaitBlockFill11[160]);
    if ( v16 )
      RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&CmpFreezeListLock.600, v16, v27);
    goto LABEL_49;
  }
  v18 = v46 + 1;
  v46 = 0LL;
  v19 = *(_QWORD *)(v49 + 8 * v45 + 8);
  if ( !v18 )
    v18 = 1LL;
  *v9 = v18;
  *(_QWORD *)&v47 = v18;
  v54 = (_KAFFINITY_EX *)v18;
  v51 = v18;
  updated = RtlpFcUpdateFeatureConfiguration(v19, v15, a4, a5, 0LL, &v46);
  v17 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_34;
    v17 = CmFcpManagerCreateSection(v46, v18, CmpFreezeListLock.WaitBlock[3].WaitListEntry.Flink, &v47);
    if ( v17 < 0 )
      goto LABEL_34;
    v17 = CmFcpMapSection(&v47, v9);
    if ( v17 < 0 )
      goto LABEL_34;
    v17 = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v16 + 8 * v45 + 8), v22, a4, a5, v9[1], v9 + 2);
    if ( v17 < 0 )
      goto LABEL_34;
    v23 = v9[1];
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v23, v9[2]) < 0 )
    {
      if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
        goto LABEL_33;
      v24 = (unsigned __int8 *)byte_140057185;
LABEL_32:
      v56 = &v44;
      v44 = 0x1000000LL;
      v57 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EB0, v24, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&v54);
LABEL_33:
      v17 = -1073741595;
      goto LABEL_34;
    }
    v25 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
            *(char **)(v16 + 80),
            *(_QWORD *)(v16 + 88),
            a4,
            a5,
            v23,
            v41,
            0LL,
            &v44);
    v17 = v25;
    if ( v25 < 0 )
    {
      if ( v25 != -2147483643 )
        goto LABEL_34;
      v17 = CmFcpManagerCreateSection(v44, v18, CmpFreezeListLock.WaitBlock[3].WaitListEntry.Flink, &v54);
      if ( v17 < 0 )
        goto LABEL_34;
      v17 = CmFcpMapSection(&v54, &v51);
      if ( v17 < 0 )
        goto LABEL_34;
      v17 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
              *(char **)(v16 + 80),
              *(_QWORD *)(v16 + 88),
              a4,
              a5,
              v9[1],
              v42,
              (char *)v52,
              &v53);
      if ( v17 < 0 )
        goto LABEL_34;
      if ( (int)RtlpFcValidateGovernedFeatures((__int64)v52, v53) < 0 )
      {
        if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
          goto LABEL_33;
        v24 = (unsigned __int8 *)&dword_14005721C;
        goto LABEL_32;
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&CmpFreezeListLock.600, v16, v21);
  v29 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink, 0LL, 0LL, v28);
  v31 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.WaitBlockFill11[152], 0LL);
  v32 = v29;
  if ( v31 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
      v29,
      (__int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  if ( v32 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v32, v30);
    else
      *((_BYTE *)v32 + 10) = 1;
  }
  v33 = 3LL * (unsigned int)v43;
  v34 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[3].SparePtr + 3 * (unsigned int)v43);
  *(&CmpFreezeListLock.LastXStateSaveDebugInfo + v33) = v47;
  *(_QWORD *)&v47 = v34;
  v35 = *((_QWORD *)&CmpFreezeListLock.ThreadFlags2 + v33);
  *((_QWORD *)&CmpFreezeListLock.ThreadFlags2 + v33) = *((_QWORD *)&v47 + 1);
  *((_QWORD *)&v47 + 1) = v35;
  v36 = *((_QWORD *)&CmpFreezeListLock.QueueListEntry.Flink + v33);
  *((_QWORD *)&CmpFreezeListLock.QueueListEntry.Flink + v33) = v48;
  CmpFreezeListLock.Affinity = v54;
  *(_OWORD *)&CmpFreezeListLock.AffinityPrimaryGroup = v55;
  v48 = v36;
  RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.600, v18, v50);
  RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.WaitBlock[3].Thread, v18);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, v18);
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
  CmFcpManagerPublishChangeNotifications(v37, v18);
  v17 = 0;
LABEL_49:
  v38 = v50;
  v39 = 4LL;
  do
  {
    CmFcpUnmapSection(v38, v26);
    v38 += 3;
    --v39;
  }
  while ( v39 );
  CmFcpCleanupSectionState(&v47);
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
