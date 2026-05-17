/*
 * XREFs of RtlpCreateHeap @ 0x18007C890
 * Callers:
 *     RtlCreateHeap @ 0x18007C850 (RtlCreateHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeTlsHeap @ 0x180092B70 (LdrpInitializeTlsHeap.c)
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 *     CsrpConnectToServer @ 0x1800CAD04 (CsrpConnectToServer.c)
 *     LdrpInitializeProcessHeap @ 0x1800EBB8C (LdrpInitializeProcessHeap.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x180113EEC (RtlDebugCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpLogHeapCreateEvent @ 0x180071D10 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     RtlpInitializeHeapSegment @ 0x18007BEF8 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x18007DB78 (RtlpCreateHeapEncoding.c)
 *     RtlpProcessHeapsInsert @ 0x18007DC3C (RtlpProcessHeapsInsert.c)
 *     RtlpPopulateListIndex @ 0x18007E1BC (RtlpPopulateListIndex.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 *     RtlpReportHeapFailure @ 0x1800D229C (RtlpReportHeapFailure.c)
 *     RtlpHpConvertCreationFlags @ 0x1800FCA10 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800FCB60 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpHpParametersVerify @ 0x180100E90 (RtlpHpParametersVerify.c)
 *     RtlpDebugPageHeapCreate @ 0x1801071C0 (RtlpDebugPageHeapCreate.c)
 *     RtlpHeapLogRangeCreate @ 0x180113E50 (RtlpHeapLogRangeCreate.c)
 *     RtlDebugCreateHeap @ 0x180113EEC (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011FA10 (RtlpGetHeapInterceptorIndex.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateHeap(
        int a1,
        void *a2,
        unsigned __int64 a3,
        char *a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r14d
  __int64 v9; // r12
  unsigned int NtGlobalFlag; // r15d
  __int64 v11; // rdx
  unsigned int v12; // r13d
  char v13; // bl
  void *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edi
  _BYTE *v17; // r14
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r12d
  struct _PEB *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  char *v27; // rdi
  __int64 v28; // rbx
  int v29; // r13d
  volatile signed __int32 *v30; // rbx
  __int64 *v31; // rax
  int v33; // r15d
  unsigned __int64 v34; // rax
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rtt
  int v37; // eax
  __int64 v38; // rcx
  char *v39; // rcx
  char *v40; // r14
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rdi
  unsigned __int64 v45; // rdi
  unsigned int v46; // r15d
  __int64 v47; // r9
  char *v48; // r10
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v50; // r10
  char v51; // dl
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned int v56; // edi
  char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rcx
  char v63; // cl
  int v64; // edx
  int v65; // eax
  char *v66; // r12
  char *v67; // rbx
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  char *v72; // [rsp+40h] [rbp-218h] BYREF
  __int64 *v73; // [rsp+48h] [rbp-210h]
  void *v74; // [rsp+50h] [rbp-208h]
  __int64 *v75; // [rsp+58h] [rbp-200h]
  unsigned __int64 v76; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-1E8h] BYREF
  void *v79; // [rsp+78h] [rbp-1E0h]
  int v80; // [rsp+80h] [rbp-1D8h]
  char *v81; // [rsp+88h] [rbp-1D0h] BYREF
  char *v82; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned int v83; // [rsp+98h] [rbp-1C0h]
  unsigned __int64 v84; // [rsp+A0h] [rbp-1B8h] BYREF
  _QWORD v85[2]; // [rsp+B0h] [rbp-1A8h] BYREF
  void *v86[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v87; // [rsp+D0h] [rbp-188h]
  __int128 v88; // [rsp+E0h] [rbp-178h]
  __int128 v89; // [rsp+F0h] [rbp-168h] BYREF
  __int128 v90; // [rsp+100h] [rbp-158h]
  __int128 v91; // [rsp+110h] [rbp-148h]
  __int128 v92; // [rsp+120h] [rbp-138h] BYREF
  __int128 v93; // [rsp+130h] [rbp-128h]
  __int128 v94; // [rsp+140h] [rbp-118h]
  __int128 v95; // [rsp+150h] [rbp-108h]
  __int128 v96; // [rsp+160h] [rbp-F8h]
  __int128 v97; // [rsp+170h] [rbp-E8h]
  _BYTE v98[80]; // [rsp+180h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v100; // [rsp+1F8h] [rbp-60h]

  v7 = (int)a4;
  v82 = a4;
  v78 = a3;
  v74 = a2;
  v73 = a5;
  v79 = a2;
  v85[0] = a5;
  v9 = a6;
  v83 = a7;
  v81 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  *(_OWORD *)v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v80 = 0;
  DWORD1(v92) = 0;
  v77 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v98, 0, 0x50uLL);
  v12 = a7 != 0;
  v72 = 0LL;
  v13 = 0;
  v75 = 0LL;
  v14 = v74;
  v15 = (__int64)a5;
  if ( dword_1801C5588 && !v74 && !v73 )
  {
    v30 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(a1, 0, v78, v7, 0LL, a6);
    if ( v30 )
    {
      v27 = (char *)v74;
      goto LABEL_42;
    }
    v15 = (__int64)v73;
    if ( a6 != -1 )
    {
      v30 = 0LL;
      v27 = (char *)v74;
      goto LABEL_43;
    }
    v9 = 0LL;
    v13 = 1;
    v14 = v74;
  }
  v16 = a1 & 0xF1FFFFFF;
  v17 = 0LL;
  if ( (v16 & 0x100) != 0 )
  {
    if ( (v16 & 2) == 0 || v14 || v15 )
      goto LABEL_172;
    if ( v9 == -1 && dword_1801C5598 )
    {
      v9 = 0LL;
      v13 = 1;
    }
    if ( v9 )
    {
      v17 = (_BYTE *)v9;
      if ( !(unsigned int)RtlpHpParametersVerify(v9) )
        goto LABEL_172;
    }
    else
    {
      v17 = v98;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v16 & 2) != 0
         && !v14
         && (!v9 || !*(_QWORD *)(v9 + 8) && !*(_QWORD *)(v9 + 16) && !*(_QWORD *)(v9 + 48) && !*(_QWORD *)(v9 + 72)) )
  {
    v17 = v98;
    if ( v15 )
      v17 = 0LL;
  }
  if ( v17 )
  {
    if ( v17 == v98 )
    {
      *(_QWORD *)(v17 + 4) = 0LL;
      *(_QWORD *)(v17 + 20) = 0LL;
      *(_QWORD *)(v17 + 28) = 0LL;
      *(_QWORD *)(v17 + 36) = 0LL;
      *(_QWORD *)(v17 + 44) = 0LL;
      *(_QWORD *)(v17 + 52) = 0LL;
      *(_QWORD *)(v17 + 60) = 0LL;
      *(_QWORD *)(v17 + 68) = 0LL;
      *((_DWORD *)v17 + 19) = 0;
      *(_DWORD *)v17 = 5242883;
      *((_DWORD *)v17 + 3) = 1;
      *((_DWORD *)v17 + 4) = -1;
      if ( v13 )
        *((_DWORD *)v17 + 1) = 2;
    }
    if ( (v17[4] & 1) == 0 )
    {
      v63 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v64, *((_DWORD *)v17 + 3));
      v65 = *((_DWORD *)v17 + 4);
      if ( v65 != -1 )
        v63 = v65 + 1;
      LOBYTE(v85[0]) = RtlpHpEnvHandle;
      BYTE1(v85[0]) = v64;
      BYTE2(v85[0]) = v63;
      *(_DWORD *)((char *)v85 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      HIBYTE(v85[0]) = BYTE7(RtlpHpEnvHandle);
      v85[1] = *((_QWORD *)v17 + 3);
      v66 = v82;
      v67 = v82;
      if ( v78 )
        v67 = (char *)v78;
      if ( v82 > v67 )
        v66 = v67;
      v68 = RtlpHpConvertCreationFlags(v16, NtGlobalFlag, v17);
      v69 = RtlpHpHeapCreate(v68, v67, v66, v85);
      v30 = (volatile signed __int32 *)v69;
      if ( v69 )
      {
        if ( (v16 & 1) != 0 )
          v12 |= 2u;
        if ( (int)RtlpProcessHeapsInsert(v69, v12) < 0 )
        {
          RtlpHpHeapDestroy(v30);
          v30 = 0LL;
        }
        if ( *((_DWORD *)v30 + 4) == -571548178 )
        {
          RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext, v70);
          if ( (dword_1801C7858 & 1) != 0 && (dword_1801C7858 & 2) != 0 )
            _InterlockedOr(v30 + 5, 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync(v30);
      }
      v27 = (char *)v74;
      goto LABEL_42;
    }
    if ( dword_1801C5598 )
    {
      v30 = (volatile signed __int32 *)((__int64 (__fastcall *)(_QWORD, void *, unsigned __int64, char *, _QWORD, _QWORD))qword_1801C55B8)(
                                         v16,
                                         v74,
                                         v78,
                                         v82,
                                         0LL,
                                         0LL);
      v27 = (char *)v74;
      goto LABEL_42;
    }
    goto LABEL_172;
  }
  if ( (v16 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v16 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801CB8C8 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v16 & 0xFFF80C00) != 0 )
    v16 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v92, 0, 0x60uLL);
  if ( v9 && *(_DWORD *)v9 == 96 )
  {
    v92 = *(_OWORD *)v9;
    v93 = *(_OWORD *)(v9 + 16);
    v94 = *(_OWORD *)(v9 + 32);
    v95 = *(_OWORD *)(v9 + 48);
    v96 = *(_OWORD *)(v9 + 64);
    v97 = *(_OWORD *)(v9 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v16 |= 0x20u;
  v18 = v16 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v18 = v16;
  v19 = v18 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v19 = v18;
  v20 = v19 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v20 = v19;
  v11 = v20;
  LODWORD(v11) = v20 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v11 = v20;
  v21 = v11 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v21 = v11;
  v22 = NtCurrentPeb();
  if ( !*((_QWORD *)&v92 + 1) )
    *((_QWORD *)&v92 + 1) = v22->HeapSegmentReserve;
  if ( !(_QWORD)v93 )
    *(_QWORD *)&v93 = v22->HeapSegmentCommit;
  if ( !*((_QWORD *)&v93 + 1) )
    *((_QWORD *)&v93 + 1) = v22->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v94 )
    *(_QWORD *)&v94 = v22->HeapDeCommitTotalFreeThreshold;
  v23 = qword_1801C7680;
  if ( !qword_1801C7680 )
  {
    qword_1801C7688 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v23 = v100;
      qword_1801C7680 = v100;
      goto LABEL_28;
    }
LABEL_172:
    v27 = (char *)v74;
LABEL_41:
    v30 = 0LL;
LABEL_42:
    v15 = (__int64)v73;
LABEL_43:
    v31 = 0LL;
    goto LABEL_44;
  }
LABEL_28:
  if ( !*((_QWORD *)&v94 + 1) )
    *((_QWORD *)&v94 + 1) = v23 - qword_1801C7688 - 4096;
  if ( (unsigned __int64)(v95 - 1) > 0xFEFFF )
    *(_QWORD *)&v95 = 1044480LL;
  if ( v82 )
    v24 = (unsigned __int64)(v82 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v24 = 0x2000LL;
  v77 = v24;
  if ( v78 )
    v25 = (v78 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v25 = (v24 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v76 = v25;
  v26 = v24;
  if ( v24 > v25 )
  {
    v24 = v25;
    v77 = v25;
    v26 = v25;
  }
  v27 = (char *)v74;
  if ( (v21 & 2) == 0 || v74 )
  {
    v28 = 0LL;
    v29 = 0;
  }
  else
  {
    v28 = 4096LL;
    v29 = 2;
    v80 = 2;
    if ( v25 - 4096 < v26 )
    {
      v25 = (v25 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v76 = v25;
    }
  }
  if ( !v24 || !v25 )
    goto LABEL_41;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v21, (_DWORD)v74, v25, v24, (__int64)v73, (__int64)&v92, v83);
  v33 = 704;
  v15 = (__int64)v73;
  if ( (v21 & 1) != 0 )
  {
    LODWORD(v79) = v21;
    v31 = 0LL;
    if ( v73 )
    {
      v30 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v73 )
      v21 |= 0x80000000;
    LODWORD(v79) = v21;
    if ( !v73 )
      v33 = 744;
    v31 = v73;
    if ( !v73 )
      v31 = 0LL;
    v75 = v31;
  }
  if ( v74 )
  {
    if ( *((_QWORD *)&v96 + 1) )
    {
      if ( *((_QWORD *)&v95 + 1) && (_QWORD)v96 && *((_QWORD *)&v95 + 1) <= (unsigned __int64)v96 && (v21 & 2) == 0 )
      {
        v81 = (char *)v74;
        v40 = (char *)v74 + *((_QWORD *)&v95 + 1);
        v76 = v96;
        memset_thunk_772440563353939046(v74, 0, 0x1000uLL);
        v39 = (char *)v74;
LABEL_149:
        v80 = v29 | 1;
        v72 = (char *)v74;
        goto LABEL_65;
      }
    }
    else if ( (int)ZwQueryVirtualMemory(-1LL, v74, 0LL, v86, 48LL, 0LL) >= 0 )
    {
      v40 = (char *)v86[0];
      if ( v86[0] == v74 && (_DWORD)v88 != 0x10000 )
      {
        v39 = (char *)v86[0];
        v81 = (char *)v86[0];
        if ( (_DWORD)v88 == 4096 )
        {
          if ( (v21 & 0x40000) != 0 && (BYTE4(v88) & 0x40) == 0 )
          {
            v30 = 0LL;
            v31 = v75;
            v15 = (__int64)v73;
            goto LABEL_44;
          }
          memset_thunk_772440563353939046(v86[0], 0, 0x1000uLL);
          if ( (int)ZwQueryVirtualMemory(-1LL, v74, 3LL, &v89, 48LL, 0LL) < 0 )
          {
            v30 = 0LL;
            v31 = v75;
            v15 = (__int64)v73;
            goto LABEL_44;
          }
          v76 = v90;
          v77 = *((_QWORD *)&v87 + 1);
          v39 = v81;
          v40 = &v81[*((_QWORD *)&v87 + 1)];
        }
        else
        {
          v11 = *((_QWORD *)&v87 + 1);
          v76 = *((_QWORD *)&v87 + 1);
          v71 = v77;
          if ( v77 > *((_QWORD *)&v87 + 1) )
          {
            v71 = *((_QWORD *)&v87 + 1);
            v77 = *((_QWORD *)&v87 + 1);
          }
          if ( v71 < 0x2000 )
          {
            v30 = 0LL;
            v31 = v75;
            v15 = (__int64)v73;
            goto LABEL_44;
          }
        }
        goto LABEL_149;
      }
    }
    v30 = 0LL;
    v31 = v75;
    v15 = (__int64)v73;
    goto LABEL_44;
  }
  v82 = 0LL;
  v78 = 0LL;
  v84 = 0LL;
  if ( *((_QWORD *)&v96 + 1) )
  {
    v30 = 0LL;
    goto LABEL_44;
  }
  v34 = qword_1801C6F00;
  do
  {
    v35 = v34 ^ (v34 >> 12) ^ ((v34 ^ (v34 >> 12)) << 25) ^ ((v34 ^ (v34 >> 12) ^ ((v34 ^ (v34 >> 12)) << 25)) >> 27);
    v36 = v34;
    v34 = _InterlockedCompareExchange64(&qword_1801C6F00, v35, v34);
  }
  while ( v36 != v34 );
  v84 = (unsigned __int64)((-3 * (_BYTE)v35) & 0x1F) << 16;
  v78 = v76 + v84;
  if ( v76 + v84 < v76 )
  {
    v78 = v76;
    v84 = 0LL;
  }
  v37 = 64;
  if ( (v21 & 0x40000) == 0 )
    v37 = 4;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v82, 0LL, &v78, 0x2000, v37) < 0 )
  {
    v30 = 0LL;
    v31 = v75;
    v15 = (__int64)v73;
    goto LABEL_44;
  }
  v27 = v82;
  v72 = v82;
  v76 = v78;
  if ( v84 )
  {
    RtlpSecMemFreeVirtualMemory(v38, &v82, &v84, 0x8000LL);
    v27 = &v82[v84];
    v72 = &v82[v84];
    v76 = v78 - v84;
  }
  v39 = v27;
  v81 = v27;
  v40 = v27;
LABEL_65:
  if ( v39 == v40 )
  {
    v41 = 64;
    if ( (v21 & 0x40000) == 0 )
      v41 = 4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v81, 0LL, &v77, 4096, v41) < 0 )
      goto LABEL_215;
    v42 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v43 = 2147353472LL;
    if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit((__int64)v72, (__int64)v81, v77, 1);
    v40 += v77;
    v27 = v72;
  }
  else
  {
    v42 = 2147353472LL;
  }
  v44 = (__int64)(v27 + 704);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)v72 + 41) = v45;
    v33 += 2064;
    v44 = v45 + 2064;
    LODWORD(v79) = (unsigned int)v79 | 0x4000000;
  }
  v46 = (v33 + 15) & 0xFFFFFFF0;
  *((_WORD *)v72 + 4) = v46 >> 4;
  v72[10] = 1;
  v72[15] = 1;
  *((_DWORD *)v72 + 38) = -285217025;
  *((_DWORD *)v72 + 28) = (unsigned int)v79 & 0xEFFFFFFF;
  *((_DWORD *)v72 + 36) = 0;
  memset_thunk_772440563353939046(v72 + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding(v72);
  *((_DWORD *)v72 + 162) = 1;
  v48 = v72;
  if ( (*((_DWORD *)v72 + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v50 + 144) = HeapInterceptorIndex;
    *((_DWORD *)v72 + 28) &= ~0x40u;
    v48 = v72;
  }
  v51 = (char)v79;
  *((_DWORD *)v48 + 29) = (unsigned int)v79 & 0x6001007D;
  *((_WORD *)v72 + 105) = v44 - (_WORD)v72;
  *((_QWORD *)v72 + 27) = 0LL;
  v52 = v72 + 336;
  *((_QWORD *)v72 + 43) = v72 + 336;
  *v52 = v52;
  v53 = v72 + 272;
  *((_QWORD *)v72 + 35) = v72 + 272;
  *v53 = v53;
  v54 = v72 + 288;
  *((_QWORD *)v72 + 37) = v72 + 288;
  *v54 = v54;
  v55 = v72 + 240;
  *((_QWORD *)v72 + 31) = v72 + 240;
  *v55 = v55;
  if ( v75 || (v51 & 1) != 0 )
    goto LABEL_81;
  v75 = (__int64 *)v44;
  if ( (int)RtlInitializeCriticalSectionEx(v44, 0, 0x10000000) < 0 )
    goto LABEL_172;
  v44 += 40LL;
LABEL_81:
  *((_QWORD *)v72 + 44) = v75;
  *((_DWORD *)v72 + 30) |= 0x80000000;
  if ( !RtlpInitializeHeapSegment(
          (unsigned __int64)v72,
          (__int64)v72,
          v46 + 1104,
          v47,
          v80,
          (__int64)v81,
          (unsigned __int64)v40,
          (unsigned __int64)&v81[v76 - v28]) )
  {
    v30 = 0LL;
    v31 = v75;
    v15 = (__int64)v73;
    v27 = (char *)v74;
    goto LABEL_44;
  }
  if ( v74 )
    memset_thunk_772440563353939046((void *)v44, 0, 0x80uLL);
  *(_DWORD *)(v44 + 8) = 128;
  *(_QWORD *)(v44 + 40) = v44 + 56;
  *(_QWORD *)(v44 + 32) = v72 + 336;
  *(_QWORD *)(v44 + 48) = v44 + 72;
  RtlpPopulateListIndex(v72, v44);
  *((_WORD *)v72 + 104) = 0;
  *((_QWORD *)v72 + 20) = *((_QWORD *)&v92 + 1);
  *((_QWORD *)v72 + 21) = v93;
  *((_QWORD *)v72 + 22) = *((_QWORD *)&v93 + 1) >> 4;
  *((_QWORD *)v72 + 23) = (unsigned __int64)v94 >> 4;
  *((_QWORD *)v72 + 25) = *((_QWORD *)&v94 + 1);
  *((_DWORD *)v72 + 37) = (unsigned __int64)(v95 + 15) >> 4;
  *((_QWORD *)v72 + 45) = RtlpHeapKey ^ *((_QWORD *)&v96 + 1);
  *((_DWORD *)v72 + 172) = 4;
  *((_QWORD *)v72 + 87) = 2088960LL;
  if ( (RtlpDisableHeapLookaside & 1) != 0 )
    *((_DWORD *)v72 + 30) = 1;
  v56 = (unsigned int)v79;
  *((_QWORD *)v72 + 32) = 31LL;
  *((_QWORD *)v72 + 33) = -16LL;
  v57 = v72;
  if ( (v72[112] & 0x20) != 0 )
  {
    *((_QWORD *)v72 + 32) += 16LL;
    v57 = v72;
  }
  *((_QWORD *)v57 + 51) = 0LL;
  *((_WORD *)v72 + 208) = 0;
  v72[418] = 0;
  v72[419] = 0;
  *((_QWORD *)v72 + 40) = 0LL;
  if ( (v56 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    goto LABEL_91;
  *((_QWORD *)v72 + 53) = RtlAllocateHeap_0();
  v58 = *((_QWORD *)v72 + 53);
  if ( !v58 )
  {
LABEL_215:
    v30 = 0LL;
    v31 = v75;
    v15 = (__int64)v73;
    v27 = (char *)v74;
    goto LABEL_44;
  }
  *(_BYTE *)(v58 - 1) = 1;
  *((_WORD *)v72 + 216) = 128;
LABEL_91:
  v72[563] = 0;
  *((_QWORD *)v72 + 46) = 0LL;
  if ( (int)RtlpProcessHeapsInsert(v72, v83) >= 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v59 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v59 = 2147353472LL;
    if ( *(_BYTE *)v59 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v42 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapCreateEvent((__int64)v72, v56, v76, v77, *(unsigned __int8 *)v42);
    }
    v60 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v61 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v61 = 2147353482LL;
    if ( *(_BYTE *)v61 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v60 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapCreateEvent((__int64)v72, v56, v76, v77, *(unsigned __int8 *)v60);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v62 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v62 = 2147353480LL;
    if ( *(_BYTE *)v62 )
      RtlpHeapLogRangeCreate(v72, v76, v56);
    *((_DWORD *)v72 + 30) &= ~0x80000000;
    v30 = (volatile signed __int32 *)v72;
    v72 = 0LL;
    v27 = (char *)v74;
    goto LABEL_42;
  }
  v30 = 0LL;
  v31 = v75;
  v15 = (__int64)v73;
  v27 = (char *)v74;
LABEL_44:
  if ( v31 && v31 != (__int64 *)v15 )
    RtlDeleteCriticalSection(v31, v11);
  if ( v72 )
  {
    if ( !v27 )
    {
      v76 = 0LL;
      RtlpSecMemFreeVirtualMemory(v15, &v72, &v76, 0x8000LL);
    }
  }
  return (__int64)v30;
}
