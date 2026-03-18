/*
 * XREFs of EtwpEventWriteFull @ 0x14021336C
 * Callers:
 *     EtwpStackWalkApc @ 0x14020A200 (EtwpStackWalkApc.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140214E28 (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x140257838 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1406C61D0 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140ADBE80 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     EtwpQueueStackWalkApc @ 0x14020A930 (EtwpQueueStackWalkApc.c)
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
 *     MmCanThreadFault @ 0x140262E50 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpDereferenceStackEntry @ 0x14032CCA0 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x140419C00 (DecodeProviderTraits.c)
 *     EtwpApplyEventNameFilter @ 0x14041C3C8 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14041C6FC (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140448D8C (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetStackLookasideListEntry @ 0x14046E5B0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047A00C (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14047A534 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x140484910 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A92C8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A93C4 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14051CB68 (EtwpApplyEventIdPayloadFilter.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        __int128 *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rdx
  char v23; // di
  __int64 v24; // r14
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v26; // rdx
  unsigned __int16 v27; // cx
  unsigned __int16 *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r8
  bool v31; // zf
  unsigned int v32; // ebx
  _WORD *v33; // r14
  char v34; // r13
  __int64 v35; // r15
  int v36; // eax
  char v37; // al
  char v38; // r11
  _KPROCESS *Process; // rax
  int v40; // edx
  char v41; // al
  char v42; // al
  __int64 v43; // rbx
  __int64 v44; // r9
  int v45; // ebx
  int v46; // ebx
  int v47; // r13d
  int v48; // eax
  int v49; // ebx
  int v50; // ecx
  int v51; // r14d
  _DWORD *v52; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r15
  _GENERAL_LOOKASIDE *L; // r15
  __int64 v56; // rcx
  int v57; // r15d
  unsigned int v58; // ebx
  int v59; // r8d
  int v60; // eax
  char v61; // cl
  int v62; // edx
  int v63; // r15d
  int v64; // r14d
  __int64 v65; // rdx
  int v66; // edx
  __int64 v67; // r9
  struct _SLIST_ENTRY *StackLookasideListEntry; // rax
  __int64 v69; // r13
  char v70; // r14
  struct _SLIST_ENTRY *v71; // r13
  unsigned __int16 *v72; // r15
  __int64 v73; // r15
  __int64 v74; // r15
  unsigned __int16 v75; // r14
  int v76; // edi
  char v77; // al
  int v78; // ecx
  __int64 v79; // r13
  __int64 v80; // r13
  int ReserveTraceBufferStatus; // ebx
  __int64 v82; // r14
  unsigned int v83; // r15d
  int v84; // r14d
  unsigned int v85; // r15d
  __int128 v86; // xmm0
  __int128 v87; // xmm0
  _DWORD *v88; // rcx
  unsigned __int64 v89; // rdx
  __int16 v90; // r15
  unsigned __int16 v91; // si
  unsigned int v92; // r10d
  char *v93; // rcx
  _DWORD *v94; // rax
  int CurrentProcessSessionId; // eax
  unsigned __int16 *v96; // rcx
  _DWORD *v97; // rdx
  _DWORD *v98; // r8
  struct _KPRCB *v99; // rcx
  unsigned __int64 v100; // rax
  unsigned int *v101; // rcx
  char v102; // al
  _QWORD *v103; // rdx
  _DWORD *v104; // rcx
  _WORD *v105; // rax
  __int16 v106; // r14
  __int64 v107; // rbx
  unsigned __int16 *v108; // rbx
  unsigned __int16 *v109; // rcx
  int v110; // r9d
  __int64 v111; // rbx
  __int64 v112; // r8
  __int16 v113; // dx
  unsigned int i; // r14d
  size_t v115; // rbx
  char v116; // al
  void *v117; // rcx
  unsigned int v118; // r10d
  char v119; // al
  __int64 v120; // rbx
  unsigned int **v121; // rbx
  __int64 v122; // rdi
  struct _SLIST_ENTRY *v123; // r8
  struct _KPRCB *v124; // rdx
  _GENERAL_LOOKASIDE *v125; // rcx
  ULONG_PTR BugCheckParameter4b; // [rsp+20h] [rbp-508h]
  int BugCheckParameter4; // [rsp+20h] [rbp-508h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-508h]
  int v129; // [rsp+28h] [rbp-500h]
  __int64 v130; // [rsp+28h] [rbp-500h]
  int v131; // [rsp+30h] [rbp-4F8h]
  int v132; // [rsp+40h] [rbp-4E8h]
  unsigned __int8 v133; // [rsp+50h] [rbp-4D8h]
  char v134; // [rsp+51h] [rbp-4D7h]
  unsigned __int16 v136; // [rsp+52h] [rbp-4D6h]
  int v137; // [rsp+54h] [rbp-4D4h]
  int v138; // [rsp+5Ch] [rbp-4CCh]
  unsigned int BugCheckParameter3; // [rsp+64h] [rbp-4C4h]
  int BugCheckParameter3_4; // [rsp+68h] [rbp-4C0h]
  char v141; // [rsp+6Ch] [rbp-4BCh]
  int v143; // [rsp+74h] [rbp-4B4h]
  char v144; // [rsp+78h] [rbp-4B0h]
  unsigned __int16 v145; // [rsp+78h] [rbp-4B0h]
  _WORD v146[6]; // [rsp+7Ch] [rbp-4ACh] BYREF
  unsigned __int16 v147; // [rsp+88h] [rbp-4A0h]
  unsigned int v148; // [rsp+8Ch] [rbp-49Ch]
  unsigned __int16 *v149; // [rsp+90h] [rbp-498h]
  unsigned __int16 *v150; // [rsp+98h] [rbp-490h]
  __int64 v151; // [rsp+A0h] [rbp-488h]
  __int16 v152; // [rsp+A8h] [rbp-480h]
  __int64 v153; // [rsp+B0h] [rbp-478h]
  __int64 v154; // [rsp+B8h] [rbp-470h]
  unsigned int *v155; // [rsp+C0h] [rbp-468h]
  __int64 v156; // [rsp+C8h] [rbp-460h]
  void *Src; // [rsp+D0h] [rbp-458h]
  int v158; // [rsp+D8h] [rbp-450h]
  unsigned int v159; // [rsp+DCh] [rbp-44Ch]
  void *v160; // [rsp+E0h] [rbp-448h] BYREF
  __int64 v161; // [rsp+E8h] [rbp-440h]
  __int64 v162; // [rsp+F0h] [rbp-438h]
  __int64 v163; // [rsp+F8h] [rbp-430h]
  int v164; // [rsp+100h] [rbp-428h]
  size_t Size; // [rsp+108h] [rbp-420h]
  _DWORD *v166; // [rsp+110h] [rbp-418h]
  unsigned __int64 v167; // [rsp+118h] [rbp-410h]
  void *v168; // [rsp+120h] [rbp-408h]
  unsigned __int64 *v169; // [rsp+128h] [rbp-400h]
  void *v170; // [rsp+130h] [rbp-3F8h]
  _DWORD *v171; // [rsp+138h] [rbp-3F0h]
  PSLIST_ENTRY v172; // [rsp+140h] [rbp-3E8h] BYREF
  _QWORD v173[5]; // [rsp+148h] [rbp-3E0h] BYREF
  unsigned int v174; // [rsp+170h] [rbp-3B8h]
  unsigned __int64 v175; // [rsp+178h] [rbp-3B0h]
  PSLIST_ENTRY ListEntry; // [rsp+180h] [rbp-3A8h]
  void *v177; // [rsp+188h] [rbp-3A0h]
  char *v178; // [rsp+190h] [rbp-398h]
  struct _KTHREAD *v179; // [rsp+198h] [rbp-390h]
  __int128 v180; // [rsp+1A0h] [rbp-388h] BYREF
  __int64 v181; // [rsp+1B0h] [rbp-378h]
  __int64 v182; // [rsp+1B8h] [rbp-370h]
  __int64 v183; // [rsp+1C0h] [rbp-368h]
  _QWORD v184[96]; // [rsp+1D0h] [rbp-358h] BYREF
  unsigned int v185; // [rsp+4D0h] [rbp-58h]

  v163 = a1;
  v162 = a11;
  v183 = a11;
  v174 = a10;
  v182 = (__int64)a9;
  v19 = a14;
  v173[2] = a1;
  v164 = a4;
  v150 = a5;
  v173[3] = a11;
  v20 = a12;
  v156 = a13;
  v177 = a16;
  v169 = a17;
  v143 = 0;
  v158 = 0;
  memset_0(v184, 0, 0x308uLL);
  LODWORD(Size) = 0;
  Src = 0LL;
  v171 = 0LL;
  v168 = 0LL;
  ListEntry = 0LL;
  v175 = 0LL;
  v146[0] = 0;
  v173[0] = 0LL;
  v152 = a15 & 0x100;
  v167 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(256LL, (a15 & 0x200) != 0) + 832);
  v173[4] = v167;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v154 = v19;
  DecodeProviderTraits(v177, v21, v146, v173);
  v23 = 0;
  v134 = 0;
  v24 = *(_QWORD *)(a1 + 648);
  v151 = v24;
  v173[1] = v24;
  if ( v169 && *v169 )
  {
    v175 = *v169;
    v23 = 4;
    v134 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v179 = CurrentThread;
  if ( !a12 )
    v20 = (__int64)CurrentThread;
  v166 = (_DWORD *)v20;
  v133 = ((__int64 (*)(void))KeGetEffectiveIrql)();
  v141 = 0;
  if ( !v133 )
  {
    --CurrentThread->KernelApcDisable;
    v141 = 1;
  }
  v27 = ~a3 & a2;
  v136 = v27;
  v28 = v150;
  v29 = v154;
  v30 = v156;
  while ( 1 )
  {
    v31 = !_BitScanForward(&v32, v27);
    v159 = v32;
    if ( v31 )
      break;
    v153 = 1LL;
    v180 = 0LL;
    v181 = 0LL;
    v172 = 0LL;
    v160 = 0LL;
    v137 = 80;
    v33 = 0LL;
    v149 = 0LL;
    v155 = 0LL;
    v34 = 0;
    v144 = 0;
    v147 = 0;
    BugCheckParameter3_4 = 0;
    v170 = 0LL;
    v178 = 0LL;
    v136 = (v27 - 1) & v27;
    v146[2] = v136;
    v35 = v29 + 32 * (v32 + 4LL);
    v161 = v35;
    if ( v30 )
    {
      v26 = (unsigned __int64)*(unsigned __int16 *)(v35 + 6) >> 5;
      v36 = *(_DWORD *)(v30 + 4 * v26);
      v27 &= v27 - 1;
      if ( _bittest(&v36, *(_BYTE *)(v35 + 6) & 0x1F) )
        goto LABEL_15;
    }
    LOBYTE(v26) = *((_BYTE *)v28 + 4);
    v37 = EtwpLevelKeywordEnabled(v29 + 32 * (v32 + 4LL), v26, *((_QWORD *)v28 + 1), v28);
    v27 = v136;
    v30 = v156;
    if ( !v37 )
      goto LABEL_15;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v35 + 8) & 0x200) != 0 )
      goto LABEL_15;
    v26 = *(_QWORD *)(v29 + 640);
    if ( !v26 )
      goto LABEL_256;
    v40 = *(_DWORD *)(104LL * v32 + v26);
    if ( (v40 & 0x80000200) != 0x80000200 )
    {
      v26 = v40 & 0x80000100;
      if ( (_DWORD)v26 != -2147483392 )
        goto LABEL_256;
    }
    v41 = EtwpApplyEventIdPayloadFilter(v29, v32, 0, *v28, *((_BYTE *)v28 + 2), a10, v162, 0, v38);
    v28 = v150;
    v29 = v154;
    v38 = v133;
    v27 = v136;
    v30 = v156;
    if ( !v41 )
    {
LABEL_15:
      v24 = v151;
    }
    else
    {
LABEL_256:
      if ( v152 )
      {
        BugCheckParameter4b = *((_QWORD *)v28 + 1);
        LOBYTE(v28) = *((_BYTE *)v28 + 4);
        LOBYTE(v30) = v38;
        if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(v29, v32, v30, (_DWORD)v28, BugCheckParameter4b, 0) )
        {
          LOBYTE(v132) = 0;
          LOBYTE(v131) = *((_BYTE *)v150 + 4);
          LOBYTE(v129) = v133;
          LOBYTE(BugCheckParameter4) = 0;
          v42 = EtwpApplyEventNameFilter(
                  v154,
                  v32,
                  a10,
                  v162,
                  BugCheckParameter4,
                  v129,
                  v131,
                  *((_QWORD *)v150 + 1),
                  v132);
          v27 = v136;
          v30 = v156;
          if ( !v42 )
          {
            v28 = v150;
            v29 = v154;
            goto LABEL_15;
          }
        }
      }
      v43 = *(unsigned __int16 *)(v35 + 6);
      v148 = *(unsigned __int16 *)(v35 + 6);
      if ( v133 >= 2u )
      {
        if ( (unsigned int)v43 >= *(_DWORD *)(v151 + 16) )
        {
          LOBYTE(v44) = 1;
          v153 = 1LL;
        }
        else
        {
          _mm_lfence();
          v44 = *(_QWORD *)(*(_QWORD *)(v151 + 712) + 8 * v43);
          v153 = v44;
        }
      }
      else
      {
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v151 + 704) + 8 * v43),
               1u) )
        {
          if ( (unsigned int)v43 >= *(_DWORD *)(v151 + 16) )
          {
            v153 = 1LL;
          }
          else
          {
            _mm_lfence();
            v153 = *(_QWORD *)(*(_QWORD *)(v151 + 712) + 8 * v43);
          }
          v34 = 1;
          v144 = 1;
        }
        LOBYTE(v44) = v153;
      }
      if ( (v44 & 1) != 0 )
      {
        v24 = v151;
        if ( v34 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v151 + 704) + 8LL * (unsigned int)v43),
            1u);
        v29 = v154;
        v27 = v136;
        v30 = v156;
        if ( (_DWORD)v43 == 3 )
        {
          v45 = *(_DWORD *)(v24 + 4340) != 0 ? -1073741058 : -1073741816;
LABEL_42:
          v143 = v45;
          goto LABEL_234;
        }
        goto LABEL_13;
      }
      v46 = v182 != 0 ? 0x10 : 0;
      v138 = v46;
      v47 = v182 != 0 ? 104 : 80;
      BugCheckParameter3 = v47;
      if ( (*(_DWORD *)(v35 + 8) & 0xFFFFFF9F) != 0 )
      {
        if ( EtwpPagingDisabled
          || (a4 & 1) != 0
          || !(unsigned int)MmCanThreadFault(-v182)
          || (v48 = 256, BYTE6(v179[1].Queue)) )
        {
          v48 = 0;
        }
        v49 = v48 | v46;
        v50 = *(_DWORD *)(v35 + 8);
        v51 = v47;
        if ( (v50 & 0x800) != 0 )
        {
          v26 = v167;
          if ( v167 )
          {
            if ( v167 != EtwpHostSiloState )
            {
              v49 |= 0x200u;
              v51 = v47 + ((*(unsigned __int16 *)(v167 + 4496) + 15) & 0xFFFFFFF8);
            }
          }
        }
        if ( (v50 & 1) != 0 && (v49 & 0x100) != 0 )
        {
          v52 = Src;
          if ( Src )
            goto LABEL_67;
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v52 = RtlpInterlockedPopEntrySList(&P->ListHead);
          Src = v52;
          if ( !v52 )
          {
            ++P->AllocateMisses;
            L = CurrentPrcb->PPLookasideList[8].L;
            ++L->TotalAllocates;
            v52 = RtlpInterlockedPopEntrySList(&L->ListHead);
            Src = v52;
            if ( !v52 )
            {
              ++L->AllocateMisses;
              v52 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag);
              Src = v52;
            }
          }
          if ( v52 )
            *v52 = CurrentPrcb->Number;
          v171 = v52;
          if ( v52 )
          {
            EtwpGetSidExtendedHeaderItem();
            v52 = Src;
          }
          v35 = v161;
          if ( v52 )
          {
LABEL_67:
            v49 |= 2u;
            v51 += *(unsigned __int16 *)v52;
          }
        }
        v56 = *(unsigned int *)(v35 + 8);
        v57 = v49 | 1;
        if ( (v56 & 2) == 0 )
          v57 = v49;
        v58 = v51 + 16;
        if ( (v56 & 2) == 0 )
          v58 = v51;
        v59 = v58;
        v60 = v57;
        if ( (v56 & 0x80u) != 0LL )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql(v56, v26, v58) < 2u || (v61 = 1, !KeGetCurrentPrcb()->NestingLevel) )
            v61 = 0;
          v59 = v58;
          v60 = v57;
          if ( !v61 )
          {
            v60 = v57 | 0x40;
            v59 = v58 + 16;
          }
        }
        v62 = *(_DWORD *)(v161 + 8);
        v46 = v60 | 0x80;
        if ( (v62 & 0x100) == 0 )
          v46 = v60;
        v138 = v46;
        v63 = v46;
        v47 = v59 + 16;
        if ( (v62 & 0x100) == 0 )
          v47 = v59;
        BugCheckParameter3 = v47;
        v64 = v47;
        LODWORD(Size) = v47;
        if ( (v62 & 4) != 0 )
        {
          BugCheckParameter3 = v47;
          v138 = v46;
          if ( !EtwpPagingDisabled )
          {
            v65 = *(_QWORD *)(v154 + 640);
            if ( !v65 )
              goto LABEL_91;
            v66 = *(_DWORD *)(104LL * v159 + v65);
            if ( (v66 & 0x80001000) != 0x80001000
              && (v66 & 0x80002000) != 0x80002000
              && (v66 & 0x80004000) != 0x80004000 )
            {
              goto LABEL_91;
            }
            BugCheckParameter3 = v47;
            v138 = v46;
            LOBYTE(v59) = *((_BYTE *)v150 + 4);
            if ( (unsigned __int8)EtwpApplyLevelKwFilter(v154, v159, v59, *((_QWORD *)v150 + 1), v133 < 2u) )
            {
              BugCheckParameter3 = v47;
              v138 = v46;
              LOBYTE(v67) = v133 < 2u;
              if ( (unsigned __int8)EtwpApplyStackWalkIdFilter(*v150, v154, v159, v67) )
              {
                BugCheckParameter3 = v47;
                v138 = v46;
                LOBYTE(v132) = 1;
                LOBYTE(v131) = *((_BYTE *)v150 + 4);
                LOBYTE(v129) = v133;
                LOBYTE(BugCheckParameter4a) = 0;
                if ( (unsigned __int8)EtwpApplyEventNameFilter(
                                        v154,
                                        v159,
                                        a10,
                                        v162,
                                        BugCheckParameter4a,
                                        v129,
                                        v131,
                                        *((_QWORD *)v150 + 1),
                                        v132) )
                {
LABEL_91:
                  v138 = v46;
                  if ( (v23 & 1) == 0 )
                  {
                    StackLookasideListEntry = (struct _SLIST_ENTRY *)EtwpGetStackLookasideListEntry();
                    ListEntry = StackLookasideListEntry;
                    v138 = v46;
                    if ( StackLookasideListEntry )
                    {
                      v168 = &StackLookasideListEntry[2];
                      v23 |= 2u;
                      v69 = 0LL;
                      v70 = ~(*(_DWORD *)(v153 + 816) >> 30) & 1;
                      v138 = v46;
                      if ( !memcmp((const void *)(v163 + 40), &EventTracingProvGuid, 0x10uLL) )
                      {
                        v138 = v46;
                        if ( *v150 == 18 )
                        {
                          v46 |= 0x20u;
                          v138 = v63 | 0x20;
                          v69 = v163 + 80;
                          v70 = 0;
                        }
                      }
                      v130 = v69;
                      v71 = ListEntry;
                      if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                               v153,
                                               (_DWORD)v166,
                                               a4,
                                               (_DWORD)ListEntry,
                                               v70,
                                               v130) )
                      {
                        EtwpReleaseStackLookasideListEntry(v71);
                        v23 &= ~2u;
                        v168 = 0LL;
                      }
                      v64 = Size;
                    }
                    v23 |= 1u;
                    v134 = v23;
                  }
                  v47 = v64;
                  BugCheckParameter3 = v64;
                  v72 = (unsigned __int16 *)v168;
                  if ( v168 )
                  {
                    if ( (*(_DWORD *)(v153 + 820) & 1) != 0
                      && (unsigned __int8)EtwpGetCrimsonStackKey(v153, v168, &v172) )
                    {
                      v46 |= 8u;
                      v47 = v64 + 24;
                    }
                    else
                    {
                      v46 |= 4u;
                      v47 = v64 + *v72;
                    }
                    BugCheckParameter3 = v47;
                    v138 = v46;
                  }
                }
              }
            }
          }
        }
        v33 = 0LL;
      }
      v73 = 48LL * v185;
      Size = v73;
      if ( a10 )
      {
        v74 = v162 + 8;
        v161 = a10;
        v75 = 0;
        v76 = 0;
        do
        {
          v77 = 0;
          if ( v152 )
            v77 = *(_BYTE *)(v74 + 4);
          if ( v77 )
          {
            if ( v77 == 1 )
            {
              v75 += *(_WORD *)v74;
              v147 = v75;
              BugCheckParameter3_4 = ++v76;
            }
            else if ( v77 == 4
                   && (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
                   && *(_DWORD *)v74 == 16 )
            {
              v173[0] = *(_QWORD *)(v74 - 8);
            }
          }
          else
          {
            v47 += *(_DWORD *)v74;
          }
          v74 += 16LL;
          --v161;
        }
        while ( v161 );
        BugCheckParameter3 = v47;
        v46 = v138;
        v23 = v134;
        v33 = 0LL;
        v73 = Size;
      }
      if ( BugCheckParameter3_4 )
      {
        v47 += (v147 + 15) & 0xFFFFFFF8;
        BugCheckParameter3 = v47;
      }
      if ( v146[0] )
      {
        v47 += (v146[0] + 15) & 0xFFFFFFF8;
        BugCheckParameter3 = v47;
      }
      *(_DWORD *)((char *)&v184[5] + v73) = v47;
      v78 = ((a4 & 4) << 7) | 0x600;
      if ( (a4 & 8) == 0 )
        v78 = (a4 & 4) << 7;
      v79 = EtwpReserveTraceBuffer(v153, v47, (unsigned int)&v180, (unsigned int)&v160, v78);
      v161 = v79;
      if ( v172 )
        EtwpDereferenceStackEntry(v172);
      if ( v79 )
      {
        *(_QWORD *)((char *)v184 + v73) = v153;
        *(_QWORD *)((char *)&v184[1] + v73) = v79;
        *(_OWORD *)((char *)&v184[2] + v73) = v180;
        *(_QWORD *)((char *)&v184[4] + v73) = v181;
        ++v185;
        v85 = BugCheckParameter3;
        *(_DWORD *)v79 = BugCheckParameter3 | 0xC0130000;
        *(_WORD *)(v79 + 4) = a6;
        *(_WORD *)(v79 + 6) = a7;
        *(_OWORD *)(v79 + 40) = *(_OWORD *)v150;
        if ( v173[0] )
        {
          v86 = *(_OWORD *)v173[0];
          *(_WORD *)(v79 + 4) = a6 | 0x80;
        }
        else
        {
          v86 = *(_OWORD *)(v163 + 40);
        }
        *(_OWORD *)(v79 + 24) = v86;
        if ( a8 )
          v87 = *a8;
        else
          v87 = NullGuid;
        *(_OWORD *)(v79 + 64) = v87;
        *(_QWORD *)(v79 + 16) = v160;
        v88 = v166;
        *(_DWORD *)(v79 + 8) = v166[324];
        *(_DWORD *)(v79 + 12) = v88[322];
        *(_DWORD *)(v79 + 56) = v88[163];
        *(_DWORD *)(v79 + 60) = v88[183];
        if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && (a15 & 0x400) != 0 )
          *(_WORD *)(v79 + 4) |= 0x400u;
        if ( v46 )
        {
          if ( (v46 & 0x200) != 0 )
          {
            v149 = (unsigned __int16 *)(v79 + 80);
            v89 = v167;
            v90 = (*(_WORD *)(v167 + 4496) + 15) & 0xFFF8;
            *(_WORD *)(v79 + 80) = v90;
            *(_WORD *)(v79 + 82) = 16;
            *(_WORD *)(v79 + 86) = *(_WORD *)(v89 + 4496);
            *(_WORD *)(v79 + 84) = 0;
            v91 = *(_WORD *)(v89 + 4496);
            memmove((void *)(v79 + 88), *(const void **)(v89 + 4488), v91);
            memset_0((void *)(v79 + 88 + *(unsigned __int16 *)(v167 + 4496)), 0, (unsigned __int16)(v90 - v91 - 8));
            *(_WORD *)(v79 + 4) |= 1u;
            v33 = v149;
            v92 = *v149 + 80;
            v137 = v92;
            v155 = (unsigned int *)v149;
            v85 = BugCheckParameter3;
          }
          else
          {
            v92 = 80;
          }
          if ( (v46 & 0x10) != 0 )
          {
            v93 = (char *)(v79 + v92);
            *(_DWORD *)v93 = 65560;
            *((_DWORD *)v93 + 1) = 0x100000;
            *(_OWORD *)(v93 + 8) = *a9;
            *(_WORD *)(v79 + 4) |= 1u;
            v92 += 24;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v93;
            v149 = (unsigned __int16 *)v93;
            v155 = (unsigned int *)v93;
          }
          if ( (v46 & 2) != 0 )
          {
            v160 = (void *)(v79 + v92);
            memmove(v160, Src, *(unsigned __int16 *)Src);
            *(_WORD *)(v79 + 4) |= 1u;
            v92 = *(unsigned __int16 *)Src + v137;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v160;
            v149 = (unsigned __int16 *)v160;
            v155 = (unsigned int *)v160;
          }
          if ( (v46 & 1) != 0 )
          {
            v94 = (_DWORD *)(v79 + v92);
            v160 = v94;
            *v94 = 196624;
            v94[1] = 0x40000;
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            v96 = (unsigned __int16 *)v160;
            *((_DWORD *)v160 + 2) = CurrentProcessSessionId;
            *(_WORD *)(v79 + 4) |= 1u;
            v92 = v137 + 16;
            v137 += 16;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v96;
            v149 = v96;
            v155 = (unsigned int *)v96;
          }
          if ( (v46 & 0x40) != 0 )
          {
            v97 = (_DWORD *)(v79 + v92);
            *v97 = 851984;
            v97[1] = 0x80000;
            *((_QWORD *)v97 + 1) = KeGetCurrentThread()->ApcState.Process[3].CycleTime | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
            *(_WORD *)(v79 + 4) |= 1u;
            v92 += 16;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v97;
            v149 = (unsigned __int16 *)v97;
            v155 = v97;
          }
          if ( (v46 & 0x80u) != 0 )
          {
            v98 = (_DWORD *)(v79 + v92);
            *v98 = 655376;
            v98[1] = 0x80000;
            if ( (v23 & 4) == 0 )
            {
              v99 = KeGetCurrentPrcb();
              v100 = _InterlockedIncrement64((volatile signed __int64 *)v99->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v99->Number << 48);
              v175 = v100;
              v23 |= 4u;
              v134 = v23;
              if ( v169 )
                *v169 = v100;
            }
            *((_QWORD *)v98 + 1) = v175;
            *(_WORD *)(v79 + 4) |= 1u;
            v92 += 16;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v98;
            v149 = (unsigned __int16 *)v98;
            v155 = v98;
          }
          if ( (v46 & 4) != 0 )
          {
            v155 = (unsigned int *)(v79 + v92);
            memmove(v155, v168, *(unsigned __int16 *)v168);
            v101 = v155;
            if ( *((_QWORD *)v155 + 1) )
            {
              if ( (v46 & 0x20) == 0 )
              {
                v102 = EtwpQueueStackWalkApc((__int64)v166, v133, v153, 1u, v155 + 2);
                v101 = v155;
                if ( !v102 )
                  *((_QWORD *)v155 + 1) = 0LL;
              }
            }
            *(_WORD *)(v79 + 4) |= 1u;
            v103 = v168;
            v92 = *(unsigned __int16 *)v168 + v137;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v101;
            v149 = (unsigned __int16 *)v101;
            v155 = v101;
          }
          else
          {
            v103 = v168;
          }
          if ( (v46 & 8) != 0 )
          {
            v104 = (_DWORD *)(v79 + v92);
            *v104 = 1179672;
            v104[1] = 0x100000;
            *((_QWORD *)v104 + 2) = v172;
            *((_QWORD *)v104 + 1) = v103[1];
            *(_WORD *)(v79 + 4) |= 1u;
            v92 += 24;
            v137 = v92;
            if ( v33 )
              v33[2] |= 1u;
            v33 = v104;
            v149 = (unsigned __int16 *)v104;
            v155 = v104;
          }
        }
        else
        {
          v92 = 80;
        }
        v26 = v146[0];
        if ( v146[0] )
        {
          v105 = (_WORD *)(v79 + v92);
          v160 = v105;
          v106 = (v146[0] + 15) & 0xFFF8;
          *v105 = v106;
          *(_DWORD *)(v105 + 1) = 12;
          v105[3] = v26;
          v145 = v106 - v26 - 8;
          v172 = (PSLIST_ENTRY)(v105 + 4);
          v107 = (unsigned int)v26;
          memmove(v105 + 4, v177, (unsigned int)v26);
          memset_0((char *)v172 + v107, 0, v145);
          v108 = (unsigned __int16 *)v160;
          v109 = v149;
          *(_WORD *)(v79 + 4) |= 1u;
          v92 = *v108 + v137;
          v137 = v92;
          if ( v109 )
            v109[2] |= 1u;
          v33 = v108;
        }
        v110 = BugCheckParameter3_4;
        if ( BugCheckParameter3_4 )
        {
          v111 = v92;
          v112 = v147;
          v113 = (v147 + 15) & 0xFFF8;
          *(_WORD *)(v92 + v79) = v113;
          *(_DWORD *)(v92 + v79 + 2) = 11;
          *(_WORD *)(v92 + v79 + 6) = v112;
          v170 = (void *)(v79 + v92 + 8LL);
          v178 = (char *)v170 + v112;
          memset_0((char *)v170 + v112, 0, (unsigned __int16)(v113 - v112 - 8));
          *(_WORD *)(v79 + 4) |= 1u;
          v92 = *(unsigned __int16 *)(v111 + v79) + v137;
          v137 = v92;
          v110 = BugCheckParameter3_4;
          if ( v33 )
            v33[2] |= 1u;
        }
        for ( i = 0; i < a10; ++i )
        {
          v115 = *(unsigned int *)(v162 + 16LL * i + 8);
          LODWORD(Size) = *(_DWORD *)(v162 + 16LL * i + 8);
          v26 = *(_QWORD *)(v162 + 16LL * i);
          if ( v152 )
            v116 = *(_BYTE *)(v162 + 16LL * i + 12);
          else
            v116 = 0;
          if ( v116 )
          {
            if ( v116 == 1 )
            {
              if ( !v170 || (char *)v170 + v115 > v178 || !v110 )
                KeBugCheckEx(0x11Du, 5uLL, v92, v85, 0LL);
              memmove(v170, (const void *)v26, v115);
              v92 = v137;
              v170 = (char *)v170 + (unsigned int)v115;
              v110 = --BugCheckParameter3_4;
            }
            else if ( v116 == 3 && (_DWORD)v115 == 8 )
            {
              *(_QWORD *)(v79 + 16) = *(_QWORD *)v26;
            }
          }
          else
          {
            v117 = (void *)(v79 + v92);
            v160 = v117;
            v118 = v115 + v92;
            v137 = v118;
            if ( v118 > v85 )
              KeBugCheckEx(0x11Du, 5uLL, v118, v85, 0LL);
            if ( v26 >= 0x7FFFFFFF0000LL )
            {
              v159 = 0;
              v119 = 0;
            }
            else
            {
              v159 = 1;
              v119 = 1;
            }
            if ( v119 )
              RtlCopyFromUser(v117, (void *)v26, v115);
            else
              RtlCopyVolatileMemory(v117, (const void *)v26, v115);
            v92 = v137;
            v110 = BugCheckParameter3_4;
          }
        }
        v120 = v153;
        if ( (*(_DWORD *)(v153 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v153, &v180);
        }
        if ( *(_QWORD *)(v120 + 1552) )
          EtwpInvokeEventCallback(v120, &v180, v163 + 40, 0LL);
        v30 = v156;
        v28 = v150;
        v29 = v154;
        v24 = v151;
        v27 = v136;
        if ( v156 )
        {
          v26 = v148 & 0x1F;
          *(_DWORD *)(v156 + 4 * ((unsigned __int64)v148 >> 5)) |= 1 << (v148 & 0x1F);
          v27 = v136;
        }
      }
      else
      {
        v80 = v153;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v153, BugCheckParameter3);
        v82 = v183;
        if ( !BugCheckParameter3_4 )
          v82 = 0LL;
        v83 = v174;
        if ( !BugCheckParameter3_4 )
          v83 = 0;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(v163 + 40, (_DWORD)v150, v80 + 136, a4, ReserveTraceBufferStatus, v83, v82, v133 < 2u, 0);
        v84 = v143;
        if ( v143 >= 0 )
        {
          if ( (*(_DWORD *)(v80 + 12) & 0x8000000) == 0 )
            v84 = ReserveTraceBufferStatus;
          v143 = v84;
          v158 = v84;
        }
        v24 = v151;
        if ( v144 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v151 + 704) + 8LL * v148),
            1u);
        v29 = v154;
        v27 = v136;
        v30 = v156;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v45 = -1073741675;
          goto LABEL_42;
        }
LABEL_13:
        v28 = v150;
      }
    }
  }
  v45 = v143;
LABEL_234:
  if ( (v23 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(ListEntry);
  if ( v45 < 0 )
  {
    EtwpFailLogging((_DWORD)v150, v163, (unsigned int)v184, v136, a4, v45, v133 < 2u, a10, v162, 0);
  }
  else if ( v185 )
  {
    v121 = (unsigned int **)v184;
    v122 = v185;
    do
    {
      EtwpReleaseTraceBuffer(v121 + 2, v26, v30);
      if ( v133 < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 704) + 8LL * **v121),
          1u);
      v121 += 6;
      --v122;
    }
    while ( v122 );
    v45 = v143;
  }
  if ( v141 )
    KiLeaveCriticalRegionUnsafe(v179, v26, v30);
  v123 = (struct _SLIST_ENTRY *)Src;
  if ( Src )
  {
    v124 = KeGetCurrentPrcb();
    v125 = v124->PPLookasideList[8].P;
    ++v125->TotalFrees;
    if ( LOWORD(v125->ListHead.Alignment) < v125->Depth
      || (++v125->FreeMisses,
          v125 = v124->PPLookasideList[8].L,
          ++v125->TotalFrees,
          LOWORD(v125->ListHead.Alignment) < v125->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v125->ListHead, v123);
    }
    else
    {
      ++v125->FreeMisses;
      guard_dispatch_icall_no_overrides(v123, v124, v123);
    }
  }
  return (unsigned int)v45;
}
