/*
 * XREFs of RtlpCreateHeap @ 0x1404DCF18
 * Callers:
 *     RtlCreateHeap @ 0x140B40810 (RtlCreateHeap.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     RtlpHpFixedHeapCreate @ 0x1404DD190 (RtlpHpFixedHeapCreate.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     RtlpCreateHeapEncoding @ 0x14061E3EC (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x14061FCFC (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x140628784 (RtlpHeapExceptionFilter.c)
 *     RtlpPopulateListIndex @ 0x140629228 (RtlpPopulateListIndex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGetNtGlobalFlags @ 0x140B55F60 (RtlGetNtGlobalFlags.c)
 */

PVOID __fastcall RtlpCreateHeap(int a1, char *a2, void *a3, __int64 a4, __int64 a5, __int128 *a6)
{
  struct _ERESOURCE *v9; // r14
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r12
  PVOID v18; // rdi
  struct _ERESOURCE *v19; // rdx
  unsigned int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _BYTE *SListFaultAddress; // rax
  __int64 v30; // rcx
  ULONG_PTR v31; // rdx
  ULONG_PTR v32; // rcx
  unsigned __int64 v33; // r8
  int v34; // esi
  char *v35; // r15
  char *v36; // rcx
  ULONG_PTR v37; // rax
  char *v38; // rsi
  unsigned __int64 Blink; // rax
  signed __int64 v40; // rcx
  unsigned __int64 v41; // rtt
  struct _ERESOURCE *v42; // rdi
  bool v43; // cf
  ULONG v44; // eax
  unsigned __int64 v45; // rdi
  int v46; // r9d
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  KSPIN_LOCK *v51; // rsi
  unsigned __int16 *v52; // rax
  ULONG RecordedStackTraceIndex; // eax
  ULONG_PTR v54; // rcx
  _DWORD *v55; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-1F0h]
  ULONG NtGlobalFlags; // [rsp+50h] [rbp-1E8h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-1E0h] BYREF
  int v60; // [rsp+60h] [rbp-1D8h]
  ULONG_PTR v61; // [rsp+68h] [rbp-1D0h] BYREF
  PVOID v62; // [rsp+70h] [rbp-1C8h] BYREF
  PVOID v63; // [rsp+78h] [rbp-1C0h] BYREF
  ULONG_PTR v64; // [rsp+80h] [rbp-1B8h] BYREF
  ULONG_PTR v65; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v66; // [rsp+90h] [rbp-1A8h]
  unsigned __int64 v67; // [rsp+98h] [rbp-1A0h]
  __int64 v68; // [rsp+A0h] [rbp-198h]
  unsigned int v69; // [rsp+A8h] [rbp-190h]
  __int64 *v70; // [rsp+B0h] [rbp-188h]
  __int64 v71; // [rsp+B8h] [rbp-180h]
  __int64 v72; // [rsp+C0h] [rbp-178h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-170h]
  unsigned __int64 v74; // [rsp+D0h] [rbp-168h]
  __int64 v75[2]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 MemoryInformation; // [rsp+F0h] [rbp-148h] BYREF
  __int128 v77; // [rsp+100h] [rbp-138h]
  __int128 v78; // [rsp+110h] [rbp-128h]
  __int128 v79; // [rsp+120h] [rbp-118h] BYREF
  __int128 v80; // [rsp+130h] [rbp-108h]
  __int128 v81; // [rsp+140h] [rbp-F8h]
  __int128 v82; // [rsp+150h] [rbp-E8h]
  __int128 v83; // [rsp+160h] [rbp-D8h]
  __int128 v84; // [rsp+170h] [rbp-C8h]
  __int128 v85; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v86; // [rsp+190h] [rbp-A8h]
  __int128 v87; // [rsp+1A0h] [rbp-98h]
  _BYTE SystemInformation[40]; // [rsp+1B0h] [rbp-88h] BYREF
  _BYTE *v89; // [rsp+1D8h] [rbp-60h]
  void *retaddr; // [rsp+238h] [rbp+0h]

  v63 = a3;
  v57 = a5;
  v67 = (unsigned __int64)a2;
  v66 = a5;
  v62 = 0LL;
  NtGlobalFlags = RtlGetNtGlobalFlags();
  MemoryInformation = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v60 = 0;
  v61 = 0LL;
  memset_0(SystemInformation, 0, 0x40uLL);
  BaseAddress = 0LL;
  v9 = 0LL;
  if ( (a1 & 0x100) == 0 )
  {
    if ( (a1 & 0x200) != 0 )
      goto LABEL_26;
    if ( (a1 & 0x10000000) == 0 )
    {
      v21 = a1 & 0xFFF80C00;
      if ( (int)RtlpBootStatHandleLock.CurrentRunTime < 2 )
      {
        if ( v21 )
          a1 &= 0x7F3FFu;
      }
      else if ( v21 )
      {
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        RtlpHeapHandleError();
      }
    }
    memset_0(&v79, 0, 0x60uLL);
    if ( a6 && *(_DWORD *)a6 == 96 )
    {
      v79 = *a6;
      v80 = a6[1];
      v81 = a6[2];
      v82 = a6[3];
      v83 = a6[4];
      v84 = a6[5];
    }
    v22 = a1 | 0x20;
    if ( (NtGlobalFlags & 0x10) == 0 )
      v22 = a1;
    v23 = v22 | 0x40;
    if ( (NtGlobalFlags & 0x20) == 0 )
      v23 = v22;
    v24 = v23 | 0x80;
    if ( (NtGlobalFlags & 0x200000) == 0 )
      v24 = v23;
    v25 = *((_QWORD *)&v79 + 1);
    if ( !*((_QWORD *)&v79 + 1) )
      v25 = qword_140FBF248;
    v71 = v25;
    v26 = v80;
    if ( !(_QWORD)v80 )
      v26 = qword_140FBF240;
    v72 = v26;
    v27 = *((_QWORD *)&v80 + 1);
    if ( !*((_QWORD *)&v80 + 1) )
      v27 = qword_140FBF230;
    v73 = v27;
    v28 = v81;
    if ( !(_QWORD)v81 )
      v28 = qword_140FBF238;
    v74 = v28;
    SListFaultAddress = RtlpBootStatHandleLock.SListFaultAddress;
    if ( !RtlpBootStatHandleLock.SListFaultAddress )
    {
      RtlpBootStatHandleLock.InitialStack = (void *)0x10000;
      if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_26;
      SListFaultAddress = v89;
      RtlpBootStatHandleLock.SListFaultAddress = v89;
    }
    v67 = *((_QWORD *)&v81 + 1);
    if ( !*((_QWORD *)&v81 + 1) )
      v67 = SListFaultAddress - (char *)RtlpBootStatHandleLock.InitialStack - 4096;
    v30 = v82;
    if ( (unsigned __int64)(v82 - 1) > 0xFEFFF )
      v30 = 1044480LL;
    v75[0] = v30;
    if ( a4 )
      v31 = (a4 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v31 = 0x2000LL;
    v61 = v31;
    if ( v63 )
      v32 = ((unsigned __int64)v63 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v32 = (v31 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    RegionSize = v32;
    v33 = v31;
    if ( v31 > v32 )
    {
      v31 = v32;
      v61 = v32;
      v33 = v32;
    }
    if ( (v24 & 2) == 0 || a2 )
    {
      v66 = 0LL;
      v34 = v60;
    }
    else
    {
      v66 = 4096LL;
      v34 = 2;
      v60 = 2;
      if ( v32 - 4096 < v33 )
      {
        v32 = (v32 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        RegionSize = v32;
      }
    }
    if ( !v31 || !v32 )
      goto LABEL_26;
    NtGlobalFlags = 704;
    v19 = (struct _ERESOURCE *)v57;
    if ( (v24 & 1) != 0 )
    {
      if ( v57 )
        goto LABEL_89;
    }
    else
    {
      if ( v57 )
        v24 |= 0x80000000;
      NtGlobalFlags = v57 != 0 ? 704 : 808;
      v9 = (struct _ERESOURCE *)(v57 & -(__int64)(v57 != 0));
    }
    v68 = *((_QWORD *)&v83 + 1);
    if ( a2 )
    {
      if ( !*((_QWORD *)&v83 + 1) )
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               a2,
               MemoryBasicInformation,
               &MemoryInformation,
               0x30uLL,
               0LL) < 0 )
          goto LABEL_26;
        v35 = (char *)MemoryInformation;
        if ( (char *)MemoryInformation != a2 || (_DWORD)v78 == 0x10000 )
          goto LABEL_26;
        v36 = (char *)MemoryInformation;
        v62 = (PVOID)MemoryInformation;
        if ( (_DWORD)v78 == 4096 )
        {
          if ( (v24 & 0x40000) != 0 && (BYTE4(v78) & 0x40) == 0 )
            goto LABEL_26;
          memset_0((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, MemoryRegionInformation, &v85, 0x30uLL, 0LL) < 0 )
            goto LABEL_26;
          RegionSize = v86;
          v61 = *((_QWORD *)&v77 + 1);
          v36 = (char *)v62;
          v35 = (char *)v62 + *((_QWORD *)&v77 + 1);
        }
        else
        {
          RegionSize = *((_QWORD *)&v77 + 1);
          v37 = v61;
          if ( v61 > *((_QWORD *)&v77 + 1) )
          {
            v37 = *((_QWORD *)&v77 + 1);
            v61 = *((_QWORD *)&v77 + 1);
          }
          if ( v37 < 0x2000 )
            goto LABEL_26;
        }
        goto LABEL_101;
      }
      if ( *((_QWORD *)&v82 + 1) && (_QWORD)v83 && *((_QWORD *)&v82 + 1) <= (unsigned __int64)v83 && (v24 & 2) == 0 )
      {
        v62 = a2;
        v35 = &a2[*((_QWORD *)&v82 + 1)];
        RegionSize = v83;
        memset_0(a2, 0, 0x1000uLL);
        v36 = a2;
LABEL_101:
        v60 = v34 | 1;
        v38 = a2;
        BaseAddress = a2;
LABEL_111:
        if ( v36 != v35 )
          goto LABEL_114;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v62, 0LL, &v61, 0x1000u, 4u) >= 0 )
        {
          v35 += v61;
          v38 = (char *)BaseAddress;
LABEL_114:
          v42 = (struct _ERESOURCE *)(v38 + 704);
          v43 = (RtlGetNtGlobalFlags() & 0x800) != 0;
          v44 = NtGlobalFlags;
          if ( v43 )
          {
            v45 = (unsigned __int64)(v38 + 711) & 0xFFFFFFFFFFFFFFF8uLL;
            *((_QWORD *)v38 + 41) = v45;
            v44 += 2064;
            v42 = (struct _ERESOURCE *)(v45 + 2064);
            v24 |= 0x4000000u;
            v38 = (char *)BaseAddress;
          }
          v69 = (v44 + 15) & 0xFFFFFFF0;
          *((_WORD *)v38 + 4) = v69 >> 4;
          *((_BYTE *)BaseAddress + 10) = 1;
          *((_BYTE *)BaseAddress + 15) = 1;
          *((_DWORD *)BaseAddress + 38) = -285217025;
          *((_DWORD *)BaseAddress + 28) = v24 & 0xEFFFFFFF;
          *((_DWORD *)BaseAddress + 36) = 0;
          memset_0((char *)BaseAddress + 568, 0, 0x78uLL);
          RtlpCreateHeapEncoding(BaseAddress);
          *((_DWORD *)BaseAddress + 29) = v24 & 0x6001007D;
          *((_WORD *)BaseAddress + 105) = (_WORD)v42 - (_WORD)BaseAddress;
          *((_QWORD *)BaseAddress + 27) = 0LL;
          v47 = (char *)BaseAddress + 336;
          *((_QWORD *)BaseAddress + 43) = (char *)BaseAddress + 336;
          *v47 = v47;
          v48 = (char *)BaseAddress + 272;
          *((_QWORD *)BaseAddress + 35) = (char *)BaseAddress + 272;
          *v48 = v48;
          v49 = (char *)BaseAddress + 288;
          *((_QWORD *)BaseAddress + 37) = (char *)BaseAddress + 288;
          *v49 = v49;
          v50 = (char *)BaseAddress + 240;
          *((_QWORD *)BaseAddress + 31) = (char *)BaseAddress + 240;
          *v50 = v50;
          if ( !v9 && (v24 & 1) == 0 )
          {
            v9 = v42;
            if ( (unsigned __int64)v42 < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)v42) == 256 )
              ExpTraceLogBadResourceAddress(v42, retaddr);
            memset_0(v42, 0, sizeof(struct _ERESOURCE));
            v42->SystemResourcesList.Blink = &v42->SystemResourcesList;
            v42->SystemResourcesList.Flink = &v42->SystemResourcesList;
            v42->SharedWaiters = 0LL;
            v42->ExclusiveWaiters = 0LL;
            v42->SpinLock = 0LL;
            if ( (NtGlobalFlag & 0x2000) != 0 )
            {
              v51 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
              if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
                && (v52 = (unsigned __int16 *)RtlStdLogStackTrace(
                                                *(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags,
                                                1),
                    (v70 = (__int64 *)v52) != 0LL) )
              {
                RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v51, v52);
                NtGlobalFlags = RecordedStackTraceIndex;
                if ( !RecordedStackTraceIndex )
                {
                  RtlStdReleaseStackTrace((__int64)v51, v70);
                  LOWORD(RecordedStackTraceIndex) = 0;
                }
              }
              else
              {
                LOWORD(RecordedStackTraceIndex) = 0;
              }
              v54 = (unsigned __int16)RecordedStackTraceIndex;
            }
            else
            {
              v54 = 0LL;
            }
            v42->CreatorBackTraceIndex = v54;
            HIDWORD(v42->Reserved2) = -1;
            ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)v42);
            __incgsdword(0x9098u);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
              PerfLogExecutiveResourceInitialize(65544LL, v42, 0LL, 0LL);
            ++v42;
          }
          *((_QWORD *)BaseAddress + 44) = v9;
          *((_DWORD *)BaseAddress + 30) |= 0x80000000;
          if ( (unsigned __int8)RtlpInitializeHeapSegment(
                                  (int)BaseAddress,
                                  (int)BaseAddress,
                                  v69 + 1104,
                                  v46,
                                  v60,
                                  (__int64)v62,
                                  v35,
                                  (__int64)v62 + RegionSize - v66) )
          {
            if ( a2 )
              memset_0(v42, 0, 0x80uLL);
            LODWORD(v42->SystemResourcesList.Blink) = 128;
            v42->ExclusiveWaiters = &v42->OwnerEntry.0;
            v42->SharedWaiters = (char *)BaseAddress + 336;
            v42->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)&v42->NumberOfSharedWaiters;
            RtlpPopulateListIndex(BaseAddress, v42);
            *((_WORD *)BaseAddress + 104) = 0;
            *((_QWORD *)BaseAddress + 20) = v71;
            *((_QWORD *)BaseAddress + 21) = v72;
            *((_QWORD *)BaseAddress + 22) = v73 >> 4;
            *((_QWORD *)BaseAddress + 23) = v74 >> 4;
            *((_QWORD *)BaseAddress + 25) = v67;
            *((_DWORD *)BaseAddress + 37) = (unsigned __int64)(v75[0] + 15) >> 4;
            *((_QWORD *)BaseAddress + 45) = RtlpBootStatHandleLock.QuantumTarget ^ v68;
            *((_DWORD *)BaseAddress + 172) = 4;
            *((_QWORD *)BaseAddress + 87) = 2088960LL;
            *((_QWORD *)BaseAddress + 32) = 31LL;
            *((_QWORD *)BaseAddress + 33) = -16LL;
            v55 = BaseAddress;
            if ( (*((_DWORD *)BaseAddress + 28) & 0x20) != 0 )
            {
              *((_QWORD *)BaseAddress + 32) += 16LL;
              v55 = BaseAddress;
            }
            v55[30] &= ~0x80000000;
            v18 = BaseAddress;
            BaseAddress = 0LL;
            v9 = 0LL;
            goto LABEL_22;
          }
        }
