/*
 * XREFs of NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160
 * Callers:
 *     NvmePendingIoDpcRoutine @ 0x14011B340 (NvmePendingIoDpcRoutine.c)
 * Callees:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     GetNVMePrpListBufferEntry @ 0x140047000 (GetNVMePrpListBufferEntry.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     GetNVMeSGLBufferContext @ 0x140119E00 (GetNVMeSGLBufferContext.c)
 *     IsFreeCommandIdAvailableInSubmissionQueue @ 0x140119E98 (IsFreeCommandIdAvailableInSubmissionQueue.c)
 *     StorRefillShadowQueue @ 0x14011E660 (StorRefillShadowQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeProcessPendingIoInSpecifiedGroup(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // r9
  union _SLIST_HEADER *v7; // r8
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // edx
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // ebx
  KIRQL v14; // r14
  __int64 v15; // r9
  signed __int32 v16; // r8d
  IRP *v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v26; // rbx
  __int64 v27; // r14
  char v28; // r11
  _IO_STACK_LOCATION *v29; // rdi
  __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // r10
  __int64 QuadPart; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  unsigned int v35; // r13d
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // edi
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rcx
  unsigned int v47; // r8d
  char v48; // al
  unsigned int v49; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rcx
  char v55; // al
  _IO_SECURITY_CONTEXT *v56; // rax
  int v57; // ebx
  __int64 v58; // rdi
  KIRQL v59; // al
  char *v60; // rbx
  __int64 v61; // rdx
  _MDL *v62; // rdi
  int v63; // eax
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rdx
  __int16 v67; // r13
  unsigned int v68; // edx
  char v69; // al
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r9
  __int64 NVMePrpListBufferEntry; // r9
  __int64 v73; // r10
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // r13
  unsigned __int8 v77; // di
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  bool v86; // al
  char v88; // si
  int v89; // r15d
  unsigned int v90; // edi
  __int64 v91; // rbx
  USHORT DepthSList; // ax
  unsigned int v93; // edx
  unsigned int v94; // r8d
  unsigned int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rcx
  unsigned int v98; // eax
  __int64 v99; // rcx
  _DWORD *v100; // rax
  int v101; // [rsp+28h] [rbp-D8h]
  int v102; // [rsp+38h] [rbp-C8h]
  __int64 v103; // [rsp+38h] [rbp-C8h]
  __int64 v104; // [rsp+40h] [rbp-C0h]
  int v105; // [rsp+48h] [rbp-B8h]
  unsigned __int8 MajorFunction; // [rsp+60h] [rbp-A0h]
  bool v107; // [rsp+60h] [rbp-A0h]
  KIRQL v108; // [rsp+60h] [rbp-A0h]
  char v109; // [rsp+61h] [rbp-9Fh] BYREF
  KIRQL v110; // [rsp+62h] [rbp-9Eh]
  unsigned int v111; // [rsp+64h] [rbp-9Ch]
  bool v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+70h] [rbp-90h]
  unsigned int v114; // [rsp+78h] [rbp-88h]
  __int64 v115; // [rsp+80h] [rbp-80h]
  __int16 v116; // [rsp+88h] [rbp-78h]
  __int64 v117; // [rsp+90h] [rbp-70h]
  __int16 v118[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v119; // [rsp+9Ch] [rbp-64h]
  int v120; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v121; // [rsp+A8h] [rbp-58h]
  _MDL *MdlAddress; // [rsp+B0h] [rbp-50h]
  unsigned int v123; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-40h]
  char *v125; // [rsp+C8h] [rbp-38h]
  int v126; // [rsp+D0h] [rbp-30h]
  __int64 v127; // [rsp+D8h] [rbp-28h] BYREF
  union _SLIST_HEADER *v128; // [rsp+E0h] [rbp-20h]
  __int64 v129; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-10h]
  __int128 v131; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v132; // [rsp+108h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 1104);
  v5 = *(_DWORD *)(a1 + 656);
  v111 = a2;
  v130 = a1;
  v120 = v5;
  v6 = *(_QWORD *)(8LL * a2 + v4);
  v117 = v6;
  v124 = 8LL * a2;
  if ( v2 )
    v7 = (union _SLIST_HEADER *)(192LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2LL * a2)
                               + *(_QWORD *)(a1 + 728)
                               - 192LL);
  else
    v7 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 728) + 192LL * a2);
  v8 = *(_DWORD *)(v6 + 64);
  v9 = 0;
  v119 = v8;
  v126 = v8;
  v128 = v7;
  while ( 2 )
  {
    v10 = v8;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v6 + 8LL * v8 + 264);
      if ( v11 )
      {
        if ( **(_DWORD **)(v11 + 16) )
          return 0;
        if ( *(_DWORD *)v11 || *(_DWORD *)(v11 + 48) != *(_DWORD *)(v11 + 52) )
          break;
      }
      if ( v5 != 1 )
      {
        v12 = v8 + 1;
        v8 = 0;
        if ( v12 < *(_DWORD *)(v6 + 4) )
          v8 = v12;
        v119 = v8;
        if ( v10 != v8 )
          continue;
      }
LABEL_178:
      v88 = 0;
      goto LABEL_179;
    }
    if ( !IsFreeCommandIdAvailableInSubmissionQueue(v7) )
    {
      v6 = v117;
      v88 = 1;
LABEL_179:
      v89 = v126;
      v90 = v126;
      while ( 1 )
      {
        v91 = *(_QWORD *)(v6 + 8LL * v90 + 264);
        if ( v91 )
        {
          if ( *(_DWORD *)v91 == 2
            || (DepthSList = ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v91 + 32) + 16LL * *(unsigned int *)(v91 + 8))),
                v6 = v117,
                DepthSList) )
          {
            if ( *(_DWORD *)(v91 + 48) == *(_DWORD *)(v91 + 52)
              || ((v93 = *(_DWORD *)(v91 + 48), v94 = *(_DWORD *)(v91 + 52), v93 != v94)
                ? (v93 <= v94
                 ? ((v96 = *(_QWORD *)(v91 + 24), *(_BYTE *)(*(_QWORD *)(v91 + 16) + 20LL))
                  ? (v97 = *(_QWORD *)(v96 + 1024))
                  : (v97 = *(_QWORD *)(v96 + 256)),
                    v95 = *(_DWORD *)(v97 + 4) - v94 + v93)
                 : (v95 = v93 - v94))
                : (v95 = 0),
                  v95 <= *(_DWORD *)(*(_QWORD *)(v91 + 16) + 8LL)) )
            {
              v88 = 1;
              if ( (unsigned int)StorRefillShadowQueue(*(_QWORD *)(v91 + 16), v90, 0LL) == 4 )
                return v88;
              v6 = v117;
            }
          }
        }
        if ( v5 == 1 )
          break;
        v98 = v90 + 1;
        v90 = 0;
        if ( v98 < *(_DWORD *)(v6 + 4) )
          v90 = v98;
        if ( v89 == v90 )
          break;
        if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
          return 1;
        v6 = v117;
      }
      if ( !v88 )
      {
        while ( v9 < *(_DWORD *)(v6 + 4) )
        {
          v99 = 8LL * v9 + 264;
          if ( *(_QWORD *)(v99 + v6) )
          {
            v100 = *(_DWORD **)(v99 + v6);
            if ( *v100 || v100[12] != v100[13] )
              return 1;
          }
          ++v9;
        }
      }
      return v88;
    }
    v13 = *(_DWORD *)(v3 + 136) & 2;
    v127 = 0LL;
    v14 = KfRaiseIrql(2u);
    do
    {
      v15 = *(unsigned int *)(v11 + 52);
      if ( (_DWORD)v15 == *(_DWORD *)(v11 + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v11, 0, 1) == 1 )
        {
          v85 = *(_QWORD *)(v11 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL) == 1 )
            _InterlockedDecrement((volatile signed __int32 *)(v85 + 956));
          else
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v85 + 16) + 952LL));
        }
        KeLowerIrql(v14);
        goto LABEL_168;
      }
      v16 = 0;
      if ( (unsigned int)(v15 + 1) < *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4LL) )
        v16 = v15 + 1;
    }
    while ( (_DWORD)v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 52), v16, v15) );
    do
      v17 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v15 + *(_QWORD *)(v11 + 56)), 0LL);
    while ( !v17 );
    if ( !*(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL)
      && (*(_DWORD *)v11 == 2
       || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v11 + 32) + 16LL * *(unsigned int *)(v11 + 8)))) )
    {
      if ( *(_DWORD *)(v11 + 48) == *(_DWORD *)(v11 + 52)
        || ((v18 = *(_DWORD *)(v11 + 48), v19 = *(_DWORD *)(v11 + 52), v18 != v19)
          ? (v18 <= v19
           ? ((v21 = *(_QWORD *)(v11 + 24), *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL))
            ? (v22 = *(_QWORD *)(v21 + 1024))
            : (v22 = *(_QWORD *)(v21 + 256)),
              v20 = *(_DWORD *)(v22 + 4) - v19 + v18)
           : (v20 = v18 - v19))
          : (v20 = 0),
            v20 <= *(_DWORD *)(*(_QWORD *)(v11 + 16) + 8LL)) )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 16LL), 1, 0) )
        {
          v23 = *(_QWORD *)(v11 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL) )
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(v23 + 1032),
              (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
              DelayedWorkQueue,
              *(PVOID *)(v11 + 24));
          else
            KeSetEvent((PRKEVENT)(v23 + 472), 0, 0);
        }
      }
    }
    KeLowerIrql(v14);
    if ( v13 )
    {
      v24 = NvmeNamespaceProcessRequest(*(_QWORD *)(v11 + 24), (__int64)v17, v111);
      goto LABEL_96;
    }
    if ( (int)IoGetIoAttributionHandle(v17, &v127) >= 0 )
    {
      CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
      v26 = v127;
      v131 = 0LL;
      LODWORD(v131) = 1;
      v132 = 0LL;
      DWORD1(v131) = CurrentStackLocation->MajorFunction | 0x200;
      *((_QWORD *)&v132 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v132 + 1);
      IoRecordIoAttribution(v26, &v131);
    }
    v27 = *(_QWORD *)(v11 + 24);
    v28 = 0;
    v29 = v17->Tail.Overlay.CurrentStackLocation;
    v30 = 0LL;
    v109 = 0;
    v118[0] = 0;
    v31 = 0;
    v32 = *(_QWORD *)(v27 + 16);
    QuadPart = 0LL;
    v129 = 0LL;
    v24 = 0;
    v123 = 0;
    SecurityContext = v29->Parameters.Create.SecurityContext;
    v35 = (unsigned int)SecurityContext;
    v36 = HIDWORD(*(_QWORD *)(v32 + 136));
    LOBYTE(v36) = v36 & 1;
    v115 = 0LL;
    v113 = 0LL;
    v110 = 0;
    v116 = 0;
    v114 = 0;
    v125 = (char *)v32;
    v121 = v36;
    if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
    {
      QuadPart = v29->Parameters.Read.ByteOffset.QuadPart;
      v113 = QuadPart;
    }
    else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
    {
      v30 = v29->Parameters.Read.ByteOffset.QuadPart;
      v115 = v30;
    }
    v37 = *(_DWORD *)(v27 + 96);
    if ( v37 == 5 || v37 == 6 )
    {
      v109 = 1;
      v24 = -1073741810;
      if ( QuadPart )
      {
        v39 = v111;
        goto LABEL_152;
      }
      goto LABEL_136;
    }
    v38 = *(_QWORD *)(v32 + 128);
    MajorFunction = v29->MajorFunction;
    v112 = v29->MajorFunction == 3;
    LODWORD(MdlAddress) = *(_DWORD *)(v38 + 200);
    if ( !v113 )
    {
      if ( (_BYTE)v36 )
      {
        v42 = v29->Parameters.Read.ByteOffset.QuadPart;
        goto LABEL_113;
      }
      if ( v30 )
      {
        v42 = *(_QWORD *)(v30 + 96);
        LODWORD(SecurityContext) = *(_DWORD *)(v30 + 116);
        *(_QWORD *)(v30 + 64) = 0LL;
        *(_QWORD *)(v30 + 72) = 0LL;
LABEL_113:
        if ( (_DWORD)SecurityContext )
        {
          v64 = *(unsigned int *)(v27 + 64);
          if ( !((unsigned int)SecurityContext % (unsigned int)v64) )
          {
            v65 = v42 / v64;
            if ( !(v42 % v64) )
            {
              v66 = *(_QWORD *)(v27 + 424);
              v67 = (unsigned int)SecurityContext / (unsigned int)v64;
              if ( v65 < v66 && v66 - v65 >= (unsigned int)SecurityContext / (unsigned int)v64 )
              {
                if ( (unsigned int)SecurityContext > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 128LL) + 200LL)
                  || (v68 = *(_DWORD *)(v27 + 420)) != 0
                  && ((unsigned int)SecurityContext > v68
                   || ((v69 = *(_BYTE *)(v27 + 419)) == 0
                     ? (LODWORD(v71) = (unsigned int)SecurityContext / v68,
                        v70 = ((unsigned int)SecurityContext % v68 - 1LL + v68 + v42 % v68) / v68)
                     : (v70 = (((unsigned int)SecurityContext & (v68 - 1))
                             + v68
                             + (unsigned __int64)((unsigned int)v42 & (v68 - 1))
                             - 1) >> v69,
                        v71 = (unsigned __int64)(unsigned int)SecurityContext >> *(_BYTE *)(v27 + 419)),
                       (unsigned int)(v71 + v70) > 1)) )
                {
                  v75 = NvmeSplitIoParallel(
                          v27,
                          (__int64)v17,
                          v112,
                          (unsigned int)SecurityContext,
                          v42,
                          (unsigned int)MdlAddress,
                          v111,
                          0LL,
                          0LL,
                          0LL);
                  v30 = v115;
                  v24 = v75;
                  QuadPart = v113;
                  v39 = v111;
                  goto LABEL_153;
                }
                NVMePrpListBufferEntry = 0LL;
                if ( (((unsigned int)SecurityContext
                     + ((LODWORD(v17->MdlAddress->StartVa) + v17->MdlAddress->ByteOffset) & 0xFFF)
                     + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
                {
                  NVMePrpListBufferEntry = (__int64)GetNVMePrpListBufferEntry(*(_QWORD *)(v27 + 16), v111);
                  if ( !NVMePrpListBufferEntry )
                  {
                    NVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v27 + 16), v111);
                    if ( !NVMePrpListBufferEntry )
                    {
                      v39 = v111;
                      NvmeNamespaceQueueIo(v27, (__int64)v17, v111);
                      v24 = -2147483631;
                      goto LABEL_110;
                    }
                  }
                }
                v73 = *(_QWORD *)(v27 + 16);
                if ( (*(_BYTE *)(v73 + 136) & 2) != 0 )
                  v74 = *(_QWORD *)(v73 + 728) + 192LL * v111;
                else
                  v74 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v73 + 872) + 2LL * v111)
                      + *(_QWORD *)(v73 + 728)
                      - 192LL;
                v103 = v42;
                v39 = v111;
                LOBYTE(v101) = 0;
                v63 = NvmeSubmitIoToSQ(
                        v27,
                        (__int64)v17,
                        v74,
                        NVMePrpListBufferEntry,
                        v111,
                        v101,
                        (unsigned int)SecurityContext,
                        v103,
                        v65,
                        v67,
                        v112,
                        0LL);
LABEL_109:
                v24 = v63;
LABEL_110:
                v30 = v115;
                QuadPart = v113;
                goto LABEL_153;
              }
            }
          }
          v24 = -1073741811;
        }
        QuadPart = v113;
LABEL_136:
        v39 = v111;
        goto LABEL_137;
      }
      v43 = v29->Parameters.Read.ByteOffset.QuadPart;
      if ( !v35 )
      {
LABEL_89:
        v17->IoStatus.Status = v24;
        IofCompleteRequest(v17, 0);
        v52 = *(_QWORD *)(v27 + 128);
        if ( *(_BYTE *)v52
          || _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v52 + 24) + v124), 0xFFFFFFFF) != 1 )
        {
          goto LABEL_95;
        }
        v53 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 128LL);
        if ( NvmeNamespaceCheckAndAcquirePoFx(v27) )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v27 + 128) + 8LL), 0LL, 2LL);
          NvmeNamespaceReleasePoFx(v27);
        }
        v54 = *(_QWORD *)(v53 + 160);
        if ( *(_BYTE *)v54 != 1 )
          goto LABEL_95;
        goto LABEL_94;
      }
      v44 = *(unsigned int *)(v27 + 64);
      if ( v35 % (unsigned int)v44
        || (v121 = v43 / v44, v45 = v43 / v44, v43 % v44)
        || (v46 = *(_QWORD *)(v27 + 424), v114 = v35 / (unsigned int)v44, v45 >= v46)
        || v46 - v45 < v35 / (unsigned int)v44 )
      {
        v24 = -1073741811;
        goto LABEL_89;
      }
      if ( v35 <= (unsigned int)MdlAddress )
      {
        v47 = *(_DWORD *)(v27 + 420);
        if ( !v47 )
        {
LABEL_87:
          NVMeSGLBufferContext = GetNVMeSGLBufferContext(v32, v111);
          v115 = NVMeSGLBufferContext;
          v51 = NVMeSGLBufferContext;
          if ( NVMeSGLBufferContext )
          {
            *(_QWORD *)(NVMeSGLBufferContext + 40) = v17;
            v55 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
            *(_QWORD *)(v51 + 96) = v43;
            *(_QWORD *)(v51 + 32) = v27;
            *(_QWORD *)(v51 + 104) = v121;
            *(_DWORD *)(v51 + 112) = v114;
            *(_BYTE *)(v51 + 126) = v55 | (MajorFunction == 3);
            *(_DWORD *)(v51 + 116) = v35;
            *(_QWORD *)(v51 + 64) = 0LL;
            *(_QWORD *)(v51 + 72) = 0LL;
            *(_QWORD *)(v51 + 56) = v29->Parameters.Read.ByteOffset.QuadPart;
            v56 = v29->Parameters.Create.SecurityContext;
            v29->Parameters.Read.ByteOffset.QuadPart = v51;
            *(_QWORD *)(v51 + 48) = v56;
            v29->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
            v57 = *(unsigned __int16 *)(v51 + 124);
            v58 = *(_QWORD *)(v51 + 16);
            v125 = (char *)v17->MdlAddress->StartVa + v17->MdlAddress->ByteOffset;
            *(_QWORD *)(v51 + 80) = v125;
            MdlAddress = v17->MdlAddress;
            v121 = *(_QWORD *)(v27 + 16);
            v59 = KfRaiseIrql(2u);
            v105 = v57;
            v60 = v125;
            v104 = v58;
            v61 = *(_QWORD *)(v121 + 128);
            v62 = MdlAddress;
            v110 = v59;
            v107 = MajorFunction != 3;
            LOBYTE(v102) = v107;
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v61 + 1160) + 8LL) + 112LL))(
                    *(_QWORD *)(v61 + 1160),
                    *(_QWORD *)(v61 + 8),
                    MdlAddress,
                    v125,
                    v35,
                    NvmeContinueScatterGatherProcessIO,
                    v51,
                    v102,
                    v104,
                    v105);
            if ( v24 == -1073741789 )
            {
              LOBYTE(v102) = v107;
              v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v121 + 128) + 1160LL) + 8LL) + 88LL))(
                      *(_QWORD *)(*(_QWORD *)(v121 + 128) + 1160LL),
                      *(_QWORD *)(*(_QWORD *)(v121 + 128) + 8LL),
                      v62,
                      v60,
                      v35,
                      NvmeContinueScatterGatherProcessIO,
                      v115,
                      v102);
            }
            if ( v110 < 2u )
              KeLowerIrql(v110);
            v30 = v115;
            QuadPart = v113;
            v39 = v111;
            if ( v24 >= 0 )
              v24 = 259;
            goto LABEL_153;
          }
          v24 = -1073741670;
          goto LABEL_89;
        }
        if ( v35 <= v47 )
        {
          v48 = *(_BYTE *)(v27 + 419);
          v49 = v48
              ? ((unsigned __int64)v35 >> v48)
              + ((((v47 - 1) & (unsigned int)v43) - 1LL + v47 + (unsigned __int64)(v35 & (v47 - 1))) >> v48)
              : v35 / v47 + (unsigned int)((v35 % v47 - 1LL + v47 + v43 % v47) / v47);
          if ( v49 <= 1 )
          {
            v32 = (__int64)v125;
            goto LABEL_87;
          }
        }
      }
      v39 = v111;
      v63 = NvmeSplitIoParallel(v27, (__int64)v17, v112, v35, v43, (unsigned int)MdlAddress, v111, 0LL, 0LL, 0LL);
      goto LABEL_109;
    }
    QuadPart = v113;
    v39 = v111;
LABEL_51:
    v40 = QuadPart;
    while ( 2 )
    {
      if ( v40 )
      {
LABEL_53:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 3) != 3 )
        {
          if ( !(_BYTE)v36 )
          {
            if ( *(_DWORD *)(v40 + 104) == 1 )
            {
              LOWORD(v31) = v31 + 1;
              v114 = v31;
            }
LABEL_65:
            v40 = *(_QWORD *)(v40 + 96);
            if ( !(_WORD)v31 )
              continue;
            if ( !v40 )
            {
              v31 = 0;
              v114 = 0;
              goto LABEL_51;
            }
            goto LABEL_53;
          }
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 1) != 1 )
            goto LABEL_65;
        }
        v24 = NvmeSendSplitIo(v40, v39, 0LL, 0LL, (bool *)&v109, &v129, &v123, v118, v28);
        if ( v24 == 259 )
        {
          v41 = *(_QWORD *)(v27 + 16);
          v28 = (unsigned __int16)++v116 % (unsigned int)*(unsigned __int8 *)(v41 + 1730) == 0;
          v110 = v28;
        }
        else
        {
          if ( v24 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 3, 4);
            NvmeNamespaceQueueIo(v27, *(_QWORD *)(v40 + 24), v39);
            goto LABEL_95;
          }
          if ( !*(_WORD *)(v40 + 34) )
          {
            v109 = 1;
LABEL_69:
            v30 = v115;
            QuadPart = v113;
            goto LABEL_152;
          }
          if ( v109 )
            goto LABEL_69;
          v28 = v110;
        }
        QuadPart = v113;
        LOBYTE(v36) = v121;
        v31 = v114;
        goto LABEL_65;
      }
      break;
    }
    v30 = v115;
LABEL_152:
    _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
LABEL_153:
    if ( v24 == -2147483631 || v24 >= 1 )
      goto LABEL_95;
LABEL_137:
    if ( v30 )
    {
      v76 = *(_QWORD *)(v30 + 24);
      if ( v76 )
      {
        v77 = *(_BYTE *)(v30 + 126) & 1;
        v78 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 128LL);
        v108 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v78 + 1160) + 8LL) + 96LL))(
          *(_QWORD *)(v78 + 1160),
          v76,
          v77 ^ 1u);
        if ( v108 < 2u )
          KeLowerIrql(v108);
        v30 = v115;
      }
      v79 = *(_QWORD *)(v30 + 88);
      v80 = v124;
      if ( v79 )
      {
        v81 = *(_QWORD *)(v27 + 16);
        *(_QWORD *)(v79 + 88) = 0LL;
        *(_DWORD *)(v79 + 108) = 0;
        *(_DWORD *)(v79 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v81 + 888) + v80), (PSLIST_ENTRY)v79);
      }
      FreeNVMeSGLBufferContext(*(_QWORD *)(v27 + 16), v115, 1);
      v17->IoStatus.Status = v24;
      IofCompleteRequest(v17, 0);
      v82 = *(_QWORD *)(v27 + 128);
      if ( !*(_BYTE *)v82
        && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v82 + 24) + v80), 0xFFFFFFFF) == 1 )
      {
        v83 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 128LL);
        if ( NvmeNamespaceCheckAndAcquirePoFx(v27) )
          goto LABEL_147;
        goto LABEL_148;
      }
      goto LABEL_95;
    }
    if ( !QuadPart )
      goto LABEL_89;
    if ( v109 )
    {
      FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(v27 + 16), QuadPart);
      FreeNVMeChainedIoSplitContext(*(_QWORD *)(v27 + 16), v39, v113, (__int64)v17);
      v17->IoStatus.Status = v24;
      IofCompleteRequest(v17, 0);
      v84 = *(_QWORD *)(v27 + 128);
      if ( !*(_BYTE *)v84
        && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v84 + 24) + v124), 0xFFFFFFFF) == 1 )
      {
        v83 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 128LL);
        if ( NvmeNamespaceCheckAndAcquirePoFx(v27) )
        {
LABEL_147:
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v27 + 128) + 8LL), 0LL, 2LL);
          NvmeNamespaceReleasePoFx(v27);
        }
LABEL_148:
        v54 = *(_QWORD *)(v83 + 160);
        if ( *(_BYTE *)v54 == 1 )
LABEL_94:
          PoFxIdleComponent(**(_QWORD **)(v54 + 8), 0LL, 2LL);
      }
    }
LABEL_95:
    v8 = v119;
LABEL_96:
    if ( v24 != 259 )
    {
      if ( v24 == -2147483631 )
      {
        v5 = v120;
      }
      else
      {
        if ( v24 != -2147483622 )
          goto LABEL_99;
LABEL_168:
        v5 = v120;
        if ( v120 != 1 )
        {
LABEL_169:
          if ( ++v8 >= *(_DWORD *)(v117 + 4) )
            v8 = 0;
          v119 = v8;
          goto LABEL_172;
        }
      }
      v6 = v117;
      goto LABEL_178;
    }
LABEL_99:
    v5 = v120;
    if ( v120 != 1 )
      goto LABEL_169;
LABEL_172:
    v86 = StorCheckDpcWatchdogTimerExpire(0xAu, 5u);
    v6 = v117;
    v3 = v130;
    v7 = v128;
    if ( !v86 )
      continue;
    return 1;
  }
}
