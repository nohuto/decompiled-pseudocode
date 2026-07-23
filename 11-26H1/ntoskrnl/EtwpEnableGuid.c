/*
 * XREFs of EtwpEnableGuid @ 0x140AD6AB8
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140AD66E4 (EtwpEnableTrace.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x14044EE5C (EtwpEnableMetaProviderGuid.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140912E34 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140913860 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140914938 (EtwpFreeFilterInfo.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140914C28 (EtwpAllocDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1409159B8 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x140979F2C (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140A99808 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140AAFF14 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpPreallocateApcPool @ 0x140AB3AF8 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AB3B84 (EtwpReferenceStackLookasideList.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140AFEDF8 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x140B0F0C0 (EtwpEventWriteProviderEnabled.c)
 *     EtwpCreateUmReplyObject @ 0x140B14804 (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteCaptureState @ 0x140B31B2C (EtwpEventWriteCaptureState.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140B5857C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // r14
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // r15
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int *v14; // r13
  __int64 *v15; // rbx
  int v16; // r11d
  __int64 v17; // rcx
  unsigned int v18; // esi
  _DWORD *v19; // r13
  __int64 v20; // r10
  char *v21; // rcx
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // esi
  __int16 v25; // ax
  int CurrentThreadProcessId; // eax
  _DWORD *v27; // rcx
  GUID *v28; // rdx
  char v29; // r15
  unsigned int v30; // edi
  bool v31; // zf
  unsigned int v32; // r8d
  _QWORD *GuidEntryByGuid; // rax
  unsigned int v34; // r12d
  const EVENT_DESCRIPTOR *v35; // rsi
  __int64 v36; // r8
  struct _KTHREAD *v37; // rax
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // rsi
  int v41; // ecx
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  __int64 v44; // rtt
  _DWORD *v46; // rsi
  __int16 v47; // cx
  __int64 v48; // r8
  signed __int32 v49; // eax
  signed __int32 v50; // ett
  int v51; // eax
  volatile signed __int32 *v52; // r12
  int v53; // eax
  int v54; // r13d
  unsigned __int8 i; // cl
  _QWORD *v56; // rcx
  _QWORD *v57; // rax
  unsigned int *v58; // rax
  unsigned int *v59; // rcx
  __int64 v60; // rsi
  struct _KTHREAD *v61; // rax
  unsigned __int64 *v62; // r12
  AutoBoost *v63; // rax
  void *v64; // rdx
  AutoBoost *v65; // rbx
  __int64 v66; // rax
  unsigned __int16 *v67; // rbx
  char v68; // r15
  unsigned __int16 v69; // bx
  bool updated; // al
  __int16 v71; // ax
  __int64 v72; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v74; // rbx
  unsigned int ProcessId; // eax
  __int16 v76; // bx
  int v77; // eax
  signed __int64 v78; // rax
  signed __int64 v79; // rdx
  __int64 v80; // rtt
  _QWORD *v81; // rax
  volatile signed __int64 *v82; // rbx
  signed __int64 v83; // rax
  signed __int64 v84; // rdx
  _QWORD *v85; // r12
  struct _KTHREAD *v86; // rax
  volatile signed __int32 *v87; // rsi
  AutoBoost *v88; // rax
  AutoBoost *v89; // rbx
  __int64 v90; // rax
  _QWORD *v91; // r12
  _QWORD *v92; // rax
  __int64 *v93; // rbx
  signed __int64 v94; // rax
  signed __int64 v95; // rdx
  __int64 v96; // rtt
  _DWORD *v97; // rcx
  unsigned int v98; // r12d
  const EVENT_DESCRIPTOR *v99; // rsi
  int v100; // ecx
  unsigned int v101; // [rsp+28h] [rbp-D8h]
  char v102; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v103; // [rsp+51h] [rbp-AFh]
  char v104; // [rsp+52h] [rbp-AEh]
  char v105; // [rsp+53h] [rbp-ADh]
  unsigned int v106; // [rsp+54h] [rbp-ACh]
  int v107; // [rsp+58h] [rbp-A8h]
  _DWORD Src[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v109; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v110; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v111; // [rsp+78h] [rbp-88h] BYREF
  int v112; // [rsp+80h] [rbp-80h]
  int v113; // [rsp+84h] [rbp-7Ch]
  volatile signed __int32 *v114; // [rsp+88h] [rbp-78h]
  _DWORD *v115; // [rsp+90h] [rbp-70h]
  void *Buf2; // [rsp+98h] [rbp-68h]
  _QWORD *v117; // [rsp+A0h] [rbp-60h]
  _QWORD *v118; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  unsigned int *v120; // [rsp+B8h] [rbp-48h]
  __int64 v121; // [rsp+C0h] [rbp-40h]
  __int128 v122; // [rsp+C8h] [rbp-38h] BYREF
  int v123; // [rsp+D8h] [rbp-28h]
  _QWORD v124[14]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF

  v115 = a2;
  v121 = 0LL;
  Buf2 = a2 + 10;
  v3 = a2 + 18;
  Object = 0LL;
  *(_QWORD *)&Src[1] = 0LL;
  v113 = 0;
  v105 = 0;
  v104 = 0;
  v123 = 0;
  LOWORD(v112) = 0;
  LOWORD(Src[0]) = 0;
  v7 = 0LL;
  v102 = 0;
  v122 = 0LL;
  v111 = 0LL;
  v8 = 0LL;
  v110 = 0LL;
  memset_0(v124, 0, 0x68uLL);
  v9 = v3[2] & 0x20;
  v109 = 0;
  v107 = v9;
  v103 = v9 != 0 ? 2 : 0;
  v10 = EtwpValidateEnableNotification(a1, (__int64)a2, a3, (__int64)&v122, &v111, (__int64)v124);
  v14 = v111;
  LODWORD(v15) = v10;
  if ( v10 < 0 )
    goto LABEL_57;
  v16 = *v3;
  v106 = v16;
  if ( v16 == 2 )
  {
    v15 = (__int64 *)(a2 + 10);
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v17, v3, a2 + 10);
    v16 = v106;
  }
  else
  {
    v15 = (__int64 *)(a2 + 10);
  }
  v18 = a2[29];
  if ( v18 && v18 < 3 )
  {
    v19 = v115;
    v20 = v18;
    v13 = (struct _KLOCK_ENTRIES *)((char *)&ApcState.ApcListHead[0].Flink + 4 - (char *)(v115 + 30));
    v11 = v115 + 32;
    v12 = (char *)&ApcState - (char *)(v115 + 30);
    do
    {
      v21 = (char *)v19 + *((_QWORD *)v11 - 1);
      *(_DWORD *)((char *)v11 + (_QWORD)v13) = v11[1];
      v22 = *v11;
      *(_QWORD *)((char *)v11 + v12 - 8) = v21;
      *(_DWORD *)((char *)v11 + v12) = v22;
      v11 += 4;
      --v20;
    }
    while ( v20 );
    v14 = v111;
  }
  else
  {
    v18 = 0;
    HIDWORD(ApcState.ApcListHead[0].Blink) = 0;
  }
  if ( v107 )
  {
    v24 = v106;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LODWORD(v15) = EtwpEnableDisableSpecialGuids(
                     a1,
                     v15,
                     *((_WORD *)v3 + 3),
                     v16,
                     v3[4],
                     (__int64)&ApcState,
                     v18,
                     &v102);
    KeLeaveCriticalRegion();
    if ( v102 )
      goto LABEL_57;
    v101 = v18;
    v24 = v106;
    LODWORD(v15) = EtwpEnableMetaProviderGuid(
                     (__int64)v14,
                     (__int64)Buf2,
                     v106,
                     *((_QWORD *)v3 + 2),
                     (__int64)&ApcState,
                     v101);
    if ( (_DWORD)v15 != -1073741163 )
      goto LABEL_57;
  }
  v25 = *((_WORD *)v3 + 3);
  if ( !v25 || v25 == 2 )
  {
    LODWORD(v15) = -1073741790;
    goto LABEL_191;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v27 = v115;
  v28 = (GUID *)&PrivateLoggerNotificationGuid;
  v29 = BYTE2(v123);
  v30 = v103;
  v31 = BYTE2(v123) == 0;
  v32 = v103;
  v115[9] = CurrentThreadProcessId;
  if ( v31 )
    v28 = (GUID *)(v27 + 10);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v28, v32);
  if ( GuidEntryByGuid )
  {
    v34 = v106;
    if ( v106 == 1 || (v7 = GuidEntryByGuid, !v106) )
    {
      v7 = GuidEntryByGuid;
      if ( v14 )
      {
        if ( !memcmp(&EventTracingProvGuid, Buf2, 0x10uLL) )
        {
          v35 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
          if ( v34 != 1 )
            v35 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
          if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, v35) )
          {
            if ( v34 == 1 )
              EtwpEventWriteProviderEnabled(
                (unsigned int)&EventTracingProvGuid,
                (_DWORD)v35,
                v36,
                (_DWORD)v14 + 136,
                (__int64)&EventTracingProvGuid,
                *((_QWORD *)v3 + 2),
                *((_QWORD *)v3 + 3),
                v3[2],
                *((_BYTE *)v3 + 4));
            else
              EtwpEventWriteTemplateSessAndProv(
                (__int64)&EventTracingProvGuid,
                v35,
                v36,
                2,
                (unsigned __int16 *)v14 + 68,
                (ULONGLONG)&EventTracingProvGuid);
          }
        }
      }
    }
  }
  else
  {
    if ( v29 || v24 != 1 )
    {
      LODWORD(v15) = -1073741163;
      v7 = 0LL;
      goto LABEL_57;
    }
    v7 = EtwpAddGuidEntry(a1, Buf2, v30);
    if ( !v7 )
    {
      LODWORD(v15) = -1073741801;
      goto LABEL_57;
    }
    v34 = v106;
  }
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  v38 = (AutoBoost *)KeAbPreAcquire((__int64)(v7 + 83), 0LL, 0LL, v13);
  v40 = v38;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 166, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7 + 83, v38, (__int64)(v7 + 83));
  LODWORD(v15) = 0;
  if ( v40 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v40, v39);
    else
      *((_BYTE *)v40 + 10) = 1;
  }
  v41 = v107;
  v7[84] = KeGetCurrentThread();
  v105 = 1;
  if ( v34 == 1 && (*((_BYTE *)v7 + 91) & 1) != 0 && !v41 && *((_WORD *)v3 + 3) != *((_WORD *)v7 + 44) )
  {
    if ( !memcmp(qword_14001F6C8, v7 + 5, 0x10uLL) )
    {
      LODWORD(v15) = -1073741053;
LABEL_51:
      v7[84] = 0LL;
      _m_prefetchw(v7 + 83);
      v42 = v7[83];
      v43 = v42 - 16;
      if ( (v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v43 = 0LL;
      if ( (v42 & 2) != 0 || (v44 = v7[83], v44 != _InterlockedCompareExchange64(v7 + 83, v43, v42)) )
        ExfReleasePushLock(v7 + 83);
      KeAbPostRelease((unsigned __int64)(v7 + 83));
      KeLeaveCriticalRegion();
      goto LABEL_57;
    }
    v41 = v107;
  }
  if ( v14 && (v14[204] & 0x40) != 0 )
  {
    LODWORD(v15) = -1073741162;
    goto LABEL_51;
  }
  if ( v41 )
  {
    LODWORD(v15) = EtwpAcquireTokenAccessInformation(v14);
    if ( (_DWORD)v15 )
      goto LABEL_51;
    LODWORD(v15) = 0;
  }
  v46 = v115;
  v115[28] = v34;
  v47 = *((_WORD *)v3 + 3);
  *((_WORD *)v46 + 52) = v47;
  *((_BYTE *)v46 + 106) = *((_BYTE *)v3 + 4);
  v46[27] = v3[4];
  v48 = *((_QWORD *)v3 + 2);
  if ( v29 )
  {
    *((_BYTE *)v46 + 107) = 1;
    *((_WORD *)v46 + 52) = v47 & 0x7FFF;
  }
  if ( !*((_QWORD *)v3 + 2) )
    *((_QWORD *)v3 + 2) = -1LL;
  if ( !*((_BYTE *)v3 + 4) )
    *((_BYTE *)v3 + 4) = -1;
  if ( v34 != 2 && !v29 )
  {
    LODWORD(v15) = EtwpUpdateGuidEnableInfo((ULONG_PTR)v7, (__int64)v46, v48, (__int64)v124, Src);
    if ( (int)v15 < 0 )
      goto LABEL_51;
    *(_OWORD *)v3 = *((_OWORD *)v7 + 6);
    *((_OWORD *)v3 + 1) = *((_OWORD *)v7 + 7);
    if ( (v3[2] & 4) != 0 )
    {
      EtwpPreallocateApcPool((__int64)(v14 + 208));
      _m_prefetchw(v14 + 204);
      v49 = v14[204];
      do
      {
        v50 = v49;
        v49 = _InterlockedCompareExchange((volatile signed __int32 *)v14 + 204, v49 | 0x2000, v49);
      }
      while ( v50 != v49 );
      if ( (v49 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList();
    }
    LODWORD(v15) = 0;
  }
  if ( (_QWORD *)v7[7] == v7 + 7 && (v7[82] || (_QWORD *)v7[2] == v7 + 2) )
    goto LABEL_51;
  if ( *((_BYTE *)v46 + 12) )
  {
    LODWORD(v15) = EtwpCreateUmReplyObject((ULONG_PTR)v7);
    if ( (int)v15 < 0 )
      goto LABEL_51;
    LOBYTE(v15) = 0;
    *((_QWORD *)v46 + 3) = Object;
  }
  v51 = EtwpBuildNotificationPacket((__int64)v7, v46, 0xFFu, (__int64 *)&Src[1]);
  v52 = *(volatile signed __int32 **)&Src[1];
  if ( v51 < 0 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_194;
  }
  v53 = EtwpAllocDataBlock(*(unsigned int *)(*(_QWORD *)&Src[1] + 4LL), *(void **)&Src[1], &v110);
  v8 = v110;
  if ( v53 < 0 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_191;
  }
  v54 = v112;
  v11 = v7 + 16;
  v114 = v110;
  for ( i = 0; i < 0x10u; ++i )
  {
    if ( *v11 )
      v54 = (unsigned __int16)v54 | (1 << i);
    v11 += 8;
  }
  v112 = v54;
  v14 = v111;
  v102 = 0;
  v117 = 0LL;
  if ( !v7[82] )
  {
    v56 = (_QWORD *)v7[2];
    if ( v56 != v7 + 2 )
      v117 = v56 - 2;
  }
  v57 = v7;
  v118 = v7;
  while ( 2 )
  {
    v58 = (unsigned int *)(v57 + 7);
    v120 = v58;
    v59 = *(unsigned int **)v58;
    v111 = *(unsigned int **)v58;
    while ( v59 != v58 )
    {
      if ( v107 )
      {
        v61 = KeGetCurrentThread();
        v60 = (__int64)(v59 - 4);
        --v61->KernelApcDisable;
        v62 = (unsigned __int64 *)(*((_QWORD *)v59 + 2) + 664LL);
        v63 = (AutoBoost *)KeAbPreAcquire((__int64)v62, 0LL, 0LL, v13);
        v65 = v63;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
          ExfAcquirePushLockExclusiveEx(v62, v63, (__int64)v62);
        if ( v65 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v65, v64);
          else
            *((_BYTE *)v65 + 10) = 1;
        }
        v66 = *(_QWORD *)(v60 + 32);
        v52 = *(volatile signed __int32 **)&Src[1];
        LOBYTE(v15) = v102;
        v104 = 1;
        *(_QWORD *)(v66 + 672) = KeGetCurrentThread();
        v59 = v111;
      }
      else
      {
        v60 = (__int64)v59;
      }
      v111 = *(unsigned int **)v59;
      if ( !EtwpIsRegEntryAllowed(v60, (__int64)v14, &v122, (__int64)v115, (__int64)v124, (char)v15, v103) )
      {
LABEL_149:
        v12 = 2LL;
        goto LABEL_150;
      }
      if ( BYTE2(v123) )
      {
        ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v60 + 80));
        if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *((_WORD *)v3 + 3) & 0x7FFF, &v109) )
          goto LABEL_149;
        v76 = v109;
        if ( v109 != *((_WORD *)v8 + 39) )
        {
          v52 = *(volatile signed __int32 **)&Src[1];
          if ( (int)EtwpAllocDataBlock(*(unsigned int *)(*(_QWORD *)&Src[1] + 4LL), *(void **)&Src[1], &v110) < 0 )
          {
            v8 = v114;
            if ( v104 )
            {
              *(_QWORD *)(*(_QWORD *)(v60 + 32) + 672LL) = 0LL;
              v93 = (__int64 *)(*(_QWORD *)(v60 + 32) + 664LL);
              _m_prefetchw(v93);
              v94 = *v93;
              v95 = *v93 - 16;
              if ( (*v93 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v95 = 0LL;
              if ( (v94 & 2) != 0 || (v96 = *v93, v96 != _InterlockedCompareExchange64(v93, v95, v94)) )
                ExfReleasePushLock(v93);
              KeAbPostRelease((unsigned __int64)v93);
              KeLeaveCriticalRegion();
            }
            LODWORD(v15) = -1073741801;
            goto LABEL_192;
          }
          EtwpUnreferenceDataBlock(v114);
          v8 = v110;
          v114 = v110;
          *((_WORD *)v110 + 39) = v76 | 0x8000;
          *((_WORD *)v8 + 52) = v76;
        }
        v52 = v8;
      }
      else
      {
        if ( v106 == 2 )
          goto LABEL_132;
        if ( (_BYTE)v15 )
        {
          if ( v107 )
            v67 = (unsigned __int16 *)(v60 + 106);
          else
            v67 = (unsigned __int16 *)(v60 + 104);
        }
        else
        {
          v67 = (unsigned __int16 *)(v60 + 100);
          if ( v107 )
            v67 = (unsigned __int16 *)(v60 + 102);
        }
        v68 = v102;
        v69 = *v67;
        EtwpUpdateRegEntryEnableMask(v60, (__int64)v14, Src[0], v103, v102, v106);
        updated = EtwpCalculateUpdateNotification(v60, Src[0], v69, v112, v103, v68, v106, (__int64 *)&v110);
        v8 = v110;
        if ( !updated )
        {
          LOBYTE(v15) = v102;
          v12 = 2LL;
          if ( !v110 )
          {
            v8 = v114;
            v110 = v114;
          }
          goto LABEL_150;
        }
        if ( v110 )
        {
          v52 = v110;
          if ( v110 != v114 )
          {
            EtwpUnreferenceDataBlock(v114);
            v114 = v8;
          }
        }
        else
        {
          v8 = v114;
          v110 = v114;
        }
        if ( v106 == 1 )
        {
LABEL_132:
          v71 = *(_WORD *)(v60 + 98);
          if ( (v71 & 8) != 0
            || (v71 & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(v60 + 98), 0xAu)
            || (v14[204] & 0x2000000) != 0 )
          {
            if ( (*(_BYTE *)(v60 + 98) & 1) != 0 )
            {
              EtwpProviderArrivalCallback((__int64)v14, 0, v60);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v60 + 80) + 488LL)) )
            {
              v72 = *(_QWORD *)(v60 + 80);
              memset(&ApcState, 0, sizeof(ApcState));
              ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v72);
              v74 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(*(PRKPROCESS *)(v60 + 80), &ApcState);
              EtwpProviderArrivalCallback((__int64)v14, 1, v60);
              KiUnstackDetachProcess((__int64)&ApcState, 0);
              PsDetachSiloFromCurrentThread(v74);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v60 + 80) + 488LL));
            }
          }
        }
      }
      v77 = EtwpSendDataBlock(v60, (__int64)v52);
      LOBYTE(v15) = v102;
      v12 = 2LL;
      if ( v77 >= 0 && (*(_BYTE *)(v60 + 98) & 2) != 0 )
        ++v113;
LABEL_150:
      v59 = v111;
      v58 = v120;
      v52 = *(volatile signed __int32 **)&Src[1];
      if ( v104 )
      {
        *(_QWORD *)(*(_QWORD *)(v60 + 32) + 672LL) = 0LL;
        v15 = (__int64 *)(*(_QWORD *)(v60 + 32) + 664LL);
        _m_prefetchw(v15);
        v78 = *v15;
        v79 = *v15 - 16;
        if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v79 = 0LL;
        if ( (v78 & 2) != 0 || (v80 = *v15, v80 != _InterlockedCompareExchange64(v15, v79, v78)) )
          ExfReleasePushLock(v15);
        KeAbPostRelease((unsigned __int64)v15);
        KeLeaveCriticalRegion();
        v59 = v111;
        v58 = v120;
        LOBYTE(v15) = v102;
        v104 = 0;
        v52 = *(volatile signed __int32 **)&Src[1];
      }
    }
    v81 = v118;
    if ( v118 != v7 )
    {
      v118[84] = 0LL;
      v82 = v81 + 83;
      _m_prefetchw(v81 + 83);
      v83 = v81[83];
      v84 = v83 - 16;
      if ( (v83 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v84 = 0LL;
      if ( (v83 & 2) != 0 || v83 != _InterlockedCompareExchange64(v82, v84, v83) )
        ExfReleasePushLock(v82);
      KeAbPostRelease((unsigned __int64)v82);
      KeLeaveCriticalRegion();
    }
    v85 = v117;
    if ( v117 )
    {
      v86 = KeGetCurrentThread();
      v87 = (volatile signed __int32 *)(v117 + 83);
      v102 = 1;
      v118 = v117;
      --v86->KernelApcDisable;
      v88 = (AutoBoost *)KeAbPreAcquire((__int64)(v85 + 83), 0LL, 0LL, v13);
      v89 = v88;
      if ( _interlockedbittestandset64(v87, 0LL) )
        ExfAcquirePushLockExclusiveEx(v85 + 83, v88, (__int64)(v85 + 83));
      if ( v89 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v89, v11);
        else
          *((_BYTE *)v89 + 10) = 1;
      }
      LOBYTE(v15) = v102;
      v85[84] = KeGetCurrentThread();
      v90 = v85[2];
      v91 = 0LL;
      v92 = (_QWORD *)(v90 - 16);
      if ( v92 != v7 )
        v91 = v92;
      v57 = v118;
      v117 = v91;
      v52 = *(volatile signed __int32 **)&Src[1];
      continue;
    }
    break;
  }
  v97 = v115;
  LODWORD(v15) = 0;
  v115[5] = v113;
  *((_QWORD *)v97 + 3) = v121;
  if ( v14 )
  {
    v98 = v106;
    if ( v106 <= 1 )
    {
      v99 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
      if ( v106 != 1 )
        v99 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, v99) )
      {
        if ( v98 == 1 )
          EtwpEventWriteProviderEnabled(
            v100,
            (_DWORD)v99,
            v12,
            (_DWORD)v14 + 136,
            (__int64)Buf2,
            *((_QWORD *)v3 + 2),
            *((_QWORD *)v3 + 3),
            v3[2],
            *((_BYTE *)v3 + 4));
        else
          EtwpEventWriteTemplateSessAndProv((__int64)Buf2, v99, v12, 2, (unsigned __int16 *)v14 + 68, (ULONGLONG)Buf2);
      }
    }
  }
LABEL_191:
  v52 = *(volatile signed __int32 **)&Src[1];
LABEL_192:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
LABEL_194:
  if ( v52 )
    EtwpUnreferenceDataBlock(v52);
  if ( v105 )
    goto LABEL_51;
LABEL_57:
  if ( v14 )
    EtwpReleaseLoggerContext(v14, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry(v7, (__int64)v11, v12, v13);
  EtwpFreeFilterInfo(v124);
  return (unsigned int)v15;
}
