/*
 * XREFs of EtwpWriteUserEvent @ 0x140B85DAC
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140258A90 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x140258AC8 (EtwpTraceLostEvent.c)
 *     IoGetStackLimits @ 0x1402631F0 (IoGetStackLimits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x140411450 (DecodeProviderTraits.c)
 *     EtwpApplyEventNameFilter @ 0x140413C18 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140413F4C (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     EtwpApplyStackWalkIdFilter @ 0x14044187C (EtwpApplyStackWalkIdFilter.c)
 *     EtwpCreateEventKey @ 0x14045F1C0 (EtwpCreateEventKey.c)
 *     EtwpGetStackLookasideListEntry @ 0x140467D30 (EtwpGetStackLookasideListEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047397C (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140473EA4 (EtwpGetStackExtendedHeaderItem.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     EtwpApplyLevelKwFilter @ 0x14047E280 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14051F084 (EtwpApplyEventIdPayloadFilter.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_1144514872__private_IsEnabledDeviceUsageNoInline @ 0x1406CA1E8 (Feature_1144514872__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B52BC8 (EtwpGetPsmKeyExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        int a5,
        void *a6,
        void *a7,
        unsigned int a8,
        volatile void *a9,
        __int64 a10,
        __int64 a11,
        __int16 a12,
        void *a13,
        unsigned __int64 *a14,
        char a15)
{
  int v16; // r12d
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 v20; // r10
  char v21; // si
  __int64 v22; // r8
  __int64 v23; // r10
  unsigned int *v24; // rbx
  bool v25; // zf
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // r9
  _KPROCESS *Process; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v39; // r12d
  int v40; // edi
  int v41; // ecx
  int v42; // ebx
  int v43; // edx
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  __int64 v47; // rcx
  int v48; // ecx
  PSLIST_ENTRY StackLookasideListEntry; // rax
  _SLIST_ENTRY *v50; // rdi
  unsigned __int16 *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _KLOCK_ENTRIES *v54; // r9
  void *v55; // rsp
  __int64 v56; // rbx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // r13
  __int64 v60; // r12
  _BYTE *v61; // rax
  unsigned int *v62; // rbx
  unsigned int v63; // ebx
  _SLIST_ENTRY *v64; // rdi
  char v65; // al
  volatile void **v66; // r13
  volatile void *v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // r12
  _DWORD *v73; // r13
  int v74; // eax
  _SLIST_ENTRY *v75; // rcx
  unsigned int v76; // edi
  volatile void *v77; // r12
  __int64 v78; // r13
  int ReserveTraceBufferStatus; // ebx
  int v80; // eax
  char v81; // cl
  unsigned int v82; // eax
  char v83; // cl
  __int64 v84; // r14
  char *v85; // r12
  void *v86; // r9
  void *v87; // rcx
  struct _LIST_ENTRY *v88; // rdx
  __int16 v89; // r14
  unsigned __int16 v90; // bx
  __int16 v91; // r10
  char *v92; // rbx
  char *v93; // rcx
  char *v94; // rbx
  char *v95; // rbx
  int v96; // r11d
  __int16 v97; // r8
  char *v98; // rdx
  unsigned __int64 ProcessStartKey; // rax
  char *v100; // rdx
  char *v101; // r9
  char v102; // r11
  char *v103; // rbx
  _QWORD *v104; // rdx
  char *v105; // rcx
  char *v106; // rbx
  unsigned __int16 *v107; // rdi
  unsigned int v108; // ecx
  unsigned __int16 *v109; // rax
  unsigned __int16 v110; // r14
  __int64 v111; // rdi
  _WORD *v112; // rbx
  char *v113; // rcx
  int v114; // eax
  __int64 v115; // rax
  __int16 v116; // cx
  unsigned int v117; // eax
  signed __int64 v118; // rbx
  unsigned int *v119; // rdi
  unsigned int ULongFromUser; // r12d
  signed __int64 *ULong64FromUser; // r14
  char UCharFromUser; // al
  unsigned int v123; // edi
  char *v124; // r12
  char *v125; // rdi
  unsigned int v126; // eax
  struct _KTHREAD *v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rdi
  unsigned int i; // ebx
  __int64 v131; // r11
  _BYTE v132[400]; // [rsp+30h] [rbp-1E0h] BYREF
  char v133; // [rsp+210h] [rbp+0h]
  unsigned int v134; // [rsp+214h] [rbp+4h]
  char v135; // [rsp+218h] [rbp+8h]
  unsigned int v136; // [rsp+21Ch] [rbp+Ch]
  int v137; // [rsp+220h] [rbp+10h]
  __int64 v138; // [rsp+228h] [rbp+18h]
  unsigned int v139; // [rsp+230h] [rbp+20h]
  unsigned __int16 v140; // [rsp+234h] [rbp+24h] BYREF
  __int16 v141; // [rsp+238h] [rbp+28h]
  unsigned int v142; // [rsp+240h] [rbp+30h]
  int v143; // [rsp+244h] [rbp+34h]
  PSLIST_ENTRY v144; // [rsp+248h] [rbp+38h]
  unsigned int v145; // [rsp+250h] [rbp+40h]
  int v146; // [rsp+254h] [rbp+44h]
  __int16 v147; // [rsp+258h] [rbp+48h]
  unsigned int v148; // [rsp+25Ch] [rbp+4Ch]
  __int64 v149; // [rsp+260h] [rbp+50h]
  __int64 v150; // [rsp+268h] [rbp+58h]
  volatile void *Address; // [rsp+270h] [rbp+60h]
  unsigned __int16 v152; // [rsp+278h] [rbp+68h]
  int v153; // [rsp+27Ch] [rbp+6Ch]
  char *v154; // [rsp+280h] [rbp+70h]
  unsigned __int64 LowLimit; // [rsp+288h] [rbp+78h] BYREF
  __int64 v156; // [rsp+290h] [rbp+80h]
  unsigned int v157; // [rsp+298h] [rbp+88h]
  unsigned int v158; // [rsp+29Ch] [rbp+8Ch]
  int v159; // [rsp+2A0h] [rbp+90h]
  int v160; // [rsp+2A4h] [rbp+94h]
  void *v161; // [rsp+2A8h] [rbp+98h]
  PSLIST_ENTRY v162; // [rsp+2B0h] [rbp+A0h] BYREF
  __int64 v163; // [rsp+2B8h] [rbp+A8h]
  volatile void *v164; // [rsp+2C0h] [rbp+B0h]
  void *v165; // [rsp+2C8h] [rbp+B8h]
  unsigned __int64 v166; // [rsp+2D0h] [rbp+C0h] BYREF
  signed __int64 v167; // [rsp+2D8h] [rbp+C8h] BYREF
  unsigned int v168; // [rsp+2E0h] [rbp+D0h]
  unsigned int v169; // [rsp+2E4h] [rbp+D4h]
  void *Src; // [rsp+2E8h] [rbp+D8h]
  _OWORD *v171; // [rsp+2F0h] [rbp+E0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+2F8h] [rbp+E8h]
  void *v173; // [rsp+300h] [rbp+F0h]
  void *v174; // [rsp+308h] [rbp+F8h]
  __int64 v175; // [rsp+310h] [rbp+100h]
  struct _KTHREAD *CurrentThread; // [rsp+318h] [rbp+108h]
  char *v177; // [rsp+320h] [rbp+110h]
  unsigned __int64 *v178; // [rsp+328h] [rbp+118h]
  void *v179; // [rsp+330h] [rbp+120h]
  char *v180; // [rsp+338h] [rbp+128h]
  __int64 v181; // [rsp+340h] [rbp+130h]
  __int64 v182; // [rsp+348h] [rbp+138h]
  PSLIST_ENTRY ListEntry; // [rsp+350h] [rbp+140h]
  unsigned __int64 HighLimit; // [rsp+358h] [rbp+148h] BYREF
  __int128 v185; // [rsp+360h] [rbp+150h] BYREF
  __int64 v186; // [rsp+370h] [rbp+160h]
  volatile void *v187; // [rsp+378h] [rbp+168h]
  void *v188; // [rsp+380h] [rbp+170h]
  char *v189; // [rsp+388h] [rbp+178h]
  _QWORD v190[96]; // [rsp+390h] [rbp+180h] BYREF
  unsigned int v191; // [rsp+690h] [rbp+480h]
  __int128 v192; // [rsp+6A0h] [rbp+490h] BYREF
  _WORD v193[40]; // [rsp+6B0h] [rbp+4A0h] BYREF

  v152 = a3;
  v16 = a2;
  v156 = a1;
  v150 = a11;
  v182 = a1;
  Src = a6;
  v173 = a7;
  Address = a9;
  v181 = a10;
  v179 = a13;
  v178 = a14;
  v17 = 0;
  v18 = 0;
  v159 = 0;
  v192 = 0LL;
  memset_0(v190, 0, 0x308uLL);
  v145 = 0;
  memset_0(v193, 0, sizeof(v193));
  v161 = 0LL;
  ListEntry = 0LL;
  v174 = 0LL;
  v140 = 0;
  v171 = 0LL;
  v164 = 0LL;
  v187 = 0LL;
  v166 = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v147 = a12 & 0x100;
  v139 = 256;
  v138 = 1LL;
  v144 = 0LL;
  v142 = 0;
  if ( !a9 )
  {
    if ( !a8 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( !a8 )
    return 3221225485LL;
LABEL_5:
  if ( a8 > 0x80 )
    return 3221225485LL;
  RtlCopyFromUser(&v192, (char *)Src + 40, 0x10uLL);
  v20 = v150;
  if ( !v150 )
    v20 = v156;
  v150 = v20;
  v21 = 0;
  v133 = 0;
  v149 = *(_QWORD *)(v156 + 648);
  v175 = v149;
  if ( v178 && *v178 )
  {
    v166 = *v178;
    v21 = 16;
    v133 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v179, (a12 & 0x200) != 0, &v140, &v171);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(v16) = ~a4 & v16;
LABEL_14:
  v24 = (unsigned int *)v138;
  while ( 1 )
  {
    while ( 1 )
    {
      v25 = !_BitScanForward((unsigned int *)&v26, (unsigned __int16)v16);
      v145 = v26;
      if ( v25 )
        goto LABEL_283;
      v185 = 0LL;
      v186 = 0LL;
      v167 = 0LL;
      v137 = 80;
      v148 = 0;
      v146 = 0;
      v165 = 0LL;
      v180 = 0LL;
      LOBYTE(v22) = 0;
      v139 = v22;
      v135 = 0;
      v138 = 1LL;
      v163 = 1LL;
      v144 = 0LL;
      v162 = 0LL;
      LOWORD(v16) = (v16 - 1) & v16;
      v143 = v16;
      v141 = v16;
      v27 = v23 + 32 * (v26 + 4);
      LowLimit = v27;
      LODWORD(v22) = v181;
      if ( v181 )
      {
        v28 = *(_DWORD *)(v181 + 4 * ((unsigned __int64)*(unsigned __int16 *)(v27 + 6) >> 5));
        if ( _bittest(&v28, *(_BYTE *)(v27 + 6) & 0x1F) )
          goto LABEL_14;
      }
      if ( !EtwpLevelKeywordEnabled(v23 + 32 * (v26 + 4), BYTE4(v192), *((__int64 *)&v192 + 1)) )
        goto LABEL_14;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a5 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v27 + 8) & 0x200) != 0 )
        goto LABEL_14;
      v31 = *(_QWORD *)(v23 + 640);
      if ( v31 )
      {
        v32 = *(_DWORD *)(104 * v29 + v31);
        if ( (v32 & 0x80000200) == 0x80000200 || (v32 & 0x80000100) == 0x80000100 )
        {
          v33 = EtwpApplyEventIdPayloadFilter(
                  v23,
                  (unsigned int)v26,
                  v152,
                  v192,
                  SBYTE2(v192),
                  a8,
                  (__int64)Address,
                  1,
                  0);
          v23 = v150;
          if ( !v33 )
            goto LABEL_14;
        }
      }
      if ( v147
        && EtwpIsEventNameFilterEnabled(v23, v26, 0, BYTE4(v192), *((__int64 *)&v192 + 1), 0)
        && !EtwpApplyEventNameFilter(
              v150,
              (unsigned int)v26,
              a8,
              Address,
              1,
              0,
              SBYTE4(v192),
              *((__int64 *)&v192 + 1),
              0) )
      {
        v23 = v150;
        goto LABEL_14;
      }
      v34 = *(unsigned __int16 *)(v27 + 6);
      v142 = v34;
      v160 = v34;
      v35 = (unsigned int)v34;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8 * v34),
             1u) )
      {
        if ( (unsigned int)v35 >= *(_DWORD *)(v149 + 16) )
        {
          v37 = 1LL;
        }
        else
        {
          _mm_lfence();
          v37 = *(_QWORD *)(*(_QWORD *)(v149 + 712) + 8 * v35);
        }
        v163 = v37;
        v138 = v37;
        LOBYTE(v22) = 1;
        v139 = v22;
        v135 = 1;
      }
      else
      {
        v22 = v139;
      }
      if ( (v138 & 1) == 0 )
        break;
      if ( (_BYTE)v22 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8 * v35), 1u);
        IsEnabledDeviceUsageNoInline = Feature_1144514872__private_IsEnabledDeviceUsageNoInline();
        LODWORD(v22) = (unsigned __int8)v139;
        if ( IsEnabledDeviceUsageNoInline )
          LODWORD(v22) = 0;
        v139 = v22;
      }
      v24 = (unsigned int *)v138;
      v23 = v150;
      if ( (_DWORD)v35 == 3 )
      {
        v18 = *(_DWORD *)(v149 + 4340) != 0 ? -1073741058 : -1073741816;
LABEL_42:
        v24 = (unsigned int *)v138;
LABEL_283:
        v64 = v144;
        goto LABEL_284;
      }
    }
    v39 = 80;
    if ( v173 )
      v39 = 104;
    v134 = v39;
    v137 = v39;
    v40 = v173 != 0LL ? 0x10 : 0;
    v41 = *(_DWORD *)(v27 + 8);
    if ( (v41 & 0xFFFFFF9F) != 0 )
    {
      v42 = v173 != 0LL ? 0x10 : 0;
      if ( (v41 & 0x800) != 0 )
      {
        v36 = (__int64)Flink;
        if ( Flink )
        {
          if ( Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
          {
            v42 = v40 | 0x100;
            v39 += (LOWORD(Flink[281].Flink) + 15) & 0xFFFFFFF8;
            v134 = v39;
            v137 = v39;
          }
        }
      }
      if ( (v41 & 1) != 0 )
      {
        if ( (v21 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem((__int64)v193, v36, v22, (struct _KLOCK_ENTRIES *)0x10);
          v21 |= 2u;
          v133 = v21;
        }
        v42 |= 2u;
        v39 += v193[0];
        v134 = v39;
        v137 = v39;
      }
      v43 = *(_DWORD *)(LowLimit + 8);
      if ( (v43 & 2) != 0 )
      {
        v39 += 16;
        v134 = v39;
        v137 = v39;
      }
      v44 = v42 | 1;
      if ( (v43 & 2) == 0 )
        v44 = v42;
      if ( (v43 & 0x80) != 0 )
      {
        v39 += 16;
        v134 = v39;
        v137 = v39;
      }
      v45 = v44 | 0x40;
      if ( (v43 & 0x80) == 0 )
        v45 = v44;
      if ( (v43 & 0x100) != 0 )
      {
        v39 += 16;
        v134 = v39;
        v137 = v39;
      }
      v40 = v45 | 0x80;
      if ( (v43 & 0x100) == 0 )
        v40 = v45;
      v46 = v40;
      if ( (v43 & 4) == 0 )
        goto LABEL_83;
      v47 = *(_QWORD *)(v150 + 640);
      if ( v47 )
      {
        v48 = *(_DWORD *)(104LL * v145 + v47);
        if ( ((v48 & 0x80001000) == 0x80001000 || (v48 & 0x80002000) == 0x80002000 || (v48 & 0x80004000) == 0x80004000)
          && (!EtwpApplyLevelKwFilter(v150, v145, BYTE4(v192), *((__int64 *)&v192 + 1), 1)
           || !EtwpApplyStackWalkIdFilter((unsigned __int16)v192, v150, v145, 1)
           || !EtwpApplyEventNameFilter(v150, v145, a8, Address, 1, 0, SBYTE4(v192), *((__int64 *)&v192 + 1), 1)) )
        {
          goto LABEL_83;
        }
      }
      if ( (v21 & 1) == 0 )
      {
        StackLookasideListEntry = EtwpGetStackLookasideListEntry();
        v50 = StackLookasideListEntry;
        ListEntry = StackLookasideListEntry;
        if ( StackLookasideListEntry )
        {
          v21 |= 8u;
          v161 = &StackLookasideListEntry[2];
          if ( !EtwpGetStackExtendedHeaderItem(v138, CurrentThread, 0, (__int64)StackLookasideListEntry, 0, 0LL) )
          {
            EtwpReleaseStackLookasideListEntry(v50);
            v21 &= ~8u;
            v161 = 0LL;
          }
        }
        v21 |= 1u;
        v133 = v21;
      }
      v40 = v46;
      v51 = (unsigned __int16 *)v161;
      if ( !v161 )
        goto LABEL_83;
      if ( (*(_DWORD *)(v138 + 820) & 1) != 0 )
      {
        if ( EtwpGetCrimsonStackKey(v138, (__int64)v161, (KSPIN_LOCK *)&v162) )
        {
          v40 = v46 | 8;
          v39 += 24;
          v134 = v39;
          v137 = v39;
          v144 = v162;
          goto LABEL_83;
        }
        v144 = v162;
        v51 = (unsigned __int16 *)v161;
      }
      v40 = v46 | 4;
      v39 += *v51;
      v134 = v39;
      v137 = v39;
LABEL_83:
      if ( (*(_DWORD *)(LowLimit + 8) & 8) != 0 )
      {
        if ( (v21 & 4) == 0 )
        {
          HighLimit = 0LL;
          LowLimit = 0LL;
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1E0 )
          {
            v55 = alloca(480LL);
            v174 = v132;
            EtwpGetPsmKeyExtendedHeaderItem((__int64)v132, v52, v53, v54);
          }
          v21 |= 4u;
          v133 = v21;
        }
        if ( v174 )
        {
          v40 |= 0x20u;
          v39 += *(unsigned __int16 *)v174;
          v134 = v39;
          v137 = v39;
        }
      }
    }
    v56 = 48LL * v191;
    v177 = (char *)v56;
    v57 = a8;
    if ( a8 )
      break;
LABEL_135:
    if ( v146 )
    {
      if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
      {
        v69 = (v148 + 15) & 0xFFFFFFF8;
        if ( v69 > 0xFFFF )
          goto LABEL_138;
      }
      else
      {
        v69 = (v148 + 15) & 0xFFFFFFF8;
      }
      v39 += v69;
      v137 = v39;
      v134 = v39;
    }
    if ( v140 )
    {
      if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
      {
        v70 = (v140 + 15) & 0xFFFFFFF8;
        if ( v70 > 0xFFFF )
        {
LABEL_138:
          if ( v18 >= 0 )
            v18 = -1073741675;
          v16 = (unsigned __int16)v143 | (1 << v145);
          goto LABEL_42;
        }
      }
      else
      {
        v70 = (v140 + 15) & 0xFFFFFFF8;
      }
      v39 += v70;
      v137 = v39;
      v134 = v39;
    }
    *(_DWORD *)((char *)&v190[5] + v56) = v39;
    v71 = v39;
    v72 = v138;
    v73 = (_DWORD *)EtwpReserveTraceBuffer((unsigned int *)v138, v71, (__int64)&v185, &v167, 0);
    LowLimit = (unsigned __int64)v73;
    if ( v144 )
    {
      EtwpDereferenceStackEntry(v144, *(_SLIST_HEADER **)(v72 + 1056));
      v74 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline();
      v75 = v144;
      if ( v74 )
        v75 = 0LL;
      v144 = v75;
      v162 = v75;
    }
    if ( v73 )
    {
      *(_QWORD *)((char *)v190 + v56) = v72;
      *(_QWORD *)((char *)&v190[1] + v56) = v73;
      *(_OWORD *)((char *)&v190[2] + v56) = v185;
      *(_QWORD *)((char *)&v190[4] + v56) = v186;
      ++v191;
      v82 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline();
      v83 = v139;
      if ( v82 )
        v83 = 0;
      LOBYTE(v82) = v83;
      v139 = v82;
      v135 = v83;
      v158 = 0;
      v84 = 80LL;
      v136 = 80;
      v85 = 0LL;
      v154 = 0LL;
      if ( a15 )
        RtlCopyFromUser(v73, Src, 0x50uLL);
      else
        RtlCopyVolatileMemory(v73, Src, 0x50uLL);
      if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
      {
        v86 = (void *)v164;
        if ( !v171 )
        {
          if ( v164 )
            goto LABEL_176;
LABEL_174:
          *(_OWORD *)(v73 + 6) = *(_OWORD *)(v156 + 40);
          goto LABEL_184;
        }
        if ( v164 )
        {
LABEL_176:
          if ( KeGetCurrentThread()->PreviousMode )
          {
            ProbeForRead(v164, 0x10uLL, 4u);
            v86 = (void *)v164;
          }
          v87 = v73 + 6;
          if ( KeGetCurrentThread()->PreviousMode )
            RtlCopyFromUser(v87, v86, 0x10uLL);
          else
            RtlCopyVolatileMemory(v87, v86, 0x10uLL);
          *((_WORD *)v73 + 2) |= 0x80u;
          goto LABEL_184;
        }
      }
      else if ( !v171 )
      {
        goto LABEL_174;
      }
      *(_OWORD *)(v73 + 6) = *v171;
      *((_WORD *)v73 + 2) |= 0x80u;
LABEL_184:
      *v73 = *((_DWORD *)&qword_140039860 + v152) | v134;
      if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && (a12 & 0x400) != 0 )
        *((_WORD *)v73 + 2) |= 0x400u;
      if ( v40 )
      {
        if ( (v40 & 0x100) != 0 )
        {
          v88 = Flink;
          v89 = (LOWORD(Flink[281].Flink) + 15) & 0xFFF8;
          v85 = (char *)(v73 + 20);
          *((_WORD *)v73 + 40) = v89;
          *((_WORD *)v73 + 41) = 16;
          *((_WORD *)v73 + 43) = v88[281].Flink;
          *((_WORD *)v73 + 42) &= ~1u;
          *((_WORD *)v73 + 42) = 0;
          v90 = (unsigned __int16)v88[281].Flink;
          memmove(v73 + 22, v88[280].Blink, v90);
          memset_0((char *)v73 + LOWORD(Flink[281].Flink) + 88, 0, (unsigned __int16)(v89 - v90 - 8));
          v91 = 1;
          *((_WORD *)v73 + 2) |= 1u;
          v84 = (unsigned int)*((unsigned __int16 *)v73 + 40) + 80;
          v136 = *((unsigned __int16 *)v73 + 40) + 80;
          v154 = (char *)(v73 + 20);
        }
        else
        {
          v91 = 1;
        }
        if ( (v40 & 0x10) != 0 )
        {
          v92 = (char *)v73 + v84;
          *(_DWORD *)v92 = 65560;
          *((_WORD *)v92 + 3) = 16;
          *((_WORD *)v92 + 2) &= ~1u;
          *((_WORD *)v92 + 2) = 0;
          v93 = (char *)v73 + v84 + 8;
          if ( a15 )
            RtlCopyFromUser(v93, v173, 0x10uLL);
          else
            RtlCopyVolatileMemory(v93, v173, 0x10uLL);
          v91 = 1;
          *((_WORD *)v73 + 2) |= 1u;
          v84 = (unsigned int)(v84 + 24);
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= 1u;
          v85 = v92;
          v154 = v92;
        }
        if ( (v40 & 2) != 0 )
        {
          v94 = (char *)v73 + (unsigned int)v84;
          memmove(v94, v193, v193[0]);
          v91 = 1;
          *((_WORD *)v73 + 2) |= 1u;
          v84 = v193[0] + (unsigned int)v84;
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= 1u;
          v85 = v94;
          v154 = v94;
        }
        if ( (v40 & 1) != 0 )
        {
          v95 = (char *)v73 + (unsigned int)v84;
          *(_DWORD *)v95 = 196624;
          *((_WORD *)v95 + 3) = 4;
          *((_WORD *)v95 + 2) &= ~1u;
          *((_WORD *)v95 + 2) = 0;
          *((_DWORD *)v95 + 2) = PsGetCurrentProcessSessionId();
          v91 = 1;
          *((_WORD *)v73 + 2) |= 1u;
          LOBYTE(v96) = 16;
          v84 = (unsigned int)(v84 + 16);
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= 1u;
          v85 = v95;
          v154 = v95;
        }
        else
        {
          LOBYTE(v96) = 16;
        }
        v97 = 8;
        if ( (v40 & 0x40) != 0 )
        {
          v98 = (char *)v73 + (unsigned int)v84;
          *(_DWORD *)v98 = 851984;
          *((_WORD *)v98 + 3) = 8;
          *((_WORD *)v98 + 2) &= ~1u;
          *((_WORD *)v98 + 2) = 0;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v100 + 1) = ProcessStartKey;
          *((_WORD *)v73 + 2) |= v91;
          v84 = (unsigned int)(v96 + v84);
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= v91;
          v85 = v100;
          v154 = v100;
        }
        if ( (v40 & 0x80u) != 0 )
        {
          v101 = (char *)v73 + v84;
          *(_DWORD *)v101 = 655376;
          *((_WORD *)v101 + 3) = v97;
          *((_WORD *)v101 + 2) &= ~1u;
          *((_WORD *)v101 + 2) = 0;
          if ( ((unsigned __int8)v21 & (unsigned __int8)v96) == 0 )
          {
            EtwpCreateEventKey(&v166);
            v21 |= v102;
            v133 = v21;
            if ( v178 )
              *v178 = v166;
          }
          *((_QWORD *)v101 + 1) = v166;
          *((_WORD *)v73 + 2) |= v91;
          v84 = (unsigned int)(v84 + 16);
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= v91;
          v85 = v101;
          v154 = v101;
        }
        if ( (v40 & 4) != 0 )
        {
          v103 = (char *)v73 + (unsigned int)v84;
          memmove(v103, v161, *(unsigned __int16 *)v161);
          v91 = 1;
          *((_WORD *)v73 + 2) |= 1u;
          v104 = v161;
          v84 = *(unsigned __int16 *)v161 + (unsigned int)v84;
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= 1u;
          v85 = v103;
          v154 = v103;
        }
        else
        {
          v104 = v161;
        }
        if ( (v40 & 8) != 0 )
        {
          v105 = (char *)v73 + (unsigned int)v84;
          *(_DWORD *)v105 = 1179672;
          *((_WORD *)v105 + 3) = 16;
          *((_WORD *)v105 + 2) &= ~1u;
          *((_WORD *)v105 + 2) = 0;
          *((_QWORD *)v105 + 2) = v144;
          *((_QWORD *)v105 + 1) = v104[1];
          *((_WORD *)v73 + 2) |= v91;
          v84 = (unsigned int)(v84 + 24);
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= v91;
          v85 = v105;
          v154 = v105;
        }
        if ( (v40 & 0x20) != 0 )
        {
          v106 = (char *)v73 + (unsigned int)v84;
          v107 = (unsigned __int16 *)v174;
          memmove(v106, v174, *(unsigned __int16 *)v174);
          *((_WORD *)v73 + 2) |= 1u;
          v84 = *v107 + (unsigned int)v84;
          v136 = v84;
          if ( v85 )
            *((_WORD *)v85 + 2) |= 1u;
          v85 = v106;
          v154 = v106;
        }
      }
      v108 = v140;
      if ( v140 )
      {
        v109 = (unsigned __int16 *)((char *)v73 + (unsigned int)v84);
        v177 = (char *)v109;
        v110 = (v140 + 15) & 0xFFF8;
        *v109 = v110;
        v109[1] = 12;
        v109[3] = v108;
        v109[2] &= ~1u;
        v109[2] = 0;
        v111 = v108;
        v112 = v109 + 4;
        memmove(v109 + 4, v179, v108);
        memset_0((char *)v112 + v111, 0, (unsigned __int16)(v110 - v111 - 8));
        *((_WORD *)v73 + 2) |= 1u;
        v113 = v177;
        v114 = *(unsigned __int16 *)v177;
        v84 = v114 + v136;
        v136 += v114;
        if ( v85 )
          *((_WORD *)v85 + 2) |= 1u;
        v85 = v113;
        v154 = v113;
      }
      if ( v146 )
      {
        v115 = v148;
        v116 = (v148 + 15) & 0xFFF8;
        *(_WORD *)((char *)v73 + v84) = v116;
        *(_WORD *)((char *)v73 + v84 + 2) = 11;
        *(_WORD *)((char *)v73 + v84 + 6) = v115;
        *(_WORD *)((char *)v73 + v84 + 4) &= ~1u;
        *(_WORD *)((char *)v73 + v84 + 4) = 0;
        v165 = (char *)v73 + v84 + 8;
        v188 = v165;
        v180 = (char *)v165 + v115;
        v189 = (char *)v165 + v115;
        memset_0((char *)v165 + v115, 0, (unsigned __int16)(v116 - v115 - 8));
        *((_WORD *)v73 + 2) |= 1u;
        v136 = *(unsigned __int16 *)((char *)v73 + v84) + (_DWORD)v84;
        if ( v85 )
          *((_WORD *)v85 + 2) |= 1u;
      }
      v117 = 0;
      v118 = v167;
      while ( 1 )
      {
        v158 = v117;
        if ( v117 >= a8 )
          break;
        v119 = (unsigned int *)((char *)Address + 16 * v117);
        if ( a15 )
          ULongFromUser = RtlReadULongFromUser(v119 + 2);
        else
          ULongFromUser = v119[2];
        if ( a15 )
          ULong64FromUser = (signed __int64 *)RtlReadULong64FromUser(v119);
        else
          ULong64FromUser = *(signed __int64 **)v119;
        if ( v147 )
        {
          if ( a15 )
            UCharFromUser = RtlReadUCharFromUser(v119 + 3);
          else
            UCharFromUser = *((_BYTE *)v119 + 12);
        }
        else
        {
          UCharFromUser = 0;
        }
        if ( UCharFromUser )
        {
          if ( UCharFromUser == 1 )
          {
            if ( !v165 )
              goto LABEL_273;
            v123 = ULongFromUser;
            v124 = (char *)v165 + ULongFromUser;
            if ( v124 < v165 || v124 > v180 || !v146 )
              goto LABEL_273;
            ProbeForRead(ULong64FromUser, v123, 1u);
            if ( a15 )
              RtlCopyFromUser(v165, ULong64FromUser, v123);
            else
              RtlCopyVolatileMemory(v165, ULong64FromUser, v123);
            v165 = v124;
            v188 = v124;
            --v146;
          }
          else if ( UCharFromUser == 3 && ULongFromUser == 8 )
          {
            ProbeForRead(ULong64FromUser, 8uLL, 1u);
            v118 = *ULong64FromUser;
            v167 = *ULong64FromUser;
          }
        }
        else
        {
          v125 = (char *)v73 + v136;
          v126 = ULongFromUser + v136;
          if ( ULongFromUser + v136 < v136 )
          {
            v136 = -1;
LABEL_273:
            v18 = -1073741820;
            v153 = -1073741820;
            *v73 = v134 | 0xC00D0000;
            *((_QWORD *)v73 + 2) = v118;
            LOWORD(v16) = v143;
            v24 = (unsigned int *)v138;
            v64 = v144;
            goto LABEL_284;
          }
          v136 += ULongFromUser;
          if ( v126 > v134 )
            goto LABEL_273;
          if ( a15 )
          {
            ProbeForRead(ULong64FromUser, ULongFromUser, 1u);
            RtlCopyFromUser(v125, ULong64FromUser, ULongFromUser);
          }
          else
          {
            RtlCopyVolatileMemory(v125, ULong64FromUser, ULongFromUser);
          }
        }
        v117 = v158 + 1;
      }
      LODWORD(v22) = v181;
      if ( v181 )
        *(_DWORD *)(v181 + 4 * ((unsigned __int64)v142 >> 5)) |= 1 << (v142 & 0x1F);
      *((_QWORD *)v73 + 2) = v118;
      v127 = CurrentThread;
      v73[14] = CurrentThread->SchedulerApc.SpareLong0;
      v73[15] = v127->UserTime;
      v73[2] = v127[1].CurrentRunTime;
      v73[3] = v127[1].CycleTime;
      v24 = (unsigned int *)v138;
      if ( (*(_DWORD *)(v138 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v138, (__int64)&v185);
      }
      v18 = v159;
      v16 = v143;
      v23 = v150;
      if ( *((_QWORD *)v24 + 194) )
      {
        EtwpInvokeEventCallback((__int64)v24, (__int64 *)&v185);
        v23 = v150;
      }
    }
    else
    {
      v76 = 0;
      v77 = 0LL;
      v78 = v138;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v138, v134);
      if ( v146 )
      {
        v76 = a8;
        v77 = Address;
      }
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (const void *)(v156 + 40),
          (__int16 *)&v192,
          (unsigned __int16 *)(v78 + 136),
          a5,
          ReserveTraceBufferStatus,
          v76,
          (__int64)v77,
          1,
          1);
      if ( v18 >= 0 )
      {
        if ( (*(_DWORD *)(v138 + 12) & 0x8000000) == 0 )
          v18 = ReserveTraceBufferStatus;
        v159 = v18;
      }
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8LL * v142), 1u);
      v80 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline();
      v81 = v139;
      if ( v80 )
        v81 = 0;
      LOBYTE(v139) = v81;
      v25 = ReserveTraceBufferStatus == -1073741675;
      v16 = v143;
      v24 = (unsigned int *)v138;
      v23 = v150;
      if ( v25 )
      {
        v18 = -1073741675;
        goto LABEL_42;
      }
    }
  }
  v157 = 0;
  if ( a15 )
  {
    ProbeForRead(Address, 16LL * a8, 4u);
    v57 = a8;
  }
  v58 = 0;
  while ( 2 )
  {
    v157 = v58;
    if ( v58 >= v57 )
    {
      v56 = (__int64)v177;
      goto LABEL_135;
    }
    v169 = v39;
    v59 = v58;
    v60 = 2LL * v58;
    v61 = Address;
    v62 = (unsigned int *)((char *)Address + 8 * v60);
    if ( a15 )
    {
      v63 = RtlReadULongFromUser(v62 + 2);
      v61 = Address;
    }
    else
    {
      v63 = v62[2];
    }
    LODWORD(LowLimit) = v63;
    if ( v63 > 0xFFFF )
    {
      v18 = -2147483643;
      v153 = -2147483643;
      v16 = (unsigned __int16)v143 | (1 << v145);
      v141 = v143 | (1 << v145);
      if ( !(unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v144 )
          EtwpDereferenceStackEntry(v144, *(_SLIST_HEADER **)(v138 + 1056));
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8LL * v142),
          1u);
      }
      v24 = (unsigned int *)v138;
      v64 = v144;
      goto LABEL_284;
    }
    if ( v147 )
    {
      if ( a15 )
        v65 = RtlReadUCharFromUser(&v61[8 * v60 + 12]);
      else
        v65 = v61[8 * v60 + 12];
    }
    else
    {
      v65 = 0;
    }
    if ( v65 )
    {
      if ( v65 == 1 )
      {
        if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
          v68 = v63 + v148;
        else
          v68 = (unsigned __int16)v63 + v148;
        v168 = v68;
        v148 = v68;
        ++v146;
        goto LABEL_120;
      }
      if ( v65 != 4 )
        goto LABEL_120;
      if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v63 == 16 )
        {
          v66 = (volatile void **)((char *)Address + 16 * v59);
          if ( KeGetCurrentThread()->PreviousMode )
            v67 = (volatile void *)RtlReadULong64FromUser(v66);
          else
            v67 = *v66;
          v164 = v67;
          v187 = v67;
        }
LABEL_120:
        v39 = v134;
      }
      else
      {
        v39 = v134;
      }
    }
    else
    {
      v39 = v63 + v134;
      v134 = v39;
      v137 = v39;
    }
    if ( v39 >= v169 )
    {
      v58 = v157 + 1;
      v57 = a8;
      continue;
    }
    break;
  }
  v18 = -2147483643;
  v153 = -2147483643;
  LOWORD(v16) = v143 | (1 << v145);
  v141 = v16;
  if ( !(unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v144 )
      EtwpDereferenceStackEntry(v144, *(_SLIST_HEADER **)(v138 + 1056));
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8LL * v142), 1u);
  }
  v24 = (unsigned int *)v138;
  v64 = v144;
LABEL_284:
  if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v64 )
      EtwpDereferenceStackEntry(v64, *((_SLIST_HEADER **)v24 + 132));
    v129 = v149;
    if ( (_BYTE)v139 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + 8LL * v142), 1u);
  }
  else
  {
    v129 = v149;
  }
  if ( (v21 & 8) != 0 )
    EtwpReleaseStackLookasideListEntry(ListEntry);
  if ( v18 < 0 )
  {
    EtwpFailLogging((__int64)&v192, v156, (__int64)v190, v16, 0, v18, 1, a8, (__int64)Address, 1);
  }
  else if ( v191 )
  {
    for ( i = 0; i < v191; v17 = i )
    {
      EtwpReleaseTraceBuffer(&v190[6 * v17 + 2]);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v129 + 704) + 8LL * *(unsigned int *)v190[v131]),
        1u);
      ++i;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v128);
  return (unsigned int)v18;
}
