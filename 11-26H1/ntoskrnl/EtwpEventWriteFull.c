/*
 * XREFs of EtwpEventWriteFull @ 0x14021344C
 * Callers:
 *     EtwpStackWalkApc @ 0x14020A2E0 (EtwpStackWalkApc.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140215158 (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x140259018 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1406C9E70 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140AD93D0 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     EtwpQueueStackWalkApc @ 0x14020AA10 (EtwpQueueStackWalkApc.c)
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
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x140411450 (DecodeProviderTraits.c)
 *     EtwpApplyEventNameFilter @ 0x140413C18 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140413F4C (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     EtwpApplyStackWalkIdFilter @ 0x14044187C (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetStackLookasideListEntry @ 0x140467D30 (EtwpGetStackLookasideListEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047397C (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140473EA4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x14047E280 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14051F084 (EtwpApplyEventIdPayloadFilter.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_1144514872__private_IsEnabledDeviceUsageNoInline @ 0x1406CA1E8 (Feature_1144514872__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        _DWORD *a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  int v18; // esi
  __int64 v19; // rdi
  int v20; // r13d
  char v21; // r15
  __int64 v22; // rdx
  unsigned int v23; // ecx
  char v25; // di
  __int64 v26; // r10
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r8
  unsigned __int16 *v33; // r9
  bool v34; // zf
  unsigned int v35; // ebx
  __int64 v36; // r14
  __int64 v37; // rsi
  int v38; // eax
  char v39; // al
  char v40; // r11
  _KPROCESS *Process; // rax
  __int64 v42; // rdx
  int v43; // edx
  char v44; // al
  char v45; // al
  __int64 v46; // rbx
  BOOLEAN v47; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v52; // r8d
  int v53; // ebx
  unsigned __int64 v54; // rsi
  int v55; // ebx
  __int64 v56; // rcx
  unsigned int v57; // r14d
  int v58; // eax
  int v59; // ebx
  int v60; // ecx
  unsigned int v61; // esi
  unsigned __int16 *v62; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r14
  PSLIST_ENTRY v65; // rcx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 v67; // r13
  int v68; // r14d
  unsigned int v69; // ebx
  int v70; // eax
  unsigned int v71; // r13d
  unsigned int v72; // esi
  int v73; // edx
  __int64 v74; // r9
  _SLIST_ENTRY *StackLookasideListEntry; // rax
  __int64 v76; // r14
  char v77; // si
  _SLIST_ENTRY *v78; // rsi
  unsigned __int16 *v79; // rsi
  unsigned int v80; // eax
  __int64 v81; // rsi
  int v82; // eax
  __int64 v83; // rsi
  unsigned __int8 v84; // al
  unsigned int v85; // esi
  int v86; // ebx
  int v87; // esi
  int v88; // eax
  unsigned int v89; // eax
  int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r13
  _SLIST_ENTRY *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  int ReserveTraceBufferStatus; // ebx
  __int64 v99; // rsi
  unsigned int v100; // r14d
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  int v104; // eax
  char v105; // cl
  __int64 v106; // rax
  unsigned int v107; // eax
  __int64 v108; // rdx
  char v109; // cl
  __int128 v110; // xmm0
  GUID v111; // xmm0
  _DWORD *v112; // rcx
  unsigned __int64 v113; // rdx
  __int16 v114; // r15
  unsigned __int16 v115; // si
  _WORD *v116; // r9
  unsigned int v117; // r10d
  unsigned __int16 *v118; // rcx
  unsigned __int16 *v119; // rsi
  _DWORD *v120; // rsi
  unsigned __int16 *v121; // rdx
  unsigned __int16 *v122; // r8
  struct _KPRCB *v123; // rcx
  unsigned __int64 v124; // rax
  unsigned int *v125; // rsi
  unsigned int *v126; // rsi
  _QWORD *v127; // r8
  unsigned __int16 *v128; // rcx
  _WORD *v129; // rsi
  _WORD *v130; // r15
  __int16 v131; // si
  __int64 v132; // rbx
  int v133; // r9d
  __int64 v134; // rbx
  __int64 v135; // r8
  __int16 v136; // dx
  unsigned int i; // esi
  size_t v138; // rbx
  unsigned __int8 v139; // al
  void *v140; // rcx
  unsigned int v141; // r10d
  char v142; // al
  unsigned int **v143; // rbx
  __int64 v144; // rdi
  _SLIST_ENTRY *v145; // r8
  struct _KPRCB *v146; // rdx
  _GENERAL_LOOKASIDE *v147; // rcx
  ULONG_PTR BugCheckParameter4b; // [rsp+20h] [rbp-538h]
  int BugCheckParameter4; // [rsp+20h] [rbp-538h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-538h]
  char BugCheckParameter4c; // [rsp+20h] [rbp-538h]
  int v152; // [rsp+28h] [rbp-530h]
  int v153; // [rsp+30h] [rbp-528h]
  int v154; // [rsp+40h] [rbp-518h]
  unsigned __int8 v155; // [rsp+50h] [rbp-508h]
  int v156; // [rsp+54h] [rbp-504h]
  int v157; // [rsp+58h] [rbp-500h]
  int v158; // [rsp+5Ch] [rbp-4FCh]
  unsigned int v159; // [rsp+68h] [rbp-4F0h]
  unsigned int BugCheckParameter3; // [rsp+6Ch] [rbp-4ECh]
  unsigned __int16 BugCheckParameter3a; // [rsp+6Ch] [rbp-4ECh]
  int BugCheckParameter3_4; // [rsp+70h] [rbp-4E8h]
  char v163; // [rsp+74h] [rbp-4E4h]
  unsigned int v164; // [rsp+78h] [rbp-4E0h]
  __int64 v165; // [rsp+80h] [rbp-4D8h]
  _WORD v167[6]; // [rsp+8Ch] [rbp-4CCh] BYREF
  unsigned int v168; // [rsp+98h] [rbp-4C0h]
  unsigned __int16 *v169; // [rsp+A0h] [rbp-4B8h]
  unsigned int v170; // [rsp+A8h] [rbp-4B0h]
  unsigned __int16 *v171; // [rsp+B0h] [rbp-4A8h]
  __int16 v172; // [rsp+B8h] [rbp-4A0h]
  __int64 v173; // [rsp+C0h] [rbp-498h]
  size_t Size; // [rsp+C8h] [rbp-490h]
  unsigned __int64 v175; // [rsp+D0h] [rbp-488h]
  void *Src; // [rsp+D8h] [rbp-480h]
  __int64 v177; // [rsp+E0h] [rbp-478h]
  int v178; // [rsp+E8h] [rbp-470h]
  __int64 v179; // [rsp+F0h] [rbp-468h]
  int v180; // [rsp+F8h] [rbp-460h]
  unsigned int v181; // [rsp+100h] [rbp-458h]
  void *v182; // [rsp+108h] [rbp-450h]
  _DWORD *v183; // [rsp+110h] [rbp-448h]
  __int64 v184; // [rsp+118h] [rbp-440h]
  __int64 v185; // [rsp+120h] [rbp-438h]
  void *v186; // [rsp+128h] [rbp-430h] BYREF
  unsigned __int64 v187; // [rsp+130h] [rbp-428h]
  unsigned __int64 *v188; // [rsp+138h] [rbp-420h]
  PSLIST_ENTRY v189; // [rsp+140h] [rbp-418h] BYREF
  void *v190; // [rsp+148h] [rbp-410h]
  __int64 v191; // [rsp+150h] [rbp-408h]
  void *v192; // [rsp+158h] [rbp-400h]
  PSLIST_ENTRY v193; // [rsp+160h] [rbp-3F8h]
  _QWORD v194[7]; // [rsp+168h] [rbp-3F0h] BYREF
  __int64 v195; // [rsp+1A0h] [rbp-3B8h]
  unsigned __int64 v196; // [rsp+1A8h] [rbp-3B0h]
  PSLIST_ENTRY ListEntry; // [rsp+1B0h] [rbp-3A8h]
  struct _KTHREAD *v198; // [rsp+1B8h] [rbp-3A0h]
  unsigned int v199; // [rsp+1C0h] [rbp-398h]
  void *v200; // [rsp+1C8h] [rbp-390h]
  char *v201; // [rsp+1D0h] [rbp-388h]
  __int128 v202; // [rsp+1D8h] [rbp-380h] BYREF
  __int64 v203; // [rsp+1E8h] [rbp-370h]
  __int64 v204; // [rsp+1F0h] [rbp-368h]
  __int64 v205; // [rsp+1F8h] [rbp-360h]
  _QWORD v206[96]; // [rsp+200h] [rbp-358h] BYREF
  unsigned int v207; // [rsp+500h] [rbp-58h]

  v18 = a2;
  v179 = a1;
  v184 = a11;
  v205 = a11;
  v199 = a10;
  v204 = (__int64)a9;
  v19 = a14;
  v194[4] = a1;
  v180 = a4;
  v169 = a5;
  v194[5] = a11;
  v191 = a11;
  v183 = a12;
  v177 = a13;
  v200 = a16;
  v188 = a17;
  v20 = 0;
  v157 = 0;
  v178 = 0;
  memset_0(v206, 0, 0x308uLL);
  LODWORD(Size) = 0;
  Src = 0LL;
  v193 = 0LL;
  v190 = 0LL;
  ListEntry = 0LL;
  v196 = 0LL;
  v167[0] = 0;
  v194[0] = 0LL;
  v172 = a15 & 0x100;
  v21 = 1;
  v187 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(256LL, (a15 & 0x200) != 0) + 832);
  v194[2] = v187;
  LOBYTE(v23) = 0;
  v159 = v23;
  v189 = 0LL;
  v164 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = v179;
  v173 = v19;
  DecodeProviderTraits(v200, v22, v167, v194);
  v25 = 0;
  v175 = *(_QWORD *)(v26 + 648);
  v194[1] = v175;
  if ( v188 && *v188 )
  {
    v196 = *v188;
    v25 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v198 = CurrentThread;
  v28 = (__int64)v183;
  if ( !v183 )
    v28 = (__int64)CurrentThread;
  v183 = (_DWORD *)v28;
  v194[6] = v28;
  v155 = ((__int64 (*)(void))KeGetEffectiveIrql)();
  v163 = 0;
  if ( !v155 )
  {
    --v198->KernelApcDisable;
    v163 = 1;
  }
  LOWORD(v18) = ~a3 & v18;
  LOWORD(v158) = v18;
  v31 = v173;
  v32 = v177;
LABEL_14:
  v33 = v169;
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = !_BitScanForward(&v35, (unsigned __int16)v18);
      v168 = v35;
      if ( v34 )
        goto LABEL_46;
      v202 = 0LL;
      v203 = 0LL;
      v186 = 0LL;
      v156 = 80;
      v29 = 0LL;
      v171 = 0LL;
      v182 = 0LL;
      v170 = 0;
      BugCheckParameter3_4 = 0;
      v192 = 0LL;
      v201 = 0LL;
      LOBYTE(v159) = 0;
      LOBYTE(v36) = 1;
      v165 = 1LL;
      v185 = 1LL;
      v189 = 0LL;
      LOWORD(v18) = (v18 - 1) & v18;
      v158 = v18;
      v167[2] = v18;
      v37 = v31 + 32 * (v35 + 4LL);
      v195 = v37;
      if ( !v32
        || (v30 = *(_BYTE *)(v37 + 6) & 0x1F,
            v29 = (unsigned __int64)*(unsigned __int16 *)(v37 + 6) >> 5,
            v38 = *(_DWORD *)(v32 + 4 * v29),
            !_bittest(&v38, v30)) )
      {
        LOBYTE(v29) = *((_BYTE *)v33 + 4);
        v39 = EtwpLevelKeywordEnabled(v31 + 32 * (v35 + 4LL), v29, *((_QWORD *)v33 + 1), v33);
        v32 = v177;
        if ( v39 )
        {
          if ( (Process = KeGetCurrentThread()->ApcState.Process, (a4 & 2) == 0)
            && SLODWORD(Process[1].DirectoryTableBase) >= 0
            || (*(_DWORD *)(v37 + 8) & 0x200) == 0 )
          {
            v42 = *(_QWORD *)(v31 + 640);
            if ( !v42 )
              break;
            v30 = 104LL * v35;
            v43 = *(_DWORD *)(v30 + v42);
            if ( (v43 & 0x80000200) != 0x80000200 && (v43 & 0x80000100) != 0x80000100 )
              break;
            v44 = EtwpApplyEventIdPayloadFilter(v31, v35, 0, *v33, *((_BYTE *)v33 + 2), a10, v184, 0, v40);
            v33 = v169;
            v31 = v173;
            v40 = v155;
            v32 = v177;
            if ( v44 )
              break;
          }
        }
      }
LABEL_263:
      v18 = v158;
    }
    if ( v172 )
    {
      BugCheckParameter4b = *((_QWORD *)v33 + 1);
      LOBYTE(v33) = *((_BYTE *)v33 + 4);
      LOBYTE(v32) = v40;
      if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(v31, v35, v32, (_DWORD)v33, BugCheckParameter4b, 0) )
      {
        LOBYTE(v154) = 0;
        LOBYTE(v153) = *((_BYTE *)v169 + 4);
        LOBYTE(v152) = v155;
        LOBYTE(BugCheckParameter4) = 0;
        v45 = EtwpApplyEventNameFilter(
                v173,
                v35,
                a10,
                v184,
                BugCheckParameter4,
                v152,
                v153,
                *((_QWORD *)v169 + 1),
                v154);
        v32 = v177;
        if ( !v45 )
        {
          v18 = v158;
          v31 = v173;
          goto LABEL_14;
        }
      }
    }
    v46 = *(unsigned __int16 *)(v37 + 6);
    v164 = *(unsigned __int16 *)(v37 + 6);
    v181 = v164;
    if ( v155 >= 2u )
    {
      v29 = v175;
      v32 = v159;
      if ( (unsigned int)v46 >= *(_DWORD *)(v175 + 16) )
      {
        v165 = 1LL;
        v185 = 1LL;
      }
      else
      {
        _mm_lfence();
        v36 = *(_QWORD *)(*(_QWORD *)(v175 + 712) + 8 * v46);
        v165 = v36;
        v185 = v36;
      }
    }
    else
    {
      v47 = ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v175 + 704) + 8 * v46),
              1u);
      v29 = v175;
      if ( v47 )
      {
        if ( (unsigned int)v46 >= *(_DWORD *)(v175 + 16) )
        {
          v165 = 1LL;
          v185 = 1LL;
        }
        else
        {
          _mm_lfence();
          v36 = *(_QWORD *)(*(_QWORD *)(v175 + 712) + 8 * v46);
          v165 = v36;
          v185 = v36;
        }
        LOBYTE(v32) = 1;
        v159 = v32;
      }
      else
      {
        v32 = v159;
      }
    }
    if ( (v36 & 1) != 0 )
    {
      if ( (_BYTE)v32 )
      {
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v29 + 704) + 8LL * (unsigned int)v46),
          1u);
        IsEnabledDeviceUsageNoInline = Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v49, v48, v50);
        v52 = (unsigned __int8)v159;
        if ( IsEnabledDeviceUsageNoInline )
          v52 = 0;
        v159 = v52;
      }
      v18 = v158;
      v31 = v173;
      v32 = v177;
      if ( (_DWORD)v46 == 3 )
      {
        v20 = *(_DWORD *)(v175 + 4340) != 0 ? -1073741058 : -1073741816;
        v157 = v20;
LABEL_46:
        LOWORD(v53) = v158;
        goto LABEL_47;
      }
      goto LABEL_14;
    }
    v55 = v204 != 0 ? 0x10 : 0;
    v56 = -v204;
    v57 = v204 != 0 ? 104 : 80;
    BugCheckParameter3 = v57;
    if ( (*(_DWORD *)(v37 + 8) & 0xFFFFFF9F) != 0 )
    {
      if ( BYTE1(stru_140F03830.CycleTime)
        || (a4 & 1) != 0
        || !(unsigned int)MmCanThreadFault(v56, v29, v32)
        || (v58 = 256, BYTE6(v198[1].Queue)) )
      {
        v58 = 0;
      }
      v59 = v58 | v55;
      v60 = *(_DWORD *)(v37 + 8);
      v61 = v57;
      if ( (v60 & 0x800) != 0 )
      {
        v29 = v187;
        if ( v187 )
        {
          if ( v187 != EtwpHostSiloState )
          {
            v59 |= 0x200u;
            v61 = v57 + ((*(unsigned __int16 *)(v187 + 4496) + 15) & 0xFFFFFFF8);
          }
        }
      }
      if ( (v60 & 1) != 0 && (v59 & 0x100) != 0 )
      {
        v62 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_72;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v65 = RtlpInterlockedPopEntrySList(&P->ListHead);
        Src = v65;
        if ( !v65 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v65 = RtlpInterlockedPopEntrySList(&L->ListHead);
          Src = v65;
          if ( !v65 )
          {
            ++L->AllocateMisses;
            v65 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag);
            Src = v65;
          }
        }
        if ( v65 )
          LODWORD(v65->Next) = CurrentPrcb->Number;
        v193 = v65;
        if ( v65 )
        {
          EtwpGetSidExtendedHeaderItem();
          v62 = (unsigned __int16 *)Src;
          if ( Src )
          {
LABEL_72:
            v59 |= 2u;
            v61 += *v62;
          }
        }
      }
      v67 = v195;
      v56 = *(unsigned int *)(v195 + 8);
      v68 = v59 | 1;
      if ( (v56 & 2) == 0 )
        v68 = v59;
      v69 = v61 + 16;
      if ( (v56 & 2) == 0 )
        v69 = v61;
      v32 = v69;
      v70 = v68;
      if ( (v56 & 0x80u) != 0LL )
      {
        if ( (unsigned __int8)KeGetEffectiveIrql(v56, v29, v69) < 2u || !KeGetCurrentPrcb()->NestingLevel )
          v21 = 0;
        v32 = v69;
        v70 = v68;
        if ( !v21 )
        {
          v70 = v68 | 0x40;
          v32 = v69 + 16;
        }
      }
      v29 = *(unsigned int *)(v67 + 8);
      v55 = v70 | 0x80;
      if ( (v29 & 0x100) == 0 )
        v55 = v70;
      v57 = v32 + 16;
      if ( (v29 & 0x100) == 0 )
        v57 = v32;
      BugCheckParameter3 = v57;
      v71 = v57;
      if ( (v29 & 4) == 0 )
        goto LABEL_111;
      BugCheckParameter3 = v57;
      if ( BYTE1(stru_140F03830.CycleTime) )
        goto LABEL_111;
      v29 = *(_QWORD *)(v173 + 640);
      if ( !v29 )
        goto LABEL_96;
      v72 = v168;
      v56 = 104LL * v168;
      v73 = *(_DWORD *)(v56 + v29);
      if ( (v73 & 0x80001000) != 0x80001000 && (v73 & 0x80002000) != 0x80002000 )
      {
        v29 = v73 & 0x80004000;
        if ( (_DWORD)v29 != -2147467264 )
          goto LABEL_96;
      }
      BugCheckParameter3 = v57;
      LOBYTE(v32) = *((_BYTE *)v169 + 4);
      if ( !(unsigned __int8)EtwpApplyLevelKwFilter(v173, v168, v32, *((_QWORD *)v169 + 1), v155 < 2u)
        || (BugCheckParameter3 = v57,
            LOBYTE(v74) = v155 < 2u,
            !(unsigned __int8)EtwpApplyStackWalkIdFilter(*v169, v173, v72, v74))
        || (BugCheckParameter3 = v57,
            LOBYTE(v154) = 1,
            LOBYTE(v153) = *((_BYTE *)v169 + 4),
            LOBYTE(v152) = v155,
            LOBYTE(BugCheckParameter4a) = 0,
            !(unsigned __int8)EtwpApplyEventNameFilter(
                                v173,
                                v72,
                                a10,
                                v184,
                                BugCheckParameter4a,
                                v152,
                                v153,
                                *((_QWORD *)v169 + 1),
                                v154)) )
      {
LABEL_111:
        v21 = 1;
      }
      else
      {
LABEL_96:
        if ( (v25 & 1) != 0 )
        {
          v21 = 1;
        }
        else
        {
          StackLookasideListEntry = (_SLIST_ENTRY *)EtwpGetStackLookasideListEntry();
          ListEntry = StackLookasideListEntry;
          if ( StackLookasideListEntry )
          {
            v190 = &StackLookasideListEntry[2];
            v25 |= 2u;
            v76 = 0LL;
            v77 = ~(*(_DWORD *)(v165 + 816) >> 30) & 1;
            if ( !memcmp((const void *)(v179 + 40), &EventTracingProvGuid, 0x10uLL) && *v169 == 18 )
            {
              v55 |= 0x20u;
              v76 = v179 + 80;
              v77 = 0;
            }
            BugCheckParameter4c = v77;
            v78 = ListEntry;
            if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                     v165,
                                     (_DWORD)v183,
                                     a4,
                                     (_DWORD)ListEntry,
                                     BugCheckParameter4c,
                                     v76) )
            {
              EtwpReleaseStackLookasideListEntry(v78);
              v25 &= ~2u;
              v190 = 0LL;
            }
          }
          v21 = 1;
          v25 |= 1u;
        }
        v57 = v71;
        BugCheckParameter3 = v71;
        v79 = (unsigned __int16 *)v190;
        if ( v190 )
        {
          v56 = v165;
          if ( (*(_DWORD *)(v165 + 820) & 1) != 0 && (unsigned __int8)EtwpGetCrimsonStackKey(v165, v190, &v189) )
          {
            v55 |= 8u;
            v57 = v71 + 24;
          }
          else
          {
            v55 |= 4u;
            v57 = v71 + *v79;
          }
          BugCheckParameter3 = v57;
        }
      }
      v20 = v157;
    }
    v195 = 48LL * v207;
    v80 = 0;
    LODWORD(Size) = 0;
    if ( a10 )
      break;
LABEL_130:
    if ( BugCheckParameter3_4 )
    {
      v85 = (v170 + 15) & 0xFFFFFFF8;
      if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v56, v29, v32) && v85 > 0xFFFF )
      {
LABEL_133:
        if ( v20 >= 0 )
          v20 = -1073741675;
        v86 = (unsigned __int16)v158;
        goto LABEL_139;
      }
      v57 += v85;
      BugCheckParameter3 = v57;
    }
    v87 = v167[0];
    if ( v167[0] )
    {
      v34 = (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v56, v29, v32) == 0;
      v88 = v87 + 15;
      if ( v34 )
      {
        v89 = v88 & 0xFFFFFFF8;
      }
      else
      {
        v89 = v88 & 0xFFFFFFF8;
        if ( v89 > 0xFFFF )
          goto LABEL_133;
      }
      v57 += v89;
      BugCheckParameter3 = v57;
    }
    *(_DWORD *)((char *)&v206[5] + v195) = v57;
    v90 = ((a4 & 4) << 7) | 0x600;
    if ( (a4 & 8) == 0 )
      v90 = (a4 & 4) << 7;
    v93 = EtwpReserveTraceBuffer(v165, v57, (unsigned int)&v202, (unsigned int)&v186, v90);
    v194[3] = v93;
    v94 = v189;
    if ( v189 )
    {
      EtwpDereferenceStackEntry(v189);
      if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v96, v95, v97) )
        v94 = 0LL;
      v189 = v94;
    }
    if ( !v93 )
    {
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v165, v57);
      v99 = v205;
      if ( !BugCheckParameter3_4 )
        v99 = 0LL;
      v100 = v199;
      if ( !BugCheckParameter3_4 )
        v100 = 0;
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(v179 + 40, (_DWORD)v169, v165 + 136, a4, ReserveTraceBufferStatus, v100, v99, v155 < 2u, 0);
      v20 = v157;
      if ( v157 >= 0 )
      {
        if ( (*(_DWORD *)(v165 + 12) & 0x8000000) == 0 )
          v20 = ReserveTraceBufferStatus;
        v157 = v20;
        v178 = v20;
      }
      if ( (_BYTE)v159 )
      {
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v175 + 704) + 8LL * v164),
          1u);
        v104 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v102, v101, v103);
        v105 = v159;
        if ( v104 )
          v105 = 0;
        LOBYTE(v159) = v105;
      }
      v30 = 3221225621LL;
      v18 = v158;
      v31 = v173;
      v32 = v177;
      if ( ReserveTraceBufferStatus == -1073741675 )
      {
        v20 = -1073741675;
        v157 = -1073741675;
        goto LABEL_46;
      }
      goto LABEL_14;
    }
    v106 = v195;
    *(_QWORD *)((char *)v206 + v195) = v165;
    *(_QWORD *)((char *)&v206[1] + v106) = v93;
    *(_OWORD *)((char *)&v206[2] + v106) = v202;
    *(_QWORD *)((char *)&v206[4] + v106) = v203;
    ++v207;
    v107 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v165, v91, v92);
    v109 = v159;
    if ( v107 )
      v109 = 0;
    LOBYTE(v107) = v109;
    v159 = v107;
    *(_DWORD *)v93 = v57 | 0xC0130000;
    *(_WORD *)(v93 + 4) = a6;
    *(_WORD *)(v93 + 6) = a7;
    *(_OWORD *)(v93 + 40) = *(_OWORD *)v169;
    if ( v194[0] )
    {
      v110 = *(_OWORD *)v194[0];
      *(_WORD *)(v93 + 4) = a6 | 0x80;
    }
    else
    {
      v110 = *(_OWORD *)(v179 + 40);
    }
    *(_OWORD *)(v93 + 24) = v110;
    if ( a8 )
      v111 = *a8;
    else
      v111 = NullGuid;
    *(GUID *)(v93 + 64) = v111;
    *(_QWORD *)(v93 + 16) = v186;
    v112 = v183;
    *(_DWORD *)(v93 + 8) = v183[324];
    *(_DWORD *)(v93 + 12) = v112[322];
    *(_DWORD *)(v93 + 56) = v112[163];
    *(_DWORD *)(v93 + 60) = v112[183];
    if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline(v112, v108) && (a15 & 0x400) != 0 )
      *(_WORD *)(v93 + 4) |= 0x400u;
    if ( v55 )
    {
      if ( (v55 & 0x200) != 0 )
      {
        v171 = (unsigned __int16 *)(v93 + 80);
        v113 = v187;
        v114 = (*(_WORD *)(v187 + 4496) + 15) & 0xFFF8;
        *(_WORD *)(v93 + 80) = v114;
        *(_WORD *)(v93 + 82) = 16;
        *(_WORD *)(v93 + 86) = *(_WORD *)(v113 + 4496);
        *(_WORD *)(v93 + 84) = 0;
        v115 = *(_WORD *)(v113 + 4496);
        memmove((void *)(v93 + 88), *(const void **)(v113 + 4488), v115);
        memset_0((void *)(v93 + 88 + *(unsigned __int16 *)(v187 + 4496)), 0, (unsigned __int16)(v114 - v115 - 8));
        v21 = 1;
        *(_WORD *)(v93 + 4) |= 1u;
        v116 = v171;
        v117 = *v171 + 80;
        v156 = v117;
        v182 = v171;
        v57 = BugCheckParameter3;
      }
      else
      {
        v116 = 0LL;
        v117 = 80;
      }
      if ( (v55 & 0x10) != 0 )
      {
        v118 = (unsigned __int16 *)(v93 + v117);
        *(_DWORD *)v118 = 65560;
        *((_DWORD *)v118 + 1) = 0x100000;
        *(_OWORD *)(v118 + 4) = *a9;
        *(_WORD *)(v93 + 4) |= 1u;
        v117 += 24;
        v156 = v117;
        if ( v116 )
          v116[2] |= 1u;
        v116 = v118;
        v171 = v118;
        v182 = v118;
      }
      if ( (v55 & 2) != 0 )
      {
        v119 = (unsigned __int16 *)(v93 + v117);
        memmove(v119, Src, *(unsigned __int16 *)Src);
        *(_WORD *)(v93 + 4) |= 1u;
        v117 = *(unsigned __int16 *)Src + v156;
        v156 = v117;
        if ( v171 )
          v171[2] |= 1u;
        v116 = v119;
        v171 = v119;
        v182 = v119;
      }
      if ( (v55 & 1) != 0 )
      {
        v120 = (_DWORD *)(v93 + v117);
        *v120 = 196624;
        v120[1] = 0x40000;
        v120[2] = PsGetCurrentProcessSessionId();
        *(_WORD *)(v93 + 4) |= 1u;
        v117 = v156 + 16;
        v156 += 16;
        if ( v171 )
          v171[2] |= 1u;
        v116 = v120;
        v171 = (unsigned __int16 *)v120;
        v182 = v120;
      }
      if ( (v55 & 0x40) != 0 )
      {
        v121 = (unsigned __int16 *)(v93 + v117);
        *(_DWORD *)v121 = 851984;
        *((_DWORD *)v121 + 1) = 0x80000;
        *((_QWORD *)v121 + 1) = KeGetCurrentThread()->ApcState.Process[3].CycleTime | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *(_WORD *)(v93 + 4) |= 1u;
        v117 += 16;
        v156 = v117;
        if ( v116 )
          v116[2] |= 1u;
        v116 = v121;
        v171 = v121;
        v182 = v121;
      }
      if ( (v55 & 0x80u) != 0 )
      {
        v122 = (unsigned __int16 *)(v93 + v117);
        *(_DWORD *)v122 = 655376;
        *((_DWORD *)v122 + 1) = 0x80000;
        if ( (v25 & 4) == 0 )
        {
          v123 = KeGetCurrentPrcb();
          v124 = _InterlockedIncrement64((volatile signed __int64 *)v123->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v123->Number << 48);
          v196 = v124;
          v25 |= 4u;
          if ( v188 )
            *v188 = v124;
        }
        *((_QWORD *)v122 + 1) = v196;
        *(_WORD *)(v93 + 4) |= 1u;
        v117 += 16;
        v156 = v117;
        if ( v116 )
          v116[2] |= 1u;
        v116 = v122;
        v171 = v122;
        v182 = v122;
      }
      if ( (v55 & 4) != 0 )
      {
        v125 = (unsigned int *)(v93 + v117);
        v186 = v125;
        memmove(v125, v190, *(unsigned __int16 *)v190);
        v126 = v125 + 2;
        if ( *(_QWORD *)v126 && (v55 & 0x20) == 0 && !EtwpQueueStackWalkApc((__int64)v183, v155, v165, 1u, v126) )
          *(_QWORD *)v126 = 0LL;
        *(_WORD *)(v93 + 4) |= 1u;
        v127 = v190;
        v117 = *(unsigned __int16 *)v190 + v156;
        v156 = v117;
        if ( v171 )
          v171[2] |= 1u;
        v116 = v186;
        v171 = (unsigned __int16 *)v186;
        v182 = v186;
      }
      else
      {
        v127 = v190;
      }
      v30 = 8LL;
      if ( (v55 & 8) == 0 )
      {
        v129 = v171;
        goto LABEL_224;
      }
      v128 = (unsigned __int16 *)(v93 + v117);
      *(_DWORD *)v128 = 1179672;
      *((_DWORD *)v128 + 1) = 0x100000;
      *((_QWORD *)v128 + 2) = v189;
      *((_QWORD *)v128 + 1) = v127[1];
      *(_WORD *)(v93 + 4) |= 1u;
      v117 += 24;
      v156 = v117;
      if ( v116 )
        v116[2] |= 1u;
      v129 = v128;
      v171 = v128;
      v182 = v128;
    }
    else
    {
      v129 = 0LL;
      v117 = 80;
    }
    v30 = 8LL;
LABEL_224:
    v29 = v167[0];
    if ( v167[0] )
    {
      v130 = (_WORD *)(v93 + v117);
      v186 = v130;
      v131 = (v167[0] + 15) & 0xFFF8;
      *v130 = v131;
      *(_DWORD *)(v130 + 1) = 12;
      v130[3] = v29;
      BugCheckParameter3a = v131 - v29 - 8;
      v132 = (unsigned int)v29;
      memmove(v130 + 4, v200, (unsigned int)v29);
      memset_0((char *)v130 + v132 + 8, 0, BugCheckParameter3a);
      v30 = 1LL;
      v29 = (unsigned __int64)v171;
      *(_WORD *)(v93 + 4) |= 1u;
      v117 = (unsigned __int16)*v130 + v156;
      v156 = v117;
      if ( v29 )
        *(_WORD *)(v29 + 4) |= 1u;
      v129 = v130;
      v21 = 1;
    }
    v133 = BugCheckParameter3_4;
    if ( BugCheckParameter3_4 )
    {
      v134 = v117;
      v135 = v170;
      v136 = (v170 + 15) & 0xFFF8;
      *(_WORD *)(v117 + v93) = v136;
      *(_DWORD *)(v117 + v93 + 2) = 11;
      *(_WORD *)(v117 + v93 + 6) = v135;
      v192 = (void *)(v93 + v117 + 8LL);
      v201 = (char *)v192 + v135;
      memset_0((char *)v192 + v135, 0, (unsigned __int16)(v136 - v135 - 8));
      *(_WORD *)(v93 + 4) |= 1u;
      v117 = *(unsigned __int16 *)(v134 + v93) + v156;
      v156 = v117;
      v133 = BugCheckParameter3_4;
      if ( v129 )
        v129[2] |= 1u;
    }
    for ( i = 0; ; ++i )
    {
      v168 = i;
      if ( i >= a10 )
        break;
      v138 = *(unsigned int *)(v184 + 16LL * i + 8);
      LODWORD(Size) = *(_DWORD *)(v184 + 16LL * i + 8);
      v29 = *(_QWORD *)(v184 + 16LL * i);
      if ( v172 )
        v139 = *(_BYTE *)(v184 + 16LL * i + 12);
      else
        v139 = 0;
      if ( v139 )
      {
        v30 = (unsigned int)v139 - 1;
        if ( v139 == 1 )
        {
          if ( !v192 || (char *)v192 + v138 > v201 || !v133 )
            KeBugCheckEx(0x11Du, 5uLL, v117, v57, 0LL);
          memmove(v192, (const void *)v29, v138);
          v117 = v156;
          v192 = (char *)v192 + (unsigned int)v138;
          v133 = --BugCheckParameter3_4;
        }
        else if ( v139 == 3 && (_DWORD)v138 == 8 )
        {
          *(_QWORD *)(v93 + 16) = *(_QWORD *)v29;
        }
      }
      else
      {
        v140 = (void *)(v93 + v117);
        v186 = v140;
        v141 = v138 + v117;
        v156 = v141;
        if ( v141 > v57 )
          KeBugCheckEx(0x11Du, 5uLL, v141, v57, 0LL);
        if ( v29 >= 0x7FFFFFFF0000LL )
        {
          v170 = 0;
          v142 = 0;
        }
        else
        {
          v170 = 1;
          v142 = 1;
        }
        if ( v142 )
          RtlCopyFromUser(v140, (void *)v29, v138);
        else
          RtlCopyVolatileMemory(v140, (const void *)v29, v138);
        v117 = v156;
        v133 = BugCheckParameter3_4;
      }
    }
    if ( (*(_DWORD *)(v165 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v165, &v202);
    }
    if ( *(_QWORD *)(v165 + 1552) )
      EtwpInvokeEventCallback(v165, &v202, v179 + 40, 0LL);
    v32 = v177;
    v20 = v157;
    v18 = v158;
    v33 = v169;
    v31 = v173;
    if ( v177 )
    {
      v29 = (unsigned __int64)v164 >> 5;
      v30 = v164 & 0x1F;
      *(_DWORD *)(v177 + 4 * v29) |= 1 << v30;
      goto LABEL_263;
    }
  }
  while ( 1 )
  {
    v81 = v80;
    v82 = Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v56, v29, v32);
    v29 = v191;
    if ( v82 )
    {
      if ( *(_DWORD *)(v191 + 16LL * (unsigned int)v81 + 8) > 0xFFFFu )
        break;
    }
    v83 = 16 * v81;
    v84 = 0;
    if ( v172 )
      v84 = *(_BYTE *)(v83 + v191 + 12);
    v56 = v84;
    if ( v84 )
    {
      v56 = (unsigned int)v84 - 1;
      if ( v84 == 1 )
      {
        if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v56, v191, v32) )
        {
          v56 = *(_DWORD *)(v191 + v83 + 8) + v170;
          v170 += *(_DWORD *)(v191 + v83 + 8);
        }
        else
        {
          v170 += *(unsigned __int16 *)(v191 + v83 + 8);
        }
        ++BugCheckParameter3_4;
      }
      else if ( v84 == 4
             && (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline(v56, v191)
             && *(_DWORD *)(v191 + v83 + 8) == 16 )
      {
        v194[0] = *(_QWORD *)(v191 + v83);
      }
    }
    else
    {
      v57 += *(_DWORD *)(v191 + v83 + 8);
      BugCheckParameter3 = v57;
    }
    v80 = Size + 1;
    LODWORD(Size) = v80;
    if ( v80 >= a10 )
      goto LABEL_130;
  }
  if ( v20 >= 0 )
    v20 = -2147483643;
  v86 = (unsigned __int16)v158;
LABEL_139:
  v157 = v20;
  v30 = v168;
  v53 = v86 | (1 << v168);
LABEL_47:
  if ( (unsigned int)Feature_1144514872__private_IsEnabledDeviceUsageNoInline(v30, v29, v32) )
  {
    if ( v189 )
      EtwpDereferenceStackEntry(v189);
    v54 = v175;
    if ( (_BYTE)v159 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v175 + 704) + 8LL * v164), 1u);
  }
  else
  {
    v54 = v175;
  }
  if ( (v25 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(ListEntry);
  if ( v20 < 0 )
  {
    EtwpFailLogging((_DWORD)v169, v179, (unsigned int)v206, (unsigned __int16)v53, a4, v20, v155 < 2u, a10, v184, 0);
  }
  else if ( v207 )
  {
    v143 = (unsigned int **)v206;
    v144 = v207;
    do
    {
      EtwpReleaseTraceBuffer(v143 + 2);
      if ( v155 < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v54 + 704) + 8LL * **v143),
          1u);
      v143 += 6;
      --v144;
    }
    while ( v144 );
    v20 = v157;
  }
  if ( v163 )
    KiLeaveCriticalRegionUnsafe(v198);
  v145 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v146 = KeGetCurrentPrcb();
    v147 = v146->PPLookasideList[8].P;
    ++v147->TotalFrees;
    if ( LOWORD(v147->ListHead.Alignment) < v147->Depth
      || (++v147->FreeMisses,
          v147 = v146->PPLookasideList[8].L,
          ++v147->TotalFrees,
          LOWORD(v147->ListHead.Alignment) < v147->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v147->ListHead, v145);
    }
    else
    {
      ++v147->FreeMisses;
      guard_dispatch_icall_no_overrides(v145, v146, v145);
    }
  }
  return (unsigned int)v20;
}
