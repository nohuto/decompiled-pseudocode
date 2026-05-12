/*
 * XREFs of RaidUnitCompleteRequest @ 0x140017760
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1400134E4 (RaidIsUnresponsiveBlockedCmd.c)
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     StorpTelemetryCollectPerfData @ 0x140021FA0 (StorpTelemetryCollectPerfData.c)
 *     StorpTelemetryCollectErrorData @ 0x140025890 (StorpTelemetryCollectErrorData.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x14002A288 (RaidLogRequestComplete.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x14004EE08 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x14004F378 (StorEtwIORequestServiceTimeEventData.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x14005C878 (RaidFreeRemappedScatterGatherListMdl.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0 (RaidAdapterReleaseCryptoKeyResources.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     GetZoneCountFromUnit @ 0x140073E8C (GetZoneCountFromUnit.c)
 *     McTemplateK0zqjuuussss_EtwWriteTransfer @ 0x1400987DC (McTemplateK0zqjuuussss_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssxq_EtwWriteTransfer @ 0x140098B4C (McTemplateK0zqjuuussssxq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssxx_EtwWriteTransfer @ 0x140098D28 (McTemplateK0zqjuuussssxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  IRP *v6; // rdx
  __int64 v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int64 v9; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rbx
  int *v11; // r14
  __int64 *v12; // rbx
  int *v13; // rsi
  _DWORD *v14; // rdi
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v16; // rcx
  char v17; // al
  int v18; // r8d
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  __int64 **v21; // rax
  int v22; // ebx
  int v23; // edx
  int v24; // ecx
  _KSPIN_LOCK_QUEUE *volatile Next; // rsi
  unsigned int v26; // r11d
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // r10d
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r12
  PIRP v33; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v35; // bl
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int HighestNodeNumber; // r8d
  unsigned int v39; // edx
  char v40; // bl
  __int64 v41; // rax
  __int64 v42; // r12
  unsigned __int8 *v43; // rdi
  unsigned __int64 v44; // rax
  _IO_SECURITY_CONTEXT *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // rbx
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r12
  KIRQL v52; // al
  KSPIN_LOCK *v53; // rcx
  int v54; // r8d
  char v55; // al
  __int64 v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rax
  int v59; // edx
  int v60; // ecx
  int v61; // r9d
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // r13d
  int AccessState_high; // eax
  __int64 v67; // rcx
  struct _MDL *v68; // rcx
  signed __int32 v69; // eax
  signed __int32 v70; // ett
  char v71; // cl
  char result; // al
  __int64 v73; // rax
  int v74; // ebx
  bool v75; // bl
  __int64 v76; // rcx
  __int64 v77; // rax
  void (__fastcall *v78)(__int64, _QWORD, bool); // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  void (__fastcall *v82)(__int64, __int64, _QWORD); // rax
  int Next_low; // ecx
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  PIRP v86; // rdi
  bool v87; // zf
  int v88; // edx
  _IO_STACK_LOCATION *v89; // rcx
  unsigned __int8 MajorFunction; // al
  bool v91; // bl
  int v92; // eax
  __int64 v93; // rax
  int v94; // r10d
  char v95; // cl
  int v96; // eax
  char v97; // al
  char v98; // r11
  unsigned __int8 v99; // si
  char v100; // bl
  char v101; // di
  _BYTE *v102; // r12
  unsigned int v103; // r10d
  unsigned int i; // edx
  __int64 v105; // rcx
  __int64 v106; // r9
  int v107; // ecx
  unsigned int v108; // edx
  unsigned int v109; // ebx
  unsigned int v110; // r11d
  __int64 v111; // rcx
  int v112; // r9d
  __int64 v113; // r10
  unsigned __int8 v114; // al
  int v115; // ecx
  __int64 v116; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v118; // rbx
  unsigned int AccessState; // edx
  __int64 v120; // r9
  __int64 v121; // rcx
  unsigned __int64 DesiredAccess; // rax
  char *v123; // r8
  LARGE_INTEGER v124; // rax
  LARGE_INTEGER v125; // rdx
  int v126; // ecx
  unsigned __int64 v127; // r10
  unsigned __int64 v128; // r9
  int v129; // r9d
  int v130; // ecx
  char v131; // al
  int v132; // r8d
  __int64 *v133; // rcx
  __int64 *v134; // rdx
  __int64 **v135; // rax
  int v136; // r8d
  char v137; // al
  __int64 v138; // rcx
  __int64 v139; // rdx
  _QWORD *v140; // rax
  __int64 *v141; // rcx
  __int64 *v142; // r9
  __int64 **v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r9
  _QWORD *v146; // rax
  int *Information; // rax
  char v148; // al
  __int64 *v149; // rcx
  __int64 *v150; // r9
  __int64 **v151; // rax
  __int64 v152; // rcx
  __int64 v153; // r9
  _QWORD *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  unsigned int v157; // r10d
  unsigned int j; // r9d
  unsigned int v159; // r10d
  _IO_SECURITY_CONTEXT *v160; // rdx
  char v161; // r15
  unsigned __int8 v162; // r8
  char v163; // r9
  char Flags; // r14
  char LowPart_high; // bl
  bool v166; // r12
  unsigned __int8 *v167; // r10
  unsigned int v168; // esi
  unsigned int v169; // r13d
  char v170; // al
  __int64 v171; // rcx
  __int64 v172; // rcx
  unsigned __int64 v173; // rdx
  __int64 v174; // r8
  int v175; // ecx
  int v176; // ecx
  __int64 Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  __int64 v179; // rcx
  const int *v180; // r9
  int v181; // eax
  __int64 v182; // r8
  char v183; // r8
  int v184; // r10d
  unsigned int v185; // esi
  __int64 v186; // rbx
  unsigned int v187; // edx
  int k; // ecx
  const int *v189; // rdi
  int v190; // eax
  int m; // ecx
  _KSPIN_LOCK_QUEUE *volatile v192; // rcx
  int v193; // eax
  const int *v194; // rdi
  __int64 v195; // rcx
  char v196; // si
  __int64 v197; // rax
  __int64 v198; // rcx
  const int *v199; // r8
  __int64 v200; // r9
  __int64 v201; // r9
  const int *v202; // rdi
  ULONG ZoneCountFromUnit; // edi
  __int64 v204; // rax
  ULONG *v205; // rax
  void *v206; // rcx
  __int64 v207; // rcx
  unsigned __int64 v208; // r9
  char *v209; // rdx
  __int64 v210; // rcx
  unsigned __int64 v211; // r11
  __int64 v212; // rdi
  int v213; // ecx
  int v214; // ecx
  _ACCESS_STATE *v215; // r11
  unsigned __int64 v216; // rcx
  char v217; // al
  char v218; // r10
  char *v219; // rbx
  unsigned int v220; // eax
  unsigned int v221; // [rsp+80h] [rbp-80h]
  unsigned int v222; // [rsp+84h] [rbp-7Ch]
  unsigned int v223; // [rsp+84h] [rbp-7Ch]
  unsigned int v224; // [rsp+84h] [rbp-7Ch]
  char v225; // [rsp+88h] [rbp-78h]
  PIRP Irp; // [rsp+90h] [rbp-70h]
  __int64 v227; // [rsp+98h] [rbp-68h]
  int v228; // [rsp+A0h] [rbp-60h]
  __int64 v229; // [rsp+A0h] [rbp-60h]
  __int64 v230; // [rsp+A0h] [rbp-60h]
  unsigned int v231; // [rsp+A8h] [rbp-58h]
  BOOL v232; // [rsp+A8h] [rbp-58h]
  char v233; // [rsp+ACh] [rbp-54h]
  __int64 v234; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v235; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v236; // [rsp+C0h] [rbp-40h]
  __int64 v237; // [rsp+C8h] [rbp-38h]
  __int64 v238; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v239; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF

  v235 = 0LL;
  v234 = 0LL;
  v237 = a1;
  v5 = *(_QWORD *)(a1 + 168);
  v6 = *(IRP **)(a1 + 160);
  v7 = *(_QWORD *)(a1 + 224);
  v233 = *(_BYTE *)(a1 + 16);
  Irp = v6;
  v227 = v7;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v221 = *(_DWORD *)(v5 + 20);
    v236 = *(_QWORD *)(v5 + 104);
    v238 = a1 + 896;
    v231 = *(_DWORD *)(v5 + 32);
    v228 = *(_DWORD *)(v5 + 24);
    v222 = *(_DWORD *)(v5 + 60);
    v93 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)v93 == 1094997074 && (*(_BYTE *)(v93 + 111) & 4) != 0 && (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
      *(_DWORD *)(v5 + 44) = 0;
  }
  else
  {
    v221 = *(unsigned __int8 *)(v5 + 2);
    v236 = *(_QWORD *)(v5 + 56);
    v238 = *(_QWORD *)(v5 + 32);
    a4 = *(unsigned int *)(v5 + 12);
    a3 = *(unsigned int *)(v5 + 16);
    v231 = *(unsigned __int8 *)(v5 + 8);
    v228 = *(_DWORD *)(v5 + 12);
    v222 = *(_DWORD *)(v5 + 16);
  }
  SecurityContext = v6->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v9 = 4LL;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
    v9 = 2LL;
  SecurityQos = SecurityContext[v9].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
  {
    v22 = (int)v6;
LABEL_20:
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140173441 & 1) != 0 )
        StorEtwIORequestServiceTimeEventData(a1, 0LL, 0LL, a4);
      if ( *(_DWORD *)(v7 + 1940) && (byte_140173443 & 2) != 0 )
        StorEtwLogoRequestServiceTimeEventData(a1, 0LL, 0LL, a4);
    }
    goto LABEL_21;
  }
  v11 = *(int **)(v7 + 560);
  v12 = (__int64 *)&SecurityQos[4];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v13 = &v11[16 * (unsigned __int64)*((unsigned int *)v12 + 9)];
  v14 = v13 + 16;
  CurrentIrql = KeGetCurrentIrql();
  v16 = (KSPIN_LOCK *)(v13 + 26);
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v16, &LockHandle);
    v17 = *((_BYTE *)v12 - 32);
    v18 = *v11;
    if ( (v17 & 2) != 0 )
    {
      *((_BYTE *)v12 - 32) = v17 & 0xFD;
      v19 = (__int64 *)*v12;
      v20 = *(__int64 **)v14;
      if ( *(__int64 **)(*v12 + 8) != v12 )
        goto LABEL_244;
      v21 = (__int64 **)v12[1];
      if ( *v21 != v12 )
        goto LABEL_244;
      *v21 = v19;
      v19[1] = (__int64)v21;
      if ( (v12[6] & 1) != 0 )
      {
        v141 = v12 + 2;
        if ( *((__int64 **)v13 + 12) == v12 + 2 )
          *((_QWORD *)v13 + 12) = *v141;
        v142 = (__int64 *)*v141;
        if ( *(__int64 **)(*v141 + 8) != v141 )
          goto LABEL_244;
        v143 = (__int64 **)v12[3];
        if ( *v143 != v141 )
          goto LABEL_244;
        *v143 = v142;
        v142[1] = (__int64)v143;
        *((_DWORD *)v12 + 12) &= ~1u;
      }
      if ( (v18 & 4) == 0 && v20 == v12 )
      {
        if ( *(_DWORD **)v14 == v14 )
          v13[28] = -1;
        else
          v13[28] = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
    v131 = *((_BYTE *)v12 - 32);
    v132 = *v11;
    if ( (v131 & 2) != 0 )
    {
      *((_BYTE *)v12 - 32) = v131 & 0xFD;
      v133 = (__int64 *)*v12;
      v134 = *(__int64 **)v14;
      if ( *(__int64 **)(*v12 + 8) != v12 )
        goto LABEL_244;
      v135 = (__int64 **)v12[1];
      if ( *v135 != v12 )
        goto LABEL_244;
      *v135 = v133;
      v133[1] = (__int64)v135;
      if ( (v12[6] & 1) != 0 )
      {
        v149 = v12 + 2;
        if ( *((__int64 **)v13 + 12) == v12 + 2 )
          *((_QWORD *)v13 + 12) = *v149;
        v150 = (__int64 *)*v149;
        if ( *(__int64 **)(*v149 + 8) != v149 )
          goto LABEL_244;
        v151 = (__int64 **)v12[3];
        if ( *v151 != v149 )
          goto LABEL_244;
        *v151 = v150;
        v150[1] = (__int64)v151;
        *((_DWORD *)v12 + 12) &= ~1u;
      }
      if ( (v132 & 4) == 0 && v134 == v12 )
      {
        if ( *(_DWORD **)v14 == v14 )
          v13[28] = -1;
        else
          v13[28] = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v22 = (int)Irp;
  if ( StorEtwLoggingEnabled )
  {
    LockHandle.LockQueue = 0LL;
    IoGetActivityIdIrp(Irp, &LockHandle);
    if ( byte_140173442 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v24, v23, (unsigned int)&LockHandle, a4, 4);
    v7 = v227;
    goto LABEL_20;
  }
LABEL_21:
  if ( *(_BYTE *)(v5 + 2) != 40 )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)(v5 + 72);
    goto LABEL_32;
  }
  Next = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v26 = *(_DWORD *)(v5 + 56);
    a3 = 0LL;
    if ( v26 )
    {
      while ( 1 )
      {
        v27 = *(unsigned int *)(v5 + 4LL * (unsigned int)a3 + 120);
        if ( (unsigned int)v27 < 0x80 )
          goto LABEL_29;
        v28 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v27 >= (unsigned int)v28 )
          goto LABEL_29;
        v29 = *(_DWORD *)(v27 + v5);
        v30 = v27 + v5;
        if ( v29 == 64 )
          break;
        v94 = v29 - 65;
        if ( !v94 )
        {
          v31 = v27 + 56;
LABEL_28:
          if ( v31 <= v28 )
          {
            if ( !*(_BYTE *)(v30 + 10) )
              goto LABEL_33;
            Next = (_KSPIN_LOCK_QUEUE *volatile)(v30 + 24);
            goto LABEL_32;
          }
          goto LABEL_29;
        }
        if ( v94 == 1 && v27 + 40 <= v28 )
        {
          if ( !*(_DWORD *)(v30 + 12) )
            goto LABEL_33;
          Next = (_KSPIN_LOCK_QUEUE *volatile)(v30 + 32);
LABEL_32:
          LockHandle.LockQueue.Next = Next;
          goto LABEL_33;
        }
LABEL_29:
        a3 = (unsigned int)(a3 + 1);
        if ( (unsigned int)a3 >= v26 )
          goto LABEL_33;
      }
      v31 = v27 + 40;
      goto LABEL_28;
    }
  }
LABEL_33:
  v32 = v227;
  if ( *(_DWORD *)(v227 + 2372) )
  {
    if ( Next )
    {
      Next_low = LOBYTE(Next->Next);
      if ( !v221 )
      {
        if ( (unsigned __int8)(Next_low - 8) <= 0x3Au
          && (v84 = 0x400200500000005LL, _bittest64(&v84, (unsigned int)(Next_low - 8)))
          || (unsigned __int8)(Next_low + 120) <= 0x22u
          && (v155 = 0x500000205LL, _bittest64(&v155, (unsigned int)(Next_low + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v5, v227, v22, Next_low);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !Next )
  {
LABEL_35:
    v33 = Irp;
    goto LABEL_36;
  }
  v97 = *(_BYTE *)(v5 + 2);
  v98 = 0;
  v99 = *(_BYTE *)(v5 + 3);
  v100 = 0;
  v101 = 0;
  v102 = 0LL;
  if ( v97 != 40 )
  {
    v101 = *(_BYTE *)(v5 + 4);
    v108 = v99;
    LOBYTE(v108) = v99 & 0x3F;
    if ( !v97 )
    {
      v102 = *(_BYTE **)(v5 + 32);
      v114 = *(_BYTE *)(v5 + 11);
      goto LABEL_200;
    }
    goto LABEL_325;
  }
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v103 = *(_DWORD *)(v5 + 56);
    for ( i = 0; i < v103; ++i )
    {
      v105 = *(unsigned int *)(v5 + 4LL * i + 120);
      if ( (unsigned int)v105 >= 0x80 )
      {
        a3 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v105 < (unsigned int)a3 )
        {
          v106 = (unsigned int)v105;
          v107 = *(_DWORD *)(v105 + v5);
          if ( v107 == 64 )
          {
            if ( v106 + 40 <= a3 )
              goto LABEL_190;
          }
          else
          {
            v130 = v107 - 65;
            if ( v130 )
            {
              if ( v130 == 1 && v106 + 40 <= a3 )
              {
LABEL_190:
                v101 = *(_BYTE *)(v106 + v5 + 8);
                break;
              }
            }
            else if ( v106 + 56 <= a3 )
            {
              goto LABEL_190;
            }
          }
        }
      }
    }
  }
  v108 = v99;
  LOBYTE(v108) = v99 & 0x3F;
  if ( *(_DWORD *)(v5 + 20) )
  {
LABEL_325:
    v114 = 0;
    goto LABEL_200;
  }
  v109 = *(_DWORD *)(v5 + 56);
  v110 = 0;
  if ( !v109 )
  {
LABEL_198:
    v114 = 0;
    goto LABEL_199;
  }
  while ( 1 )
  {
    v111 = *(unsigned int *)(v5 + 4LL * v110 + 120);
    if ( (unsigned int)v111 < 0x80 )
      goto LABEL_197;
    a3 = *(unsigned int *)(v5 + 16);
    if ( (unsigned int)v111 >= (unsigned int)a3 )
      goto LABEL_197;
    v112 = *(_DWORD *)(v111 + v5);
    v113 = v111 + v5;
    if ( v112 == 64 )
    {
      if ( v111 + 40 <= a3 )
        goto LABEL_235;
      goto LABEL_197;
    }
    v129 = v112 - 65;
    if ( v129 )
      break;
    if ( v111 + 56 <= a3 )
    {
LABEL_235:
      v102 = *(_BYTE **)(v113 + 16);
      v114 = *(_BYTE *)(v113 + 9);
      goto LABEL_199;
    }
LABEL_197:
    if ( ++v110 >= v109 )
      goto LABEL_198;
  }
  if ( v129 != 1 || v111 + 40 > a3 )
    goto LABEL_197;
  v102 = *(_BYTE **)(v113 + 24);
  v114 = *(_BYTE *)(v113 + 9);
LABEL_199:
  v98 = 0;
  v100 = 0;
LABEL_200:
  if ( (v99 & 0x80u) != 0 )
  {
    if ( v102 )
    {
      if ( v114 >= 0x12u )
      {
        v148 = *v102 & 0x7F;
        if ( v148 == 112 || v148 == 113 )
        {
          v100 = v102[12];
          v98 = v102[2] & 0xF;
        }
      }
    }
    if ( (_BYTE)v108 != 1 || v98 || v100 )
      goto LABEL_305;
LABEL_204:
    v32 = v227;
    Next = LockHandle.LockQueue.Next;
    goto LABEL_35;
  }
  if ( v101 != 2 && (unsigned __int8)v108 <= 0x12u )
  {
    v115 = 262211;
    if ( _bittest(&v115, v108) )
      goto LABEL_204;
  }
LABEL_305:
  v33 = Irp;
  v32 = v227;
  StorpTelemetryCollectErrorData(v227, Irp, a1, v5);
  Next = LockHandle.LockQueue.Next;
LABEL_36:
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v32, *(unsigned int *)(a1 + 748), a3);
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
  v35 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v36 = *(_QWORD *)(v32 + 24);
  if ( (v35 & 1) != 0 && (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v32) )
  {
    PoFxIdleComponent(**(_QWORD **)(v32 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v32 + 1864));
  }
  if ( v35 >= 2u )
  {
    v85 = *(_QWORD **)(v36 + 5024);
    if ( v85 )
      PoFxIdleComponent(*v85, 0LL, 0LL);
  }
  v37 = *(_QWORD *)(v32 + 24);
  if ( (*(_DWORD *)v37 != 1094997074 || (*(_BYTE *)(v37 + 111) & 4) == 0) && v231 != -1 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v231 / *(_DWORD *)(v32 + 648) < HighestNodeNumber + 1 )
      HighestNodeNumber = v231 / *(_DWORD *)(v32 + 648);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v32 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v32 + 640) + 16LL * v231));
  }
  if ( EnableSolitaryIO )
  {
    v232 = 1;
    goto LABEL_48;
  }
  if ( (v228 & 0x102) == 0x102 || (v228 & 0x80010) != 0 )
  {
    v232 = 0;
LABEL_48:
    v39 = v221;
  }
  else
  {
    v39 = v221;
    v232 = 1;
    if ( v221 <= 0x20 )
    {
      v156 = 0x1000D0000LL;
      if ( _bittest64(&v156, v221) )
        v232 = 0;
    }
  }
  if ( (*(_BYTE *)(v32 + 506) & 2) != 0 )
  {
    if ( RaidIsUnresponsiveBlockedCmd(v5) )
    {
      v87 = *(_BYTE *)(v5 + 2) == 40;
      *(_BYTE *)(v5 + 3) = 56;
      if ( v87 )
      {
        if ( !*(_DWORD *)(v5 + 20) )
        {
          v157 = *(_DWORD *)(v5 + 56);
          for ( j = 0; j < v157; ++j )
          {
            v172 = *(unsigned int *)(v5 + 4LL * j + 120);
            if ( (unsigned int)v172 >= 0x80 )
            {
              v173 = *(unsigned int *)(v5 + 16);
              if ( (unsigned int)v172 < (unsigned int)v173 )
              {
                v174 = (unsigned int)v172;
                v175 = *(_DWORD *)(v172 + v5) - 64;
                if ( v175 )
                {
                  v176 = v175 - 1;
                  if ( v176 )
                  {
                    if ( v176 == 1 && v174 + 40 <= v173 )
                    {
LABEL_357:
                      *(_BYTE *)(v174 + v5 + 8) = 0;
                      break;
                    }
                  }
                  else if ( v174 + 56 <= v173 )
                  {
                    goto LABEL_357;
                  }
                }
                else if ( v174 + 40 <= v173 )
                {
                  goto LABEL_357;
                }
              }
            }
          }
        }
      }
      else
      {
        *(_BYTE *)(v5 + 4) = 0;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v32 + 2232));
    }
    v39 = v221;
  }
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) != 1 )
  {
    if ( (*(_BYTE *)(v32 + 136) & 2) != 0 )
    {
      v170 = IsZonedWriteRequest(v32, 0LL, a1, 0LL);
      v171 = *(_QWORD *)(v32 + 24);
      if ( v170 )
      {
        ++*(_DWORD *)(v171 + 5720);
        ++*(_DWORD *)(v32 + 2284);
      }
      else
      {
        ++*(_DWORD *)(v171 + 5724);
      }
    }
    v71 = RaUnitAsyncError(v32, (_QWORD *)a1);
    goto LABEL_97;
  }
  v40 = 0;
  v225 = 0;
  v41 = 64LL;
  v42 = 24LL;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    v41 = 24LL;
  v43 = *(unsigned __int8 **)(v41 + v5);
  if ( Next && LOBYTE(Next->Next) == 29 && v43 )
  {
    v87 = MmIsAddressValid(*(PVOID *)(v41 + v5)) == 0;
    v44 = v222;
    if ( v87 || v222 < 9 || *v43 != 14 )
    {
      v39 = v221;
    }
    else
    {
      v39 = v221;
      if ( v43[8] == 15 )
      {
        v40 = 1;
        Irp->IoStatus.Status = 0;
        Irp->IoStatus.Information = v222;
        goto LABEL_184;
      }
    }
  }
  else
  {
    v44 = v222;
  }
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = v44;
  if ( Next )
  {
LABEL_184:
    if ( LOBYTE(Next->Next) != 59 || (BYTE1(Next->Next) & 0x1F) != 0xF )
      goto LABEL_56;
    goto LABEL_373;
  }
LABEL_56:
  if ( v40 )
  {
LABEL_373:
    Pool = RaidAllocatePool(64LL, 16LL, 1230463314LL, *(_QWORD *)(v227 + 8));
    if ( Pool )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v227 + 8));
      *(_QWORD *)Pool = WorkItem;
      if ( WorkItem )
      {
        *(_QWORD *)(Pool + 8) = Irp;
        _InterlockedIncrement((volatile signed __int32 *)(v227 + 1032));
        IoQueueWorkItem(*(PIO_WORKITEM *)Pool, RaidUpdateUnitIdentityWorkRoutine, CriticalWorkQueue, (PVOID)Pool);
        v225 = 1;
        goto LABEL_60;
      }
      ExFreePoolWithTag((PVOID)Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v227 + 24) + 32LL), BusRelations);
    goto LABEL_60;
  }
  if ( (*(_BYTE *)(v227 + 136) & 2) != 0 || *(_DWORD *)(v227 + 3432) == 17 )
  {
    if ( Next )
    {
      v95 = (char)Next->Next;
      if ( !v39 && (v95 == 37 || v95 == -98) )
      {
        v96 = *(_DWORD *)(v227 + 3624);
        if ( (v96 & 1) == 0 || v95 == -98 && (v96 & 2) == 0 )
        {
          if ( v43 )
          {
            if ( MmIsAddressValid(v43) )
            {
              v179 = *(_QWORD *)(v227 + 160);
              v180 = 0LL;
              v181 = *(_DWORD *)(v227 + 104);
              if ( v179 )
              {
                v180 = (const int *)(v179 + 90);
              }
              else
              {
                v182 = *(_QWORD *)(v227 + 152);
                if ( v182 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v227 + 24) + 608LL) + 184LL) & 0x40) != 0 )
                  v180 = (const int *)(v182 + 41);
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(v227 + 512), 8u) )
              {
                if ( byte_140173448 < 0 )
                {
                  v194 = &dword_140154ADC;
                  if ( v180 )
                    v194 = v180;
                  McTemplateK0zqjuuussss_EtwWriteTransfer(
                    BYTE1(v181),
                    v227 + 177,
                    v227 + 168,
                    *(_QWORD *)(*(_QWORD *)(v227 + 24) + 4784LL),
                    *(_DWORD *)(*(_QWORD *)(v227 + 24) + 56LL),
                    *(_QWORD *)(v227 + 24) + 5128LL,
                    v181,
                    SBYTE1(v181),
                    SBYTE2(v181),
                    v227 + 168,
                    v227 + 177,
                    v227 + 242,
                    (__int64)v194);
                }
              }
              else
              {
                v183 = 1;
                v184 = 512;
                if ( LOBYTE(Next->Next) == 37 )
                {
                  HIBYTE(v223) = v43[4];
                  BYTE2(v223) = v43[5];
                  BYTE1(v223) = v43[6];
                  LOBYTE(v223) = v43[7];
                  v185 = v223;
                  HIBYTE(v229) = 0;
                  *(_DWORD *)((char *)&v229 + 3) = *v43;
                  BYTE2(v229) = v43[1];
                  BYTE1(v229) = v43[2];
                  LOBYTE(v229) = v43[3];
                  v186 = v229;
                  if ( v223 < 0x200 )
                  {
                    v183 = 0;
                    goto LABEL_393;
                  }
                  v187 = v223;
                  for ( k = v223 & (v223 - 1); k; k &= k - 1 )
                    v187 = k;
                  if ( v229 * v223 >= 0x100000 )
                  {
LABEL_392:
                    v185 = v187;
                    goto LABEL_393;
                  }
LABEL_408:
                  v183 = 0;
                }
                else
                {
                  HIBYTE(v224) = v43[8];
                  BYTE2(v224) = v43[9];
                  BYTE1(v224) = v43[10];
                  LOBYTE(v224) = v43[11];
                  v185 = v224;
                  HIBYTE(v230) = *v43;
                  BYTE6(v230) = v43[1];
                  BYTE5(v230) = v43[2];
                  BYTE4(v230) = v43[3];
                  BYTE3(v230) = v43[4];
                  BYTE2(v230) = v43[5];
                  BYTE1(v230) = v43[6];
                  LOBYTE(v230) = v43[7];
                  v186 = v230;
                  if ( v224 >= 0x200 )
                  {
                    v187 = v224;
                    for ( m = v224 & (v224 - 1); m; m &= m - 1 )
                      v187 = m;
                    if ( v230 * v224 >= 0x100000 )
                      goto LABEL_392;
                    goto LABEL_408;
                  }
                  v183 = 0;
                }
LABEL_393:
                if ( v183 )
                {
                  v192 = LockHandle.LockQueue.Next;
                  v193 = *(_DWORD *)(v227 + 3624) | 1;
                  *(_DWORD *)(v227 + 3624) = v193;
                  *(_DWORD *)(v227 + 932) = v185;
                  *(_QWORD *)(v227 + 3464) = v186;
                  if ( LOBYTE(v192->Next) == 0x9E )
                    *(_DWORD *)(v227 + 3624) = v193 | 2;
                }
                else
                {
                  if ( !*(_DWORD *)(v227 + 932) )
                  {
                    if ( (*(_BYTE *)(v227 + 136) & 2) != 0 )
                      v184 = 4096;
                    *(_DWORD *)(v227 + 932) = v184;
                  }
                  if ( (byte_140173448 & 0x20) != 0 )
                  {
                    v189 = &dword_140154ADC;
                    if ( v180 )
                      v189 = v180;
                    McTemplateK0zqjuuussssxq_EtwWriteTransfer(
                      BYTE1(v181),
                      v227 + 177,
                      v227 + 168,
                      *(_QWORD *)(*(_QWORD *)(v227 + 24) + 4784LL),
                      *(_DWORD *)(*(_QWORD *)(v227 + 24) + 56LL),
                      *(_QWORD *)(v227 + 24) + 5128LL,
                      v181,
                      SBYTE1(v181),
                      SBYTE2(v181),
                      v227 + 168,
                      v227 + 177,
                      v227 + 242,
                      (__int64)v189,
                      v186,
                      v185);
                  }
                  v190 = *(_DWORD *)(v227 + 3624);
                  *(_DWORD *)(v227 + 3628) = v185;
                  *(_QWORD *)(v227 + 3632) = v186;
                  *(_DWORD *)(v227 + 3624) = v190 ^ (v190 ^ (v190 + 4)) & 0x3FFFC;
                }
                _interlockedbittestandreset((volatile signed __int32 *)(v227 + 512), 8u);
              }
              goto LABEL_60;
            }
            v39 = v221;
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(v227 + 136) & 2) != 0
    && Next
    && !v39
    && LOBYTE(Next->Next) == 0x95
    && !BYTE1(Next->Next)
    && (*(_DWORD *)(v227 + 3624) & 1) != 0
    && *(_DWORD *)(v227 + 932)
    && (*(_DWORD *)(v227 + 3488) & 1) == 0
    && v43
    && MmIsAddressValid(v43) )
  {
    v195 = *(_QWORD *)(v227 + 3416);
    HIBYTE(LockHandle.LockQueue.Next) = v43[72];
    BYTE6(LockHandle.LockQueue.Next) = v43[73];
    BYTE5(LockHandle.LockQueue.Next) = v43[74];
    BYTE4(LockHandle.LockQueue.Next) = v43[75];
    BYTE3(LockHandle.LockQueue.Next) = v43[76];
    BYTE2(LockHandle.LockQueue.Next) = v43[77];
    BYTE1(LockHandle.LockQueue.Next) = v43[78];
    LOBYTE(LockHandle.LockQueue.Next) = v43[79];
    v196 = (char)LockHandle.LockQueue.Next;
    v197 = (__int64)LockHandle.LockQueue.Next * *(unsigned int *)(v227 + 932);
    if ( v195 != v197 )
    {
      *(_QWORD *)(v227 + 3416) = v197;
      v195 = v197;
    }
    if ( v195 )
    {
      if ( *(_QWORD *)(v227 + 3440) )
        goto LABEL_60;
      ZoneCountFromUnit = GetZoneCountFromUnit(v227);
      v204 = RaidAllocatePool(64LL, ZoneCountFromUnit, 1381654866LL, *(_QWORD *)(v227 + 8));
      *(_QWORD *)(v227 + 3440) = v204;
      if ( v204 )
      {
        v205 = (ULONG *)RaidAllocatePool(
                          64LL,
                          (ZoneCountFromUnit + 3) & 0xFFFFFFFC,
                          1381654866LL,
                          *(_QWORD *)(v227 + 8));
        if ( v205 )
        {
          RtlInitializeBitMap((PRTL_BITMAP)(v227 + 3448), v205, ZoneCountFromUnit);
          RtlClearAllBits((PRTL_BITMAP)(v227 + 3448));
          *(_DWORD *)(v227 + 3488) |= 1u;
          goto LABEL_60;
        }
      }
      v206 = *(void **)(v227 + 3440);
      if ( v206 )
      {
        ExFreePoolWithTag(v206, 0x525A6152u);
        *(_QWORD *)(v227 + 3440) = 0LL;
      }
      *(_BYTE *)(v227 + 507) |= 1u;
    }
    else
    {
      v198 = *(_QWORD *)(v227 + 160);
      v199 = 0LL;
      if ( v198 )
      {
        v199 = (const int *)(v198 + 90);
      }
      else
      {
        v200 = *(_QWORD *)(v227 + 152);
        if ( v200 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v227 + 24) + 608LL) + 184LL) & 0x40) != 0 )
          v199 = (const int *)(v200 + 41);
      }
      if ( (byte_140173444 & 2) != 0 )
      {
        v202 = &dword_140154ADC;
        if ( v199 )
          v202 = v199;
        v201 = *(_QWORD *)(v227 + 24);
        McTemplateK0zqjuuussssxx_EtwWriteTransfer(
          *(_DWORD *)(v227 + 104) >> 8,
          v201 + 5128,
          v227 + 242,
          *(_QWORD *)(v201 + 4784),
          *(_DWORD *)(v201 + 56),
          v201 + 5128,
          *(_DWORD *)(v227 + 104),
          BYTE1(*(_DWORD *)(v227 + 104)),
          BYTE2(*(_DWORD *)(v227 + 104)),
          v227 + 168,
          v227 + 177,
          v227 + 242,
          (__int64)v202,
          0,
          v196);
      }
      *(_DWORD *)(v227 + 3488) |= 2u;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v227 + 8));
  }
LABEL_60:
  v45 = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v46 = 4LL;
  if ( BYTE2(v45->SecurityQos) != 40 )
    v46 = 2LL;
  v47 = (__int64)v45[v46].SecurityQos;
  v48 = *(_QWORD *)(v47 + 224);
  if ( (*(_BYTE *)(v47 + 16) & 2) == 0 )
    goto LABEL_77;
  v49 = v47 + 48;
  v50 = *(_QWORD *)(v48 + 560) + ((unsigned __int64)*(unsigned int *)(v47 + 84) << 6);
  LockHandle.LockQueue.Next = *(_KSPIN_LOCK_QUEUE *volatile *)(v48 + 560);
  memset(&v239, 0, sizeof(v239));
  v51 = v50 + 64;
  v52 = KeGetCurrentIrql();
  v53 = (KSPIN_LOCK *)(v50 + 104);
  if ( v52 != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v53, &v239);
    v136 = (int)LockHandle.LockQueue.Next->Next;
    v137 = *(_BYTE *)(v47 + 16);
    if ( (v137 & 2) != 0 )
    {
      *(_BYTE *)(v47 + 16) = v137 & 0xFD;
      v138 = *(_QWORD *)v49;
      v139 = *(_QWORD *)v51;
      if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
        goto LABEL_244;
      v140 = *(_QWORD **)(v47 + 56);
      if ( *v140 != v49 )
        goto LABEL_244;
      *v140 = v138;
      *(_QWORD *)(v138 + 8) = v140;
      if ( (*(_DWORD *)(v47 + 96) & 1) != 0 )
      {
        v152 = v47 + 64;
        if ( *(_QWORD *)(v50 + 96) == v47 + 64 )
          *(_QWORD *)(v50 + 96) = *(_QWORD *)v152;
        v153 = *(_QWORD *)v152;
        if ( *(_QWORD *)(*(_QWORD *)v152 + 8LL) != v152 )
          goto LABEL_244;
        v154 = *(_QWORD **)(v47 + 72);
        if ( *v154 != v152 )
          goto LABEL_244;
        *v154 = v153;
        *(_QWORD *)(v153 + 8) = v154;
        *(_DWORD *)(v47 + 96) &= ~1u;
      }
      if ( (v136 & 4) == 0 && v139 == v49 )
      {
        if ( *(_QWORD *)v51 == v51 )
          *(_DWORD *)(v50 + 112) = -1;
        else
          *(_DWORD *)(v50 + 112) = *(_DWORD *)(*(_QWORD *)v51 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&v239);
    goto LABEL_73;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v53, &v239);
  v54 = (int)LockHandle.LockQueue.Next->Next;
  v55 = *(_BYTE *)(v47 + 16);
  if ( (v55 & 2) == 0 )
    goto LABEL_72;
  *(_BYTE *)(v47 + 16) = v55 & 0xFD;
  v56 = *(_QWORD *)v49;
  v57 = *(_QWORD *)v51;
  if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
    goto LABEL_244;
  v58 = *(_QWORD **)(v47 + 56);
  if ( *v58 != v49 )
    goto LABEL_244;
  *v58 = v56;
  *(_QWORD *)(v56 + 8) = v58;
  if ( (*(_DWORD *)(v47 + 96) & 1) == 0 )
    goto LABEL_68;
  v144 = v47 + 64;
  if ( *(_QWORD *)(v50 + 96) == v47 + 64 )
    *(_QWORD *)(v50 + 96) = *(_QWORD *)v144;
  v145 = *(_QWORD *)v144;
  if ( *(_QWORD *)(*(_QWORD *)v144 + 8LL) != v144 || (v146 = *(_QWORD **)(v47 + 72), *v146 != v144) )
LABEL_244:
    __fastfail(3u);
  *v146 = v145;
  *(_QWORD *)(v145 + 8) = v146;
  *(_DWORD *)(v47 + 96) &= ~1u;
LABEL_68:
  if ( (v54 & 4) == 0 && v57 == v49 )
  {
    if ( *(_QWORD *)v51 == v51 )
      *(_DWORD *)(v50 + 112) = -1;
    else
      *(_DWORD *)(v50 + 112) = *(_DWORD *)(*(_QWORD *)v51 + 32LL);
  }
LABEL_72:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v239);
LABEL_73:
  if ( StorEtwLoggingEnabled )
  {
    LockHandle.LockQueue = 0LL;
    IoGetActivityIdIrp(Irp, &LockHandle);
    if ( byte_140173442 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v60, v59, (unsigned int)&LockHandle, v61, 4);
  }
  v42 = 24LL;
LABEL_77:
  StorUnmapSenseInfo(v47, *(_QWORD *)(*(_QWORD *)(v48 + 24) + 8LL));
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v64 = *(_QWORD *)(v48 + 24);
    if ( !*(_QWORD *)(v64 + 5688) )
      goto LABEL_80;
    if ( (*(_BYTE *)(v64 + 112) & 0x10) != 0 )
      goto LABEL_447;
    goto LABEL_189;
  }
  v63 = *(_QWORD *)(v48 + 3608);
  if ( !v63 || !*(_QWORD *)(v63 + 104) )
  {
    v64 = *(_QWORD *)(v48 + 24);
    if ( !*(_QWORD *)(v64 + 5680) )
      goto LABEL_80;
LABEL_189:
    RaidAdapterReleaseCryptoKeyResources(v64, v47);
    goto LABEL_80;
  }
LABEL_447:
  RaidReleaseNvmeIceKeyResources(v48, v47);
LABEL_80:
  if ( BYTE2(v45->SecurityQos) == 40 )
  {
    if ( (*(_BYTE *)(v47 + 16) & 0x40) != 0 )
    {
      v116 = *(_QWORD *)(v47 + 752);
      LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)1;
      if ( v45 && v116 )
      {
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&LockHandle);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        v118 = PerformanceCounter;
        *(_BYTE *)(v116 + 3) = BYTE3(v45->SecurityQos);
        *(_DWORD *)(v116 + 12) = v45[1].SecurityQos;
        if ( ((__int64)v45[1].SecurityQos & 0x40) != 0 )
          *(_DWORD *)(v116 + 16) = HIDWORD(v45[2].AccessState);
        if ( BYTE3(v45->SecurityQos) == 48 )
          *(_DWORD *)(v116 + 64) = v45[1].FullCreateOptions;
        if ( !v45->FullCreateOptions )
        {
          AccessState = (unsigned int)v45[2].AccessState;
          v120 = 0LL;
          if ( AccessState )
          {
            while ( 1 )
            {
              v121 = *((unsigned int *)&v45[5].SecurityQos + v120);
              if ( (unsigned int)v121 >= 0x80 )
              {
                DesiredAccess = v45->DesiredAccess;
                if ( (unsigned int)v121 <= (unsigned int)DesiredAccess )
                {
                  v123 = (char *)v45 + v121;
                  if ( *(_DWORD *)((char *)&v45->SecurityQos + v121) == 64 && v121 + 40 <= DesiredAccess )
                    break;
                }
              }
              v120 = (unsigned int)(v120 + 1);
              if ( (unsigned int)v120 >= AccessState )
                goto LABEL_220;
            }
            *(_BYTE *)(v116 + 4) = v123[8];
            *(_QWORD *)(v116 + 32) = *((_QWORD *)v123 + 2);
            *(_BYTE *)(v116 + 11) = v123[9];
          }
          else
          {
LABEL_220:
            *(_BYTE *)(v116 + 3) = 48;
            *(_DWORD *)(v116 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          v124 = KeQueryPerformanceCounter(0LL);
        else
          v124.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v124.QuadPart > 0 && v124.QuadPart < v118.QuadPart )
          v62 = v124.QuadPart - v118.QuadPart - 1;
        else
          v62 = v124.QuadPart - v118.QuadPart;
        if ( UseQPCTime )
        {
          v126 = (int)LockHandle.LockQueue.Next;
          LOBYTE(v127) = 0;
          if ( LockHandle.LockQueue.Next && v62 )
          {
            v128 = 1000 * (v62 % (unsigned __int64)LockHandle.LockQueue.Next);
            v62 = v128 / (unsigned __int64)LockHandle.LockQueue.Next
                + 1000 * (v62 / (unsigned __int64)LockHandle.LockQueue.Next);
            v125.QuadPart = 10000 * (v128 % (unsigned __int64)LockHandle.LockQueue.Next)
                          % (unsigned __int64)LockHandle.LockQueue.Next;
            v127 = 10000
                 * (v128 % (unsigned __int64)LockHandle.LockQueue.Next)
                 / (unsigned __int64)LockHandle.LockQueue.Next
                 + 10000 * v62;
          }
        }
        else
        {
          LOBYTE(v127) = v62;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            v126,
            v125.LowPart,
            v62,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v127);
      }
      LOBYTE(v65) = 0;
      *(_QWORD *)(*(_QWORD *)(v47 + 752) + 48LL) = *(_QWORD *)(v47 + 176);
      *(_QWORD *)(*(_QWORD *)(v47 + 752) + 24LL) = *(_QWORD *)(v47 + 184);
      *(_QWORD *)(*(_QWORD *)(v47 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v47 + 752) + 40LL) = 0LL;
      Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(v47 + 752);
      *(_BYTE *)(v47 + 16) &= ~0x40u;
      *(_QWORD *)(v47 + 752) = 0LL;
    }
    else
    {
      LOBYTE(v65) = 0;
      v45[4].SecurityQos = 0LL;
      *(_QWORD *)&v45[2].DesiredAccess = *(_QWORD *)(v47 + 184);
      v45[4].AccessState = 0LL;
      if ( *(_QWORD *)(v47 + 192) )
      {
        if ( ((__int64)v45[1].SecurityQos & 0xC0) == 0xC0 )
        {
          v159 = (unsigned int)v45[2].AccessState;
          v62 = 0LL;
          if ( v159 )
          {
            while ( 1 )
            {
              v207 = *((unsigned int *)&v45[5].SecurityQos + (unsigned int)v62);
              if ( (unsigned int)v207 >= 0x80 )
              {
                v208 = v45->DesiredAccess;
                if ( (unsigned int)v207 <= (unsigned int)v208 )
                {
                  v209 = (char *)v45 + v207;
                  if ( *(_DWORD *)((char *)&v45->SecurityQos + v207) == 1 && v207 + 24 <= v208 )
                    break;
                }
              }
              v62 = (unsigned int)(v62 + 1);
              if ( (unsigned int)v62 >= v159 )
                goto LABEL_152;
            }
            if ( v209 )
              *((_QWORD *)v209 + 2) = *(_QWORD *)(v47 + 192);
          }
        }
      }
LABEL_152:
      v92 = (int)v45[1].SecurityQos;
      if ( (v92 & 0x2000000) != 0 )
        LODWORD(v45[1].SecurityQos) = v92 & 0xFDFFFFFF;
    }
  }
  else
  {
    LOBYTE(v65) = 0;
    v45[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v47 + 176);
    v45[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v47 + 184);
    AccessState_high = HIDWORD(v45->AccessState);
    v45[2].AccessState = 0LL;
    *(_QWORD *)&v45[1].DesiredAccess = 0LL;
    if ( (AccessState_high & 0x2000000) != 0 )
      HIDWORD(v45->AccessState) = AccessState_high & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(v47 + 112) )
  {
    v73 = *(_QWORD *)(v47 + 168);
    if ( *(_BYTE *)(v73 + 2) == 40 )
      v74 = *(_DWORD *)(v73 + 24) >> 6;
    else
      LOBYTE(v74) = *(_BYTE *)(v73 + 12) >> 6;
    v75 = (v74 & 1) == 0;
    if ( RaidVerifierEnabled )
      RaidFreeRemappedScatterGatherListMdl(v47);
    if ( *(_QWORD *)(v47 + 216) != -896LL )
    {
      v76 = *(_QWORD *)(*(_QWORD *)(v47 + 216) + 896LL);
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 8);
        if ( v77 )
        {
          v78 = *(void (__fastcall **)(__int64, _QWORD, bool))(v77 + 96);
          if ( v78 )
            v78(v76, *(_QWORD *)(v47 + 112), v75);
        }
      }
    }
    v79 = *(_QWORD *)(v47 + 152);
    *(_QWORD *)(v47 + 112) = 0LL;
    *(_QWORD *)(v47 + 144) = 0LL;
    if ( v79 )
    {
      if ( *(_QWORD *)(v47 + 216) != -896LL )
      {
        v80 = *(_QWORD *)(*(_QWORD *)(v47 + 216) + 896LL);
        if ( v80 )
        {
          v81 = *(_QWORD *)(v80 + 8);
          if ( v81 )
          {
            v82 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v81 + 96);
            if ( v82 )
              v82(v80, v79, 0LL);
          }
        }
      }
      *(_QWORD *)(v47 + 152) = 0LL;
    }
  }
  v67 = *(_QWORD *)(v47 + 104);
  if ( v67 && (*(_BYTE *)(v47 + 16) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v67 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v67);
    IoFreeMdl(*(PMDL *)(v47 + 104));
    *(_BYTE *)(v47 + 16) &= ~1u;
    *(_QWORD *)(v47 + 104) = 0LL;
  }
  v68 = *(struct _MDL **)(v47 + 136);
  if ( v68 )
  {
    MmUnlockPages(v68);
    IoFreeMdl(*(PMDL *)(v47 + 136));
    *(_QWORD *)(v47 + 136) = 0LL;
  }
  if ( BYTE2(v45->SecurityQos) != 40 )
    v42 = 12LL;
  if ( (*(_DWORD *)((_BYTE *)&v45->SecurityQos + v42) & 0x4000) == 0 )
  {
    v62 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v69 = *(_DWORD *)(v62 + *(_QWORD *)(v48 + 40));
    while ( (v69 & 1) == 0 )
    {
      v70 = v69;
      v69 = _InterlockedCompareExchange((volatile signed __int32 *)(v62 + *(_QWORD *)(v48 + 40)), v69 - 2, v69);
      if ( v70 == v69 )
        goto LABEL_94;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v48 + 520), 0, 0);
  }
LABEL_94:
  if ( v225 )
  {
    v32 = v227;
    goto LABEL_96;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 )
  {
    v86 = Irp;
    v32 = v227;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        21LL,
        &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        v227,
        Irp,
        Irp->IoStatus.Status);
  }
  else
  {
    v86 = Irp;
    v32 = v227;
  }
  if ( (qword_140172448 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v32 + 24), v86, v5);
  v87 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v86->Tail.CompletionKey + 21) = -84;
  if ( !v87 )
  {
    LockHandle.LockQueue = 0LL;
    IoGetActivityIdIrp(v86, &LockHandle);
    v89 = v86->Tail.Overlay.CurrentStackLocation;
    MajorFunction = v89->MajorFunction;
    if ( v89->MajorFunction != 15 )
    {
      if ( MajorFunction == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(
            v89,
            &EventNonReadWriteRequestComplete,
            &LockHandle,
            v86,
            v86->IoStatus.Status);
      }
      else if ( MajorFunction == 27 )
      {
        if ( v89->MinorFunction != 7 || v89->Parameters.Read.Length )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v89, &EventPnpRequestComplete, &LockHandle, v86, v86->IoStatus.Status);
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)v86->IoStatus.Information;
          if ( Information )
            v65 = *Information;
          McTemplateK0pqd_EtwWriteTransfer(
            (_DWORD)v89,
            v88,
            (unsigned int)&LockHandle,
            (_DWORD)v86,
            v65,
            v86->IoStatus.Status);
        }
      }
      goto LABEL_141;
    }
    if ( byte_140173441 < 0 )
    {
      v160 = v89->Parameters.Create.SecurityContext;
      v161 = 0;
      v162 = 0;
      v163 = 0;
      Flags = 0;
      LowPart_high = 0;
      v166 = 0;
      if ( BYTE2(v160->SecurityQos) == 40 )
      {
        v167 = 0LL;
        if ( v160->FullCreateOptions )
          goto LABEL_498;
        v168 = 0;
        v169 = (unsigned int)v160[2].AccessState;
        if ( !v169 )
          goto LABEL_498;
        while ( 1 )
        {
          v210 = *((unsigned int *)&v160[5].SecurityQos + v168);
          if ( (unsigned int)v210 >= 0x80 )
          {
            v211 = v160->DesiredAccess;
            if ( (unsigned int)v210 < (unsigned int)v211 )
            {
              v212 = (unsigned int)v210;
              v213 = *(_DWORD *)((char *)&v160->SecurityQos + v210);
              if ( v213 == 64 )
              {
                if ( v212 + 40 <= v211 )
                {
LABEL_467:
                  if ( *((_BYTE *)&v160->AccessState + v212 + 2) )
                    v167 = (unsigned __int8 *)&v160[1] + v212;
                  v161 = *((_BYTE *)&v160->AccessState + v212);
                  v215 = *(_ACCESS_STATE **)((char *)&v160->DesiredAccess + v212);
                  v162 = *((_BYTE *)&v160->AccessState + v212 + 1);
LABEL_470:
                  v86 = Irp;
                  if ( v167 )
                  {
                    LODWORD(v216) = *v167;
                    goto LABEL_476;
                  }
                  goto LABEL_498;
                }
              }
              else
              {
                v214 = v213 - 65;
                if ( v214 )
                {
                  if ( v214 == 1 && v212 + 40 <= v211 )
                  {
                    if ( *(_DWORD *)((char *)&v160->AccessState + v212 + 4) )
                      v167 = (unsigned __int8 *)&v160[1].AccessState + v212;
                    v161 = *((_BYTE *)&v160->AccessState + v212);
                    v215 = *(_ACCESS_STATE **)((char *)&v160[1].SecurityQos + v212);
                    v162 = *((_BYTE *)&v160->AccessState + v212 + 1);
                    goto LABEL_470;
                  }
                }
                else if ( v212 + 56 <= v211 )
                {
                  goto LABEL_467;
                }
              }
            }
          }
          if ( ++v168 >= v169 )
          {
            v215 = 0LL;
            goto LABEL_470;
          }
        }
      }
      LODWORD(v216) = LOBYTE(v160[3].SecurityQos);
      v215 = v160[1].AccessState;
      v162 = BYTE3(v160->AccessState);
      v161 = BYTE4(v160->SecurityQos);
      if ( BYTE2(v160->SecurityQos) )
        goto LABEL_498;
LABEL_476:
      LOBYTE(v216) = v216 - 8;
      if ( (v216 & 0x5D) != 0 )
      {
LABEL_498:
        v32 = v227;
        goto LABEL_141;
      }
      if ( BYTE3(v160->SecurityQos) == 1 || !v215 || !v162 )
      {
LABEL_494:
        if ( byte_140173441 < 0 )
        {
          if ( !v166 )
          {
            LowPart_high = 0;
            Flags = 0;
            v163 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v216,
            (_DWORD)v160,
            (unsigned int)&LockHandle,
            (_DWORD)v86,
            v86->IoStatus.Status,
            BYTE3(v160->SecurityQos),
            v161,
            v163,
            Flags,
            LowPart_high,
            (char)v86);
        }
        goto LABEL_498;
      }
      v217 = v215->OperationID.LowPart & 0x7F;
      if ( v217 == 114 || v217 == 115 )
      {
        v216 = (unsigned __int64)v215 + v162;
        v218 = 0;
        if ( (unsigned __int64)&v215->SecurityEvaluated <= v216 )
        {
          Flags = BYTE2(v215->OperationID.LowPart);
          v163 = BYTE1(v215->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(v215->OperationID.LowPart);
LABEL_492:
          v218 = 1;
        }
      }
      else
      {
        v216 = (unsigned __int64)v215 + v162;
        v218 = 0;
        if ( (unsigned __int64)&v215->SecurityEvaluated <= v216 )
        {
          v219 = (char *)&v215->Flags + 1;
          v163 = BYTE2(v215->OperationID.LowPart) & 0xF;
          v220 = v162;
          if ( (unsigned int)HIBYTE(v215->OperationID.HighPart) + 8 <= v162 )
            v220 = HIBYTE(v215->OperationID.HighPart) + 8;
          v216 = (unsigned __int64)v215 + v220;
          if ( (unsigned __int64)v219 <= v216 )
            Flags = v215->Flags;
          if ( (unsigned __int64)&v215->Flags + 2 > v216 )
            LowPart_high = 0;
          else
            LowPart_high = *v219;
          goto LABEL_492;
        }
      }
      v166 = v218 != 0;
      goto LABEL_494;
    }
  }
LABEL_141:
  IofCompleteRequest(v86, 1);
LABEL_96:
  v71 = 1;
LABEL_97:
  result = v233 & 0x1C;
  if ( (v233 & 0x1C) != 0xC && v71 )
  {
    LOBYTE(v62) = 1;
    v91 = StorRemoveIoGatewayItem((__int64)&v235, (__int64)&v234, v62);
    if ( v234 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v234 + 64) + 32LL) + 712LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v234 + 64) + 32LL) + 704LL),
        v234 - 120,
        &v235,
        0LL);
    if ( v91 )
      RaidAdapterRestartQueues(*(_QWORD *)(v32 + 24), 0);
    return RaidStartNextIoPacket(v32, v232, 0LL);
  }
  return result;
}
