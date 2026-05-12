/*
 * XREFs of NvmeProcessPendingIo @ 0x14003A190
 * Callers:
 *     StorRestartDeviceIoQueue @ 0x140031C58 (StorRestartDeviceIoQueue.c)
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400E51B0 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     StorRefillShadowQueue @ 0x14011E660 (StorRefillShadowQueue.c)
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
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeProcessPendingIo(__int64 a1, union _SLIST_HEADER *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  char v6; // r12
  __int64 v7; // r13
  unsigned int v8; // r15d
  int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rdi
  KIRQL v13; // r14
  __int64 v14; // r8
  int v15; // r14d
  _DWORD *v17; // r9
  unsigned int v18; // r9d
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // r14d
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rbx
  KIRQL v27; // r13
  __int64 v28; // r8
  signed __int32 v29; // edx
  unsigned int v30; // eax
  signed __int32 v31; // edx
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  PIRP v39; // r14
  __int64 v40; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v42; // r10
  __int64 QuadPart; // r8
  PIRP v44; // rbx
  unsigned int v45; // edx
  char *v46; // rax
  _IO_STACK_LOCATION *v47; // rcx
  union _SLIST_HEADER *v48; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // r9
  unsigned int v50; // r11d
  int v51; // eax
  _LARGE_INTEGER v52; // rax
  _LARGE_INTEGER v53; // rcx
  int v54; // eax
  _LARGE_INTEGER v55; // rdx
  IRP *v56; // r11
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  char *v61; // rax
  __int64 v62; // r8
  char v63; // al
  __int64 v64; // rdi
  unsigned int v65; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v67; // r14
  __int64 v68; // rdx
  char v69; // al
  char v70; // cl
  union _SLIST_HEADER *v71; // rax
  _IO_STACK_LOCATION *v72; // rcx
  _IO_SECURITY_CONTEXT *v73; // rax
  __int64 v74; // rdi
  _MDL *MdlAddress; // rax
  int v76; // ebx
  KIRQL v77; // al
  int v78; // ebx
  unsigned __int64 Alignment; // rdx
  char *v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int8 v90; // di
  __int64 v91; // rbx
  KIRQL v92; // al
  __int64 v93; // rcx
  __int64 v94; // rdx
  PIRP v95; // rbx
  __int64 v96; // rcx
  IRP *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbx
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rdx
  char *v103; // r8
  unsigned int v104; // edx
  char v105; // al
  unsigned int v106; // eax
  _MDL *v107; // rax
  __int64 v108; // r14
  __int64 v109; // r14
  __int64 v110; // rax
  unsigned int v111; // edx
  unsigned int v112; // r8d
  unsigned int v113; // edx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  int v117; // edi
  PIRP v118; // r13
  _IO_STACK_LOCATION *v119; // rbx
  _IO_STACK_LOCATION *v120; // rax
  __int64 v121; // rbx
  _IO_STACK_LOCATION *v122; // rcx
  unsigned int v123; // edx
  PIRP v124; // r8
  __int64 v125; // rax
  unsigned __int64 ProviderId; // r10
  char *v127; // r11
  unsigned int v128; // r9d
  int v129; // eax
  char v130; // zf
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned int v134; // r8d
  unsigned __int8 v135; // di
  __int64 v136; // rbx
  KIRQL v137; // al
  __int64 v138; // rcx
  void (__fastcall *UserApcRoutine)(void *, _IO_STATUS_BLOCK *, unsigned int); // rdx
  __int64 v140; // rcx
  union _SLIST_HEADER *v141; // rax
  __int64 v142; // rax
  __int64 v143; // r13
  __int64 v144; // rcx
  __int64 v145; // rdx
  union _SLIST_HEADER *v146; // rcx
  unsigned __int64 UserApcContext; // rdi
  unsigned __int64 v148; // rdi
  __int64 v149; // rax
  __int64 v150; // r13
  unsigned __int64 v151; // r8
  unsigned __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  char *v154; // rax
  unsigned int v155; // edx
  char v156; // al
  __int64 v157; // r11
  unsigned int v158; // edx
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rtt
  __int64 v161; // rax
  __int64 v162; // rdx
  char v163; // al
  _IRP *v164; // rcx
  _MDL *v165; // rax
  int v166; // ebx
  __int64 v167; // rdi
  KIRQL v168; // al
  unsigned int v169; // ebx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  int v173; // eax
  unsigned __int64 v174; // r9
  unsigned __int64 v175; // rcx
  unsigned __int64 v176; // rdx
  char *v177; // r11
  unsigned int v178; // r8d
  char v179; // cl
  unsigned int v180; // eax
  __int64 NewNVMePrpListBufferEntry; // r9
  __int64 v182; // r11
  __int64 v183; // r8
  int v184; // eax
  __int64 v185; // rax
  __int64 v186; // rax
  int v187; // [rsp+28h] [rbp-D8h]
  int v188; // [rsp+38h] [rbp-C8h]
  __int64 v189; // [rsp+40h] [rbp-C0h]
  int v190; // [rsp+48h] [rbp-B8h]
  int v191; // [rsp+48h] [rbp-B8h]
  char v192; // [rsp+60h] [rbp-A0h]
  KIRQL v193; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v194; // [rsp+60h] [rbp-A0h]
  KIRQL v195; // [rsp+60h] [rbp-A0h]
  char v196; // [rsp+61h] [rbp-9Fh] BYREF
  char MajorFunction; // [rsp+62h] [rbp-9Eh] BYREF
  char v198; // [rsp+63h] [rbp-9Dh]
  unsigned __int16 v199; // [rsp+64h] [rbp-9Ch]
  char v200[2]; // [rsp+66h] [rbp-9Ah] BYREF
  unsigned int v201; // [rsp+68h] [rbp-98h]
  unsigned int v202; // [rsp+6Ch] [rbp-94h]
  int v203; // [rsp+70h] [rbp-90h]
  PIRP Irp; // [rsp+78h] [rbp-88h]
  _LARGE_INTEGER ByteOffset; // [rsp+80h] [rbp-80h]
  __int64 v206; // [rsp+88h] [rbp-78h]
  unsigned int v207; // [rsp+90h] [rbp-70h]
  char *v208; // [rsp+98h] [rbp-68h]
  __int64 v209; // [rsp+A0h] [rbp-60h]
  unsigned int v210; // [rsp+A8h] [rbp-58h]
  union _SLIST_HEADER *NVMePrpListBufferEntry; // [rsp+B0h] [rbp-50h]
  PIRP v212; // [rsp+B8h] [rbp-48h]
  _LARGE_INTEGER v213; // [rsp+C0h] [rbp-40h]
  union _SLIST_HEADER *v214; // [rsp+C8h] [rbp-38h]
  _MDL *v215; // [rsp+D0h] [rbp-30h] BYREF
  int i; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v217; // [rsp+DCh] [rbp-24h]
  union _SLIST_HEADER *v218; // [rsp+E0h] [rbp-20h]
  __int16 v219[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v220; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 MasterIrp; // [rsp+F0h] [rbp-10h]
  _DWORD *v222; // [rsp+F8h] [rbp-8h]
  _IO_STACK_LOCATION *v223; // [rsp+100h] [rbp+0h] BYREF
  int v224; // [rsp+108h] [rbp+8h] BYREF
  __int64 v225; // [rsp+110h] [rbp+10h] BYREF
  __int64 v226; // [rsp+118h] [rbp+18h] BYREF
  __int64 v227; // [rsp+120h] [rbp+20h] BYREF
  __int128 v228; // [rsp+128h] [rbp+28h] BYREF
  __int128 v229; // [rsp+138h] [rbp+38h] BYREF

  v3 = *(_QWORD *)(a1 + 1104);
  v4 = a3;
  v201 = a3;
  v6 = 0;
  v218 = a2;
  v202 = 0;
  v7 = *(_QWORD *)(8LL * a3 + v3);
  v212 = (PIRP)(8LL * a3);
  v8 = *(_DWORD *)(v7 + 64);
  v9 = *(_DWORD *)(a1 + 656);
  v222 = g_CpuInfo;
  for ( i = v9; ; v9 = i )
  {
    v10 = v8;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v7 + 8LL * v8 + 264);
      if ( *(_DWORD *)v11 || *(_DWORD *)(v11 + 48) != *(_DWORD *)(v11 + 52) )
        break;
      if ( v9 != 1 )
      {
        v30 = v8 + 1;
        v8 = 0;
        if ( v30 < *(_DWORD *)(v7 + 4) )
          v8 = v30;
        if ( v10 != v8 )
          continue;
      }
      goto LABEL_13;
    }
    v12 = *(_DWORD *)(a1 + 136) & 2;
    v225 = 0LL;
    v13 = KfRaiseIrql(2u);
    while ( 1 )
    {
      v14 = *(unsigned int *)(v11 + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(v11 + 48) )
        break;
      v31 = 0;
      if ( (unsigned int)(v14 + 1) < *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4LL) )
        v31 = v14 + 1;
      if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 52), v31, v14) )
      {
        do
          Irp = (PIRP)_InterlockedExchange64((volatile __int64 *)(8 * v14 + *(_QWORD *)(v11 + 56)), 0LL);
        while ( !Irp );
        if ( !*(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL)
          && (*(_DWORD *)v11 == 2
           || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v11 + 32) + 16LL * *(unsigned int *)(v11 + 8)))) )
        {
          if ( *(_DWORD *)(v11 + 48) == *(_DWORD *)(v11 + 52)
            || ((v33 = *(_DWORD *)(v11 + 48), v34 = *(_DWORD *)(v11 + 52), v33 != v34)
              ? (v33 <= v34
               ? ((v36 = *(_QWORD *)(v11 + 24), *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL))
                ? (v37 = *(_QWORD *)(v36 + 1024))
                : (v37 = *(_QWORD *)(v36 + 256)),
                  v35 = *(_DWORD *)(v37 + 4) - v34 + v33)
               : (v35 = v33 - v34))
              : (v35 = 0),
                v35 <= *(_DWORD *)(*(_QWORD *)(v11 + 16) + 8LL)) )
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 16LL), 1, 0) )
            {
              v38 = *(_QWORD *)(v11 + 24);
              if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL) )
                IoQueueWorkItem(
                  *(PIO_WORKITEM *)(v38 + 1032),
                  NvmeControllerRefillShadowQueueRoutine,
                  DelayedWorkQueue,
                  *(PVOID *)(v11 + 24));
              else
                KeSetEvent((PRKEVENT)(v38 + 472), 0, 0);
            }
          }
        }
        KeLowerIrql(v13);
        if ( v12 )
        {
          v4 = v201;
          v15 = NvmeNamespaceProcessRequest(*(_QWORD *)(v11 + 24), Irp, v201);
          goto LABEL_144;
        }
        v39 = Irp;
        if ( (int)IoGetIoAttributionHandle(Irp, &v225) >= 0 )
        {
          v40 = v225;
          v228 = 0LL;
          LODWORD(v228) = 1;
          CurrentStackLocation = v39->Tail.Overlay.CurrentStackLocation;
          v229 = 0LL;
          DWORD1(v228) = CurrentStackLocation->MajorFunction | 0x200;
          *((_QWORD *)&v229 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v229 + 1);
          IoRecordIoAttribution(v40, &v228);
        }
        v42 = *(_QWORD *)(v11 + 24);
        QuadPart = 0LL;
        NVMePrpListBufferEntry = v218;
        v44 = v39;
        v200[0] = 0;
        v45 = 0;
        v46 = *(char **)(v42 + 16);
        v6 = 0;
        v219[0] = 0;
        v15 = 0;
        v47 = v44->Tail.Overlay.CurrentStackLocation;
        v226 = 0LL;
        v224 = 0;
        v48 = (union _SLIST_HEADER *)HIDWORD(*((_QWORD *)v46 + 17));
        LOBYTE(v48) = (unsigned __int8)v48 & 1;
        v209 = 0LL;
        ByteOffset.QuadPart = 0LL;
        v199 = 0;
        SecurityContext = v47->Parameters.Create.SecurityContext;
        v208 = v46;
        v50 = (unsigned int)SecurityContext;
        v206 = v42;
        v223 = v47;
        v192 = 0;
        v210 = 0;
        v214 = v48;
        v196 = 0;
        v215 = (_MDL *)SecurityContext;
        v203 = (int)SecurityContext;
        if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
        {
          ByteOffset = v47->Parameters.Read.ByteOffset;
        }
        else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
        {
          QuadPart = v47->Parameters.Read.ByteOffset.QuadPart;
          v209 = QuadPart;
          v203 = 0;
        }
        v51 = *(_DWORD *)(v42 + 96);
        if ( v51 == 5 || v51 == 6 )
        {
          v52 = ByteOffset;
          v15 = -1073741810;
          v200[0] = 1;
          Irp = v44;
          if ( ByteOffset.QuadPart )
          {
            v4 = v201;
            goto LABEL_97;
          }
          goto LABEL_150;
        }
        v130 = v47->MajorFunction == 3;
        MajorFunction = v47->MajorFunction;
        v198 = v130;
        v207 = *(_DWORD *)(*((_QWORD *)v208 + 16) + 200LL);
        v52 = ByteOffset;
        if ( ByteOffset.QuadPart )
        {
          v4 = v201;
LABEL_78:
          v213 = v52;
          v53 = v52;
          while ( 2 )
          {
            if ( v53.QuadPart )
            {
LABEL_80:
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v53.QuadPart + 104), 4, 3) != 3 )
              {
                if ( !(_BYTE)v214 )
                {
                  if ( *(_DWORD *)(v53.QuadPart + 104) == 1 )
                  {
                    LOWORD(v45) = v45 + 1;
                    v210 = v45;
                  }
LABEL_91:
                  v53 = *(_LARGE_INTEGER *)(v53.QuadPart + 96);
                  v52 = ByteOffset;
                  v213 = v53;
                  if ( !(_WORD)v45 )
                    continue;
                  if ( !v53.QuadPart )
                  {
                    v45 = 0;
                    v210 = 0;
                    goto LABEL_78;
                  }
                  goto LABEL_80;
                }
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v53.QuadPart + 104), 4, 1) != 1 )
                  goto LABEL_91;
              }
              v54 = NvmeSendSplitIo(
                      v53.LowPart,
                      v4,
                      (_DWORD)NVMePrpListBufferEntry,
                      0,
                      (__int64)v200,
                      (__int64)&v226,
                      (__int64)&v224,
                      (__int64)v219,
                      v192);
              v15 = v54;
              if ( v54 == 259 )
              {
                v42 = v206;
                ++v199;
                v6 = 1;
                NVMePrpListBufferEntry = 0LL;
                v53 = v213;
                v192 = v199 % (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v206 + 16) + 1730LL) == 0;
              }
              else
              {
                if ( v54 == -2147483631 )
                {
                  v55 = v213;
                  _InterlockedCompareExchange((volatile signed __int32 *)(v213.QuadPart + 104), 3, 4);
                  NvmeNamespaceQueueIo(v206, *(_QWORD *)(v55.QuadPart + 24), v4);
                  goto LABEL_144;
                }
                v53 = v213;
                v42 = v206;
                if ( !*(_WORD *)(v213.QuadPart + 34) )
                {
                  v200[0] = 1;
LABEL_95:
                  v52 = ByteOffset;
                  break;
                }
                if ( v200[0] )
                  goto LABEL_95;
              }
              v45 = v210;
              goto LABEL_91;
            }
            break;
          }
          QuadPart = v209;
LABEL_97:
          _interlockedbittestandreset((volatile signed __int32 *)(v52.QuadPart + 108), 0);
LABEL_98:
          if ( v15 == -2147483631 || v15 >= 1 )
          {
LABEL_144:
            if ( v15 != 259 )
              goto LABEL_9;
            goto LABEL_46;
          }
LABEL_151:
          if ( QuadPart )
          {
            v208 = *(char **)(QuadPart + 24);
            if ( v208 )
            {
              v90 = *(_BYTE *)(QuadPart + 126) & 1;
              v91 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 128LL);
              v92 = KfRaiseIrql(2u);
              v93 = *(_QWORD *)(v91 + 1160);
              LOBYTE(v199) = v92;
              (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)(v93 + 8) + 96LL))(v93, v208, v90 ^ 1u);
              if ( (unsigned __int8)v199 < 2u )
                KeLowerIrql(v199);
              QuadPart = v209;
              v42 = v206;
              v4 = v201;
            }
            v94 = *(_QWORD *)(QuadPart + 88);
            v95 = v212;
            if ( v94 )
            {
              v96 = *(_QWORD *)(v42 + 16);
              *(_QWORD *)(v94 + 88) = 0LL;
              *(_DWORD *)(v94 + 108) = 0;
              *(_DWORD *)(v94 + 104) = 0;
              ExpInterlockedPushEntrySList(
                *(PSLIST_HEADER *)((char *)&v95->Type + *(_QWORD *)(v96 + 888)),
                (PSLIST_ENTRY)v94);
              v42 = v206;
            }
            LOBYTE(QuadPart) = 1;
            FreeNVMeSGLBufferContext(*(_QWORD *)(v42 + 16), v209, QuadPart);
            v97 = Irp;
            Irp->IoStatus.Status = v15;
            IofCompleteRequest(v97, 0);
            v98 = *(_QWORD *)(v206 + 128);
            if ( *(_BYTE *)v98
              || _InterlockedExchangeAdd(
                   *(volatile signed __int32 **)((char *)&v95->Type + *(_QWORD *)(v98 + 24)),
                   0xFFFFFFFF) != 1 )
            {
              goto LABEL_144;
            }
            v99 = v206;
            v208 = *(char **)(*(_QWORD *)(v206 + 16) + 128LL);
            if ( NvmeNamespaceCheckAndAcquirePoFx(v206) )
            {
LABEL_161:
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v99 + 128) + 8LL), 0LL, 2LL);
              NvmeNamespaceReleasePoFx(v99);
            }
LABEL_162:
            v89 = *((_QWORD *)v208 + 20);
            if ( *(_BYTE *)v89 != 1 )
              goto LABEL_144;
LABEL_143:
            PoFxIdleComponent(**(_QWORD **)(v89 + 8), 0LL, 2LL);
            goto LABEL_144;
          }
          if ( v52.QuadPart )
          {
            if ( !v200[0] )
              goto LABEL_144;
            ((void (__fastcall *)(_QWORD, _QWORD))FreeAllSglAndContextInChainedSplitIoContext)(
              *(_QWORD *)(v42 + 16),
              (_LARGE_INTEGER)v52.QuadPart);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FreeNVMeChainedIoSplitContext)(
              *(_QWORD *)(v206 + 16),
              v4,
              (_LARGE_INTEGER)ByteOffset.QuadPart,
              v44);
            v44->IoStatus.Status = v15;
            IofCompleteRequest(v44, 0);
            v99 = v206;
            v110 = *(_QWORD *)(v206 + 128);
            if ( *(_BYTE *)v110
              || _InterlockedExchangeAdd(
                   *(volatile signed __int32 **)((char *)&v212->Type + *(_QWORD *)(v110 + 24)),
                   0xFFFFFFFF) != 1 )
            {
              goto LABEL_144;
            }
            v208 = *(char **)(*(_QWORD *)(v99 + 16) + 128LL);
            if ( NvmeNamespaceCheckAndAcquirePoFx(v99) )
              goto LABEL_161;
            goto LABEL_162;
          }
LABEL_138:
          v44->IoStatus.Status = v15;
          IofCompleteRequest(v44, 0);
          v87 = v206;
          v88 = *(_QWORD *)(v206 + 128);
          if ( *(_BYTE *)v88
            || _InterlockedExchangeAdd(
                 *(volatile signed __int32 **)((char *)&v212->Type + *(_QWORD *)(v88 + 24)),
                 0xFFFFFFFF) != 1 )
          {
            goto LABEL_144;
          }
          v208 = *(char **)(*(_QWORD *)(v87 + 16) + 128LL);
          if ( NvmeNamespaceCheckAndAcquirePoFx(v87) )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v87 + 128) + 8LL), 0LL, 2LL);
            NvmeNamespaceReleasePoFx(v87);
          }
          v89 = *((_QWORD *)v208 + 20);
          if ( *(_BYTE *)v89 != 1 )
            goto LABEL_144;
          goto LABEL_143;
        }
        if ( !(_BYTE)v48 )
        {
          if ( QuadPart )
          {
            v56 = *(IRP **)(QuadPart + 96);
            SecurityContext = (_IO_SECURITY_CONTEXT *)*(unsigned int *)(QuadPart + 116);
            *(_QWORD *)(QuadPart + 72) = v218;
            *(_QWORD *)(QuadPart + 64) = 0LL;
            goto LABEL_147;
          }
          v57 = v47->Parameters.Read.ByteOffset.QuadPart;
          NVMePrpListBufferEntry = (union _SLIST_HEADER *)v57;
          if ( v50 )
          {
            v58 = *(unsigned int *)(v42 + 64);
            if ( !(v50 % (unsigned int)v58) )
            {
              v214 = (union _SLIST_HEADER *)(v57 / v58);
              v59 = v57 / v58;
              if ( !(v57 % v58) )
              {
                v60 = *(_QWORD *)(v42 + 424);
                v213.LowPart = v50 / (unsigned int)v58;
                if ( v59 < v60 && v60 - v59 >= v50 / (unsigned int)v58 )
                {
                  v61 = *(char **)(v42 + 16);
                  v208 = v61;
                  if ( v50 <= v207 )
                  {
                    v62 = *(unsigned int *)(v42 + 420);
                    if ( !(_DWORD)v62 )
                    {
LABEL_118:
                      v4 = v201;
                      NVMeSGLBufferContext = GetNVMeSGLBufferContext(v61, v201, v62);
                      v209 = NVMeSGLBufferContext;
                      v67 = NVMeSGLBufferContext;
                      if ( NVMeSGLBufferContext )
                      {
                        v68 = v206;
                        v130 = MajorFunction == 3;
                        *(_QWORD *)(NVMeSGLBufferContext + 40) = v44;
                        v69 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
                        *(_QWORD *)(v67 + 32) = v68;
                        v70 = v69 | v130;
                        *(_QWORD *)(v67 + 64) = 0LL;
                        *(_QWORD *)(v67 + 96) = NVMePrpListBufferEntry;
                        *(_QWORD *)(v67 + 104) = v214;
                        *(_DWORD *)(v67 + 112) = v213.LowPart;
                        *(_DWORD *)(v67 + 116) = v203;
                        v71 = v218;
                        *(_BYTE *)(v67 + 126) = v70;
                        v72 = v223;
                        *(_QWORD *)(v67 + 72) = v71;
                        *(_QWORD *)(v67 + 56) = v72->Parameters.Read.ByteOffset.QuadPart;
                        v73 = v72->Parameters.Create.SecurityContext;
                        v72->Parameters.Read.ByteOffset.QuadPart = v67;
                        *(_QWORD *)(v67 + 48) = v73;
                        v72->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                        v74 = *(_QWORD *)(v67 + 16);
                        v208 = (char *)v44->MdlAddress->StartVa + v44->MdlAddress->ByteOffset;
                        *(_QWORD *)(v67 + 80) = v208;
                        MdlAddress = v44->MdlAddress;
                        v76 = *(unsigned __int16 *)(v67 + 124);
                        v215 = MdlAddress;
                        NVMePrpListBufferEntry = *(union _SLIST_HEADER **)(v68 + 16);
                        v77 = KfRaiseIrql(2u);
                        v190 = v76;
                        v78 = v203;
                        Alignment = NVMePrpListBufferEntry[8].Alignment;
                        v189 = v74;
                        v80 = v208;
                        LOBYTE(v188) = MajorFunction != 3;
                        v81 = *(_QWORD *)(Alignment + 1160);
                        v82 = *(_QWORD *)(Alignment + 8);
                        v193 = v77;
                        v83 = *(_QWORD *)(v81 + 8);
                        LOBYTE(v199) = MajorFunction != 3;
                        v15 = (*(__int64 (__fastcall **)(__int64, __int64, _MDL *, char *, int, __int64 (__fastcall *)(), __int64, int, __int64, int))(v83 + 112))(
                                v81,
                                v82,
                                v215,
                                v208,
                                v203,
                                NvmeContinueScatterGatherProcessIO,
                                v67,
                                v188,
                                v189,
                                v190);
                        if ( v15 == -1073741789 )
                        {
                          LOBYTE(v188) = v199;
                          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, int, __int64 (__fastcall *)(), __int64, int))(*(_QWORD *)(*(_QWORD *)(NVMePrpListBufferEntry[8].Alignment + 1160) + 8LL) + 88LL))(
                                  *(_QWORD *)(NVMePrpListBufferEntry[8].Alignment + 1160),
                                  *(_QWORD *)(NVMePrpListBufferEntry[8].Alignment + 8),
                                  v215,
                                  v80,
                                  v78,
                                  NvmeContinueScatterGatherProcessIO,
                                  v209,
                                  v188);
                        }
                        if ( v193 < 2u )
                          KeLowerIrql(v193);
                        v44 = Irp;
                        v4 = v201;
                        v42 = v206;
                        if ( v15 >= 0 )
                          v15 = 259;
                        v52 = ByteOffset;
                        QuadPart = v209;
                        goto LABEL_98;
                      }
                      v15 = -1073741670;
                      goto LABEL_138;
                    }
                    if ( v50 <= (unsigned int)v62 )
                    {
                      v63 = *(_BYTE *)(v42 + 419);
                      v64 = (unsigned int)v62;
                      if ( v63 )
                      {
                        v62 = (unsigned int)(v62 - 1);
                        v65 = ((unsigned __int64)v50 >> v63)
                            + ((((unsigned int)v62 & v50)
                              + v64
                              + (unsigned __int64)((unsigned int)v62 & (unsigned int)v57)
                              - 1) >> v63);
                      }
                      else
                      {
                        v65 = v50 / (unsigned int)v62
                            + (v50 % (unsigned int)v62 + (unsigned int)v62 + v57 % (unsigned int)v62 - 1)
                            / (unsigned int)v62;
                        v42 = v206;
                      }
                      if ( v65 <= 1 )
                      {
                        v61 = v208;
                        goto LABEL_118;
                      }
                      v57 = (unsigned __int64)NVMePrpListBufferEntry;
                    }
                  }
                  v4 = v201;
                  v84 = NvmeSplitIoParallel(v42, (__int64)v44, v198, v50, v57, v207, v201, v218, 0LL, &v196);
LABEL_130:
                  v6 = v196;
                  v15 = v84;
LABEL_132:
                  Irp = v44;
                  goto LABEL_135;
                }
              }
            }
            v15 = -1073741811;
          }
          v4 = v201;
          goto LABEL_138;
        }
        v56 = (IRP *)v47->Parameters.Read.ByteOffset.QuadPart;
        Irp = v56;
        if ( MajorFunction != 3 )
        {
LABEL_147:
          v215 = (_MDL *)SecurityContext;
          Irp = v56;
        }
        if ( !(_DWORD)SecurityContext )
        {
          Irp = v44;
LABEL_150:
          v4 = v201;
          goto LABEL_151;
        }
        v100 = *(unsigned int *)(v42 + 64);
        if ( (unsigned int)SecurityContext % (unsigned int)v100
          || (v214 = (union _SLIST_HEADER *)((unsigned __int64)v56 / v100),
              v101 = (unsigned __int64)v56 / v100,
              (unsigned __int64)v56 % v100)
          || (v102 = *(_QWORD *)(v42 + 424),
              v213.LowPart = (unsigned int)SecurityContext / (unsigned int)v100,
              v101 >= v102)
          || v102 - v101 < (unsigned int)SecurityContext / (unsigned int)v100 )
        {
          v52 = ByteOffset;
          v15 = -1073741811;
          Irp = v44;
          goto LABEL_150;
        }
        v103 = *(char **)(v42 + 16);
        v208 = v103;
        if ( (unsigned int)SecurityContext <= *(_DWORD *)(*((_QWORD *)v103 + 16) + 200LL) )
        {
          v104 = *(_DWORD *)(v42 + 420);
          if ( !v104 )
          {
LABEL_176:
            v107 = v44->MdlAddress;
            v85 = 0LL;
            v4 = v201;
            NVMePrpListBufferEntry = 0LL;
            if ( (((unsigned int)SecurityContext + ((LODWORD(v107->StartVa) + v107->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
            {
              NVMePrpListBufferEntry = (union _SLIST_HEADER *)GetNVMePrpListBufferEntry(v103, v201);
              v85 = (__int64)NVMePrpListBufferEntry;
              if ( NVMePrpListBufferEntry )
              {
                v42 = v206;
              }
              else
              {
                v108 = v206;
                NVMePrpListBufferEntry = (union _SLIST_HEADER *)AllocateNewNVMePrpListBufferEntry(
                                                                  *(_QWORD *)(v206 + 16),
                                                                  v4);
                v85 = (__int64)NVMePrpListBufferEntry;
                if ( !NVMePrpListBufferEntry )
                {
                  NvmeNamespaceQueueIo(v108, (__int64)v44, v4);
                  v15 = -2147483631;
                  goto LABEL_132;
                }
                v42 = v108;
              }
              v56 = Irp;
              LODWORD(SecurityContext) = (_DWORD)v215;
            }
            v109 = *(_QWORD *)(v42 + 16);
            Irp = v44;
            if ( (*(_BYTE *)(v109 + 136) & 2) != 0 )
            {
              v86 = *(_QWORD *)(v109 + 728) + 192LL * v4;
            }
            else
            {
              v85 = (__int64)NVMePrpListBufferEntry;
              v86 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v109 + 872) + 2LL * v4) + *(_QWORD *)(v109 + 728) - 192LL;
            }
            LOBYTE(v187) = 0;
            v15 = NvmeSubmitIoToSQ(
                    v42,
                    (__int64)v44,
                    v86,
                    v85,
                    v4,
                    v187,
                    (unsigned int)SecurityContext,
                    (__int64)v56,
                    (int)v214,
                    v213.QuadPart,
                    v198,
                    0LL);
LABEL_135:
            v42 = v206;
            QuadPart = v209;
            v52 = ByteOffset;
            goto LABEL_98;
          }
          if ( (unsigned int)SecurityContext <= v104 )
          {
            v105 = *(_BYTE *)(v42 + 419);
            if ( v105 )
            {
              v106 = ((unsigned __int64)(unsigned int)SecurityContext >> v105)
                   + ((((unsigned int)v56 & (v104 - 1))
                     + v104
                     + (unsigned __int64)((unsigned int)SecurityContext & (v104 - 1))
                     - 1) >> v105);
            }
            else
            {
              v106 = (unsigned int)SecurityContext / v104
                   + ((unsigned int)SecurityContext % v104 - 1LL + v104 + (unsigned __int64)v56 % v104) / v104;
              LODWORD(SecurityContext) = (_DWORD)v215;
            }
            if ( v106 <= 1 )
            {
              v103 = v208;
              goto LABEL_176;
            }
          }
        }
        v4 = v201;
        v84 = NvmeSplitIoParallel(
                v42,
                (__int64)v44,
                v198,
                (unsigned int)SecurityContext,
                (unsigned __int64)v56,
                v207,
                v201,
                v218,
                0LL,
                &v196);
        goto LABEL_130;
      }
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v11, 0, 1) == 1 )
    {
      v32 = *(_QWORD *)(v11 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 20LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 956));
      else
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 16) + 952LL));
    }
    KeLowerIrql(v13);
    v4 = v201;
    v15 = -2147483622;
LABEL_9:
    if ( v6 )
    {
LABEL_46:
      if ( i == 1 )
        goto LABEL_196;
      goto LABEL_194;
    }
    if ( v15 == -2147483631 )
      return 1;
    if ( v15 != -2147483622 )
      goto LABEL_46;
    v9 = i;
    if ( i == 1 )
      break;
LABEL_194:
    if ( ++v8 >= *(_DWORD *)(v7 + 4) )
      v8 = 0;
LABEL_196:
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
      return 1;
  }
LABEL_13:
  v17 = v222;
  *(_DWORD *)(v7 + 64) = v8;
  if ( v17[3] )
  {
    v18 = v202;
    v19 = v222;
    while ( v18 == v4 )
    {
LABEL_25:
      v202 = ++v18;
      if ( v18 >= v19[3] )
        return 1;
    }
    v20 = *(_QWORD *)(a1 + 1104);
    NVMePrpListBufferEntry = (union _SLIST_HEADER *)(8LL * v18);
    v21 = *(unsigned __int64 *)((char *)&NVMePrpListBufferEntry->Alignment + v20);
    v22 = *(_DWORD *)(v21 + 64);
    while ( 1 )
    {
      v23 = v22;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v21 + 8LL * v22 + 264);
        if ( *(_DWORD *)v24 || *(_DWORD *)(v24 + 48) != *(_DWORD *)(v24 + 52) )
          break;
        if ( v9 != 1 )
        {
          v25 = v22 + 1;
          v22 = 0;
          if ( v25 != *(_DWORD *)(v21 + 4) )
            v22 = v25;
          if ( v23 != v22 )
            continue;
        }
        goto LABEL_24;
      }
      v26 = *(_DWORD *)(a1 + 136) & 2;
      v223 = 0LL;
      v27 = KfRaiseIrql(2u);
      do
      {
        v28 = *(unsigned int *)(v24 + 52);
        if ( (_DWORD)v28 == *(_DWORD *)(v24 + 48) )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v24, 0, 1) == 1 )
          {
            v186 = *(_QWORD *)(v24 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 20LL) == 1 )
              _InterlockedDecrement((volatile signed __int32 *)(v186 + 956));
            else
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v186 + 16) + 952LL));
          }
          KeLowerIrql(v27);
          v117 = -2147483622;
          goto LABEL_344;
        }
        v29 = 0;
        if ( (unsigned int)(v28 + 1) < *(_DWORD *)(*(_QWORD *)(v24 + 16) + 4LL) )
          v29 = v28 + 1;
      }
      while ( (_DWORD)v28 != _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 52), v29, v28) );
      do
        v212 = (PIRP)_InterlockedExchange64((volatile __int64 *)(8 * v28 + *(_QWORD *)(v24 + 56)), 0LL);
      while ( !v212 );
      if ( !*(_DWORD *)(*(_QWORD *)(v24 + 16) + 16LL)
        && (*(_DWORD *)v24 == 2
         || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v24 + 32) + 16LL * *(unsigned int *)(v24 + 8)))) )
      {
        if ( *(_DWORD *)(v24 + 48) == *(_DWORD *)(v24 + 52)
          || ((v111 = *(_DWORD *)(v24 + 48), v112 = *(_DWORD *)(v24 + 52), v111 != v112)
            ? (v111 <= v112
             ? ((v114 = *(_QWORD *)(v24 + 24), *(_BYTE *)(*(_QWORD *)(v24 + 16) + 20LL))
              ? (v115 = *(_QWORD *)(v114 + 1024))
              : (v115 = *(_QWORD *)(v114 + 256)),
                v113 = *(_DWORD *)(v115 + 4) - v112 + v111)
             : (v113 = v111 - v112))
            : (v113 = 0),
              v113 <= *(_DWORD *)(*(_QWORD *)(v24 + 16) + 8LL)) )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v24 + 16) + 16LL), 1, 0) )
          {
            v116 = *(_QWORD *)(v24 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 20LL) )
              IoQueueWorkItem(
                *(PIO_WORKITEM *)(v116 + 1032),
                NvmeControllerRefillShadowQueueRoutine,
                DelayedWorkQueue,
                *(PVOID *)(v24 + 24));
            else
              KeSetEvent((PRKEVENT)(v116 + 472), 0, 0);
          }
        }
      }
      KeLowerIrql(v27);
      if ( v26 )
      {
        v117 = NvmeNamespaceProcessRequest(*(_QWORD *)(v24 + 24), v212, v202);
        goto LABEL_274;
      }
      v118 = v212;
      if ( (int)IoGetIoAttributionHandle(v212, &v223) >= 0 )
      {
        v119 = v223;
        v228 = 0LL;
        LODWORD(v228) = 1;
        v120 = v118->Tail.Overlay.CurrentStackLocation;
        v229 = 0LL;
        DWORD1(v228) = v120->MajorFunction | 0x200;
        *((_QWORD *)&v229 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v229 + 1);
        IoRecordIoAttribution(v119, &v228);
      }
      v121 = *(_QWORD *)(v24 + 24);
      v117 = 0;
      v122 = v118->Tail.Overlay.CurrentStackLocation;
      v6 = 0;
      v220 = 0;
      v123 = 0;
      v227 = 0LL;
      v124 = 0LL;
      LODWORD(v215) = 0;
      v214 = v218;
      v125 = *(_QWORD *)(v121 + 16);
      MajorFunction = 0;
      ProviderId = v122->Parameters.WMI.ProviderId;
      v209 = v125;
      v127 = (char *)HIDWORD(*(_QWORD *)(v125 + 136));
      LOBYTE(v127) = (unsigned __int8)v127 & 1;
      Irp = 0LL;
      ByteOffset.QuadPart = 0LL;
      v203 = 0;
      v217 = 0;
      v128 = ProviderId;
      v206 = v121;
      MasterIrp = (unsigned __int64)v122;
      LOBYTE(v199) = 0;
      v207 = 0;
      v208 = v127;
      v196 = 0;
      v212 = (PIRP)ProviderId;
      v210 = ProviderId;
      if ( ProviderId == 0x8765432100000003uLL )
      {
        ByteOffset = v122->Parameters.Read.ByteOffset;
      }
      else if ( ProviderId == 0xFEDCBA9000000000uLL )
      {
        v124 = (PIRP)v122->Parameters.Read.ByteOffset.QuadPart;
        Irp = v124;
        v210 = 0;
      }
      v129 = *(_DWORD *)(v121 + 96);
      if ( v129 == 5 || v129 == 6 )
      {
        v131 = ByteOffset.QuadPart;
        v117 = -1073741810;
        MajorFunction = 1;
        v203 = -1073741810;
        if ( ByteOffset.QuadPart )
          goto LABEL_246;
        goto LABEL_249;
      }
      v130 = v122->MajorFunction == 3;
      v198 = v122->MajorFunction;
      v194 = v130;
      v213.LowPart = *(_DWORD *)(*(_QWORD *)(v209 + 128) + 200LL);
      v131 = ByteOffset.QuadPart;
      if ( !ByteOffset.QuadPart )
      {
        if ( !(_BYTE)v127 )
        {
          if ( v124 )
          {
            v146 = v218;
            UserApcContext = (unsigned __int64)v124->Overlay.AsynchronousParameters.UserApcContext;
            ProviderId = HIDWORD(v124->UserBuffer);
            *(_QWORD *)&v124->RequestorMode = 0LL;
            v124->UserIosb = (_IO_STATUS_BLOCK *)v146;
            goto LABEL_304;
          }
          v148 = v122->Parameters.Read.ByteOffset.QuadPart;
          if ( !(_DWORD)ProviderId )
          {
            v117 = 0;
            goto LABEL_268;
          }
          v151 = *(unsigned int *)(v121 + 64);
          if ( (unsigned int)ProviderId % (unsigned int)v151
            || (v214 = (union _SLIST_HEADER *)(v148 / v151), v152 = v148 / v151, v148 % v151)
            || (v153 = *(_QWORD *)(v121 + 424), v207 = (unsigned int)ProviderId / (unsigned int)v151, v152 >= v153)
            || v153 - v152 < (unsigned int)ProviderId / (unsigned int)v151 )
          {
            v117 = -1073741811;
          }
          else
          {
            v154 = *(char **)(v121 + 16);
            v208 = v154;
            if ( (unsigned int)ProviderId > v213.LowPart )
              goto LABEL_301;
            v155 = *(_DWORD *)(v121 + 420);
            if ( !v155 )
              goto LABEL_292;
            if ( (unsigned int)ProviderId > v155 )
              goto LABEL_301;
            v156 = *(_BYTE *)(v121 + 419);
            v157 = v155;
            if ( v156 )
            {
              v158 = v155 - 1;
              v151 = (unsigned int)ProviderId & v158;
              v159 = (((unsigned int)v148 & v158) + v157 + v151 - 1) >> v156;
              ProviderId = (unsigned __int64)(unsigned int)ProviderId >> *(_BYTE *)(v121 + 419);
            }
            else
            {
              v160 = (unsigned int)ProviderId;
              LODWORD(ProviderId) = (unsigned int)ProviderId / v155;
              v128 = v210;
              v159 = (v160 % v155 + v155 + v148 % v155 - 1) / v155;
            }
            if ( (unsigned int)(ProviderId + v159) > 1 )
            {
LABEL_301:
              v173 = NvmeSplitIoParallel(v121, (__int64)v118, v130, v128, v148, v213.LowPart, v202, v218, 0LL, &v196);
              v6 = v196;
              v117 = v173;
              v124 = Irp;
              v203 = v173;
              v131 = ByteOffset.QuadPart;
              goto LABEL_247;
            }
            v154 = v208;
LABEL_292:
            v161 = GetNVMeSGLBufferContext(v154, v202, v151);
            Irp = (PIRP)v161;
            v162 = v161;
            if ( v161 )
            {
              v130 = v198 == 3;
              *(_QWORD *)(v161 + 40) = v118;
              v163 = *(_BYTE *)(v161 + 126) & 0xFE;
              *(_QWORD *)(v162 + 32) = v121;
              *(_QWORD *)(v162 + 96) = v148;
              *(_QWORD *)(v162 + 104) = v214;
              *(_DWORD *)(v162 + 112) = v207;
              *(_DWORD *)(v162 + 116) = v210;
              *(_QWORD *)(v162 + 64) = 0LL;
              *(_QWORD *)(v162 + 72) = v218;
              *(_BYTE *)(v162 + 126) = v163 | v130;
              v164 = (_IRP *)MasterIrp;
              *(_QWORD *)(v162 + 56) = *(_QWORD *)(MasterIrp + 24);
              v165 = v164->MdlAddress;
              v164->AssociatedIrp.MasterIrp = (_IRP *)v162;
              *(_QWORD *)(v162 + 48) = v165;
              v164->MdlAddress = (_MDL *)0xFEDCBA9000000000LL;
              v166 = *(unsigned __int16 *)(v162 + 124);
              v167 = *(_QWORD *)(v162 + 16);
              v214 = (union _SLIST_HEADER *)((char *)v118->MdlAddress->StartVa + v118->MdlAddress->ByteOffset);
              *(_QWORD *)(v162 + 80) = v214;
              v212 = (PIRP)v118->MdlAddress;
              v208 = *(char **)(v206 + 16);
              v168 = KfRaiseIrql(2u);
              v191 = v166;
              v169 = v210;
              v170 = *((_QWORD *)v208 + 16);
              LOBYTE(v188) = v198 != 3;
              v195 = v168;
              v171 = *(_QWORD *)(v170 + 1160);
              v172 = *(_QWORD *)(v170 + 8);
              LOBYTE(v199) = v198 != 3;
              v117 = (*(__int64 (__fastcall **)(__int64, __int64, PIRP, union _SLIST_HEADER *, unsigned int, __int64 (__fastcall *)(), PIRP, int, __int64, int))(*(_QWORD *)(v171 + 8) + 112LL))(
                       v171,
                       v172,
                       v212,
                       v214,
                       v210,
                       NvmeContinueScatterGatherProcessIO,
                       Irp,
                       v188,
                       v167,
                       v191);
              if ( v117 == -1073741789 )
              {
                LOBYTE(v188) = v199;
                v117 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PIRP, union _SLIST_HEADER *, unsigned int, __int64 (__fastcall *)(), PIRP, int))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v208 + 16) + 1160LL) + 8LL) + 88LL))(
                         *(_QWORD *)(*((_QWORD *)v208 + 16) + 1160LL),
                         *(_QWORD *)(*((_QWORD *)v208 + 16) + 8LL),
                         v212,
                         v214,
                         v169,
                         NvmeContinueScatterGatherProcessIO,
                         Irp,
                         v188);
              }
              if ( v195 < 2u )
                KeLowerIrql(v195);
              v121 = v206;
              v124 = Irp;
              if ( v117 >= 0 )
                v117 = 259;
              v131 = ByteOffset.QuadPart;
              v203 = v117;
              goto LABEL_247;
            }
            v117 = -1073741670;
          }
LABEL_268:
          v118->IoStatus.Status = v117;
          IofCompleteRequest(v118, 0);
          v149 = *(_QWORD *)(v121 + 128);
          if ( *(_BYTE *)v149
            || _InterlockedExchangeAdd(
                 *(volatile signed __int32 **)((char *)&NVMePrpListBufferEntry->Alignment + *(_QWORD *)(v149 + 24)),
                 0xFFFFFFFF) != 1 )
          {
            goto LABEL_274;
          }
          v150 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 128LL);
          if ( NvmeNamespaceCheckAndAcquirePoFx(v121) )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v121 + 128) + 8LL), 0LL, 2LL);
            NvmeNamespaceReleasePoFx(v121);
          }
          v144 = *(_QWORD *)(v150 + 160);
          if ( *(_BYTE *)v144 != 1 )
            goto LABEL_274;
LABEL_273:
          PoFxIdleComponent(**(_QWORD **)(v144 + 8), 0LL, 2LL);
          goto LABEL_274;
        }
        UserApcContext = v122->Parameters.Read.ByteOffset.QuadPart;
        if ( v198 != 3 )
LABEL_304:
          v212 = (PIRP)ProviderId;
        if ( !(_DWORD)ProviderId )
        {
          v117 = 0;
          v203 = 0;
          goto LABEL_249;
        }
        v174 = *(unsigned int *)(v121 + 64);
        if ( (unsigned int)ProviderId % (unsigned int)v174
          || (v214 = (union _SLIST_HEADER *)(UserApcContext / v174), v175 = UserApcContext / v174, UserApcContext % v174)
          || (v176 = *(_QWORD *)(v121 + 424), v207 = (unsigned int)ProviderId / (unsigned int)v174, v175 >= v176)
          || v176 - v175 < (unsigned int)ProviderId / (unsigned int)v174 )
        {
          v131 = ByteOffset.QuadPart;
          v117 = -1073741811;
          v203 = -1073741811;
          goto LABEL_249;
        }
        v177 = *(char **)(v121 + 16);
        v208 = v177;
        if ( (unsigned int)ProviderId > *(_DWORD *)(*((_QWORD *)v177 + 16) + 200LL) )
          goto LABEL_329;
        v178 = *(_DWORD *)(v121 + 420);
        if ( !v178 )
          goto LABEL_319;
        if ( (unsigned int)ProviderId > v178
          || ((v179 = *(_BYTE *)(v121 + 419), MasterIrp = (unsigned int)ProviderId, !v179)
            ? (v180 = (unsigned int)ProviderId / v178
                    + ((unsigned int)ProviderId % v178 - 1LL + v178 + UserApcContext % v178) / v178)
            : (v180 = (MasterIrp >> v179)
                    + ((((v178 - 1) & (unsigned int)UserApcContext)
                      + v178
                      + (unsigned __int64)((v178 - 1) & (unsigned int)ProviderId)
                      - 1) >> v179)),
              v180 > 1) )
        {
LABEL_329:
          v184 = NvmeSplitIoParallel(
                   v121,
                   (__int64)v118,
                   v130,
                   ProviderId,
                   UserApcContext,
                   v213.LowPart,
                   v202,
                   v218,
                   0LL,
                   &v196);
          v6 = v196;
          v117 = v184;
          v124 = Irp;
          v203 = v184;
          v131 = ByteOffset.QuadPart;
          goto LABEL_247;
        }
        v177 = v208;
LABEL_319:
        NewNVMePrpListBufferEntry = 0LL;
        if ( (((unsigned int)ProviderId
             + ((LODWORD(v118->MdlAddress->StartVa) + v118->MdlAddress->ByteOffset) & 0xFFF)
             + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
        {
          NewNVMePrpListBufferEntry = GetNVMePrpListBufferEntry(v177, v202);
          if ( !NewNVMePrpListBufferEntry )
          {
            NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v121 + 16), v202);
            if ( !NewNVMePrpListBufferEntry )
            {
              NvmeNamespaceQueueIo(v121, (__int64)v118, v202);
              v117 = -2147483631;
LABEL_328:
              v124 = Irp;
              v131 = ByteOffset.QuadPart;
              v203 = v117;
              goto LABEL_247;
            }
          }
          LODWORD(ProviderId) = (_DWORD)v212;
        }
        v182 = *(_QWORD *)(v121 + 16);
        if ( (*(_BYTE *)(v182 + 136) & 2) != 0 )
          v183 = *(_QWORD *)(v182 + 728) + 192LL * v202;
        else
          v183 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v182 + 872) + 2LL * v202) - 192 + *(_QWORD *)(v182 + 728);
        LOBYTE(v187) = 0;
        v117 = NvmeSubmitIoToSQ(
                 v121,
                 (__int64)v118,
                 v183,
                 NewNVMePrpListBufferEntry,
                 v202,
                 v187,
                 ProviderId,
                 UserApcContext,
                 (int)v214,
                 v207,
                 v194,
                 0LL);
        goto LABEL_328;
      }
LABEL_227:
      v209 = v131;
      v132 = v131;
LABEL_228:
      if ( v132 )
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v132 + 104), 4, 3) == 3 )
            goto LABEL_234;
          if ( !(_BYTE)v127 )
          {
            if ( *(_DWORD *)(v132 + 104) == 1 )
            {
              LOWORD(v123) = v123 + 1;
              v207 = v123;
            }
            goto LABEL_240;
          }
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v132 + 104), 4, 1) == 1 )
          {
LABEL_234:
            v117 = NvmeSendSplitIo(
                     v132,
                     v202,
                     (_DWORD)v214,
                     0,
                     (__int64)&MajorFunction,
                     (__int64)&v227,
                     (__int64)&v215,
                     (__int64)&v220,
                     v199);
            v203 = v117;
            if ( v117 == 259 )
            {
              v133 = *(_QWORD *)(v121 + 16);
              ++v217;
              v6 = 1;
              v214 = 0LL;
              v134 = *(unsigned __int8 *)(v133 + 1730);
              v132 = v209;
              LOBYTE(v199) = v217 % v134 == 0;
            }
            else
            {
              if ( v117 == -2147483631 )
              {
                v145 = v209;
                _InterlockedCompareExchange((volatile signed __int32 *)(v209 + 104), 3, 4);
                NvmeNamespaceQueueIo(v121, *(_QWORD *)(v145 + 24), v202);
                goto LABEL_274;
              }
              v132 = v209;
              if ( !*(_WORD *)(v209 + 34) )
              {
                MajorFunction = 1;
LABEL_244:
                v131 = ByteOffset.QuadPart;
                break;
              }
              if ( MajorFunction )
                goto LABEL_244;
            }
            LOBYTE(v127) = (_BYTE)v208;
            v123 = v207;
          }
LABEL_240:
          v132 = *(_QWORD *)(v132 + 96);
          v131 = ByteOffset.QuadPart;
          v209 = v132;
          if ( !(_WORD)v123 )
            goto LABEL_228;
          if ( !v132 )
          {
            v123 = 0;
            v207 = 0;
            goto LABEL_227;
          }
        }
      }
      v124 = Irp;
LABEL_246:
      _interlockedbittestandreset((volatile signed __int32 *)(v131 + 108), 0);
LABEL_247:
      if ( v117 == -2147483631 || v117 >= 1 )
        goto LABEL_274;
LABEL_249:
      if ( v124 )
      {
        MasterIrp = (unsigned __int64)v124->AssociatedIrp.MasterIrp;
        if ( MasterIrp )
        {
          v135 = BYTE6(v124->Tail.CompletionKey) & 1;
          v136 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 128LL);
          v137 = KfRaiseIrql(2u);
          v138 = *(_QWORD *)(v136 + 1160);
          LOBYTE(v199) = v137;
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)(v138 + 8) + 96LL))(
            v138,
            MasterIrp,
            v135 ^ 1u);
          if ( (unsigned __int8)v199 < 2u )
            KeLowerIrql(v199);
          v124 = Irp;
          v117 = v203;
          v121 = v206;
        }
        UserApcRoutine = v124->Overlay.AsynchronousParameters.UserApcRoutine;
        if ( UserApcRoutine )
        {
          v140 = *(_QWORD *)(v121 + 16);
          v141 = NVMePrpListBufferEntry;
          *((_QWORD *)UserApcRoutine + 11) = 0LL;
          *((_DWORD *)UserApcRoutine + 27) = 0;
          *((_DWORD *)UserApcRoutine + 26) = 0;
          ExpInterlockedPushEntrySList(
            *(PSLIST_HEADER *)((char *)&v141->Alignment + *(_QWORD *)(v140 + 888)),
            (PSLIST_ENTRY)UserApcRoutine);
        }
        LOBYTE(v124) = 1;
        FreeNVMeSGLBufferContext(*(_QWORD *)(v121 + 16), Irp, v124);
        v118->IoStatus.Status = v117;
        IofCompleteRequest(v118, 0);
        v142 = *(_QWORD *)(v121 + 128);
        if ( !*(_BYTE *)v142
          && _InterlockedExchangeAdd(
               *(volatile signed __int32 **)((char *)&NVMePrpListBufferEntry->Alignment + *(_QWORD *)(v142 + 24)),
               0xFFFFFFFF) == 1 )
        {
          v143 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 128LL);
          if ( NvmeNamespaceCheckAndAcquirePoFx(v121) )
            goto LABEL_259;
          goto LABEL_260;
        }
        goto LABEL_274;
      }
      if ( !v131 )
        goto LABEL_268;
      if ( MajorFunction )
      {
        FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(v121 + 16), v131);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FreeNVMeChainedIoSplitContext)(
          *(_QWORD *)(v121 + 16),
          v202,
          (_LARGE_INTEGER)ByteOffset.QuadPart,
          v118);
        v118->IoStatus.Status = v117;
        IofCompleteRequest(v118, 0);
        v185 = *(_QWORD *)(v121 + 128);
        if ( !*(_BYTE *)v185
          && _InterlockedExchangeAdd(
               *(volatile signed __int32 **)((char *)&NVMePrpListBufferEntry->Alignment + *(_QWORD *)(v185 + 24)),
               0xFFFFFFFF) == 1 )
        {
          v143 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 128LL);
          if ( NvmeNamespaceCheckAndAcquirePoFx(v121) )
          {
LABEL_259:
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v121 + 128) + 8LL), 0LL, 2LL);
            NvmeNamespaceReleasePoFx(v121);
          }
LABEL_260:
          v144 = *(_QWORD *)(v143 + 160);
          if ( *(_BYTE *)v144 == 1 )
            goto LABEL_273;
        }
      }
LABEL_274:
      if ( v117 == 259 )
        goto LABEL_275;
LABEL_344:
      if ( v6 )
        goto LABEL_275;
      if ( v117 == -2147483631 )
        return 1;
      if ( v117 != -2147483622 )
      {
LABEL_275:
        if ( i == 1 )
          goto LABEL_278;
      }
      else
      {
        v9 = i;
        if ( i == 1 )
        {
LABEL_24:
          v4 = v201;
          v18 = v202;
          v19 = v222;
          goto LABEL_25;
        }
      }
      if ( ++v22 >= *(_DWORD *)(v21 + 4) )
        v22 = 0;
LABEL_278:
      if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
        return 1;
      v9 = i;
    }
  }
  return 1;
}