LABEL_26:
        v18 = 0LL;
        goto LABEL_22;
      }
    }
    else
    {
      v63 = 0LL;
      v65 = 0LL;
      v64 = 0LL;
      if ( !*((_QWORD *)&v83 + 1) )
      {
        Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
        do
        {
          v40 = Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25) ^ ((Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25)) >> 27);
          v41 = Blink;
          Blink = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
                    v40,
                    Blink);
        }
        while ( v41 != Blink );
        v64 = (unsigned __int64)((-3 * (_BYTE)v40) & 0x1F) << 16;
        v65 = RegionSize + v64;
        if ( RegionSize + v64 < RegionSize )
        {
          v65 = RegionSize;
          v64 = 0LL;
        }
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v63, 0LL, &v65, 0x2000u, 4u) < 0 )
          goto LABEL_26;
        v35 = (char *)v63;
        v38 = (char *)v63;
        BaseAddress = v63;
        RegionSize = v65;
        if ( v64 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v63, &v64, 0x8000u);
          v35 = (char *)v63 + v64;
          v38 = (char *)v63 + v64;
          BaseAddress = (char *)v63 + v64;
          RegionSize = v65 - v64;
        }
        v36 = v38;
        v62 = v38;
        goto LABEL_111;
      }
    }
LABEL_89:
    v18 = 0LL;
    goto LABEL_23;
  }
  if ( !a2 || v57 || (a1 & 2) != 0 )
    goto LABEL_26;
  v10 = ((a1 & 0xFFFFFFFC) << 29) | 2;
  if ( (a1 & 8) == 0 )
    v10 = (a1 & 0xFFFFFFFC) << 29;
  v11 = v10 | 0x20000000;
  if ( (a1 & 0x8000000) == 0 && (NtGlobalFlags & 0x1000) == 0 )
    v11 = v10;
  v12 = v11 | 0x2000;
  if ( (a1 & 0x20) == 0 && (NtGlobalFlags & 0x10) == 0 )
    v12 = v11;
  v13 = v12 | 0x40000000;
  if ( (a1 & 0x40000) == 0 )
    v13 = v12;
  v14 = v13 | 0x10000000;
  if ( (a1 & 0x10) == 0 )
    v14 = v13;
  v15 = v14 | 0x8000000;
  if ( (a1 & 0x200) == 0 )
    v15 = v14;
  if ( *((_QWORD *)a6 + 9) )
  {
    v16 = *((_QWORD *)a6 + 7);
    if ( !v16 )
      goto LABEL_26;
    v17 = *((_QWORD *)a6 + 8);
    if ( !v17 || v16 > v17 )
      goto LABEL_26;
  }
  *(_OWORD *)v75 = *(_OWORD *)&NormalizationListLock.InitialStack;
  v18 = (PVOID)RtlpHpFixedHeapCreate(a2, v15, (__int64)v75);
LABEL_22:
  v19 = (struct _ERESOURCE *)v57;
LABEL_23:
  if ( v9 && v9 != v19 )
    ExDeleteResourceLite(v9);
  if ( BaseAddress && !a2 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return v18;
}
