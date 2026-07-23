/*
 * XREFs of RtlpCreateHeap @ 0x18006B0B0
 * Callers:
 *     RtlCreateHeap @ 0x18006B070 (RtlCreateHeap.c)
 *     LdrpInitializeTlsHeap @ 0x180073CDC (LdrpInitializeTlsHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 *     CsrpConnectToServer @ 0x1800C8474 (CsrpConnectToServer.c)
 *     LdrpInitializeProcessHeap @ 0x1800EAD58 (LdrpInitializeProcessHeap.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x18006C39C (RtlpCreateHeapEncoding.c)
 *     RtlpProcessHeapsInsert @ 0x18006C460 (RtlpProcessHeapsInsert.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x18006CFF4 (RtlpHeapLogRangeCreate.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180095894 (RtlpLogHeapCreateEvent.c)
 *     RtlpReportHeapFailure @ 0x1800CFA0C (RtlpReportHeapFailure.c)
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 *     RtlpHpConvertCreationFlags @ 0x1800FC160 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800FC2B0 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpHpParametersVerify @ 0x1801005E0 (RtlpHpParametersVerify.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 *     RtlpDebugPageHeapCreate @ 0x180106BC0 (RtlpDebugPageHeapCreate.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011F7C0 (RtlpGetHeapInterceptorIndex.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateHeap(
        int a1,
        void *a2,
        ULONG_PTR a3,
        void *a4,
        _RTL_CRITICAL_SECTION *a5,
        __int64 a6,
        int a7)
{
  int v7; // r14d
  __int64 v9; // r12
  unsigned int NtGlobalFlag; // r15d
  char v11; // bl
  PVOID v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  _BYTE *v15; // r14
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // r12d
  struct _PEB *v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // rcx
  char *v26; // rdi
  __int64 v27; // rbx
  int v28; // r13d
  volatile signed __int32 *v29; // rbx
  _RTL_CRITICAL_SECTION *v30; // rax
  int v32; // r15d
  unsigned __int64 v33; // rax
  signed __int64 v34; // rcx
  unsigned __int64 v35; // rtt
  ULONG Protect; // eax
  __int64 v37; // rcx
  char *v38; // r14
  char *v39; // rcx
  ULONG v40; // eax
  __int64 v41; // r12
  __int64 v42; // rcx
  char *v43; // rdi
  unsigned __int64 v44; // rdi
  unsigned int v45; // r15d
  __int64 v46; // r9
  _DWORD *v47; // r10
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v49; // r10
  char v50; // dl
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  unsigned int v55; // edi
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rcx
  char v62; // cl
  int v63; // edx
  int v64; // eax
  int v65; // eax
  volatile signed __int32 *v66; // rax
  ULONG_PTR v67; // rax
  PVOID HeapHandle; // [rsp+40h] [rbp-218h] BYREF
  _RTL_CRITICAL_SECTION *v69; // [rsp+48h] [rbp-210h]
  PVOID v70; // [rsp+50h] [rbp-208h]
  _RTL_CRITICAL_SECTION *v71; // [rsp+58h] [rbp-200h]
  int v72[2]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONG_PTR v73; // [rsp+68h] [rbp-1F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-1E8h] BYREF
  int v75[2]; // [rsp+78h] [rbp-1E0h]
  int v76; // [rsp+80h] [rbp-1D8h]
  PVOID v77; // [rsp+88h] [rbp-1D0h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-1C8h] BYREF
  int v79; // [rsp+98h] [rbp-1C0h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-1A8h]
  __int64 v82; // [rsp+B8h] [rbp-1A0h]
  __int128 MemoryInformation; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v84; // [rsp+D0h] [rbp-188h]
  __int128 v85; // [rsp+E0h] [rbp-178h]
  __int128 v86; // [rsp+F0h] [rbp-168h] BYREF
  __int128 v87; // [rsp+100h] [rbp-158h]
  __int128 v88; // [rsp+110h] [rbp-148h]
  __int128 v89; // [rsp+120h] [rbp-138h] BYREF
  __int128 v90; // [rsp+130h] [rbp-128h]
  __int128 v91; // [rsp+140h] [rbp-118h]
  __int128 v92; // [rsp+150h] [rbp-108h]
  __int128 v93; // [rsp+160h] [rbp-F8h]
  __int128 v94; // [rsp+170h] [rbp-E8h]
  _BYTE v95[80]; // [rsp+180h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v97; // [rsp+1F8h] [rbp-60h]

  v7 = (int)a4;
  BaseAddress = a4;
  RegionSize = a3;
  v70 = a2;
  v69 = a5;
  *(_QWORD *)v75 = a2;
  v81 = (__int64)a5;
  v9 = a6;
  v79 = a7;
  v77 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  MemoryInformation = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v76 = 0;
  DWORD1(v89) = 0;
  v73 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v95, 0, 0x50uLL);
  HeapHandle = 0LL;
  v11 = 0;
  v71 = 0LL;
  v12 = v70;
  v13 = (__int64)a5;
  if ( dword_1801C4588 && !v70 && !v69 )
  {
    v29 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(a1, 0, RegionSize, v7, 0LL, a6);
    if ( v29 )
    {
      v26 = (char *)v70;
      goto LABEL_42;
    }
    v13 = (__int64)v69;
    if ( a6 != -1 )
    {
      v29 = 0LL;
      v26 = (char *)v70;
      goto LABEL_43;
    }
    v9 = 0LL;
    v11 = 1;
    v12 = v70;
  }
  v14 = a1 & 0xF1FFFFFF;
  v15 = 0LL;
  if ( (v14 & 0x100) != 0 )
  {
    if ( (v14 & 2) == 0 || v12 || v13 )
      goto LABEL_166;
    if ( v9 == -1 && dword_1801C4598 )
    {
      v9 = 0LL;
      v11 = 1;
    }
    if ( v9 )
    {
      v15 = (_BYTE *)v9;
      if ( !(unsigned int)RtlpHpParametersVerify(v9) )
        goto LABEL_166;
    }
    else
    {
      v15 = v95;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v14 & 2) != 0
         && !v12
         && (!v9 || !*(_QWORD *)(v9 + 8) && !*(_QWORD *)(v9 + 16) && !*(_QWORD *)(v9 + 48) && !*(_QWORD *)(v9 + 72)) )
  {
    v15 = v95;
    if ( v13 )
      v15 = 0LL;
  }
  if ( v15 )
  {
    if ( v15 == v95 )
    {
      *(_QWORD *)(v15 + 4) = 0LL;
      *(_QWORD *)(v15 + 20) = 0LL;
      *(_QWORD *)(v15 + 28) = 0LL;
      *(_QWORD *)(v15 + 36) = 0LL;
      *(_QWORD *)(v15 + 44) = 0LL;
      *(_QWORD *)(v15 + 52) = 0LL;
      *(_QWORD *)(v15 + 60) = 0LL;
      *(_QWORD *)(v15 + 68) = 0LL;
      *((_DWORD *)v15 + 19) = 0;
      *(_DWORD *)v15 = 5242883;
      *((_DWORD *)v15 + 3) = 1;
      *((_DWORD *)v15 + 4) = -1;
      if ( v11 )
        *((_DWORD *)v15 + 1) = 2;
    }
    if ( (v15[4] & 1) == 0 )
    {
      v62 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v63, *((_DWORD *)v15 + 3));
      v64 = *((_DWORD *)v15 + 4);
      if ( v64 != -1 )
        v62 = v64 + 1;
      LOBYTE(v81) = RtlpHpEnvHandle;
      BYTE1(v81) = v63;
      BYTE2(v81) = v62;
      *(_DWORD *)((char *)&v81 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      HIBYTE(v81) = BYTE7(RtlpHpEnvHandle);
      v82 = *((_QWORD *)v15 + 3);
      v65 = RtlpHpConvertCreationFlags(v14, NtGlobalFlag, v15);
      v66 = (volatile signed __int32 *)RtlpHpHeapCreate(v65);
      v29 = v66;
      if ( v66 )
      {
        if ( (int)RtlpProcessHeapsInsert((PVOID)v66) < 0 )
        {
          RtlpHpHeapDestroy(v29);
          v29 = 0LL;
        }
        if ( *((_DWORD *)v29 + 4) == -571548178 )
        {
          RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
          if ( (dword_1801C68A8 & 1) != 0 && (dword_1801C68A8 & 2) != 0 )
            _InterlockedOr(v29 + 5, 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync(v29);
      }
      v26 = (char *)v70;
      goto LABEL_42;
    }
    if ( dword_1801C4598 )
    {
      v29 = (volatile signed __int32 *)((__int64 (__fastcall *)(_QWORD, PVOID, ULONG_PTR, PVOID, _QWORD, _QWORD))qword_1801C45B8)(
                                         v14,
                                         v70,
                                         RegionSize,
                                         BaseAddress,
                                         0LL,
                                         0LL);
      v26 = (char *)v70;
      goto LABEL_42;
    }
    goto LABEL_166;
  }
  if ( (v14 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v14 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801CA908 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v14 & 0xFFF80C00) != 0 )
    v14 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v89, 0, 0x60uLL);
  if ( v9 && *(_DWORD *)v9 == 96 )
  {
    v89 = *(_OWORD *)v9;
    v90 = *(_OWORD *)(v9 + 16);
    v91 = *(_OWORD *)(v9 + 32);
    v92 = *(_OWORD *)(v9 + 48);
    v93 = *(_OWORD *)(v9 + 64);
    v94 = *(_OWORD *)(v9 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v14 |= 0x20u;
  v16 = v14 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v16 = v14;
  v17 = v16 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v17 = v16;
  v18 = v17 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v18 = v17;
  v19 = v18 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v19 = v18;
  v20 = v19 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v20 = v19;
  v21 = NtCurrentPeb();
  if ( !*((_QWORD *)&v89 + 1) )
    *((_QWORD *)&v89 + 1) = v21->HeapSegmentReserve;
  if ( !(_QWORD)v90 )
    *(_QWORD *)&v90 = v21->HeapSegmentCommit;
  if ( !*((_QWORD *)&v90 + 1) )
    *((_QWORD *)&v90 + 1) = v21->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v91 )
    *(_QWORD *)&v91 = v21->HeapDeCommitTotalFreeThreshold;
  v22 = qword_1801C66E0;
  if ( !qword_1801C66E0 )
  {
    qword_1801C66E8 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v22 = v97;
      qword_1801C66E0 = v97;
      goto LABEL_28;
    }
LABEL_166:
    v26 = (char *)v70;
LABEL_41:
    v29 = 0LL;
LABEL_42:
    v13 = (__int64)v69;
LABEL_43:
    v30 = 0LL;
    goto LABEL_44;
  }
LABEL_28:
  if ( !*((_QWORD *)&v91 + 1) )
    *((_QWORD *)&v91 + 1) = v22 - qword_1801C66E8 - 4096;
  if ( (unsigned __int64)(v92 - 1) > 0xFEFFF )
    *(_QWORD *)&v92 = 1044480LL;
  if ( BaseAddress )
    v23 = ((unsigned __int64)BaseAddress + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = 0x2000LL;
  v73 = v23;
  if ( RegionSize )
    v24 = (RegionSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v24 = (v23 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  *(_QWORD *)v72 = v24;
  v25 = v23;
  if ( v23 > v24 )
  {
    v23 = v24;
    v73 = v24;
    v25 = v24;
  }
  v26 = (char *)v70;
  if ( (v20 & 2) == 0 || v70 )
  {
    v27 = 0LL;
    v28 = 0;
  }
  else
  {
    v27 = 4096LL;
    v28 = 2;
    v76 = 2;
    if ( v24 - 4096 < v25 )
    {
      v24 = (v24 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)v72 = v24;
    }
  }
  if ( !v23 || !v24 )
    goto LABEL_41;
  if ( (v20 & 0x61000000) != 0 && (v20 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v20, (_DWORD)v70, v24, v23, (__int64)v69, (__int64)&v89, v79);
  v32 = 704;
  v13 = (__int64)v69;
  if ( (v20 & 1) != 0 )
  {
    v75[0] = v20;
    v30 = 0LL;
    if ( v69 )
    {
      v29 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v69 )
      v20 |= 0x80000000;
    v75[0] = v20;
    if ( !v69 )
      v32 = 744;
    v30 = v69;
    if ( !v69 )
      v30 = 0LL;
    v71 = v30;
  }
  if ( v70 )
  {
    if ( *((_QWORD *)&v93 + 1) )
    {
      if ( *((_QWORD *)&v92 + 1) && (_QWORD)v93 && *((_QWORD *)&v92 + 1) <= (unsigned __int64)v93 && (v20 & 2) == 0 )
      {
        v77 = v70;
        v38 = (char *)v70 + *((_QWORD *)&v92 + 1);
        *(_QWORD *)v72 = v93;
        memset_thunk_772440563353939046(v70, 0, 0x1000uLL);
        v39 = (char *)v70;
LABEL_143:
        v76 = v28 | 1;
        HeapHandle = v70;
        goto LABEL_65;
      }
    }
    else if ( ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v70,
                MemoryBasicInformation,
                &MemoryInformation,
                0x30uLL,
                0LL) >= 0 )
    {
      v38 = (char *)MemoryInformation;
      if ( (PVOID)MemoryInformation == v70 && (_DWORD)v85 != 0x10000 )
      {
        v39 = (char *)MemoryInformation;
        v77 = (PVOID)MemoryInformation;
        if ( (_DWORD)v85 == 4096 )
        {
          if ( (v20 & 0x40000) != 0 && (BYTE4(v85) & 0x40) == 0 )
          {
            v29 = 0LL;
            v30 = v71;
            v13 = (__int64)v69;
            goto LABEL_44;
          }
          memset_thunk_772440563353939046((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v70, MemoryRegionInformation, &v86, 0x30uLL, 0LL) < 0 )
          {
            v29 = 0LL;
            v30 = v71;
            v13 = (__int64)v69;
            goto LABEL_44;
          }
          *(_QWORD *)v72 = v87;
          v73 = *((_QWORD *)&v84 + 1);
          v39 = (char *)v77;
          v38 = (char *)v77 + *((_QWORD *)&v84 + 1);
        }
        else
        {
          *(_QWORD *)v72 = *((_QWORD *)&v84 + 1);
          v67 = v73;
          if ( v73 > *((_QWORD *)&v84 + 1) )
          {
            v67 = *((_QWORD *)&v84 + 1);
            v73 = *((_QWORD *)&v84 + 1);
          }
          if ( v67 < 0x2000 )
          {
            v29 = 0LL;
            v30 = v71;
            v13 = (__int64)v69;
            goto LABEL_44;
          }
        }
        goto LABEL_143;
      }
    }
    v29 = 0LL;
    v30 = v71;
    v13 = (__int64)v69;
    goto LABEL_44;
  }
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v80 = 0LL;
  if ( *((_QWORD *)&v93 + 1) )
  {
    v29 = 0LL;
    goto LABEL_44;
  }
  v33 = qword_1801C5F00;
  do
  {
    v34 = v33 ^ (v33 >> 12) ^ ((v33 ^ (v33 >> 12)) << 25) ^ ((v33 ^ (v33 >> 12) ^ ((v33 ^ (v33 >> 12)) << 25)) >> 27);
    v35 = v33;
    v33 = _InterlockedCompareExchange64(&qword_1801C5F00, v34, v33);
  }
  while ( v35 != v33 );
  v80 = (unsigned __int64)((-3 * (_BYTE)v34) & 0x1F) << 16;
  RegionSize = *(_QWORD *)v72 + v80;
  if ( *(_QWORD *)v72 + v80 < *(_QWORD *)v72 )
  {
    RegionSize = *(_QWORD *)v72;
    v80 = 0LL;
  }
  Protect = 64;
  if ( (v20 & 0x40000) == 0 )
    Protect = 4;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    v29 = 0LL;
    v30 = v71;
    v13 = (__int64)v69;
    goto LABEL_44;
  }
  v38 = (char *)BaseAddress;
  v26 = (char *)BaseAddress;
  HeapHandle = BaseAddress;
  *(_QWORD *)v72 = RegionSize;
  if ( v80 )
  {
    RtlpSecMemFreeVirtualMemory(v37, &BaseAddress, &v80, 0x8000LL);
    v38 = (char *)BaseAddress + v80;
    v26 = (char *)BaseAddress + v80;
    HeapHandle = (char *)BaseAddress + v80;
    *(_QWORD *)v72 = RegionSize - v80;
  }
  v39 = v26;
  v77 = v26;
LABEL_65:
  if ( v39 == v38 )
  {
    v40 = 64;
    if ( (v20 & 0x40000) == 0 )
      v40 = 4;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v77, 0LL, &v73, 0x1000u, v40) < 0 )
      goto LABEL_209;
    v41 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v42 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v42 = 2147353472LL;
    if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(HeapHandle, v77, v73, 1LL);
    v38 += v73;
    v26 = (char *)HeapHandle;
  }
  else
  {
    v41 = 2147353472LL;
  }
  v43 = v26 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v44 = (unsigned __int64)(v43 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v44;
    v32 += 2064;
    v43 = (char *)(v44 + 2064);
    v75[0] |= 0x4000000u;
  }
  v45 = (v32 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = v45 >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v75[0] & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset_thunk_772440563353939046((char *)HeapHandle + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding(HeapHandle);
  *((_DWORD *)HeapHandle + 162) = 1;
  v47 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v49 + 144) = HeapInterceptorIndex;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v47 = HeapHandle;
  }
  v50 = v75[0];
  v47[29] = v75[0] & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = (_WORD)v43 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v51 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v51 = v51;
  v52 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v52 = v52;
  v53 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v53 = v53;
  v54 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v54 = v54;
  if ( v71 || (v50 & 1) != 0 )
    goto LABEL_81;
  v71 = (_RTL_CRITICAL_SECTION *)v43;
  if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v43, 0, 0x10000000u) < 0 )
    goto LABEL_166;
  v43 += 40;
LABEL_81:
  *((_QWORD *)HeapHandle + 44) = v71;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( !RtlpInitializeHeapSegment(
          (char *)HeapHandle,
          (__int64)HeapHandle,
          v45 + 1104,
          v46,
          v76,
          (__int64)v77,
          v38,
          (unsigned __int64)v77 + *(_QWORD *)v72 - v27) )
  {
    v29 = 0LL;
    v30 = v71;
    v13 = (__int64)v69;
    v26 = (char *)v70;
    goto LABEL_44;
  }
  if ( v70 )
    memset_thunk_772440563353939046(v43, 0, 0x80uLL);
  *((_DWORD *)v43 + 2) = 128;
  *((_QWORD *)v43 + 5) = v43 + 56;
  *((_QWORD *)v43 + 4) = (char *)HeapHandle + 336;
  *((_QWORD *)v43 + 6) = v43 + 72;
  RtlpPopulateListIndex(HeapHandle, v43);
  *((_WORD *)HeapHandle + 104) = 0;
  *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v89 + 1);
  *((_QWORD *)HeapHandle + 21) = v90;
  *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v90 + 1) >> 4;
  *((_QWORD *)HeapHandle + 23) = (unsigned __int64)v91 >> 4;
  *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v91 + 1);
  *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(v92 + 15) >> 4;
  *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v93 + 1);
  *((_DWORD *)HeapHandle + 172) = 4;
  *((_QWORD *)HeapHandle + 87) = 2088960LL;
  if ( (RtlpDisableHeapLookaside & 1) != 0 )
    *((_DWORD *)HeapHandle + 30) = 1;
  v55 = v75[0];
  *((_QWORD *)HeapHandle + 32) = 31LL;
  *((_QWORD *)HeapHandle + 33) = -16LL;
  v56 = HeapHandle;
  if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
  {
    *((_QWORD *)HeapHandle + 32) += 16LL;
    v56 = HeapHandle;
  }
  v56[51] = 0LL;
  *((_WORD *)HeapHandle + 208) = 0;
  *((_BYTE *)HeapHandle + 418) = 0;
  *((_BYTE *)HeapHandle + 419) = 0;
  *((_QWORD *)HeapHandle + 40) = 0LL;
  if ( (v55 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    goto LABEL_91;
  *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap_0(HeapHandle, 0x80000Au, 0x100uLL);
  v57 = *((_QWORD *)HeapHandle + 53);
  if ( !v57 )
  {
LABEL_209:
    v29 = 0LL;
    v30 = v71;
    v13 = (__int64)v69;
    v26 = (char *)v70;
    goto LABEL_44;
  }
  *(_BYTE *)(v57 - 1) = 1;
  *((_WORD *)HeapHandle + 216) = 128;
LABEL_91:
  *((_BYTE *)HeapHandle + 563) = 0;
  *((_QWORD *)HeapHandle + 46) = 0LL;
  if ( (int)RtlpProcessHeapsInsert(HeapHandle) >= 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v58 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v58 = 2147353472LL;
    if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v41 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapCreateEvent((int)HeapHandle, v55, v72[0], v73, (HANDLE)*(unsigned __int8 *)v41);
    }
    v59 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v60 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v60 = 2147353482LL;
    if ( *(_BYTE *)v60 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v59 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapCreateEvent((int)HeapHandle, v55, v72[0], v73, (HANDLE)*(unsigned __int8 *)v59);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v61 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v61 = 2147353480LL;
    if ( *(_BYTE *)v61 )
      RtlpHeapLogRangeCreate(HeapHandle, *(_QWORD *)v72, v55);
    *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
    v29 = (volatile signed __int32 *)HeapHandle;
    HeapHandle = 0LL;
    v26 = (char *)v70;
    goto LABEL_42;
  }
  v29 = 0LL;
  v30 = v71;
  v13 = (__int64)v69;
  v26 = (char *)v70;
LABEL_44:
  if ( v30 && v30 != (_RTL_CRITICAL_SECTION *)v13 )
    RtlDeleteCriticalSection(v30);
  if ( HeapHandle )
  {
    if ( !v26 )
    {
      *(_QWORD *)v72 = 0LL;
      RtlpSecMemFreeVirtualMemory(v13, &HeapHandle, v72, 0x8000LL);
    }
  }
  return (__int64)v29;
}
