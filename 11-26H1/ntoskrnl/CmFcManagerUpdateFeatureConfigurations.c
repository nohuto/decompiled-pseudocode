/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4
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
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x1406E70F4 (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x1406E7164 (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x1406E71D4 (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140806C78 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpCleanupSectionState @ 0x140AABB08 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140B2B8DC (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140B3D748 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
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
  signed __int8 v14; // cf
  AutoBoost *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // r14
  __int64 v20; // rcx
  int updated; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int8 *v25; // rdx
  __int64 v26; // r13
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KLOCK_ENTRIES *v30; // r9
  AutoBoost *v31; // rax
  void *v32; // rdx
  AutoBoost *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rsi
  _QWORD *v40; // rbx
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+28h] [rbp-D8h]
  _DWORD v44[2]; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  _QWORD v53[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-28h] BYREF
  void *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v58; // [rsp+F8h] [rbp-8h]
  __int64 *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]

  v52 = a4;
  v47 = 0LL;
  v6 = a3;
  v45 = (unsigned int)Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState;
  if ( (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState & 0x10) == 0 )
    Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(v45, 3);
  v45 = (unsigned int)Feature_CFR_Child_KM_C__private_featureState;
  if ( (Feature_CFR_Child_KM_C__private_featureState & 0x10) == 0 )
    Feature_CFR_Child_KM_C__private_ReportUsageFallback(v45, 3);
  v45 = (unsigned int)Feature_CFR_Parent_KM_C__private_featureState;
  if ( (Feature_CFR_Parent_KM_C__private_featureState & 0x10) == 0 )
    Feature_CFR_Parent_KM_C__private_ReportUsageFallback(v45, 3);
  v46 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v58 = 0LL;
  memset_0(v53, 0, 0x60uLL);
  v45 = 0x100000000LL;
  v44[1] = 1;
  LODWORD(v45) = *((_DWORD *)&v45 + v6);
  v44[0] = 0;
  v8 = (unsigned int)v44[v6];
  v51 = 3 * v8;
  v9 = &v53[3 * v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.Dpc, 0LL, 0LL, v11);
  v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Timer.Dpc, 0LL);
  v15 = v12;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Timer.Dpc,
      v12,
      (__int64)&CmpFreezeListLock.Timer.Dpc);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v13);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, (__int64)&v47, &v50);
  v17 = v50;
  if ( a2 && v47 != a2 )
  {
    v44[0] = -1073741823;
LABEL_38:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
    if ( v17 )
      RtlpFcBufferManagerDereferenceBuffers(
        (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
        v17,
        v29);
    goto LABEL_53;
  }
  v18 = v47 == -1;
  v19 = v47 + 1;
  v47 = 0LL;
  if ( v18 )
    v19 = 1LL;
  v20 = *(_QWORD *)(v50 + 8 * v51 + 8);
  *v9 = v19;
  *(_QWORD *)&v48 = v19;
  v57 = v19;
  v54 = v19;
  updated = RtlpFcUpdateFeatureConfiguration(v20, v16, a4, a5, 0LL, &v47);
  v44[0] = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_38;
    v44[0] = CmFcpManagerCreateSection(v47, v19, CmpFreezeListLock.Timer.TimerListEntry.Flink, &v48);
    if ( v44[0] < 0 )
      goto LABEL_38;
    v44[0] = CmFcpMapSection(&v48, v9);
    if ( v44[0] < 0 )
      goto LABEL_38;
    v44[0] = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v17 + 8 * v51 + 8), v23, v52, a5, v9[1], v9 + 2);
    if ( v44[0] < 0 )
      goto LABEL_38;
    v24 = v9[1];
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v24, v9[2]) < 0 )
    {
      if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
        goto LABEL_37;
      v25 = (unsigned __int8 *)&unk_140058178;
LABEL_36:
      v59 = &v46;
      v46 = 0x1000000LL;
      v60 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EB0, v25, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&v57);
LABEL_37:
      v44[0] = -1073741595;
      goto LABEL_38;
    }
    v26 = v52;
    v27 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
            *(char **)(v17 + 80),
            *(_QWORD *)(v17 + 88),
            v52,
            a5,
            v24,
            v42,
            0LL,
            &v46);
    v44[0] = v27;
    if ( v27 < 0 )
    {
      if ( v27 != -2147483643 )
        goto LABEL_38;
      v44[0] = CmFcpManagerCreateSection(v46, v19, CmpFreezeListLock.Timer.TimerListEntry.Flink, &v57);
      if ( v44[0] < 0 )
        goto LABEL_38;
      v44[0] = CmFcpMapSection(&v57, &v54);
      if ( v44[0] < 0 )
        goto LABEL_38;
      v44[0] = RtlpFcUpdateGovernedFeaturesEffectiveStates(
                 *(char **)(v17 + 80),
                 *(_QWORD *)(v17 + 88),
                 v26,
                 a5,
                 v9[1],
                 v43,
                 (char *)v55,
                 &v56);
      if ( v44[0] < 0 )
        goto LABEL_38;
      if ( (int)RtlpFcValidateGovernedFeatures((__int64)v55, v56) < 0 )
      {
        if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
          goto LABEL_37;
        v25 = (unsigned __int8 *)&byte_14005820F;
        goto LABEL_36;
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers(
    (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
    v17,
    v22);
  v31 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink, 0LL, 0LL, v30);
  v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink, 0LL);
  v33 = v31;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
      v31,
      (__int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  if ( v33 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v33, v32);
    else
      *((_BYTE *)v33 + 10) = 1;
  }
  v34 = 3LL * (unsigned int)v45;
  v35 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink + 3 * (unsigned int)v45);
  *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink + v34) = v48;
  *(_QWORD *)&v48 = v35;
  v36 = *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[8 * v34 + 16];
  *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[8 * v34 + 16] = *((_QWORD *)&v48 + 1);
  *((_QWORD *)&v48 + 1) = v36;
  v37 = *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].Thread + v34);
  *((_QWORD *)&CmpFreezeListLock.WaitBlock[0].Thread + v34) = v49;
  *(_OWORD *)&CmpFreezeListLock.WaitBlockFill11[80] = __PAIR128__(v58, v57);
  v49 = v37;
  CmpFreezeListLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)*((_QWORD *)&v58 + 1);
  RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.WaitBlockFill11[104], v19, v53);
  RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.Timer.Processor, v19);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, v19);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Timer.Dpc);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Timer.Dpc);
  CmFcpManagerPublishChangeNotifications(v38, v19);
  v44[0] = 0;
LABEL_53:
  v39 = 4LL;
  v40 = v53;
  do
  {
    CmFcpUnmapSection(v40, v28);
    v40 += 3;
    --v39;
  }
  while ( v39 );
  CmFcpCleanupSectionState(&v48);
  KeLeaveCriticalRegion();
  return v44[0];
}
