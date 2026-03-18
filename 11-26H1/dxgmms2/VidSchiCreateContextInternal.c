/*
 * XREFs of VidSchiCreateContextInternal @ 0x14002D178
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400FC140 (VidSchCreateSystemDevices.c)
 *     VidSchCreateContext @ 0x1401188C0 (VidSchCreateContext.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U-$_tlgWrapperByVal@$00@@U-$.c)
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043428 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x14004CABC (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x14011A270 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 *v10; // rcx
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  struct DXGPROCESS *Current; // rax
  bool v16; // zf
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  bool v33; // cf
  ADAPTER_RENDER *v34; // rcx
  UINT v35; // r9d
  void *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r10d
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // xmm1
  HANDLE hContext; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // r11
  __int64 v49; // rdx
  unsigned int v50; // r10d
  int v51; // r15d
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r11
  unsigned int v55; // r12d
  unsigned int i; // r15d
  __int64 v57; // rax
  __int64 v58; // rsi
  _BYTE v59[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v60; // [rsp+82h] [rbp-7Eh] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v65; // [rsp+A0h] [rbp-60h] BYREF
  void *v66; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_CREATECONTEXT v68; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE LockHandle[32]; // [rsp+110h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)a2 & 4) != 0 || a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 1008LL, 878799190LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5149;
      return 0LL;
    }
    *(_DWORD *)Pool2 = 878799190;
    *(_QWORD *)(Pool2 + 56) = a3;
    *(_QWORD *)(Pool2 + 104) = a1;
    v9 = *a2;
    v10 = *(__int64 **)(v3 + 696);
    v11 = a2[1];
    *(_QWORD *)(Pool2 + 80) = KeGetCurrentThread();
    v12 = *((_DWORD *)a2 + 8);
    *(_OWORD *)(v8 + 112) = v9;
    *(_OWORD *)(v8 + 128) = v11;
    *(_DWORD *)(v8 + 144) = v12;
    v13 = *((unsigned int *)a2 + 1);
    *(_DWORD *)(v8 + 88) = v13;
    if ( (unsigned int)v13 < *(_DWORD *)(v3 + 768) )
      v10 += v13;
    v14 = *v10;
    *(_QWORD *)(v8 + 96) = *v10;
    Current = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 152) = 1LL;
    *(_BYTE *)(v8 + 917) = BYTE1(*((_DWORD *)Current + 102)) & 1;
    *(_OWORD *)(v8 + 328) = 0LL;
    *(_OWORD *)(v8 + 344) = 0LL;
    *(_OWORD *)(v8 + 360) = 0LL;
    *(_QWORD *)(v8 + 376) = 0LL;
    KeInitializeEvent((PRKEVENT)(v8 + 328), SynchronizationEvent, 0);
    v16 = (*(_DWORD *)a2 & 0x100) == 0;
    *(_QWORD *)(v8 + 392) = v8 + 384;
    *(_QWORD *)(v8 + 384) = v8 + 384;
    *(_QWORD *)(v8 + 680) = v8 + 672;
    *(_QWORD *)(v8 + 672) = v8 + 672;
    *(_QWORD *)(v8 + 696) = v8 + 688;
    *(_QWORD *)(v8 + 688) = v8 + 688;
    *(_QWORD *)(v8 + 712) = v8 + 704;
    *(_QWORD *)(v8 + 704) = v8 + 704;
    *(_QWORD *)(v8 + 728) = v8 + 720;
    *(_QWORD *)(v8 + 720) = v8 + 720;
    if ( !v16 )
    {
      *(_QWORD *)(v8 + 752) = v8 + 744;
      *(_QWORD *)(v8 + 744) = v8 + 744;
    }
    *(_QWORD *)(v8 + 776) = v8 + 768;
    *(_QWORD *)(v8 + 768) = v8 + 768;
    *(_BYTE *)(v8 + 916) = 1;
    VidSchiIncrementContextReference(v8);
    *(_BYTE *)(v8 + 916) = 0;
    memset(LockHandle, 0, 24);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 2016), (PKLOCK_QUEUE_HANDLE)LockHandle);
    if ( *(_BYTE *)(a1 + 1656) || *(_BYTE *)(a1 + 1657) )
    {
      v17 = v14 + 2744;
      *(_DWORD *)(v8 + 192) |= 0x100u;
    }
    else
    {
      v17 = v14 + 2712;
    }
    v18 = *(_QWORD **)(v17 + 8);
    v19 = (_QWORD *)(v8 + 8);
    if ( *v18 != v17
      || (*v19 = v17,
          *(_QWORD *)(v8 + 16) = v18,
          *v18 = v19,
          *(_QWORD *)(v17 + 8) = v19,
          v20 = *(_QWORD **)(a1 + 88),
          v21 = (_QWORD *)(v8 + 24),
          *v20 != a1 + 80) )
    {
      __fastfail(3u);
    }
    *v21 = a1 + 80;
    *(_QWORD *)(v8 + 32) = v20;
    *v20 = v21;
    *(_QWORD *)(a1 + 88) = v21;
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)LockHandle);
    v22 = *(_QWORD *)(v3 + 2912);
    v23 = *(_QWORD *)(v3 + 2960);
    *(_QWORD *)(v8 + 480) = v22;
    *(_QWORD *)(v8 + 448) = v22;
    *(_QWORD *)(v8 + 488) = v23;
    KeInitializeTimer((PKTIMER)(v8 + 520));
    KeInitializeDpc((PRKDPC)(v8 + 584), VidSchiDelayReadyRoutine, (PVOID)v8);
    v24 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x604) != 0 )
    {
      if ( (v24 & 1) != 0 )
      {
        memset(&v68, 0, sizeof(v68));
        v30 = *(unsigned int *)(v8 + 88);
        v31 = *(_QWORD *)(v3 + 696);
        v32 = v31 + 8 * v30;
        v33 = (unsigned int)v30 < *(_DWORD *)(v3 + 768);
        if ( (unsigned int)v30 >= *(_DWORD *)(v3 + 768) )
          v32 = *(_QWORD *)(v3 + 696);
        v68.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v32 + 8LL);
        if ( v33 )
          v31 += 8 * v30;
        v34 = *(ADAPTER_RENDER **)(v3 + 8);
        v68.EngineAffinity = 1 << *(_BYTE *)(*(_QWORD *)v31 + 6LL);
        v35 = v68.Flags.Value & 0xFFFFFFE6 | ((v24 & 4 | ((v24 & 0x200 | (v24 >> 1) & 0x400) >> 4)) >> 2);
        v36 = *(void **)(a1 + 24);
        v68.Flags.Value = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(4
                                                                        * *(_BYTE *)(352LL
                                                                                   * *(unsigned __int16 *)(v14 + 6)
                                                                                   + *(_QWORD *)(*((_QWORD *)v34 + 2)
                                                                                               + 3032LL)
                                                                                   + 48))) & 4;
        if ( (int)ADAPTER_RENDER::DdiCreateContext(v34, v36, &v68) < 0 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + 412LL);
          if ( (unsigned int)dword_14008A048 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14008A048, 0x400000000000LL) )
          {
            v40 = *(_QWORD *)(v8 + 56);
            v60 = 0;
            v41 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 40LL) + 64LL) + 144LL);
            v65 = LockHandle;
            v42 = *(_QWORD *)(v8 + 104);
            *(_OWORD *)LockHandle = v41;
            v43 = *(_QWORD *)(v42 + 48);
            v66 = *(void **)(v43 + 2648);
            v59[0] = *(_BYTE *)(v40 + 144);
            v67 = v61;
            v62 = *(_DWORD *)(v38 + 424);
            v63 = *(_DWORD *)(v38 + 420);
            LODWORD(v61) = v39;
            v64 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
              v43,
              (__int64)&unk_14007E27F,
              v37,
              v38,
              (__int64)&v64,
              (__int64)&v61,
              (__int64)&v63,
              (__int64)&v62,
              (__int64)&v67,
              (__int64)v59,
              &v66,
              (__int64 *)&v65,
              (__int64)&v60);
          }
          goto LABEL_27;
        }
        v16 = bTracingEnabled == 0;
        v44 = *(_OWORD *)&v68.Flags.0;
        hContext = v68.hContext;
        *(_OWORD *)(v8 + 920) = *(_OWORD *)&v68.hContext;
        *(_QWORD *)(v8 + 64) = hContext;
        v46 = *(_OWORD *)&v68.PrivateDriverDataSize;
        *(_OWORD *)(v8 + 936) = v44;
        v47 = *(_OWORD *)&v68.ContextInfo.AllocationListSize;
        *(_OWORD *)(v8 + 952) = v46;
        *(_QWORD *)&v46 = *(_QWORD *)&v68.ContextInfo.PagingCompanionNodeId;
        *(_OWORD *)(v8 + 968) = v47;
        *(_QWORD *)(v8 + 984) = v46;
        if ( !v16 )
        {
          v48 = *(_QWORD *)(a1 + 8);
          if ( !v48 )
            LODWORD(v48) = a1;
          if ( (byte_14008A201 & 8) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              v68.ContextInfo.AllocationListSize,
              (unsigned int)&EventCreateContext,
              v68.ContextInfo.DmaBufferPrivateDataSize,
              v48,
              v68.NodeOrdinal,
              v68.EngineAffinity,
              v68.ContextInfo.DmaBufferSize,
              v68.ContextInfo.DmaBufferSegmentSet,
              v68.ContextInfo.DmaBufferPrivateDataSize,
              v68.ContextInfo.AllocationListSize,
              v68.ContextInfo.PatchLocationListSize,
              (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 56LL) & 0x10) != 0)) | 1,
              v8);
        }
      }
      else if ( bTracingEnabled )
      {
        v49 = *(unsigned int *)(v8 + 88);
        if ( (unsigned int)v49 < *(_DWORD *)(v3 + 88) )
        {
          v50 = *(_DWORD *)(v3 + 768);
          v51 = *(_DWORD *)a2 & 0x40;
          memset(LockHandle, 0, sizeof(LockHandle));
          v64 = a3 & -(__int64)(v51 != 0);
          v52 = *(_QWORD *)(v3 + 696);
          v53 = v52 + 8 * v49;
          if ( (unsigned int)v49 < v50 )
            v52 += 8 * v49;
          else
            v53 = *(_QWORD *)(v3 + 696);
          v54 = *(_QWORD *)(a1 + 8);
          if ( !v54 )
            LODWORD(v54) = a1;
          if ( (byte_14008A201 & 8) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              *(_DWORD *)&LockHandle[4],
              (unsigned int)&EventCreateContext,
              *(_DWORD *)LockHandle,
              v54,
              *(_WORD *)(*(_QWORD *)v52 + 8LL),
              1 << *(_BYTE *)(*(_QWORD *)v53 + 6LL),
              LockHandle[0],
              LockHandle[4],
              LockHandle[8],
              LockHandle[12],
              LockHandle[16],
              (v51 != 0 ? 5 : 1) | (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 56LL) & 0x10) != 0)),
              v8);
        }
      }
    }
    else
    {
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
    }
    if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8, *((_DWORD *)a2 + 6), 0) < 0 )
      goto LABEL_27;
    v25 = 1136;
    v26 = 0;
    if ( (unsigned int)(*(_DWORD *)(v3 + 160) * (72 * *(_DWORD *)(v3 + 84) + 224) + 8 * (*(_DWORD *)(v3 + 84) + 113)) > 0x470 )
      v25 = *(_DWORD *)(v3 + 160) * (72 * *(_DWORD *)(v3 + 84) + 224) + 8 * (*(_DWORD *)(v3 + 84) + 113);
    while ( v26 < 5 )
    {
      v27 = ExAllocatePool2(64LL, v25, 895576406LL);
      v28 = v27;
      if ( !v27 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5448;
        goto LABEL_27;
      }
      VidSchiInterlockedInsertTailList(v3 + 2024, v8 + 768, v27 + 8, v8 + 784);
      VidSchiFreeQueuePacket(v8, v28);
      ++v26;
    }
    if ( (*(_DWORD *)a2 & 0x100) == 0 )
      return v8;
    v55 = *((_DWORD *)a2 + 7);
    if ( v55 )
    {
      for ( i = 0; i < v55; ++i )
      {
        v57 = ExAllocatePool2(64LL, v25, 895576406LL);
        v58 = v57;
        if ( !v57 )
          goto LABEL_27;
        *(_DWORD *)(v57 + 64) |= 0x40u;
        VidSchiInterlockedInsertTailList(v3 + 2024, v8 + 768, v57 + 8, v8 + 784);
        VidSchiFreeQueuePacket(v8, v58);
      }
      return v8;
    }
LABEL_27:
    VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
    return 0LL;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 5135;
  return 0LL;
}
