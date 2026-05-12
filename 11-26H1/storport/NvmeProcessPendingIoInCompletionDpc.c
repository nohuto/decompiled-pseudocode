/*
 * XREFs of NvmeProcessPendingIoInCompletionDpc @ 0x14011B430
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
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

bool __fastcall NvmeProcessPendingIoInCompletionDpc(
        __int64 a1,
        union _SLIST_HEADER *a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  __int64 v4; // rsi
  union _SLIST_HEADER *v5; // r15
  ULONG CurrentProcessorNumber; // eax
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int v9; // r13d
  int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rbx
  KIRQL v15; // r14
  __int64 v16; // r9
  signed __int32 v17; // r8d
  IRP *v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  int v27; // r15d
  char v28; // r10
  __int64 v29; // rbx
  _IO_STACK_LOCATION *v30; // rax
  __int64 v31; // r14
  _IO_STACK_LOCATION *v32; // rdi
  int v33; // ecx
  unsigned __int16 *v34; // r11
  char v35; // r9
  __int64 v36; // r13
  __int64 v37; // r10
  __int64 v38; // r8
  _IO_SECURITY_CONTEXT *v39; // rbx
  unsigned int v40; // r12d
  union _SLIST_HEADER *v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rcx
  bool v47; // zf
  union _SLIST_HEADER *v48; // r10
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned int v55; // edx
  char v56; // al
  unsigned int v57; // eax
  __int64 v58; // rax
  char v59; // al
  char v60; // cl
  int v61; // eax
  union _SLIST_HEADER *v62; // rcx
  _IO_SECURITY_CONTEXT *v63; // rax
  int v64; // ebx
  __int64 v65; // rdi
  _MDL *v66; // r15
  KIRQL v67; // al
  unsigned __int16 *v68; // rbx
  unsigned __int64 Alignment; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // r12
  unsigned __int8 v74; // di
  __int64 v75; // rbx
  KIRQL v76; // al
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r15
  unsigned __int64 v86; // rdx
  __int16 v87; // r12
  unsigned int v88; // edx
  char v89; // al
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r9
  __int64 v92; // r9
  unsigned __int16 *v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r10
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int16 *v99; // rax
  unsigned int v100; // r14d
  _DWORD *v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r13
  unsigned int v104; // esi
  unsigned int v105; // edx
  __int64 v106; // rdi
  unsigned int v107; // eax
  __int64 v108; // rbx
  KIRQL v109; // r14
  __int64 v110; // r9
  signed __int32 v111; // r8d
  IRP *v112; // rsi
  unsigned int v113; // edx
  unsigned int v114; // r8d
  unsigned int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  int v119; // eax
  char v120; // r10
  int v121; // r15d
  __int64 v122; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v124; // r14
  _IO_STACK_LOCATION *v125; // rdi
  unsigned int v126; // ecx
  unsigned __int16 *v127; // r11
  __int64 v128; // r10
  __int64 v129; // r13
  __int64 v130; // r8
  __int64 QuadPart; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _MDL *v133; // rdx
  unsigned int v134; // r12d
  int v135; // eax
  __int64 v136; // rax
  char v137; // di
  unsigned int v138; // r12d
  __int64 v139; // rbx
  __int64 v140; // rcx
  unsigned __int64 v141; // rdi
  union _SLIST_HEADER *v142; // r9
  unsigned __int64 v143; // rbx
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // r15
  unsigned __int64 v146; // rdx
  __int64 v147; // r10
  unsigned int v148; // eax
  unsigned int v149; // edx
  char v150; // al
  unsigned int v151; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v153; // rax
  __int64 v154; // rbx
  __int64 v155; // rcx
  char v156; // al
  char v157; // cl
  unsigned int v158; // eax
  union _SLIST_HEADER *v159; // rcx
  _IO_SECURITY_CONTEXT *v160; // rax
  int v161; // ebx
  __int64 v162; // rdi
  union _SLIST_HEADER *v163; // r15
  KIRQL v164; // al
  _MDL *v165; // rbx
  __int64 v166; // rdx
  int v167; // eax
  __int64 v168; // r12
  unsigned __int8 v169; // di
  __int64 v170; // rbx
  KIRQL v171; // al
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // rbx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rbx
  unsigned __int64 v178; // r8
  unsigned __int64 v179; // r12
  unsigned __int64 v180; // rdx
  __int16 v181; // r11
  unsigned int v182; // r8d
  char v183; // al
  unsigned int v184; // eax
  __int64 NewNVMePrpListBufferEntry; // r10
  PSLIST_ENTRY NVMePrpListBufferEntry; // rax
  unsigned int v187; // r15d
  unsigned __int16 *v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  int v191; // eax
  __int64 v192; // rax
  __int64 v193; // rbx
  __int64 v194; // rcx
  __int64 v195; // rax
  int v197; // [rsp+28h] [rbp-D8h]
  int v198; // [rsp+38h] [rbp-C8h]
  __int64 v199; // [rsp+38h] [rbp-C8h]
  int v200; // [rsp+48h] [rbp-B8h]
  int v201; // [rsp+48h] [rbp-B8h]
  char v202; // [rsp+60h] [rbp-A0h]
  char v203; // [rsp+61h] [rbp-9Fh]
  KIRQL v204; // [rsp+61h] [rbp-9Fh]
  bool v205; // [rsp+61h] [rbp-9Fh]
  KIRQL v206; // [rsp+61h] [rbp-9Fh]
  char v207; // [rsp+62h] [rbp-9Eh] BYREF
  bool v208; // [rsp+63h] [rbp-9Dh] BYREF
  ULONG v209; // [rsp+64h] [rbp-9Ch]
  char MajorFunction; // [rsp+68h] [rbp-98h]
  unsigned __int16 v211; // [rsp+6Ah] [rbp-96h]
  char v212; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v213; // [rsp+70h] [rbp-90h]
  unsigned int v214; // [rsp+74h] [rbp-8Ch]
  union _SLIST_HEADER *v215; // [rsp+78h] [rbp-88h]
  __int64 v216; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v217; // [rsp+88h] [rbp-78h]
  __int64 v218; // [rsp+90h] [rbp-70h]
  unsigned int v219; // [rsp+98h] [rbp-68h]
  int v220; // [rsp+9Ch] [rbp-64h] BYREF
  int v221; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v222; // [rsp+A8h] [rbp-58h]
  unsigned int v223; // [rsp+B0h] [rbp-50h] BYREF
  union _SLIST_HEADER *v224; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v225; // [rsp+C0h] [rbp-40h]
  __int64 v226; // [rsp+C8h] [rbp-38h]
  __int16 v227; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v228; // [rsp+D8h] [rbp-28h]
  _MDL *MdlAddress; // [rsp+E0h] [rbp-20h]
  _DWORD *v230; // [rsp+E8h] [rbp-18h]
  __int64 v231; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v232; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v233; // [rsp+100h] [rbp+0h] BYREF
  __int64 v234; // [rsp+108h] [rbp+8h]
  __int64 v235; // [rsp+110h] [rbp+10h] BYREF
  __int64 v236; // [rsp+118h] [rbp+18h] BYREF
  __int128 v237; // [rsp+120h] [rbp+20h] BYREF
  __int128 v238; // [rsp+130h] [rbp+30h] BYREF

  v4 = a1;
  v228 = a1;
  v217 = a4;
  v213 = 0;
  v5 = a2;
  v215 = a2;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v7 = *(_QWORD *)(v4 + 1104);
  v209 = CurrentProcessorNumber;
  v202 = 0;
  v8 = *(_QWORD *)(8LL * CurrentProcessorNumber + v7);
  v218 = 8LL * CurrentProcessorNumber;
  v231 = v8;
  v9 = *(_DWORD *)(v8 + 64);
  v10 = *(_DWORD *)(v4 + 656);
  v230 = g_CpuInfo;
  v219 = v9;
  v221 = v10;
  while ( 2 )
  {
    v11 = v9;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 8LL * v9 + 264);
      if ( v12 )
      {
        if ( **(_DWORD **)(v12 + 16) )
          goto LABEL_358;
        if ( *(_DWORD *)v12 || *(_DWORD *)(v12 + 48) != *(_DWORD *)(v12 + 52) )
          break;
      }
      if ( v10 == 1 )
        goto LABEL_171;
      v13 = v9 + 1;
      v9 = 0;
      if ( v13 < *(_DWORD *)(v8 + 4) )
        v9 = v13;
      if ( v11 == v9 )
      {
LABEL_171:
        v26 = v209;
        goto LABEL_172;
      }
      v219 = v9;
    }
    v14 = *(_DWORD *)(v4 + 136) & 2;
    v233 = 0LL;
    v15 = KfRaiseIrql(2u);
    do
    {
      v16 = *(unsigned int *)(v12 + 52);
      if ( (_DWORD)v16 == *(_DWORD *)(v12 + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v12, 0, 1) == 1 )
        {
          v98 = *(_QWORD *)(v12 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL) == 1 )
            _InterlockedDecrement((volatile signed __int32 *)(v98 + 956));
          else
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v98 + 16) + 952LL));
        }
        KeLowerIrql(v15);
        v26 = v209;
LABEL_164:
        v10 = v221;
        if ( v221 != 1 )
          goto LABEL_165;
LABEL_172:
        v100 = v213;
        v101 = v230;
        *(_DWORD *)(v8 + 64) = v9;
        while ( 1 )
        {
          if ( v100 >= v101[3] )
            goto LABEL_358;
          if ( v100 == v26 )
            goto LABEL_350;
          v102 = *(_QWORD *)(v4 + 1104);
          v226 = 8LL * v100;
          v103 = *(_QWORD *)(v226 + v102);
          v234 = v103;
          v104 = *(_DWORD *)(v103 + 64);
          LODWORD(v225) = v104;
LABEL_176:
          v105 = v104;
          do
          {
            v106 = *(_QWORD *)(v103 + 8LL * v104 + 264);
            if ( v106 )
            {
              if ( **(_DWORD **)(v106 + 16) )
                goto LABEL_358;
              if ( *(_DWORD *)v106 || *(_DWORD *)(v106 + 48) != *(_DWORD *)(v106 + 52) )
              {
                v231 = 0LL;
                v108 = *(_DWORD *)(v228 + 136) & 2;
                v109 = KfRaiseIrql(2u);
                while ( 1 )
                {
                  v110 = *(unsigned int *)(v106 + 52);
                  if ( (_DWORD)v110 == *(_DWORD *)(v106 + 48) )
                    break;
                  v111 = 0;
                  if ( (unsigned int)(v110 + 1) < *(_DWORD *)(*(_QWORD *)(v106 + 16) + 4LL) )
                    v111 = v110 + 1;
                  if ( (_DWORD)v110 == _InterlockedCompareExchange((volatile signed __int32 *)(v106 + 52), v111, v110) )
                  {
                    do
                      v112 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v110 + *(_QWORD *)(v106 + 56)), 0LL);
                    while ( !v112 );
                    if ( !*(_DWORD *)(*(_QWORD *)(v106 + 16) + 16LL)
                      && (*(_DWORD *)v106 == 2
                       || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v106 + 32) + 16LL * *(unsigned int *)(v106 + 8)))) )
                    {
                      if ( *(_DWORD *)(v106 + 48) == *(_DWORD *)(v106 + 52)
                        || ((v113 = *(_DWORD *)(v106 + 48), v114 = *(_DWORD *)(v106 + 52), v113 != v114)
                          ? (v113 <= v114
                           ? ((v116 = *(_QWORD *)(v106 + 24), *(_BYTE *)(*(_QWORD *)(v106 + 16) + 20LL))
                            ? (v117 = *(_QWORD *)(v116 + 1024))
                            : (v117 = *(_QWORD *)(v116 + 256)),
                              v115 = *(_DWORD *)(v117 + 4) - v114 + v113)
                           : (v115 = v113 - v114))
                          : (v115 = 0),
                            v115 <= *(_DWORD *)(*(_QWORD *)(v106 + 16) + 8LL)) )
                      {
                        if ( !_InterlockedCompareExchange(
                                (volatile signed __int32 *)(*(_QWORD *)(v106 + 16) + 16LL),
                                1,
                                0) )
                        {
                          v118 = *(_QWORD *)(v106 + 24);
                          if ( *(_BYTE *)(*(_QWORD *)(v106 + 16) + 20LL) )
                            IoQueueWorkItem(
                              *(PIO_WORKITEM *)(v118 + 1032),
                              (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
                              DelayedWorkQueue,
                              *(PVOID *)(v106 + 24));
                          else
                            KeSetEvent((PRKEVENT)(v118 + 472), 0, 0);
                        }
                      }
                    }
                    KeLowerIrql(v109);
                    if ( v108 )
                    {
                      v100 = v213;
                      v119 = NvmeNamespaceProcessRequest(*(_QWORD *)(v106 + 24), (__int64)v112, v213);
                      v120 = v202;
                      v121 = v119;
                      goto LABEL_243;
                    }
                    if ( (int)IoGetIoAttributionHandle(v112, &v231) >= 0 )
                    {
                      v122 = v231;
                      v237 = 0LL;
                      LODWORD(v237) = 1;
                      CurrentStackLocation = v112->Tail.Overlay.CurrentStackLocation;
                      v238 = 0LL;
                      DWORD1(v237) = CurrentStackLocation->MajorFunction | 0x200;
                      *((_QWORD *)&v238 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v238 + 1);
                      IoRecordIoAttribution(v122, &v237);
                    }
                    v124 = *(_QWORD *)(v106 + 24);
                    v125 = v112->Tail.Overlay.CurrentStackLocation;
                    v126 = 0;
                    v127 = v217;
                    v128 = (__int64)v5;
                    LOWORD(v220) = 0;
                    v129 = 0LL;
                    v130 = *(_QWORD *)(v124 + 16);
                    QuadPart = 0LL;
                    v236 = 0LL;
                    v223 = 0;
                    v208 = 0;
                    SecurityContext = v125->Parameters.Create.SecurityContext;
                    v133 = (_MDL *)HIDWORD(*(_QWORD *)(v130 + 136));
                    LOBYTE(v133) = (unsigned __int8)v133 & 1;
                    v202 = 0;
                    v207 = 0;
                    v224 = v5;
                    v121 = 0;
                    v218 = 0LL;
                    LOWORD(v219) = 0;
                    v134 = (unsigned int)SecurityContext;
                    v222 = v217;
                    MajorFunction = 0;
                    v214 = 0;
                    MdlAddress = v133;
                    if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
                    {
                      QuadPart = v125->Parameters.Read.ByteOffset.QuadPart;
                      v218 = QuadPart;
                    }
                    else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
                    {
                      v129 = v125->Parameters.Read.ByteOffset.QuadPart;
                    }
                    v135 = *(_DWORD *)(v124 + 96);
                    if ( v135 == 5 || v135 == 6 )
                    {
                      v208 = 1;
                      v121 = -1073741810;
                      if ( QuadPart )
                      {
                        v138 = v213;
                        goto LABEL_326;
                      }
                    }
                    else
                    {
                      v136 = *(_QWORD *)(v130 + 128);
                      LOBYTE(v211) = v125->MajorFunction;
                      v205 = (_BYTE)v211 == 3;
                      LODWORD(v216) = *(_DWORD *)(v136 + 200);
                      if ( v218 )
                      {
                        QuadPart = v218;
                        v137 = MajorFunction;
                        v138 = v213;
LABEL_221:
                        v139 = QuadPart;
                        while ( 2 )
                        {
                          if ( v139 )
                          {
LABEL_223:
                            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v139 + 104), 4, 3) != 3 )
                            {
                              if ( !(_BYTE)v133 )
                              {
                                if ( *(_DWORD *)(v139 + 104) == 1 )
                                {
                                  LOWORD(v126) = v126 + 1;
                                  v214 = v126;
                                }
LABEL_235:
                                v139 = *(_QWORD *)(v139 + 96);
                                if ( !(_WORD)v126 )
                                  continue;
                                if ( !v139 )
                                {
                                  v126 = 0;
                                  v214 = 0;
                                  goto LABEL_221;
                                }
                                goto LABEL_223;
                              }
                              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v139 + 104), 4, 1) != 1 )
                                goto LABEL_235;
                            }
                            v121 = NvmeSendSplitIo(v139, v138, v128, v127, &v208, &v236, &v223, &v220, v137);
                            if ( v121 == 259 )
                            {
                              v222 = 0LL;
                              v127 = 0LL;
                              v224 = 0LL;
                              v202 = 1;
                              v140 = *(_QWORD *)(v124 + 16);
                              LOWORD(v219) = v219 + 1;
                              v128 = 0LL;
                              MajorFunction = (unsigned __int16)v219 % (unsigned int)*(unsigned __int8 *)(v140 + 1730) == 0;
                              v137 = MajorFunction;
                            }
                            else
                            {
                              if ( v121 == -2147483631 )
                              {
                                _InterlockedCompareExchange((volatile signed __int32 *)(v139 + 104), 3, 4);
                                NvmeNamespaceQueueIo(v124, *(_QWORD *)(v139 + 24), v138);
                                goto LABEL_241;
                              }
                              if ( !*(_WORD *)(v139 + 34) )
                              {
                                v208 = 1;
LABEL_239:
                                QuadPart = v218;
                                break;
                              }
                              if ( v208 )
                                goto LABEL_239;
                              v127 = v222;
                              v128 = (__int64)v224;
                            }
                            QuadPart = v218;
                            LOBYTE(v133) = (_BYTE)MdlAddress;
                            v126 = v214;
                            goto LABEL_235;
                          }
                          break;
                        }
LABEL_326:
                        _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
LABEL_327:
                        v120 = v202;
LABEL_328:
                        if ( v121 != -2147483631 && v121 < 1 )
                        {
LABEL_284:
                          if ( v129 )
                          {
                            v168 = *(_QWORD *)(v129 + 24);
                            if ( v168 )
                            {
                              v169 = *(_BYTE *)(v129 + 126) & 1;
                              v170 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 128LL);
                              v171 = KfRaiseIrql(2u);
                              v172 = *(_QWORD *)(v170 + 1160);
                              LOBYTE(v211) = v171;
                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v172 + 8) + 96LL))(
                                v172,
                                v168,
                                v169 ^ 1u);
                              if ( (unsigned __int8)v211 < 2u )
                                KeLowerIrql(v211);
                            }
                            v173 = *(_QWORD *)(v129 + 88);
                            v174 = v226;
                            if ( v173 )
                            {
                              v175 = *(_QWORD *)(v124 + 16);
                              *(_QWORD *)(v173 + 88) = 0LL;
                              *(_DWORD *)(v173 + 108) = 0;
                              *(_DWORD *)(v173 + 104) = 0;
                              ExpInterlockedPushEntrySList(
                                *(PSLIST_HEADER *)(*(_QWORD *)(v175 + 888) + v174),
                                (PSLIST_ENTRY)v173);
                            }
                            FreeNVMeSGLBufferContext(*(_QWORD *)(v124 + 16), v129, 1);
                            v112->IoStatus.Status = v121;
                            IofCompleteRequest(v112, 0);
                            v176 = *(_QWORD *)(v124 + 128);
                            if ( !*(_BYTE *)v176
                              && _InterlockedExchangeAdd(
                                   *(volatile signed __int32 **)(*(_QWORD *)(v176 + 24) + v174),
                                   0xFFFFFFFF) == 1 )
                            {
                              v177 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 128LL);
                              if ( NvmeNamespaceCheckAndAcquirePoFx(v124) )
                              {
                                PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v124 + 128) + 8LL), 0LL, 2LL);
                                NvmeNamespaceReleasePoFx(v124);
                              }
                              v155 = *(_QWORD *)(v177 + 160);
                              if ( *(_BYTE *)v155 == 1 )
                                goto LABEL_295;
                            }
                            goto LABEL_296;
                          }
                          if ( QuadPart )
                          {
                            if ( v208 )
                            {
                              FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(v124 + 16), QuadPart);
                              FreeNVMeChainedIoSplitContext(*(_QWORD *)(v124 + 16), v138, v218, (__int64)v112);
                              v112->IoStatus.Status = v121;
                              IofCompleteRequest(v112, 0);
                              v192 = *(_QWORD *)(v124 + 128);
                              if ( !*(_BYTE *)v192
                                && _InterlockedExchangeAdd(
                                     *(volatile signed __int32 **)(*(_QWORD *)(v192 + 24) + v226),
                                     0xFFFFFFFF) == 1 )
                              {
                                v193 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 128LL);
                                if ( NvmeNamespaceCheckAndAcquirePoFx(v124) )
                                {
                                  PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v124 + 128) + 8LL), 0LL, 2LL);
                                  NvmeNamespaceReleasePoFx(v124);
                                }
                                v194 = *(_QWORD *)(v193 + 160);
                                if ( *(_BYTE *)v194 == 1 )
                                  PoFxIdleComponent(**(_QWORD **)(v194 + 8), 0LL, 2LL);
                              }
LABEL_241:
                              v120 = v202;
                            }
                            goto LABEL_242;
                          }
LABEL_263:
                          v112->IoStatus.Status = v121;
                          IofCompleteRequest(v112, 0);
                          v153 = *(_QWORD *)(v124 + 128);
                          if ( !*(_BYTE *)v153
                            && _InterlockedExchangeAdd(
                                 *(volatile signed __int32 **)(*(_QWORD *)(v153 + 24) + v226),
                                 0xFFFFFFFF) == 1 )
                          {
                            v154 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 128LL);
                            if ( NvmeNamespaceCheckAndAcquirePoFx(v124) )
                            {
                              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v124 + 128) + 8LL), 0LL, 2LL);
                              NvmeNamespaceReleasePoFx(v124);
                            }
                            v155 = *(_QWORD *)(v154 + 160);
                            if ( *(_BYTE *)v155 == 1 )
LABEL_295:
                              PoFxIdleComponent(**(_QWORD **)(v155 + 8), 0LL, 2LL);
                          }
LABEL_296:
                          v120 = v202;
                        }
LABEL_242:
                        v103 = v234;
                        v100 = v213;
LABEL_243:
                        if ( v121 != 259 )
                        {
                          v104 = (unsigned int)v225;
                          goto LABEL_344;
                        }
                        goto LABEL_357;
                      }
                      if ( !(_BYTE)v133 )
                      {
                        if ( v129 )
                        {
                          v141 = *(_QWORD *)(v129 + 96);
                          v142 = v215;
                          LODWORD(SecurityContext) = *(_DWORD *)(v129 + 116);
                          *(_QWORD *)(v129 + 72) = v215;
                          *(_QWORD *)(v129 + 64) = v127;
                          goto LABEL_280;
                        }
                        v143 = v125->Parameters.Read.ByteOffset.QuadPart;
                        if ( !v134 )
                        {
                          v121 = 0;
                          goto LABEL_263;
                        }
                        v144 = *(unsigned int *)(v124 + 64);
                        if ( v134 % (unsigned int)v144
                          || (v145 = v143 / v144, v143 % v144)
                          || (v146 = *(_QWORD *)(v124 + 424), v214 = v134 / (unsigned int)v144, v145 >= v146)
                          || v146 - v145 < v134 / (unsigned int)v144 )
                        {
                          v121 = -1073741811;
                          goto LABEL_263;
                        }
                        v147 = *(_QWORD *)(v124 + 16);
                        v148 = v216;
                        v222 = (unsigned __int16 *)v147;
                        if ( v134 <= (unsigned int)v216 )
                        {
                          v149 = *(_DWORD *)(v124 + 420);
                          if ( !v149 )
                          {
LABEL_261:
                            NVMeSGLBufferContext = GetNVMeSGLBufferContext(v147, v213);
                            v129 = NVMeSGLBufferContext;
                            if ( NVMeSGLBufferContext )
                            {
                              v47 = (_BYTE)v211 == 3;
                              *(_QWORD *)(NVMeSGLBufferContext + 40) = v112;
                              v156 = *(_BYTE *)(NVMeSGLBufferContext + 126);
                              *(_QWORD *)(v129 + 96) = v143;
                              v157 = v156 & 0xFE | v47;
                              *(_QWORD *)(v129 + 32) = v124;
                              v158 = v214;
                              *(_BYTE *)(v129 + 126) = v157;
                              v159 = v215;
                              *(_DWORD *)(v129 + 112) = v158;
                              *(_QWORD *)(v129 + 64) = v217;
                              *(_QWORD *)(v129 + 72) = v159;
                              *(_QWORD *)(v129 + 104) = v145;
                              *(_DWORD *)(v129 + 116) = v134;
                              *(_QWORD *)(v129 + 56) = v125->Parameters.Read.ByteOffset.QuadPart;
                              v160 = v125->Parameters.Create.SecurityContext;
                              v125->Parameters.Read.ByteOffset.QuadPart = v129;
                              *(_QWORD *)(v129 + 48) = v160;
                              v125->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                              v161 = *(unsigned __int16 *)(v129 + 124);
                              v162 = *(_QWORD *)(v129 + 16);
                              v163 = (union _SLIST_HEADER *)((char *)v112->MdlAddress->StartVa
                                                           + v112->MdlAddress->ByteOffset);
                              *(_QWORD *)(v129 + 80) = v163;
                              MdlAddress = v112->MdlAddress;
                              v222 = *(unsigned __int16 **)(v124 + 16);
                              v224 = v163;
                              v164 = KfRaiseIrql(2u);
                              v201 = v161;
                              v165 = MdlAddress;
                              v166 = *((_QWORD *)v222 + 16);
                              v206 = v164;
                              LOBYTE(v211) = (_BYTE)v211 != 3;
                              LOBYTE(v198) = v211;
                              v121 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, union _SLIST_HEADER *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v166 + 1160) + 8LL) + 112LL))(
                                       *(_QWORD *)(v166 + 1160),
                                       *(_QWORD *)(v166 + 8),
                                       MdlAddress,
                                       v163,
                                       v134,
                                       NvmeContinueScatterGatherProcessIO,
                                       v129,
                                       v198,
                                       v162,
                                       v201);
                              if ( v121 == -1073741789 )
                              {
                                LOBYTE(v198) = v211;
                                v121 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, union _SLIST_HEADER *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v222 + 16) + 1160LL) + 8LL) + 88LL))(
                                         *(_QWORD *)(*((_QWORD *)v222 + 16) + 1160LL),
                                         *(_QWORD *)(*((_QWORD *)v222 + 16) + 8LL),
                                         v165,
                                         v224,
                                         v134,
                                         NvmeContinueScatterGatherProcessIO,
                                         v129,
                                         v198);
                              }
                              if ( v206 < 2u )
                                KeLowerIrql(v206);
                              QuadPart = v218;
                              v138 = v213;
                              if ( v121 >= 0 )
                                v121 = 259;
                              goto LABEL_327;
                            }
                            v121 = -1073741670;
                            goto LABEL_263;
                          }
                          if ( v134 <= v149 )
                          {
                            v150 = *(_BYTE *)(v124 + 419);
                            if ( v150 )
                            {
                              v151 = ((unsigned __int64)v134 >> v150)
                                   + (((v134 & (v149 - 1))
                                     + v149
                                     + (unsigned __int64)((unsigned int)v143 & (v149 - 1))
                                     - 1) >> v150);
                            }
                            else
                            {
                              v151 = v134 / v149 + (v134 % v149 + v149 + v143 % v149 - 1) / v149;
                              v147 = (__int64)v222;
                            }
                            if ( v151 <= 1 )
                              goto LABEL_261;
                            v148 = v216;
                          }
                        }
                        v167 = NvmeSplitIoParallel(v124, (__int64)v112, v205, v134, v143, v148, v213, v215, v217, &v207);
                        v120 = v207;
                        v121 = v167;
                        QuadPart = v218;
                        v138 = v213;
                        v202 = v207;
                        goto LABEL_328;
                      }
                      v141 = v125->Parameters.Read.ByteOffset.QuadPart;
                      v142 = v215;
LABEL_280:
                      if ( !(_DWORD)SecurityContext )
                      {
                        v121 = 0;
                        goto LABEL_282;
                      }
                      v178 = *(unsigned int *)(v124 + 64);
                      if ( !((unsigned int)SecurityContext % (unsigned int)v178) )
                      {
                        v179 = v141 / v178;
                        if ( !(v141 % v178) )
                        {
                          v180 = *(_QWORD *)(v124 + 424);
                          v181 = (unsigned int)SecurityContext / (unsigned int)v178;
                          v214 = (unsigned int)SecurityContext / (unsigned int)v178;
                          if ( v179 < v180 && v180 - v179 >= (unsigned int)SecurityContext / (unsigned int)v178 )
                          {
                            if ( (unsigned int)SecurityContext > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 16) + 128LL)
                                                                           + 200LL) )
                              goto LABEL_322;
                            v182 = *(_DWORD *)(v124 + 420);
                            if ( !v182 )
                              goto LABEL_309;
                            if ( (unsigned int)SecurityContext > v182
                              || ((v183 = *(_BYTE *)(v124 + 419)) == 0
                                ? (v184 = (unsigned int)SecurityContext / v182
                                        + ((unsigned int)SecurityContext % v182 - 1LL + v182 + v141 % v182) / v182)
                                : (v184 = ((unsigned __int64)(unsigned int)SecurityContext >> v183)
                                        + ((((v182 - 1) & (unsigned int)v141)
                                          + v182
                                          + (unsigned __int64)((v182 - 1) & (unsigned int)SecurityContext)
                                          - 1) >> v183)),
                                  v142 = v215,
                                  v184 > 1) )
                            {
LABEL_322:
                              v138 = v213;
                              v191 = NvmeSplitIoParallel(
                                       v124,
                                       (__int64)v112,
                                       v205,
                                       (unsigned int)SecurityContext,
                                       v141,
                                       v216,
                                       v213,
                                       v142,
                                       v217,
                                       &v207);
                              v120 = v207;
                              v121 = v191;
                              QuadPart = v218;
                              v202 = v207;
                              goto LABEL_328;
                            }
                            v181 = v214;
LABEL_309:
                            NewNVMePrpListBufferEntry = 0LL;
                            if ( (((unsigned int)SecurityContext
                                 + ((LODWORD(v112->MdlAddress->StartVa) + v112->MdlAddress->ByteOffset) & 0xFFF)
                                 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
                            {
                              v187 = v213;
                            }
                            else
                            {
                              NVMePrpListBufferEntry = GetNVMePrpListBufferEntry(*(_QWORD *)(v124 + 16), v213);
                              v187 = v213;
                              NewNVMePrpListBufferEntry = (__int64)NVMePrpListBufferEntry;
                              if ( !NVMePrpListBufferEntry )
                              {
                                NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(
                                                              *(_QWORD *)(v124 + 16),
                                                              v213);
                                if ( !NewNVMePrpListBufferEntry )
                                {
                                  NvmeNamespaceQueueIo(v124, (__int64)v112, v187);
                                  v121 = -2147483631;
LABEL_321:
                                  QuadPart = v218;
                                  v138 = v213;
                                  goto LABEL_327;
                                }
                              }
                              v181 = v214;
                              v142 = v215;
                            }
                            v188 = v217;
                            if ( v217 )
                            {
                              v189 = (__int64)v142;
                            }
                            else
                            {
                              v190 = *(_QWORD *)(v124 + 16);
                              if ( (*(_BYTE *)(v190 + 136) & 2) != 0 )
                              {
                                v189 = *(_QWORD *)(v190 + 728) + 192LL * v187;
                              }
                              else
                              {
                                v188 = v217;
                                v189 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v190 + 872) + 2LL * v187)
                                     + *(_QWORD *)(v190 + 728)
                                     - 192LL;
                              }
                            }
                            LOBYTE(v197) = 0;
                            v121 = NvmeSubmitIoToSQ(
                                     v124,
                                     (__int64)v112,
                                     v189,
                                     NewNVMePrpListBufferEntry,
                                     v187,
                                     v197,
                                     (unsigned int)SecurityContext,
                                     v141,
                                     v179,
                                     v181,
                                     v205,
                                     v188);
                            goto LABEL_321;
                          }
                        }
                      }
                      v121 = -1073741811;
LABEL_282:
                      QuadPart = v218;
                    }
                    v120 = 0;
                    v138 = v213;
                    goto LABEL_284;
                  }
                }
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v106, 0, 1) == 1 )
                {
                  v195 = *(_QWORD *)(v106 + 24);
                  if ( *(_BYTE *)(*(_QWORD *)(v106 + 16) + 20LL) == 1 )
                    _InterlockedDecrement((volatile signed __int32 *)(v195 + 956));
                  else
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v195 + 16) + 952LL));
                }
                KeLowerIrql(v109);
                v120 = v202;
                v121 = -2147483622;
                v100 = v213;
LABEL_344:
                if ( v120 )
                {
LABEL_357:
                  v99 = 0LL;
                  return v99 == 0LL;
                }
                if ( v121 == -2147483631 )
                  goto LABEL_358;
                if ( v121 == -2147483622 )
                {
                  v10 = v221;
                  if ( v221 == 1 )
                  {
                    v5 = v215;
                    break;
                  }
LABEL_352:
                  if ( ++v104 >= *(_DWORD *)(v103 + 4) )
                    v104 = 0;
                  LODWORD(v225) = v104;
                }
                else if ( v221 != 1 )
                {
                  goto LABEL_352;
                }
                if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
                  goto LABEL_358;
                v5 = v215;
                v10 = v221;
                goto LABEL_176;
              }
            }
            if ( v10 == 1 )
              break;
            v107 = v104 + 1;
            v104 = 0;
            if ( v107 != *(_DWORD *)(v103 + 4) )
              v104 = v107;
            LODWORD(v225) = v104;
          }
          while ( v105 != v104 );
          v26 = v209;
          v4 = v228;
          v101 = v230;
LABEL_350:
          v213 = ++v100;
        }
      }
      v17 = 0;
      if ( (unsigned int)(v16 + 1) < *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4LL) )
        v17 = v16 + 1;
    }
    while ( (_DWORD)v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 52), v17, v16) );
    do
      v18 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v16 + *(_QWORD *)(v12 + 56)), 0LL);
    while ( !v18 );
    if ( !*(_DWORD *)(*(_QWORD *)(v12 + 16) + 16LL)
      && (*(_DWORD *)v12 == 2
       || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v12 + 32) + 16LL * *(unsigned int *)(v12 + 8)))) )
    {
      if ( *(_DWORD *)(v12 + 48) == *(_DWORD *)(v12 + 52)
        || ((v19 = *(_DWORD *)(v12 + 48), v20 = *(_DWORD *)(v12 + 52), v19 != v20)
          ? (v19 <= v20
           ? ((v22 = *(_QWORD *)(v12 + 24), *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL))
            ? (v23 = *(_QWORD *)(v22 + 1024))
            : (v23 = *(_QWORD *)(v22 + 256)),
              v21 = *(_DWORD *)(v23 + 4) - v20 + v19)
           : (v21 = v19 - v20))
          : (v21 = 0),
            v21 <= *(_DWORD *)(*(_QWORD *)(v12 + 16) + 8LL)) )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 16LL), 1, 0) )
        {
          v24 = *(_QWORD *)(v12 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL) )
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(v24 + 1032),
              (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
              DelayedWorkQueue,
              *(PVOID *)(v12 + 24));
          else
            KeSetEvent((PRKEVENT)(v24 + 472), 0, 0);
        }
      }
    }
    KeLowerIrql(v15);
    if ( !v14 )
    {
      if ( (int)IoGetIoAttributionHandle(v18, &v233) >= 0 )
      {
        v29 = v233;
        v237 = 0LL;
        LODWORD(v237) = 1;
        v30 = v18->Tail.Overlay.CurrentStackLocation;
        v238 = 0LL;
        DWORD1(v237) = v30->MajorFunction | 0x200;
        *((_QWORD *)&v238 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v238 + 1);
        IoRecordIoAttribution(v29, &v237);
      }
      v31 = *(_QWORD *)(v12 + 24);
      v32 = v18->Tail.Overlay.CurrentStackLocation;
      v33 = 0;
      v34 = v217;
      v35 = 0;
      v212 = 0;
      v36 = 0LL;
      v37 = *(_QWORD *)(v31 + 16);
      v38 = 0LL;
      v227 = 0;
      v235 = 0LL;
      v232 = 0;
      v39 = v32->Parameters.Create.SecurityContext;
      v40 = (unsigned int)v39;
      v41 = (union _SLIST_HEADER *)HIDWORD(*(_QWORD *)(v37 + 136));
      LOBYTE(v41) = (unsigned __int8)v41 & 1;
      v226 = (__int64)v5;
      v216 = 0LL;
      v27 = 0;
      v211 = 0;
      v202 = 0;
      v207 = 0;
      v225 = v217;
      v203 = 0;
      v220 = 0;
      v222 = (unsigned __int16 *)v37;
      v224 = v41;
      if ( v39 == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
      {
        v38 = v32->Parameters.Read.ByteOffset.QuadPart;
        v216 = v38;
      }
      else if ( v39 == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
      {
        v36 = v32->Parameters.Read.ByteOffset.QuadPart;
      }
      v42 = *(_DWORD *)(v31 + 96);
      if ( v42 == 5 || v42 == 6 )
      {
        v212 = 1;
        v27 = -1073741810;
        if ( v38 )
        {
LABEL_146:
          _interlockedbittestandreset((volatile signed __int32 *)(v38 + 108), 0);
LABEL_147:
          v26 = v209;
          goto LABEL_148;
        }
LABEL_106:
        v28 = 0;
        v26 = v209;
LABEL_107:
        if ( v36 )
        {
          v73 = *(_QWORD *)(v36 + 24);
          if ( v73 )
          {
            v74 = *(_BYTE *)(v36 + 126) & 1;
            v75 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 128LL);
            v76 = KfRaiseIrql(2u);
            v77 = *(_QWORD *)(v75 + 1160);
            LOBYTE(v211) = v76;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v77 + 8) + 96LL))(v77, v73, v74 ^ 1u);
            if ( (unsigned __int8)v211 < 2u )
              KeLowerIrql(v211);
            v26 = v209;
          }
          v78 = *(_QWORD *)(v36 + 88);
          v79 = v218;
          if ( v78 )
          {
            v80 = *(_QWORD *)(v31 + 16);
            *(_QWORD *)(v78 + 88) = 0LL;
            *(_DWORD *)(v78 + 108) = 0;
            *(_DWORD *)(v78 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v80 + 888) + v79), (PSLIST_ENTRY)v78);
          }
          FreeNVMeSGLBufferContext(*(_QWORD *)(v31 + 16), v36, 1);
          v18->IoStatus.Status = v27;
          IofCompleteRequest(v18, 0);
          v81 = *(_QWORD *)(v31 + 128);
          if ( *(_BYTE *)v81
            || _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v81 + 24) + v79), 0xFFFFFFFF) != 1 )
          {
            goto LABEL_67;
          }
          v82 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 128LL);
          if ( !NvmeNamespaceCheckAndAcquirePoFx(v31) )
            goto LABEL_118;
          goto LABEL_117;
        }
        if ( v38 )
        {
          if ( !v212 )
            goto LABEL_68;
          FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(v31 + 16), v38);
          FreeNVMeChainedIoSplitContext(*(_QWORD *)(v31 + 16), v26, v216, (__int64)v18);
        }
LABEL_155:
        v18->IoStatus.Status = v27;
        IofCompleteRequest(v18, 0);
        v97 = *(_QWORD *)(v31 + 128);
        if ( *(_BYTE *)v97
          || _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v97 + 24) + v218), 0xFFFFFFFF) != 1 )
        {
LABEL_67:
          v28 = v202;
LABEL_68:
          v9 = v219;
          v8 = v231;
          goto LABEL_69;
        }
        v82 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 128LL);
        if ( !NvmeNamespaceCheckAndAcquirePoFx(v31) )
        {
LABEL_118:
          v83 = *(_QWORD *)(v82 + 160);
          if ( *(_BYTE *)v83 == 1 )
            PoFxIdleComponent(**(_QWORD **)(v83 + 8), 0LL, 2LL);
          goto LABEL_67;
        }
LABEL_117:
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v31 + 128) + 8LL), 0LL, 2LL);
        NvmeNamespaceReleasePoFx(v31);
        goto LABEL_118;
      }
      v43 = *(_QWORD *)(v37 + 128);
      MajorFunction = v32->MajorFunction;
      v208 = MajorFunction == 3;
      v214 = *(_DWORD *)(v43 + 200);
      if ( v216 )
      {
        v38 = v216;
        v44 = v226;
LABEL_47:
        v45 = v38;
LABEL_48:
        if ( v45 )
        {
          while ( 1 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 104), 4, 3) == 3 )
              goto LABEL_54;
            if ( !(_BYTE)v41 )
            {
              if ( *(_DWORD *)(v45 + 104) == 1 )
              {
                LOWORD(v33) = v33 + 1;
                v220 = v33;
              }
              goto LABEL_61;
            }
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 104), 4, 1) == 1 )
            {
LABEL_54:
              v27 = NvmeSendSplitIo(v45, v209, v44, v34, (bool *)&v212, &v235, &v232, &v227, v35);
              if ( v27 == 259 )
              {
                v202 = 1;
                v46 = *(_QWORD *)(v31 + 16);
                ++v211;
                v34 = 0LL;
                v225 = 0LL;
                v44 = 0LL;
                v35 = v211 % (unsigned int)*(unsigned __int8 *)(v46 + 1730) == 0;
                v203 = v35;
              }
              else
              {
                if ( v27 == -2147483631 )
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 104), 3, 4);
                  v26 = v209;
                  NvmeNamespaceQueueIo(v31, *(_QWORD *)(v45 + 24), v209);
                  goto LABEL_67;
                }
                if ( !*(_WORD *)(v45 + 34) )
                {
                  v212 = 1;
LABEL_65:
                  v38 = v216;
                  goto LABEL_146;
                }
                if ( v212 )
                  goto LABEL_65;
                v34 = v225;
                v35 = v203;
              }
              v38 = v216;
              LOBYTE(v41) = (_BYTE)v224;
              v33 = v220;
            }
LABEL_61:
            v45 = *(_QWORD *)(v45 + 96);
            if ( !(_WORD)v33 )
              goto LABEL_48;
            if ( !v45 )
            {
              v33 = 0;
              v220 = 0;
              goto LABEL_47;
            }
          }
        }
        goto LABEL_146;
      }
      if ( (_BYTE)v41 )
      {
        v49 = v32->Parameters.Read.ByteOffset.QuadPart;
        v48 = v215;
        goto LABEL_104;
      }
      if ( v36 )
      {
        v48 = v215;
        v49 = *(_QWORD *)(v36 + 96);
        LODWORD(v39) = *(_DWORD *)(v36 + 116);
        *(_QWORD *)(v36 + 72) = v215;
        *(_QWORD *)(v36 + 64) = v34;
LABEL_104:
        if ( !(_DWORD)v39 )
        {
LABEL_105:
          v38 = v216;
          goto LABEL_106;
        }
        v84 = *(unsigned int *)(v31 + 64);
        if ( (unsigned int)v39 % (unsigned int)v84
          || (v85 = v49 / v84, v49 % v84)
          || (v86 = *(_QWORD *)(v31 + 424), v87 = (unsigned int)v39 / (unsigned int)v84, v85 >= v86)
          || v86 - v85 < (unsigned int)v39 / (unsigned int)v84 )
        {
          v27 = -1073741811;
          goto LABEL_105;
        }
        if ( (unsigned int)v39 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 128LL) + 200LL) )
        {
          v88 = *(_DWORD *)(v31 + 420);
          if ( !v88
            || (unsigned int)v39 <= v88
            && ((v89 = *(_BYTE *)(v31 + 419)) == 0
              ? (LODWORD(v91) = (unsigned int)v39 / v88, v90 = ((unsigned int)v39 % v88 - 1LL + v88 + v49 % v88) / v88)
              : (v90 = (((unsigned int)v49 & (v88 - 1)) + v88 + (unsigned __int64)((unsigned int)v39 & (v88 - 1)) - 1) >> v89,
                 v91 = (unsigned __int64)(unsigned int)v39 >> *(_BYTE *)(v31 + 419)),
                v48 = v215,
                (unsigned int)(v91 + v90) <= 1) )
          {
            v92 = 0LL;
            if ( (((unsigned int)v39
                 + ((LODWORD(v18->MdlAddress->StartVa) + v18->MdlAddress->ByteOffset) & 0xFFF)
                 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
            {
              v92 = (__int64)GetNVMePrpListBufferEntry(*(_QWORD *)(v31 + 16), v209);
              if ( !v92 )
              {
                v92 = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v31 + 16), v209);
                if ( !v92 )
                {
                  v26 = v209;
                  NvmeNamespaceQueueIo(v31, (__int64)v18, v209);
                  v27 = -2147483631;
LABEL_142:
                  v38 = v216;
LABEL_148:
                  v28 = v202;
                  goto LABEL_149;
                }
              }
              v48 = v215;
            }
            v93 = v217;
            if ( v217 )
            {
              v94 = (__int64)v48;
            }
            else
            {
              v95 = *(_QWORD *)(v31 + 16);
              if ( (*(_BYTE *)(v95 + 136) & 2) != 0 )
              {
                v94 = *(_QWORD *)(v95 + 728) + 192LL * v209;
              }
              else
              {
                v93 = v217;
                v94 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v95 + 872) + 2LL * v209)
                    + *(_QWORD *)(v95 + 728)
                    - 192LL;
              }
            }
            v199 = v49;
            v26 = v209;
            LOBYTE(v197) = 0;
            v27 = NvmeSubmitIoToSQ(
                    v31,
                    (__int64)v18,
                    v94,
                    v92,
                    v209,
                    v197,
                    (unsigned int)v39,
                    v199,
                    v85,
                    v87,
                    v208,
                    v93);
            goto LABEL_142;
          }
        }
        v96 = NvmeSplitIoParallel(v31, (__int64)v18, v208, (unsigned int)v39, v49, v214, v209, v48, v217, &v207);
        v28 = v207;
        v27 = v96;
        v38 = v216;
        v26 = v209;
        v202 = v207;
LABEL_149:
        if ( v27 == -2147483631 || v27 >= 1 )
          goto LABEL_68;
        goto LABEL_107;
      }
      v50 = v32->Parameters.Read.ByteOffset.QuadPart;
      if ( !v40 )
      {
LABEL_92:
        v26 = v209;
        goto LABEL_155;
      }
      v51 = *(unsigned int *)(v31 + 64);
      if ( v40 % (unsigned int)v51
        || (v52 = v50 / v51, v50 % v51)
        || (v53 = *(_QWORD *)(v31 + 424), LODWORD(v225) = v40 / (unsigned int)v51, v52 >= v53)
        || v53 - v52 < v40 / (unsigned int)v51 )
      {
        v27 = -1073741811;
        goto LABEL_92;
      }
      v54 = v214;
      if ( v40 <= v214 )
      {
        v55 = *(_DWORD *)(v31 + 420);
        if ( !v55 )
        {
LABEL_90:
          v58 = GetNVMeSGLBufferContext(v37, v209);
          v36 = v58;
          if ( v58 )
          {
            v47 = MajorFunction == 3;
            *(_QWORD *)(v58 + 40) = v18;
            v59 = *(_BYTE *)(v58 + 126);
            *(_QWORD *)(v36 + 96) = v50;
            v60 = v59 & 0xFE | v47;
            *(_QWORD *)(v36 + 32) = v31;
            v61 = (int)v225;
            *(_BYTE *)(v36 + 126) = v60;
            v62 = v215;
            *(_DWORD *)(v36 + 112) = v61;
            *(_QWORD *)(v36 + 64) = v217;
            *(_QWORD *)(v36 + 72) = v62;
            *(_QWORD *)(v36 + 104) = v52;
            *(_DWORD *)(v36 + 116) = v40;
            *(_QWORD *)(v36 + 56) = v32->Parameters.Read.ByteOffset.QuadPart;
            v63 = v32->Parameters.Create.SecurityContext;
            v32->Parameters.Read.ByteOffset.QuadPart = v36;
            *(_QWORD *)(v36 + 48) = v63;
            v32->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
            v64 = *(unsigned __int16 *)(v36 + 124);
            v65 = *(_QWORD *)(v36 + 16);
            v66 = (_MDL *)((char *)v18->MdlAddress->StartVa + v18->MdlAddress->ByteOffset);
            *(_QWORD *)(v36 + 80) = v66;
            v222 = (unsigned __int16 *)v18->MdlAddress;
            v224 = *(union _SLIST_HEADER **)(v31 + 16);
            MdlAddress = v66;
            v67 = KfRaiseIrql(2u);
            v200 = v64;
            v68 = v222;
            Alignment = v224[8].Alignment;
            LOBYTE(v198) = MajorFunction != 3;
            v204 = v67;
            v70 = *(_QWORD *)(Alignment + 1160);
            v71 = *(_QWORD *)(Alignment + 8);
            LOBYTE(v211) = MajorFunction != 3;
            v27 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, _MDL *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(v70 + 8) + 112LL))(
                    v70,
                    v71,
                    v222,
                    v66,
                    v40,
                    NvmeContinueScatterGatherProcessIO,
                    v36,
                    v198,
                    v65,
                    v200);
            if ( v27 == -1073741789 )
            {
              LOBYTE(v198) = v211;
              v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, _MDL *, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(v224[8].Alignment + 1160) + 8LL) + 88LL))(
                      *(_QWORD *)(v224[8].Alignment + 1160),
                      *(_QWORD *)(v224[8].Alignment + 8),
                      v68,
                      MdlAddress,
                      v40,
                      NvmeContinueScatterGatherProcessIO,
                      v36,
                      v198);
            }
            if ( v204 < 2u )
              KeLowerIrql(v204);
            v38 = v216;
            if ( v27 >= 0 )
              v27 = 259;
            goto LABEL_147;
          }
          v27 = -1073741670;
          goto LABEL_92;
        }
        if ( v40 <= v55 )
        {
          v56 = *(_BYTE *)(v31 + 419);
          if ( v56 )
          {
            v57 = ((unsigned __int64)v40 >> v56)
                + (((v40 & (v55 - 1)) + v55 + (unsigned __int64)((v55 - 1) & (unsigned int)v50) - 1) >> v56);
          }
          else
          {
            v57 = v40 / v55 + (v40 % v55 + v55 + v50 % v55 - 1) / v55;
            v37 = (__int64)v222;
          }
          if ( v57 <= 1 )
            goto LABEL_90;
          v54 = v214;
        }
      }
      v26 = v209;
      v72 = NvmeSplitIoParallel(v31, (__int64)v18, v208, v40, v50, v54, v209, v215, v217, &v207);
      v28 = v207;
      v27 = v72;
      v38 = v216;
      v202 = v207;
      goto LABEL_149;
    }
    v25 = NvmeNamespaceProcessRequest(*(_QWORD *)(v12 + 24), (__int64)v18, v209);
    v26 = v209;
    v27 = v25;
    v28 = v202;
LABEL_69:
    if ( v27 == 259 || v28 )
    {
      v99 = 0LL;
      return v99 == 0LL;
    }
    if ( v27 == -2147483631 )
      break;
    v4 = v228;
    v47 = v27 == -2147483622;
    v5 = v215;
    if ( v47 )
      goto LABEL_164;
    if ( v221 != 1 )
    {
LABEL_165:
      if ( ++v9 >= *(_DWORD *)(v8 + 4) )
        v9 = 0;
      v219 = v9;
    }
    if ( !StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
    {
      v10 = v221;
      continue;
    }
    break;
  }
LABEL_358:
  v99 = v217;
  return v99 == 0LL;
}
