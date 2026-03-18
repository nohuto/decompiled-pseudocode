/*
 * XREFs of EtwpEnableGuid @ 0x140ADA008
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140AD9C34 (EtwpEnableTrace.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404575EC (EtwpEnableMetaProviderGuid.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpValidateEnableNotification @ 0x14091F4CC (EtwpValidateEnableNotification.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140937294 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140937CC0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpSendDataBlock @ 0x1409388D8 (EtwpSendDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140938D98 (EtwpFreeFilterInfo.c)
 *     EtwpUnreferenceDataBlock @ 0x140939064 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140939088 (EtwpAllocDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140939130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140939E18 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x140939F90 (EtwpCalculateUpdateNotification.c)
 *     EtwpIsRegEntryAllowed @ 0x14093AFA4 (EtwpIsRegEntryAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140A6D54C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140AB2240 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpPreallocateApcPool @ 0x140AFAC58 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AFACE4 (EtwpReferenceStackLookasideList.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140AFD288 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x140B0D970 (EtwpEventWriteProviderEnabled.c)
 *     EtwpCreateUmReplyObject @ 0x140B12A84 (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteCaptureState @ 0x140B2FD4C (EtwpEventWriteCaptureState.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140B55CDC (EtwpDemuxPrivateTraceHandle.c)
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
  __int128 *v28; // rdx
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
  __int64 v50; // rcx
  signed __int32 v51; // ett
  int v52; // eax
  volatile signed __int32 *v53; // r12
  int v54; // eax
  int v55; // r13d
  unsigned __int8 i; // cl
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  unsigned int *v59; // rax
  unsigned int *v60; // rcx
  __int64 v61; // rsi
  struct _KTHREAD *v62; // rax
  unsigned __int64 *v63; // r12
  AutoBoost *v64; // rax
  void *v65; // rdx
  AutoBoost *v66; // rbx
  __int64 v67; // rax
  unsigned __int16 *v68; // rbx
  char v69; // r15
  unsigned __int16 v70; // bx
  bool updated; // al
  __int16 v72; // ax
  __int64 v73; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v75; // rbx
  unsigned int ProcessId; // eax
  __int16 v77; // bx
  int v78; // eax
  signed __int64 v79; // rax
  signed __int64 v80; // rdx
  __int64 v81; // rtt
  _QWORD *v82; // rax
  volatile signed __int64 *v83; // rbx
  signed __int64 v84; // rax
  signed __int64 v85; // rdx
  _QWORD *v86; // r12
  struct _KTHREAD *v87; // rax
  volatile signed __int32 *v88; // rsi
  AutoBoost *v89; // rax
  AutoBoost *v90; // rbx
  __int64 v91; // rax
  _QWORD *v92; // r12
  _QWORD *v93; // rax
  __int64 *v94; // rbx
  signed __int64 v95; // rax
  signed __int64 v96; // rdx
  __int64 v97; // rtt
  _DWORD *v98; // rcx
  unsigned int v99; // r12d
  const EVENT_DESCRIPTOR *v100; // rsi
  int v101; // ecx
  unsigned int v102; // [rsp+28h] [rbp-D8h]
  char v103; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v104; // [rsp+51h] [rbp-AFh]
  char v105; // [rsp+52h] [rbp-AEh]
  char v106; // [rsp+53h] [rbp-ADh]
  unsigned int v107; // [rsp+54h] [rbp-ACh]
  int v108; // [rsp+58h] [rbp-A8h]
  _DWORD Src[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v110; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v111; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v112; // [rsp+78h] [rbp-88h] BYREF
  int v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+84h] [rbp-7Ch]
  volatile signed __int32 *v115; // [rsp+88h] [rbp-78h]
  _DWORD *v116; // [rsp+90h] [rbp-70h]
  void *Buf2; // [rsp+98h] [rbp-68h]
  _QWORD *v118; // [rsp+A0h] [rbp-60h]
  _QWORD *v119; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  unsigned int *v121; // [rsp+B8h] [rbp-48h]
  __int64 v122; // [rsp+C0h] [rbp-40h]
  __int128 v123; // [rsp+C8h] [rbp-38h] BYREF
  int v124; // [rsp+D8h] [rbp-28h]
  _QWORD v125[14]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF

  v116 = a2;
  v122 = 0LL;
  Buf2 = a2 + 10;
  v3 = a2 + 18;
  Object = 0LL;
  *(_QWORD *)&Src[1] = 0LL;
  v114 = 0;
  v106 = 0;
  v105 = 0;
  v124 = 0;
  LOWORD(v113) = 0;
  LOWORD(Src[0]) = 0;
  v7 = 0LL;
  v103 = 0;
  v123 = 0LL;
  v112 = 0LL;
  v8 = 0LL;
  v111 = 0LL;
  memset_0(v125, 0, 0x68uLL);
  v9 = v3[2] & 0x20;
  v110 = 0;
  v108 = v9;
  v104 = v9 != 0 ? 2 : 0;
  v10 = EtwpValidateEnableNotification(a1, (__int64)a2, a3, (__int64)&v123, &v112, (__int64)v125);
  v14 = v112;
  LODWORD(v15) = v10;
  if ( v10 < 0 )
    goto LABEL_57;
  v16 = *v3;
  v107 = v16;
  if ( v16 == 2 )
  {
    v15 = (__int64 *)(a2 + 10);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v17, v3, a2 + 10);
    v16 = v107;
  }
  else
  {
    v15 = (__int64 *)(a2 + 10);
  }
  v18 = a2[29];
  if ( v18 && v18 < 3 )
  {
    v19 = v116;
    v20 = v18;
    v13 = (struct _KLOCK_ENTRIES *)((char *)&ApcState.ApcListHead[0].Flink + 4 - (char *)(v116 + 30));
    v11 = v116 + 32;
    v12 = (char *)&ApcState - (char *)(v116 + 30);
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
    v14 = v112;
  }
  else
  {
    v18 = 0;
    HIDWORD(ApcState.ApcListHead[0].Blink) = 0;
  }
  if ( v108 )
  {
    v24 = v107;
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
                     &v103);
    KeLeaveCriticalRegion();
    if ( v103 )
      goto LABEL_57;
    v102 = v18;
    v24 = v107;
    LODWORD(v15) = EtwpEnableMetaProviderGuid(
                     (__int64)v14,
                     (__int64)Buf2,
                     v107,
                     *((_QWORD *)v3 + 2),
                     (__int64)&ApcState,
                     v102);
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
  v27 = v116;
  v28 = &PrivateLoggerNotificationGuid;
  v29 = BYTE2(v124);
  v30 = v104;
  v31 = BYTE2(v124) == 0;
  v32 = v104;
  v116[9] = CurrentThreadProcessId;
  if ( v31 )
    v28 = (__int128 *)(v27 + 10);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v28, v32);
  if ( GuidEntryByGuid )
  {
    v34 = v107;
    if ( v107 == 1 || (v7 = GuidEntryByGuid, !v107) )
    {
      v7 = GuidEntryByGuid;
      if ( v14 )
      {
        if ( !memcmp(&EventTracingProvGuid, Buf2, 0x10uLL) )
        {
          v35 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
          if ( v34 != 1 )
            v35 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v35) )
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
    v34 = v107;
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
  v41 = v108;
  v7[84] = KeGetCurrentThread();
  v106 = 1;
  if ( v34 == 1 && (*((_BYTE *)v7 + 91) & 1) != 0 && !v41 && *((_WORD *)v3 + 3) != *((_WORD *)v7 + 44) )
  {
    if ( !memcmp(qword_14001FEE0, v7 + 5, 0x10uLL) )
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
    v41 = v108;
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
  v46 = v116;
  v116[28] = v34;
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
    LODWORD(v15) = EtwpUpdateGuidEnableInfo((ULONG_PTR)v7, (__int64)v46, v48, (__int64)v125, Src);
    if ( (int)v15 < 0 )
      goto LABEL_51;
    *(_OWORD *)v3 = *((_OWORD *)v7 + 6);
    *((_OWORD *)v3 + 1) = *((_OWORD *)v7 + 7);
    if ( (v3[2] & 4) != 0 )
    {
      EtwpPreallocateApcPool(v14 + 208);
      _m_prefetchw(v14 + 204);
      v49 = v14[204];
      do
      {
        v50 = v49 | 0x2000u;
        v51 = v49;
        v49 = _InterlockedCompareExchange((volatile signed __int32 *)v14 + 204, v50, v49);
      }
      while ( v51 != v49 );
      if ( (v49 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v50, 0x2000LL);
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
  v52 = EtwpBuildNotificationPacket((__int64)v7, v46, 0xFFu, (__int64 *)&Src[1]);
  v53 = *(volatile signed __int32 **)&Src[1];
  if ( v52 < 0 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_194;
  }
  v54 = EtwpAllocDataBlock(*(unsigned int *)(*(_QWORD *)&Src[1] + 4LL), *(void **)&Src[1], &v111);
  v8 = v111;
  if ( v54 < 0 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_191;
  }
  v55 = v113;
  v11 = v7 + 16;
  v115 = v111;
  for ( i = 0; i < 0x10u; ++i )
  {
    if ( *v11 )
      v55 = (unsigned __int16)v55 | (1 << i);
    v11 += 8;
  }
  v113 = v55;
  v14 = v112;
  v103 = 0;
  v118 = 0LL;
  if ( !v7[82] )
  {
    v57 = (_QWORD *)v7[2];
    if ( v57 != v7 + 2 )
      v118 = v57 - 2;
  }
  v58 = v7;
  v119 = v7;
  while ( 2 )
  {
    v59 = (unsigned int *)(v58 + 7);
    v121 = v59;
    v60 = *(unsigned int **)v59;
    v112 = *(unsigned int **)v59;
    while ( v60 != v59 )
    {
      if ( v108 )
      {
        v62 = KeGetCurrentThread();
        v61 = (__int64)(v60 - 4);
        --v62->KernelApcDisable;
        v63 = (unsigned __int64 *)(*((_QWORD *)v60 + 2) + 664LL);
        v64 = (AutoBoost *)KeAbPreAcquire((__int64)v63, 0LL, 0LL, v13);
        v66 = v64;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
          ExfAcquirePushLockExclusiveEx(v63, v64, (__int64)v63);
        if ( v66 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v66, v65);
          else
            *((_BYTE *)v66 + 10) = 1;
        }
        v67 = *(_QWORD *)(v61 + 32);
        v53 = *(volatile signed __int32 **)&Src[1];
        LOBYTE(v15) = v103;
        v105 = 1;
        *(_QWORD *)(v67 + 672) = KeGetCurrentThread();
        v60 = v112;
      }
      else
      {
        v61 = (__int64)v60;
      }
      v112 = *(unsigned int **)v60;
      if ( !EtwpIsRegEntryAllowed(v61, (__int64)v14, &v123, (__int64)v116, (__int64)v125, (char)v15, v104) )
      {
LABEL_149:
        v12 = 2LL;
        goto LABEL_150;
      }
      if ( BYTE2(v124) )
      {
        ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v61 + 80));
        if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *((_WORD *)v3 + 3) & 0x7FFF, &v110) )
          goto LABEL_149;
        v77 = v110;
        if ( v110 != *((_WORD *)v8 + 39) )
        {
          v53 = *(volatile signed __int32 **)&Src[1];
          if ( (int)EtwpAllocDataBlock(*(unsigned int *)(*(_QWORD *)&Src[1] + 4LL), *(void **)&Src[1], &v111) < 0 )
          {
            v8 = v115;
            if ( v105 )
            {
              *(_QWORD *)(*(_QWORD *)(v61 + 32) + 672LL) = 0LL;
              v94 = (__int64 *)(*(_QWORD *)(v61 + 32) + 664LL);
              _m_prefetchw(v94);
              v95 = *v94;
              v96 = *v94 - 16;
              if ( (*v94 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v96 = 0LL;
              if ( (v95 & 2) != 0 || (v97 = *v94, v97 != _InterlockedCompareExchange64(v94, v96, v95)) )
                ExfReleasePushLock(v94);
              KeAbPostRelease((unsigned __int64)v94);
              KeLeaveCriticalRegion();
            }
            LODWORD(v15) = -1073741801;
            goto LABEL_192;
          }
          EtwpUnreferenceDataBlock(v115);
          v8 = v111;
          v115 = v111;
          *((_WORD *)v111 + 39) = v77 | 0x8000;
          *((_WORD *)v8 + 52) = v77;
        }
        v53 = v8;
      }
      else
      {
        if ( v107 == 2 )
          goto LABEL_132;
        if ( (_BYTE)v15 )
        {
          if ( v108 )
            v68 = (unsigned __int16 *)(v61 + 106);
          else
            v68 = (unsigned __int16 *)(v61 + 104);
        }
        else
        {
          v68 = (unsigned __int16 *)(v61 + 100);
          if ( v108 )
            v68 = (unsigned __int16 *)(v61 + 102);
        }
        v69 = v103;
        v70 = *v68;
        EtwpUpdateRegEntryEnableMask(v61, (__int64)v14, Src[0], v104, v103, v107);
        updated = EtwpCalculateUpdateNotification(v61, Src[0], v70, v113, v104, v69, v107, (__int64 *)&v111);
        v8 = v111;
        if ( !updated )
        {
          LOBYTE(v15) = v103;
          v12 = 2LL;
          if ( !v111 )
          {
            v8 = v115;
            v111 = v115;
          }
          goto LABEL_150;
        }
        if ( v111 )
        {
          v53 = v111;
          if ( v111 != v115 )
          {
            EtwpUnreferenceDataBlock(v115);
            v115 = v8;
          }
        }
        else
        {
          v8 = v115;
          v111 = v115;
        }
        if ( v107 == 1 )
        {
LABEL_132:
          v72 = *(_WORD *)(v61 + 98);
          if ( (v72 & 8) != 0
            || (v72 & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(v61 + 98), 0xAu)
            || (v14[204] & 0x2000000) != 0 )
          {
            if ( (*(_BYTE *)(v61 + 98) & 1) != 0 )
            {
              EtwpProviderArrivalCallback((__int64)v14, 0, v61);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v61 + 80) + 488LL)) )
            {
              v73 = *(_QWORD *)(v61 + 80);
              memset(&ApcState, 0, sizeof(ApcState));
              ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v73);
              v75 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(*(PRKPROCESS *)(v61 + 80), &ApcState);
              EtwpProviderArrivalCallback((__int64)v14, 1, v61);
              KiUnstackDetachProcess((__int64)&ApcState, 0);
              PsDetachSiloFromCurrentThread(v75);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v61 + 80) + 488LL));
            }
          }
        }
      }
      v78 = EtwpSendDataBlock(v61, (__int64)v53);
      LOBYTE(v15) = v103;
      v12 = 2LL;
      if ( v78 >= 0 && (*(_BYTE *)(v61 + 98) & 2) != 0 )
        ++v114;
LABEL_150:
      v60 = v112;
      v59 = v121;
      v53 = *(volatile signed __int32 **)&Src[1];
      if ( v105 )
      {
        *(_QWORD *)(*(_QWORD *)(v61 + 32) + 672LL) = 0LL;
        v15 = (__int64 *)(*(_QWORD *)(v61 + 32) + 664LL);
        _m_prefetchw(v15);
        v79 = *v15;
        v80 = *v15 - 16;
        if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v80 = 0LL;
        if ( (v79 & 2) != 0 || (v81 = *v15, v81 != _InterlockedCompareExchange64(v15, v80, v79)) )
          ExfReleasePushLock(v15);
        KeAbPostRelease((unsigned __int64)v15);
        KeLeaveCriticalRegion();
        v60 = v112;
        v59 = v121;
        LOBYTE(v15) = v103;
        v105 = 0;
        v53 = *(volatile signed __int32 **)&Src[1];
      }
    }
    v82 = v119;
    if ( v119 != v7 )
    {
      v119[84] = 0LL;
      v83 = v82 + 83;
      _m_prefetchw(v82 + 83);
      v84 = v82[83];
      v85 = v84 - 16;
      if ( (v84 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v85 = 0LL;
      if ( (v84 & 2) != 0 || v84 != _InterlockedCompareExchange64(v83, v85, v84) )
        ExfReleasePushLock(v83);
      KeAbPostRelease((unsigned __int64)v83);
      KeLeaveCriticalRegion();
    }
    v86 = v118;
    if ( v118 )
    {
      v87 = KeGetCurrentThread();
      v88 = (volatile signed __int32 *)(v118 + 83);
      v103 = 1;
      v119 = v118;
      --v87->KernelApcDisable;
      v89 = (AutoBoost *)KeAbPreAcquire((__int64)(v86 + 83), 0LL, 0LL, v13);
      v90 = v89;
      if ( _interlockedbittestandset64(v88, 0LL) )
        ExfAcquirePushLockExclusiveEx(v86 + 83, v89, (__int64)(v86 + 83));
      if ( v90 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v90, v11);
        else
          *((_BYTE *)v90 + 10) = 1;
      }
      LOBYTE(v15) = v103;
      v86[84] = KeGetCurrentThread();
      v91 = v86[2];
      v92 = 0LL;
      v93 = (_QWORD *)(v91 - 16);
      if ( v93 != v7 )
        v92 = v93;
      v58 = v119;
      v118 = v92;
      v53 = *(volatile signed __int32 **)&Src[1];
      continue;
    }
    break;
  }
  v98 = v116;
  LODWORD(v15) = 0;
  v116[5] = v114;
  *((_QWORD *)v98 + 3) = v122;
  if ( v14 )
  {
    v99 = v107;
    if ( v107 <= 1 )
    {
      v100 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
      if ( v107 != 1 )
        v100 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v100) )
      {
        if ( v99 == 1 )
          EtwpEventWriteProviderEnabled(
            v101,
            (_DWORD)v100,
            v12,
            (_DWORD)v14 + 136,
            (__int64)Buf2,
            *((_QWORD *)v3 + 2),
            *((_QWORD *)v3 + 3),
            v3[2],
            *((_BYTE *)v3 + 4));
        else
          EtwpEventWriteTemplateSessAndProv((__int64)Buf2, v100, v12, 2, (unsigned __int16 *)v14 + 68, (ULONGLONG)Buf2);
      }
    }
  }
LABEL_191:
  v53 = *(volatile signed __int32 **)&Src[1];
LABEL_192:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
LABEL_194:
  if ( v53 )
    EtwpUnreferenceDataBlock(v53);
  if ( v106 )
    goto LABEL_51;
LABEL_57:
  if ( v14 )
    EtwpReleaseLoggerContext(v14, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry(v7, (__int64)v11, v12, v13);
  EtwpFreeFilterInfo(v125);
  return (unsigned int)v15;
}
