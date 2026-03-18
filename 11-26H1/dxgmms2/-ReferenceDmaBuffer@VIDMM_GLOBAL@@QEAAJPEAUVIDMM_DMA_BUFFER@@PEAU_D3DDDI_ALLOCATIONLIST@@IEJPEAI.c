/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64
 * Callers:
 *     VidMmReferenceDmaBuffer @ 0x14003A4E0 (VidMmReferenceDmaBuffer.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038928 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     LogReferenceAllocations @ 0x14003A9E0 (LogReferenceAllocations.c)
 *     RemoveDMAReferences @ 0x14003AF5C (RemoveDMAReferences.c)
 *     AddDMAReferences @ 0x14003B3A8 (AddDMAReferences.c)
 *     ?Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x14003D35C (-Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     RtlCopyFromUser @ 0x14004CC90 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@.c)
 *     ?VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400ECB0C (-VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400ECB3C (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ED0A8 (-VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_DMA_BUFFER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct VIDMM_ALLOC **a10,
        struct VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  __int64 *v14; // r12
  __int64 v15; // rbx
  char IsUserAddress; // r8
  unsigned int v17; // edx
  __int64 v18; // rax
  struct VIDMM_ALLOC *v19; // r10
  unsigned int v20; // r13d
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  struct DXGALLOCATION *v23; // r15
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  _DWORD *v26; // rcx
  struct VIDMM_PRIMARIES_REFERENCES *v27; // rdx
  char v28; // dl
  unsigned __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 AllocGpuVirtualAddress; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned __int64 *v35; // rcx
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int *v45; // rbx
  union _LARGE_INTEGER *v46; // r8
  __int64 v47; // rdx
  __int64 v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v51; // [rsp+20h] [rbp-168h]
  bool v52[8]; // [rsp+28h] [rbp-160h]
  __int64 v53; // [rsp+30h] [rbp-158h]
  __int64 v54; // [rsp+38h] [rbp-150h]
  char v55; // [rsp+50h] [rbp-138h]
  char v56; // [rsp+51h] [rbp-137h]
  int v57; // [rsp+54h] [rbp-134h]
  unsigned __int64 *v58; // [rsp+58h] [rbp-130h]
  __int64 *v59; // [rsp+60h] [rbp-128h]
  unsigned int v60; // [rsp+68h] [rbp-120h]
  unsigned __int64 v61; // [rsp+70h] [rbp-118h] BYREF
  int v62; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v63; // [rsp+7Ch] [rbp-10Ch]
  struct VIDMM_PRIMARIES_REFERENCES *v64; // [rsp+80h] [rbp-108h]
  struct VIDMM_LOCAL_ALLOC *v65; // [rsp+88h] [rbp-100h]
  void *Src; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v67; // [rsp+98h] [rbp-F0h]
  __int64 v68; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-E0h]
  DXGFASTMUTEX *v70; // [rsp+B0h] [rbp-D8h]
  __int64 v71; // [rsp+B8h] [rbp-D0h]
  struct VIDMM_ALLOC **v72; // [rsp+C0h] [rbp-C8h]
  union _LARGE_INTEGER *v73; // [rsp+C8h] [rbp-C0h]
  __int64 *v74; // [rsp+D0h] [rbp-B8h]
  struct DXGALLOCATION **v75; // [rsp+D8h] [rbp-B0h]
  __int64 v76; // [rsp+E0h] [rbp-A8h]
  struct DXGPROCESS *Current; // [rsp+E8h] [rbp-A0h]
  unsigned int *v78; // [rsp+F0h] [rbp-98h]
  unsigned __int64 *v79; // [rsp+F8h] [rbp-90h]
  _QWORD *v80; // [rsp+100h] [rbp-88h]
  __int64 v81; // [rsp+108h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-78h] BYREF

  v63 = a4;
  Src = a3;
  v73 = a8;
  v64 = a11;
  v78 = a7;
  v58 = a9;
  v79 = a9;
  v72 = a10;
  v75 = a12;
  v60 = 0;
  v14 = (__int64 *)*((_QWORD *)a2 + 12);
  v59 = v14;
  v74 = v14;
  v15 = *((_QWORD *)a2 + 13);
  v71 = v15;
  Current = DXGPROCESS::GetCurrent();
  v76 = *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL);
  IsUserAddress = MmIsUserAddress(Src);
  v56 = IsUserAddress;
  if ( a9 )
    *a9 = *((_QWORD *)a2 + 11);
  *v72 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)this + 1786);
  v17 = v63;
  _InterlockedAdd((volatile signed __int32 *)this + 1787, v63);
  if ( v63 > *((_DWORD *)this + 1788) )
    _InterlockedExchange((volatile __int32 *)this + 1788, v63);
  *((_DWORD *)a2 + 7) |= 4u;
  v18 = *(_QWORD *)(**((_QWORD **)a2 + 16) + 48LL);
  _InterlockedOr(v50, 0);
  *((_QWORD *)a2 + 18) = v18;
  *(_DWORD *)a11 = 0;
  v69 = 0LL;
  v19 = 0LL;
  v67 = 0LL;
  v20 = 0;
  v60 = 0;
  v21 = Src;
  while ( v20 < v17 )
  {
    v61 = 0LL;
    if ( IsUserAddress )
    {
      RtlCopyFromUser(&v61, v21, 8uLL);
      v22 = v61;
      v19 = (struct VIDMM_ALLOC *)v67;
    }
    else
    {
      v22 = *v21;
      v61 = v22;
    }
    if ( (_DWORD)v22 )
    {
      v23 = v75[v20];
      if ( !v23 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v22, v20);
        WdLogGlobalForLineNumber = 8426;
        v34 = -1071775468;
        v57 = -1071775468;
        v35 = v58;
LABEL_98:
        if ( !v35 && v20 )
        {
          do
          {
            if ( *--v14 )
              RemoveDMAReferences(*v14, a6);
            --v20;
          }
          while ( v20 );
        }
        return v34;
      }
      v24 = *((_QWORD *)v23 + 3);
      v25 = **(_QWORD **)v24;
      v65 = *(struct VIDMM_LOCAL_ALLOC **)v25;
      v70 = *(DXGFASTMUTEX **)(*((_QWORD *)this + 5040) + 8LL * ((*((_DWORD *)v65 + 13) >> 2) & 0x3F));
      v26 = *(_DWORD **)(v25 + 368);
      if ( (*v26 & 0x4000) != 0 )
      {
        if ( v19 || (v26 = (_DWORD *)HIDWORD(v22), (v22 & 0x100000000LL) == 0) )
        {
          WdLogSingleEntry3(1LL, v24, v19, BYTE4(v22) & 1);
          WdLogGlobalForLineNumber = 8469;
          v54 = 0LL;
          v53 = BYTE4(v61) & 1;
          *(_QWORD *)v52 = v67;
          v51 = v24;
          DxgkLogInternalTriageEvent(v33, 0x40000LL);
          v34 = -1071775482;
          v57 = -1071775482;
          v14 = v59;
          v35 = v58;
          goto LABEL_98;
        }
        v67 = v24;
      }
      if ( *(_BYTE *)(v25 + 41) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v26);
          WdLogGlobalForLineNumber = 8484;
          v42 = WdLogNewEntry5_WdTrace(v41);
          *(_QWORD *)(v42 + 24) = a2;
          *(_QWORD *)(v42 + 32) = v24;
          WdLogGlobalForLineNumber = 8485;
        }
        v34 = -1071775482;
        v57 = -1071775482;
        v14 = v59;
        v35 = v58;
        goto LABEL_98;
      }
      if ( *(_QWORD *)(v24 + 8) != v76 && (*((_DWORD *)Current + 102) & 0x100) == 0 )
      {
        WdLogSingleEntry4(2LL, v76, v24, v20, *(_QWORD *)(v24 + 8));
        WdLogGlobalForLineNumber = 8496;
        v34 = -1071775467;
        v57 = -1071775467;
        v14 = v59;
        v35 = v58;
        goto LABEL_98;
      }
      if ( *(_WORD *)(*(_QWORD *)(v24 + 96) + 8LL) && a5 )
      {
        if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        {
          WdLogSingleEntry2(1LL, a2, v24);
          WdLogGlobalForLineNumber = 8511;
          v54 = 0LL;
          v53 = 0LL;
          *(_QWORD *)v52 = v24;
          v51 = (unsigned __int64)a2;
          DxgkLogInternalTriageEvent(v43, 0x40000LL);
          v34 = -1071775466;
          v57 = -1071775466;
          v14 = v59;
          v35 = v58;
          goto LABEL_98;
        }
        WdLogSingleEntry2(2LL, a2, v24);
        WdLogGlobalForLineNumber = 8517;
      }
      *v59 = v24;
      *(_QWORD *)v15 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 32LL);
      if ( (v61 & 0x100000000LL) != 0 && *(_BYTE *)(v24 + 24) && *(int *)(*((_QWORD *)this + 3) + 2776LL) >= 4608 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8536;
        WdLogSingleEntry2(3LL, a2, v24);
        WdLogGlobalForLineNumber = 8537;
        v34 = -1073741790;
        v57 = -1073741790;
        v14 = v59;
        v35 = v58;
        goto LABEL_98;
      }
      *(_DWORD *)(v15 + 8) = BYTE4(v61) & 1 | *(_DWORD *)(v15 + 8) & 0xFFFFFFFE;
      if ( (v61 & 0x100000000LL) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)this + 1790);
      v27 = v64;
      if ( (*(_DWORD *)(v15 + 8) & 1) != 0 && (**(_DWORD **)(v25 + 368) & 0x200000) != 0 )
        *((_DWORD *)v64 + 35) |= 1u;
      if ( (*(_DWORD *)(v15 + 8) & 1) != 0
        && (**(_DWORD **)(v25 + 368) >> 23) & 0xFFFFFF00 | ((unsigned __int16)**(_DWORD **)(v25 + 368) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v25 + 368) | (**(_DWORD **)(v25 + 368) >> 11)) >> 11)) & 0x100 )
      {
        if ( *(_DWORD *)v27 >= 0x10u )
        {
          _InterlockedIncrement((volatile signed __int32 *)this + 1796);
        }
        else
        {
          InterlockedCounterWithHistoryRelease::Increment(
            (InterlockedCounterWithHistoryRelease *)(v24 + 104),
            (unsigned int *)v27 + 34);
          v27 = v64;
          *((_QWORD *)v64 + *(unsigned int *)v64 + 1) = v24;
        }
        ++*(_DWORD *)v27;
      }
      v28 = 0;
      v55 = 0;
      v68 = 0LL;
      v62 = 0;
      v29 = v58;
      if ( !v58 && (*((_DWORD *)this + 1746) & 0x40) == 0 )
      {
        v28 = (*(__int64 (__fastcall **)(DXGFASTMUTEX *, struct VIDMM_LOCAL_ALLOC *, int *, __int64 *, _QWORD))(*(_QWORD *)v70 + 48LL))(
                v70,
                v65,
                &v62,
                &v68,
                0LL);
        v55 = v28;
        v29 = v58;
      }
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1793);
        *(_QWORD *)(v15 + 16) = v68;
        *(_DWORD *)(v15 + 8) = *(_DWORD *)(v15 + 8) & 0xFFFFFFC1 | (2 * (v62 & 0x1F));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1794);
        *(_DWORD *)(v15 + 8) &= 0xFFFFFFC1;
        if ( v29 )
        {
          v30 = *((_QWORD *)a2 + 16);
          if ( (*(_DWORD *)(v30 + 36) & 0x20) != 0 )
            AllocGpuVirtualAddress = *(_QWORD *)(v24 + 680);
          else
            AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress(
                                       (const struct VIDMM_ALLOC *)v24,
                                       *(_DWORD *)(v30 + 32));
          *(_QWORD *)(v15 + 16) = AllocGpuVirtualAddress;
        }
        else
        {
          *(_QWORD *)(v15 + 16) = 0LL;
        }
        *((_DWORD *)a2 + 7) &= ~4u;
        if ( (VIDMM_GLOBAL::_Config & 1) == 0
          && (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0
          && (*(_BYTE *)(v25 + 42) || (*(_DWORD *)(v25 + 24) & 0x10) != 0) )
        {
          v70 = (DXGFASTMUTEX *)(v25 + 136);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v25 + 136));
          v69 = v25;
          if ( !VidMmGetFullPfnArray((const struct VIDMM_GLOBAL_ALLOC *)v25)
            && (*((_DWORD *)v65 + 14) & 1) == 0
            && (**(_DWORD **)(v25 + 368) & 0x40000000) == 0
            && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *((_QWORD *)v65 + 2)) >= 0 )
          {
            v36 = 0;
            memset(&ApcState, 0, sizeof(ApcState));
            v37 = *(_QWORD *)(v25 + 48);
            if ( v37 )
            {
              KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v37 + 8) + 16LL), &ApcState);
              v36 = 1;
            }
            if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                        this,
                        v65,
                        (struct VIDMM_GLOBAL_ALLOC *)v25,
                        0LL,
                        *((_QWORD *)v65 + 2),
                        0) < 0 )
            {
              WdLogSingleEntry1(2LL, v25);
              WdLogGlobalForLineNumber = 8710;
              VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *((_QWORD *)v65 + 2));
            }
            else
            {
              VidMmiAddProbeAndLockReference((struct VIDMM_GLOBAL_ALLOC *)v25);
              *(_DWORD *)(v25 + 32) |= 2u;
            }
            if ( v36 )
              KeUnstackDetachProcess(&ApcState);
          }
          v69 = 0LL;
          DXGFASTMUTEX::Release((struct _KTHREAD **)v70);
        }
      }
      if ( !v58 )
        AddDMAReferences(v24, a6);
      if ( !*(_DWORD *)(v24 + 688)
        && (*(_BYTE *)(v24 + 25) & 1) == 0
        && ((*((_BYTE *)this + 41064) & 0x20) == 0 || (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x10) == 0) )
      {
        WdLogSingleEntry1(1LL, v24);
        WdLogGlobalForLineNumber = 8746;
        v54 = 0LL;
        v53 = 0LL;
        *(_QWORD *)v52 = 0LL;
        v51 = v24;
        DxgkLogInternalTriageEvent(v38, 0x40000LL);
        v34 = -1073741823;
        v57 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 32LL), 16);
        if ( !v58 )
          RemoveDMAReferences(v24, a6);
        v14 = v59;
        v35 = v58;
        goto LABEL_98;
      }
      v32 = (HIDWORD(v61) >> 2) & 7;
      if ( v32 )
      {
        v39 = v32;
        WdLogSingleEntry2(1LL, v24, v32);
        WdLogGlobalForLineNumber = 8768;
        v54 = 0LL;
        v53 = 0LL;
        *(_QWORD *)v52 = v39;
        v51 = v24;
        DxgkLogInternalTriageEvent(v40, 0x40000LL);
      }
      v15 = v71;
      v14 = v59;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 1789);
      *v14 = 0LL;
      *(_OWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 16) = 0LL;
    }
    v59 = ++v14;
    v74 = v14;
    v21 = (char *)Src + 8;
    Src = v21;
    v80 = v21;
    v15 += 24LL;
    v71 = v15;
    v81 = v15;
    v60 = ++v20;
    v19 = (struct VIDMM_ALLOC *)v67;
    v17 = v63;
    IsUserAddress = v56;
  }
  *v72 = v19;
  v44 = *((_QWORD *)a2 + 7);
  v45 = v78;
  *v78 = 0;
  v46 = v73;
  if ( v44 )
  {
    v73->QuadPart = 0LL;
    v47 = *((_QWORD *)a2 + 6);
    if ( (**(_DWORD **)(v47 + 368) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)this + 1746) & 0x40) == 0 )
      {
        v49 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 16) + 32LL));
        (*(void (__fastcall **)(__int64, _QWORD, unsigned int *, union _LARGE_INTEGER *, _QWORD))(*(_QWORD *)v49 + 48LL))(
          v49,
          *(_QWORD *)v47,
          v45,
          v46,
          0LL);
      }
      if ( *v45 )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1793);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1794);
        *((_DWORD *)a2 + 7) &= ~4u;
      }
    }
    AddDMAReferences(*((_QWORD *)a2 + 7), a6);
  }
  else
  {
    *v73 = *(union _LARGE_INTEGER *)((char *)a2 + 80);
  }
  _InterlockedAdd((volatile signed __int32 *)a2 + 8, a6);
  if ( a6 > 1 )
    *((_DWORD *)a2 + 7) |= 2u;
  if ( !v58 )
    *((_DWORD *)a2 + 34) = v20;
  *((_DWORD *)a2 + 4) = a6;
  if ( VidMmIsDmaBufferPrepatched(a2) )
    _InterlockedIncrement((volatile signed __int32 *)this + 1795);
  LogReferenceAllocations(
    *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL),
    (char)a2,
    v20,
    *((_QWORD *)a2 + 12),
    *((_QWORD *)a2 + 13));
  return 0LL;
}
