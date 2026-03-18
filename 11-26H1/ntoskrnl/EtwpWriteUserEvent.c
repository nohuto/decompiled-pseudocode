/*
 * XREFs of EtwpWriteUserEvent @ 0x140B7D098
 * Callers:
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140218410 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402189D0 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     EtwpFailLogging @ 0x140256DF0 (EtwpFailLogging.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140257100 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x140257138 (EtwpTraceLostEvent.c)
 *     IoGetStackLimits @ 0x140263C80 (IoGetStackLimits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpDereferenceStackEntry @ 0x14032CCA0 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x140419C00 (DecodeProviderTraits.c)
 *     EtwpApplyEventNameFilter @ 0x14041C3C8 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14041C6FC (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140448D8C (EtwpApplyStackWalkIdFilter.c)
 *     EtwpCreateEventKey @ 0x140466060 (EtwpCreateEventKey.c)
 *     EtwpGetStackLookasideListEntry @ 0x14046E5B0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047A00C (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14047A534 (EtwpGetStackExtendedHeaderItem.c)
 *     PsGetProcessStartKey @ 0x1404838E0 (PsGetProcessStartKey.c)
 *     EtwpApplyLevelKwFilter @ 0x140484910 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A92C8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A93C4 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14051CB68 (EtwpApplyEventIdPayloadFilter.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B50338 (EtwpGetPsmKeyExtendedHeaderItem.c)
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
  __int64 v16; // r13
  unsigned int v17; // r15d
  int v18; // r12d
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // r10
  bool v24; // zf
  __int64 v25; // rdi
  char v26; // bl
  __int64 v27; // r13
  int v28; // eax
  bool v29; // al
  __int64 v30; // r9
  __int64 v31; // r8
  _KPROCESS *Process; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  char v35; // al
  char v36; // al
  __int64 v37; // rdi
  unsigned int v38; // r12d
  int v39; // edi
  int v40; // ecx
  int v41; // ebx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // ebx
  __int64 v46; // rcx
  int v47; // ecx
  PSLIST_ENTRY StackLookasideListEntry; // rax
  struct _SLIST_ENTRY *v49; // rdi
  unsigned __int16 *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  struct _KLOCK_ENTRIES *v53; // r9
  void *v54; // rsp
  __int64 v55; // rbx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // rbx
  char *v59; // rcx
  unsigned int *v60; // rax
  unsigned int ULongFromUser; // r13d
  __int64 v62; // r14
  volatile void *v63; // rbx
  char UCharFromUser; // al
  char *v65; // rax
  volatile void **v66; // rcx
  volatile void *ULong64FromUser; // rax
  unsigned int v68; // edx
  __int64 v69; // r12
  unsigned int v70; // edi
  volatile void *v71; // r12
  __int64 v72; // r13
  int ReserveTraceBufferStatus; // ebx
  __int64 v74; // rbx
  char *v75; // r12
  void *v76; // r9
  void *v77; // rcx
  struct _LIST_ENTRY *v78; // rdx
  __int16 v79; // r14
  unsigned __int16 v80; // bx
  __int64 v81; // rax
  void *v82; // rcx
  char *v83; // rax
  int CurrentProcessSessionId; // eax
  char *v85; // rcx
  int v86; // r10d
  __int16 v87; // r8
  __int16 v88; // r11
  __int64 v89; // rdx
  unsigned __int64 ProcessStartKey; // rax
  char *v91; // rdx
  char *v92; // r9
  char v93; // r10
  char *v94; // rcx
  char *v95; // rdi
  unsigned int v96; // ecx
  _WORD *v97; // rax
  __int16 v98; // r14
  __int64 v99; // rdi
  _WORD *v100; // rbx
  char *v101; // rcx
  int v102; // eax
  __int64 v103; // rdx
  __int16 v104; // cx
  unsigned int v105; // edi
  __int64 v106; // rax
  signed __int64 v107; // rbx
  PSLIST_ENTRY v108; // rax
  unsigned int *v109; // rcx
  signed __int64 *Next; // r12
  char v111; // al
  char *v112; // rcx
  char *v113; // rax
  unsigned int v114; // ecx
  struct _KTHREAD *v115; // rcx
  unsigned int *v116; // rbx
  unsigned int i; // ebx
  __int64 v118; // r11
  _BYTE v119[400]; // [rsp+30h] [rbp-1E0h] BYREF
  char v120; // [rsp+210h] [rbp+0h]
  int v121; // [rsp+214h] [rbp+4h]
  unsigned int v122; // [rsp+218h] [rbp+8h]
  int v123; // [rsp+21Ch] [rbp+Ch]
  unsigned int Length; // [rsp+220h] [rbp+10h]
  int Length_4; // [rsp+224h] [rbp+14h]
  __int16 v126; // [rsp+228h] [rbp+18h]
  unsigned __int16 v127; // [rsp+230h] [rbp+20h]
  int v128; // [rsp+234h] [rbp+24h]
  volatile void *Address; // [rsp+238h] [rbp+28h]
  unsigned __int16 v130[2]; // [rsp+240h] [rbp+30h] BYREF
  __int16 v131; // [rsp+244h] [rbp+34h]
  __int64 v132; // [rsp+248h] [rbp+38h]
  char *v133; // [rsp+250h] [rbp+40h]
  __int64 v134; // [rsp+258h] [rbp+48h]
  unsigned __int16 v135; // [rsp+260h] [rbp+50h]
  int v136; // [rsp+264h] [rbp+54h]
  __int64 v137; // [rsp+268h] [rbp+58h]
  char *v138; // [rsp+270h] [rbp+60h]
  __int64 v139; // [rsp+278h] [rbp+68h]
  int v140; // [rsp+280h] [rbp+70h]
  PSLIST_ENTRY v141; // [rsp+288h] [rbp+78h] BYREF
  __int64 v142; // [rsp+290h] [rbp+80h]
  unsigned int v143; // [rsp+298h] [rbp+88h]
  int v144; // [rsp+29Ch] [rbp+8Ch]
  void *v145; // [rsp+2A0h] [rbp+90h]
  __int64 v146; // [rsp+2A8h] [rbp+98h]
  volatile void *v147; // [rsp+2B0h] [rbp+A0h]
  void *v148; // [rsp+2B8h] [rbp+A8h]
  unsigned __int64 v149; // [rsp+2C0h] [rbp+B0h] BYREF
  void *v150; // [rsp+2C8h] [rbp+B8h]
  signed __int64 v151; // [rsp+2D0h] [rbp+C0h] BYREF
  unsigned int v152; // [rsp+2D8h] [rbp+C8h]
  int v153; // [rsp+2DCh] [rbp+CCh]
  unsigned __int64 LowLimit; // [rsp+2E0h] [rbp+D0h] BYREF
  void *Src; // [rsp+2E8h] [rbp+D8h]
  _OWORD *v156; // [rsp+2F0h] [rbp+E0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+2F8h] [rbp+E8h]
  void *v158; // [rsp+300h] [rbp+F0h]
  struct _KTHREAD *CurrentThread; // [rsp+308h] [rbp+F8h]
  __int64 v160; // [rsp+310h] [rbp+100h]
  void *v161; // [rsp+318h] [rbp+108h]
  char *v162; // [rsp+320h] [rbp+110h]
  __int64 v163; // [rsp+328h] [rbp+118h]
  __int64 v164; // [rsp+330h] [rbp+120h]
  volatile void *v165; // [rsp+338h] [rbp+128h]
  PSLIST_ENTRY ListEntry; // [rsp+340h] [rbp+130h]
  unsigned __int64 HighLimit; // [rsp+348h] [rbp+138h] BYREF
  unsigned __int64 *v168; // [rsp+350h] [rbp+140h]
  __int128 v169; // [rsp+358h] [rbp+148h] BYREF
  __int64 v170; // [rsp+368h] [rbp+158h]
  volatile void *v171; // [rsp+370h] [rbp+160h]
  char *v172; // [rsp+378h] [rbp+168h]
  char *v173; // [rsp+380h] [rbp+170h]
  _QWORD v174[96]; // [rsp+390h] [rbp+180h] BYREF
  unsigned int v175; // [rsp+690h] [rbp+480h]
  __int128 v176; // [rsp+6A0h] [rbp+490h] BYREF
  _WORD v177[40]; // [rsp+6B0h] [rbp+4A0h] BYREF

  v135 = a3;
  LODWORD(v16) = a2;
  v142 = a1;
  v134 = a11;
  v164 = a1;
  Src = a6;
  v158 = a7;
  Address = a9;
  v165 = a9;
  v139 = a10;
  v161 = a13;
  v168 = a14;
  v17 = 0;
  v18 = 0;
  v140 = 0;
  v176 = 0LL;
  memset_0(v174, 0, 0x308uLL);
  Length = 0;
  memset_0(v177, 0, sizeof(v177));
  v145 = 0LL;
  ListEntry = 0LL;
  v150 = 0LL;
  v130[0] = 0;
  v156 = 0LL;
  v147 = 0LL;
  v171 = 0LL;
  v149 = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v131 = a12 & 0x100;
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
  RtlCopyFromUser(&v176, (char *)Src + 40, 0x10uLL);
  v20 = v134;
  if ( !v134 )
    v20 = v142;
  v134 = v20;
  v21 = 0;
  v120 = 0;
  v132 = *(_QWORD *)(v142 + 648);
  v163 = v132;
  if ( v168 && *v168 )
  {
    v149 = *v168;
    v21 = 16;
    v120 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v161, (a12 & 0x200) != 0, v130, &v156);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(v16) = ~a4 & v16;
LABEL_257:
  v23 = v134;
  v31 = v139;
  while ( 1 )
  {
    v24 = !_BitScanForward((unsigned int *)&v25, (unsigned __int16)v16);
    Length = v25;
    if ( v24 )
      break;
    v137 = 1LL;
    v169 = 0LL;
    v170 = 0LL;
    v141 = 0LL;
    v151 = 0LL;
    Length_4 = 80;
    v26 = 0;
    v127 = 0;
    v128 = 0;
    v148 = 0LL;
    v162 = 0LL;
    LOWORD(v16) = (v16 - 1) & v16;
    v123 = v16;
    v126 = v16;
    v27 = v23 + 32 * (v25 + 4);
    if ( v31 )
    {
      v22 = (unsigned __int64)*(unsigned __int16 *)(v27 + 6) >> 5;
      v28 = *(_DWORD *)(v31 + 4 * v22);
      if ( _bittest(&v28, *(_BYTE *)(v27 + 6) & 0x1F) )
        goto LABEL_14;
    }
    v29 = EtwpLevelKeywordEnabled(v23 + 32 * (v25 + 4), BYTE4(v176), *((__int64 *)&v176 + 1));
    v31 = v139;
    if ( !v29 )
      goto LABEL_14;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((a5 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v27 + 8) & 0x200) != 0 )
      goto LABEL_14;
    if ( (v33 = *(_QWORD *)(v23 + 640)) != 0
      && ((v34 = *(_DWORD *)(104 * v30 + v33), (v34 & 0x80000200) == 0x80000200) || (v34 & 0x80000100) == 0x80000100)
      && (v35 = EtwpApplyEventIdPayloadFilter(
                  v23,
                  (unsigned int)v25,
                  v135,
                  v176,
                  SBYTE2(v176),
                  a8,
                  (__int64)Address,
                  1,
                  0),
          v23 = v134,
          v31 = v139,
          !v35) )
    {
LABEL_14:
      LODWORD(v16) = v123;
    }
    else
    {
      if ( v131 )
      {
        if ( EtwpIsEventNameFilterEnabled(v23, v25, 0, BYTE4(v176), *((__int64 *)&v176 + 1), 0) )
        {
          v36 = EtwpApplyEventNameFilter(
                  v134,
                  (unsigned int)v25,
                  a8,
                  Address,
                  1,
                  0,
                  SBYTE4(v176),
                  *((__int64 *)&v176 + 1),
                  0);
          v31 = v139;
          if ( !v36 )
          {
            v23 = v134;
            goto LABEL_14;
          }
        }
      }
      v146 = *(unsigned __int16 *)(v27 + 6);
      v153 = v146;
      v37 = v132;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v132 + 704) + 8 * v146),
             1u) )
      {
        if ( (unsigned int)v146 >= *(_DWORD *)(v37 + 16) )
        {
          v137 = 1LL;
        }
        else
        {
          _mm_lfence();
          v137 = *(_QWORD *)(*(_QWORD *)(v37 + 712) + 8 * v146);
        }
        v26 = 1;
      }
      if ( (v137 & 1) != 0 )
      {
        if ( v26 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v37 + 704) + 8 * v146),
            1u);
        LODWORD(v16) = v123;
        v23 = v134;
        v31 = v139;
        if ( (_DWORD)v146 == 3 )
        {
          v18 = *(_DWORD *)(v37 + 4340) != 0 ? -1073741058 : -1073741816;
LABEL_39:
          LOWORD(v16) = v123;
          break;
        }
      }
      else
      {
        v38 = 80;
        if ( v158 )
          v38 = 104;
        v122 = v38;
        Length_4 = v38;
        v39 = v158 != 0LL ? 0x10 : 0;
        v40 = *(_DWORD *)(v27 + 8);
        if ( (v40 & 0xFFFFFF9F) == 0 )
          goto LABEL_87;
        v41 = v158 != 0LL ? 0x10 : 0;
        if ( (v40 & 0x800) != 0 )
        {
          v22 = (__int64)Flink;
          if ( Flink )
          {
            if ( Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
            {
              v41 = v39 | 0x100;
              v38 += (LOWORD(Flink[281].Flink) + 15) & 0xFFFFFFF8;
              v122 = v38;
              Length_4 = v38;
            }
          }
        }
        if ( (v40 & 1) != 0 )
        {
          if ( (v21 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem((__int64)v177, v22, v146, (struct _KLOCK_ENTRIES *)0x10);
            v21 |= 2u;
            v120 = v21;
          }
          v41 |= 2u;
          v38 += v177[0];
          v122 = v38;
          Length_4 = v38;
        }
        v42 = *(_DWORD *)(v27 + 8);
        if ( (v42 & 2) != 0 )
        {
          v38 += 16;
          v122 = v38;
          Length_4 = v38;
        }
        v43 = v41 | 1;
        if ( (v42 & 2) == 0 )
          v43 = v41;
        if ( (v42 & 0x80) != 0 )
        {
          v38 += 16;
          v122 = v38;
          Length_4 = v38;
        }
        v44 = v43 | 0x40;
        if ( (v42 & 0x80) == 0 )
          v44 = v43;
        if ( (v42 & 0x100) != 0 )
        {
          v38 += 16;
          v122 = v38;
          Length_4 = v38;
        }
        v39 = v44 | 0x80;
        if ( (v42 & 0x100) == 0 )
          v39 = v44;
        v45 = v39;
        if ( (v42 & 4) != 0 )
        {
          if ( (v46 = *(_QWORD *)(v134 + 640)) == 0
            || (v47 = *(_DWORD *)(104LL * Length + v46), (v47 & 0x80001000) != 0x80001000)
            && (v47 & 0x80002000) != 0x80002000
            && (v47 & 0x80004000) != 0x80004000
            || EtwpApplyLevelKwFilter(v134, Length, BYTE4(v176), *((__int64 *)&v176 + 1), 1)
            && EtwpApplyStackWalkIdFilter((unsigned __int16)v176, v134, Length, 1)
            && EtwpApplyEventNameFilter(v134, Length, a8, Address, 1, 0, SBYTE4(v176), *((__int64 *)&v176 + 1), 1) )
          {
            if ( (v21 & 1) == 0 )
            {
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              v49 = StackLookasideListEntry;
              ListEntry = StackLookasideListEntry;
              if ( StackLookasideListEntry )
              {
                v21 |= 8u;
                v145 = &StackLookasideListEntry[2];
                if ( !EtwpGetStackExtendedHeaderItem(v137, CurrentThread, 0, (__int64)StackLookasideListEntry, 0, 0LL) )
                {
                  EtwpReleaseStackLookasideListEntry(v49);
                  v21 &= ~8u;
                  v145 = 0LL;
                }
              }
              v21 |= 1u;
              v120 = v21;
            }
            v39 = v45;
            v50 = (unsigned __int16 *)v145;
            if ( v145 )
            {
              if ( (*(_DWORD *)(v137 + 820) & 1) != 0 )
              {
                if ( EtwpGetCrimsonStackKey(v137, (__int64)v145, (KSPIN_LOCK *)&v141) )
                {
                  v39 = v45 | 8;
                  v38 += 24;
                  v122 = v38;
                  Length_4 = v38;
                  goto LABEL_80;
                }
                v50 = (unsigned __int16 *)v145;
              }
              v39 = v45 | 4;
              v38 += *v50;
              v122 = v38;
              Length_4 = v38;
            }
          }
        }
LABEL_80:
        if ( (*(_DWORD *)(v27 + 8) & 8) != 0 )
        {
          if ( (v21 & 4) == 0 )
          {
            HighLimit = 0LL;
            LowLimit = 0LL;
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1E0 )
            {
              v54 = alloca(480LL);
              v150 = v119;
              EtwpGetPsmKeyExtendedHeaderItem((__int64)v119, v51, v52, v53);
            }
            v21 |= 4u;
            v120 = v21;
          }
          if ( v150 )
          {
            v39 |= 0x20u;
            v38 += *(unsigned __int16 *)v150;
            v122 = v38;
            Length_4 = v38;
          }
        }
LABEL_87:
        v55 = 48LL * v175;
        v133 = (char *)v55;
        v56 = a8;
        if ( a8 )
        {
          v143 = 0;
          if ( a15 )
          {
            ProbeForRead(Address, 16LL * a8, 4u);
            v56 = a8;
          }
          v57 = 0;
          while ( 1 )
          {
            v143 = v57;
            if ( v57 >= v56 )
              break;
            v152 = v38;
            v160 = v57;
            v58 = 2LL * v57;
            v59 = (char *)Address;
            v60 = (unsigned int *)((char *)Address + 16 * v57);
            if ( a15 )
            {
              ULongFromUser = RtlReadULongFromUser(v60 + 2);
              v59 = (char *)Address;
            }
            else
            {
              ULongFromUser = v60[2];
            }
            LODWORD(LowLimit) = ULongFromUser;
            if ( ULongFromUser > 0xFFFF )
            {
              v18 = -2147483643;
              v136 = -2147483643;
              LODWORD(v16) = (unsigned __int16)v123 | (1 << Length);
              v126 = v123 | (1 << Length);
              if ( v141 )
                EtwpDereferenceStackEntry(v141, *(union _SLIST_HEADER **)(v137 + 1056));
LABEL_101:
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v132 + 704) + 8 * v146),
                1u);
              v62 = v132;
              v63 = Address;
              goto LABEL_259;
            }
            if ( v131 )
            {
              v65 = &v59[8 * v58];
              if ( a15 )
                UCharFromUser = RtlReadUCharFromUser(v65 + 12);
              else
                UCharFromUser = v65[12];
            }
            else
            {
              UCharFromUser = 0;
            }
            if ( UCharFromUser )
            {
              if ( UCharFromUser == 1 )
              {
                v127 += ULongFromUser;
                ++v128;
              }
              else if ( UCharFromUser == 4
                     && (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
                     && ULongFromUser == 16 )
              {
                v66 = (volatile void **)((char *)Address + 16 * v160);
                if ( KeGetCurrentThread()->PreviousMode )
                  ULong64FromUser = (volatile void *)RtlReadULong64FromUser(v66);
                else
                  ULong64FromUser = *v66;
                v147 = ULong64FromUser;
                v171 = ULong64FromUser;
              }
            }
            else
            {
              v38 += ULongFromUser;
              v122 = v38;
              Length_4 = v38;
            }
            if ( v38 < v152 )
            {
              v18 = -2147483643;
              v136 = -2147483643;
              LOWORD(v16) = v123 | (1 << Length);
              v126 = v16;
              if ( v141 )
                EtwpDereferenceStackEntry(v141, *(union _SLIST_HEADER **)(v137 + 1056));
              goto LABEL_101;
            }
            v57 = v143 + 1;
            v56 = a8;
          }
          v55 = (__int64)v133;
        }
        if ( v128 )
        {
          v38 += (v127 + 15) & 0xFFFFFFF8;
          v122 = v38;
          Length_4 = v38;
        }
        if ( v130[0] )
        {
          v38 += (v130[0] + 15) & 0xFFFFFFF8;
          v122 = v38;
          Length_4 = v38;
        }
        *(_DWORD *)((char *)&v174[5] + v55) = v38;
        v68 = v38;
        v69 = v137;
        v16 = EtwpReserveTraceBuffer((unsigned int *)v137, v68, (__int64)&v169, &v151, 0);
        v160 = v16;
        if ( v141 )
          EtwpDereferenceStackEntry(v141, *(union _SLIST_HEADER **)(v69 + 1056));
        if ( v16 )
        {
          *(_QWORD *)((char *)v174 + v55) = v69;
          *(_QWORD *)((char *)&v174[1] + v55) = v16;
          *(_OWORD *)((char *)&v174[2] + v55) = v169;
          *(_QWORD *)((char *)&v174[4] + v55) = v170;
          ++v175;
          v144 = 0;
          v74 = 80LL;
          v121 = 80;
          v75 = 0LL;
          v138 = 0LL;
          if ( a15 )
            RtlCopyFromUser((void *)v16, Src, 0x50uLL);
          else
            RtlCopyVolatileMemory((void *)v16, Src, 0x50uLL);
          if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
          {
            v76 = (void *)v147;
            if ( v156 )
            {
              if ( v147 )
              {
LABEL_149:
                if ( KeGetCurrentThread()->PreviousMode )
                {
                  ProbeForRead(v147, 0x10uLL, 4u);
                  v76 = (void *)v147;
                }
                v77 = (void *)(v16 + 24);
                if ( KeGetCurrentThread()->PreviousMode )
                  RtlCopyFromUser(v77, v76, 0x10uLL);
                else
                  RtlCopyVolatileMemory(v77, v76, 0x10uLL);
              }
              else
              {
LABEL_156:
                *(_OWORD *)(v16 + 24) = *v156;
              }
              *(_WORD *)(v16 + 4) |= 0x80u;
              goto LABEL_158;
            }
            if ( v147 )
              goto LABEL_149;
          }
          else if ( v156 )
          {
            goto LABEL_156;
          }
          *(_OWORD *)(v16 + 24) = *(_OWORD *)(v142 + 40);
LABEL_158:
          *(_DWORD *)v16 = *((_DWORD *)&qword_1400392C8 + v135) | v122;
          if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && (a12 & 0x400) != 0 )
            *(_WORD *)(v16 + 4) |= 0x400u;
          if ( v39 )
          {
            if ( (v39 & 0x100) != 0 )
            {
              v78 = Flink;
              v79 = (LOWORD(Flink[281].Flink) + 15) & 0xFFF8;
              v75 = (char *)(v16 + 80);
              *(_WORD *)(v16 + 80) = v79;
              *(_WORD *)(v16 + 82) = 16;
              *(_WORD *)(v16 + 86) = v78[281].Flink;
              *(_WORD *)(v16 + 84) &= ~1u;
              *(_WORD *)(v16 + 84) = 0;
              v80 = (unsigned __int16)v78[281].Flink;
              memmove((void *)(v16 + 88), v78[280].Blink, v80);
              memset_0((void *)(v16 + LOWORD(Flink[281].Flink) + 88LL), 0, (unsigned __int16)(v79 - v80 - 8));
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = (unsigned int)*(unsigned __int16 *)(v16 + 80) + 80;
              v121 = *(unsigned __int16 *)(v16 + 80) + 80;
              v138 = (char *)(v16 + 80);
            }
            if ( (v39 & 0x10) != 0 )
            {
              v133 = (char *)v74;
              v81 = v74 + v16;
              *(_DWORD *)v81 = 65560;
              *(_WORD *)(v81 + 6) = 16;
              *(_WORD *)(v81 + 4) &= ~1u;
              *(_WORD *)(v81 + 4) = 0;
              v82 = (void *)(v74 + v16 + 8);
              if ( a15 )
                RtlCopyFromUser(v82, v158, 0x10uLL);
              else
                RtlCopyVolatileMemory(v82, v158, 0x10uLL);
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = (unsigned int)(v74 + 24);
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = &v133[v16];
              v138 = &v133[v16];
            }
            if ( (v39 & 2) != 0 )
            {
              v133 = (char *)(v16 + (unsigned int)v74);
              memmove(v133, v177, v177[0]);
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = v177[0] + (unsigned int)v74;
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v133;
              v138 = v133;
            }
            if ( (v39 & 1) != 0 )
            {
              v83 = (char *)(v16 + (unsigned int)v74);
              v133 = v83;
              *(_DWORD *)v83 = 196624;
              *((_WORD *)v83 + 3) = 4;
              *((_WORD *)v83 + 2) &= ~1u;
              *((_WORD *)v83 + 2) = 0;
              CurrentProcessSessionId = PsGetCurrentProcessSessionId();
              v85 = v133;
              *((_DWORD *)v133 + 2) = CurrentProcessSessionId;
              *(_WORD *)(v16 + 4) |= 1u;
              LOBYTE(v86) = 16;
              v74 = (unsigned int)(v74 + 16);
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v85;
              v138 = v85;
            }
            else
            {
              LOBYTE(v86) = 16;
            }
            v87 = 8;
            v88 = -2;
            if ( (v39 & 0x40) != 0 )
            {
              v89 = v16 + (unsigned int)v74;
              *(_DWORD *)v89 = 851984;
              *(_WORD *)(v89 + 6) = 8;
              *(_WORD *)(v89 + 4) &= ~1u;
              *(_WORD *)(v89 + 4) = 0;
              ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
              *((_QWORD *)v91 + 1) = ProcessStartKey;
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = (unsigned int)(v86 + v74);
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v91;
              v138 = v91;
            }
            if ( (v39 & 0x80u) != 0 )
            {
              v92 = (char *)(v74 + v16);
              *(_DWORD *)v92 = 655376;
              *((_WORD *)v92 + 3) = v87;
              *((_WORD *)v92 + 2) &= v88;
              *((_WORD *)v92 + 2) = 0;
              if ( ((unsigned __int8)v21 & (unsigned __int8)v86) == 0 )
              {
                EtwpCreateEventKey(&v149);
                v21 |= v93;
                v120 = v21;
                if ( v168 )
                  *v168 = v149;
              }
              *((_QWORD *)v92 + 1) = v149;
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = (unsigned int)(v74 + 16);
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v92;
              v138 = v92;
            }
            if ( (v39 & 4) != 0 )
            {
              v133 = (char *)(v16 + (unsigned int)v74);
              memmove(v133, v145, *(unsigned __int16 *)v145);
              *(_WORD *)(v16 + 4) |= 1u;
              v22 = (__int64)v145;
              v74 = *(unsigned __int16 *)v145 + (unsigned int)v74;
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v133;
              v138 = v133;
            }
            else
            {
              v22 = (__int64)v145;
            }
            if ( (v39 & 8) != 0 )
            {
              v94 = (char *)(v16 + (unsigned int)v74);
              *(_DWORD *)v94 = 1179672;
              *((_WORD *)v94 + 3) = 16;
              *((_WORD *)v94 + 2) &= ~1u;
              *((_WORD *)v94 + 2) = 0;
              *((_QWORD *)v94 + 2) = v141;
              *((_QWORD *)v94 + 1) = *(_QWORD *)(v22 + 8);
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = (unsigned int)(v74 + 24);
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v94;
              v138 = v94;
            }
            if ( (v39 & 0x20) != 0 )
            {
              v95 = (char *)(v16 + (unsigned int)v74);
              memmove(v95, v150, *(unsigned __int16 *)v150);
              *(_WORD *)(v16 + 4) |= 1u;
              v74 = *(unsigned __int16 *)v150 + (unsigned int)v74;
              v121 = v74;
              if ( v75 )
                *((_WORD *)v75 + 2) |= 1u;
              v75 = v95;
              v138 = v95;
            }
          }
          v96 = v130[0];
          if ( v130[0] )
          {
            v97 = (_WORD *)(v16 + (unsigned int)v74);
            v133 = (char *)v97;
            v98 = (v130[0] + 15) & 0xFFF8;
            *v97 = v98;
            v97[1] = 12;
            v97[3] = v96;
            v97[2] &= ~1u;
            v97[2] = 0;
            v99 = v96;
            v100 = v97 + 4;
            memmove(v97 + 4, v161, v96);
            memset_0((char *)v100 + v99, 0, (unsigned __int16)(v98 - v99 - 8));
            *(_WORD *)(v16 + 4) |= 1u;
            v101 = v133;
            v102 = *(unsigned __int16 *)v133;
            v74 = (unsigned int)(v102 + v121);
            v121 += v102;
            if ( v75 )
              *((_WORD *)v75 + 2) |= 1u;
            v75 = v101;
            v138 = v101;
          }
          if ( v128 )
          {
            v103 = v127;
            v104 = (v127 + 15) & 0xFFF8;
            *(_WORD *)(v74 + v16) = v104;
            *(_WORD *)(v74 + v16 + 2) = 11;
            *(_WORD *)(v74 + v16 + 6) = v103;
            *(_WORD *)(v74 + v16 + 4) &= ~1u;
            *(_WORD *)(v74 + v16 + 4) = 0;
            v148 = (void *)(v16 + v74 + 8);
            v172 = (char *)v148;
            v162 = (char *)v148 + v103;
            v173 = (char *)v148 + v103;
            memset_0((char *)v148 + v103, 0, (unsigned __int16)(v104 - v103 - 8));
            *(_WORD *)(v16 + 4) |= 1u;
            v105 = *(unsigned __int16 *)(v74 + v16) + v121;
            v121 = v105;
            if ( v75 )
              *((_WORD *)v75 + 2) |= 1u;
          }
          else
          {
            v105 = v121;
          }
          v106 = 0LL;
          v107 = v151;
          while ( 1 )
          {
            v144 = v106;
            if ( (unsigned int)v106 >= a8 )
              break;
            v108 = (PSLIST_ENTRY)((char *)Address + 16 * v106);
            v141 = v108;
            v109 = (unsigned int *)(&v108->Next + 1);
            if ( a15 )
            {
              Length = RtlReadULongFromUser(v109);
              v108 = v141;
            }
            else
            {
              Length = *v109;
            }
            if ( a15 )
            {
              Next = (signed __int64 *)RtlReadULong64FromUser(v108);
              v108 = v141;
            }
            else
            {
              Next = (signed __int64 *)v108->Next;
            }
            if ( v131 )
            {
              if ( a15 )
                v111 = RtlReadUCharFromUser((char *)&v108->Next + 12);
              else
                v111 = *((_BYTE *)&v108->Next + 12);
            }
            else
            {
              v111 = 0;
            }
            if ( v111 )
            {
              if ( v111 == 1 )
              {
                v22 = (__int64)v148;
                if ( !v148 )
                  goto LABEL_247;
                v112 = (char *)v148 + Length;
                v133 = v112;
                if ( v112 < v148 || v112 > v162 || !v128 )
                  goto LABEL_247;
                ProbeForRead(Next, Length, 1u);
                if ( a15 )
                  RtlCopyFromUser(v148, Next, Length);
                else
                  RtlCopyVolatileMemory(v148, Next, Length);
                v148 = v133;
                v172 = v133;
                --v128;
              }
              else if ( v111 == 3 && Length == 8 )
              {
                ProbeForRead(Next, 8uLL, 1u);
                v107 = *Next;
                v151 = *Next;
              }
            }
            else
            {
              v113 = (char *)(v16 + v105);
              v133 = v113;
              v22 = Length;
              v114 = Length + v105;
              if ( Length + v105 < v105 )
              {
                v121 = -1;
LABEL_247:
                v18 = -1073741820;
                v136 = -1073741820;
                *(_DWORD *)v16 = v122 | 0xC00D0000;
                *(_QWORD *)(v16 + 16) = v107;
                LOWORD(v16) = v123;
                v62 = v132;
                v63 = Address;
                goto LABEL_259;
              }
              v105 += Length;
              v121 = v114;
              if ( v114 > v122 )
                goto LABEL_247;
              if ( a15 )
              {
                ProbeForRead(Next, Length, 1u);
                RtlCopyFromUser(v133, Next, Length);
              }
              else
              {
                RtlCopyVolatileMemory(v113, Next, Length);
              }
            }
            v106 = (unsigned int)(v144 + 1);
          }
          v31 = v139;
          if ( v139 )
          {
            v22 = v146 & 0x1F;
            *(_DWORD *)(v139 + 4 * ((unsigned __int64)(unsigned int)v146 >> 5)) |= 1 << (v146 & 0x1F);
          }
          *(_QWORD *)(v16 + 16) = v107;
          v115 = CurrentThread;
          *(_DWORD *)(v16 + 56) = CurrentThread->SchedulerApc.SpareLong0;
          *(_DWORD *)(v16 + 60) = v115->UserTime;
          *(_DWORD *)(v16 + 8) = v115[1].CurrentRunTime;
          *(_DWORD *)(v16 + 12) = v115[1].CycleTime;
          v116 = (unsigned int *)v137;
          if ( (*(_DWORD *)(v137 + 12) & 0x80000) != 0
            && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          {
            EtwpSendTraceEvent(v137, (__int64)&v169);
            v31 = v139;
          }
          v18 = v140;
          LODWORD(v16) = v123;
          v23 = v134;
          if ( *((_QWORD *)v116 + 194) )
          {
            EtwpInvokeEventCallback((__int64)v116, (__int64 *)&v169);
            goto LABEL_257;
          }
        }
        else
        {
          v70 = 0;
          v71 = 0LL;
          v72 = v137;
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v137, v122);
          if ( v128 )
          {
            v70 = a8;
            v71 = Address;
          }
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(
              (const void *)(v142 + 40),
              (__int16 *)&v176,
              (unsigned __int16 *)(v72 + 136),
              a5,
              ReserveTraceBufferStatus,
              v70,
              (__int64)v71,
              1,
              1);
          v18 = v140;
          if ( v140 >= 0 )
          {
            if ( (*(_DWORD *)(v72 + 12) & 0x8000000) == 0 )
              v18 = ReserveTraceBufferStatus;
            v140 = v18;
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v132 + 704) + 8 * v146),
            1u);
          LODWORD(v16) = v123;
          v23 = v134;
          v31 = v139;
          if ( ReserveTraceBufferStatus == -1073741675 )
          {
            v18 = -1073741675;
            goto LABEL_39;
          }
        }
      }
    }
  }
  v62 = v132;
  v63 = Address;
LABEL_259:
  if ( (v21 & 8) != 0 )
    EtwpReleaseStackLookasideListEntry(ListEntry);
  if ( v18 < 0 )
  {
    EtwpFailLogging((__int64)&v176, v142, (__int64)v174, v16, 0, v18, 1, a8, (__int64)v63, 1);
  }
  else if ( v175 )
  {
    for ( i = 0; i < v175; v17 = i )
    {
      EtwpReleaseTraceBuffer(&v174[6 * v17 + 2]);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v62 + 704) + 8LL * *(unsigned int *)v174[v118]),
        1u);
      ++i;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22);
  return (unsigned int)v18;
}
