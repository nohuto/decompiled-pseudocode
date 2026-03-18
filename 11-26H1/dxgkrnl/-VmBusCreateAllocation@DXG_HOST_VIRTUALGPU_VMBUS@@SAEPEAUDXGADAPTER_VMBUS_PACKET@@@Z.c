/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140440500
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x140046468 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059A14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14005C4E4 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140060570 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x14036ACC4 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r13
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  const wchar_t *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _DWORD *v21; // r12
  UINT v22; // ecx
  unsigned int v23; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v24; // ecx
  char *pAllocationInfo; // r8
  void *v26; // rax
  UINT v27; // r9d
  unsigned int v28; // ebx
  __int64 v29; // rdx
  UINT v30; // ecx
  int v31; // eax
  char Flags; // al
  __int64 v33; // rax
  struct DXGPROCESS *v34; // rdi
  volatile signed __int32 *v35; // r13
  unsigned int v36; // ebx
  unsigned int v37; // eax
  int v38; // r8d
  __int64 v39; // rcx
  struct _EX_RUNDOWN_REF *v40; // rdx
  struct _EX_RUNDOWN_REF *v41; // r8
  __int64 v42; // rdi
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // edx
  D3DDDI_ALLOCATIONINFO *v54; // rdx
  char *v55; // rbx
  char v56; // cl
  struct DXGDEVICE *Count; // rbx
  __int64 v58; // r9
  __int64 v59; // rdi
  struct VIDMM_DEVICE *v60; // rdx
  int Resident; // eax
  __int64 v62; // rbx
  unsigned int v63; // ebx
  unsigned int v64; // ebx
  __int64 v65; // rbx
  unsigned int v67; // [rsp+58h] [rbp-B0h]
  unsigned int v68; // [rsp+58h] [rbp-B0h]
  unsigned int v69; // [rsp+60h] [rbp-A8h]
  UINT v70; // [rsp+60h] [rbp-A8h]
  char *v71; // [rsp+60h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-98h]
  unsigned int v74; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v75[2]; // [rsp+78h] [rbp-90h]
  void *v76; // [rsp+80h] [rbp-88h]
  struct VIDMM_PAGING_QUEUE *v77; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v78; // [rsp+90h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v79; // [rsp+98h] [rbp-70h] BYREF
  struct DXGPROCESS *v80; // [rsp+A0h] [rbp-68h]
  void *v81; // [rsp+A8h] [rbp-60h]
  struct _D3DKMT_CREATEALLOCATION Src; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v83; // [rsp+108h] [rbp+0h]
  unsigned __int64 v84; // [rsp+110h] [rbp+8h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v85; // [rsp+118h] [rbp+10h]
  _BYTE v86[24]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v87[160]; // [rsp+138h] [rbp+30h] BYREF

  v1 = a1;
  v85 = a1;
  v2 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( v4 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    v6 = *(unsigned int *)(v4 + 40);
    v80 = Current;
    v83 = *(_QWORD *)(*((_QWORD *)v1 + 10) + 16LL);
    v73 = *((_DWORD *)v1 + 38);
    if ( !(_DWORD)v6 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1297LL;
      goto LABEL_84;
    }
    if ( (*(_DWORD *)(v4 + 44) & 0x1000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1303LL;
      v8 = L"OpenCrossAdapter is not supported";
      goto LABEL_85;
    }
    v9 = 12 * v6;
    if ( 12 * v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1310LL;
    }
    else
    {
      v10 = *((unsigned int *)v1 + 36);
      if ( v10 - 64 < (unsigned __int64)v9 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1316LL;
        goto LABEL_84;
      }
      v11 = v9 + 64;
      v12 = *(_DWORD *)(v4 + 32);
      v67 = v11;
      if ( (unsigned int)v10 - v11 < v12 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1322LL;
        goto LABEL_84;
      }
      v13 = v12 + v11;
      v14 = *(_DWORD *)(v4 + 36);
      v69 = v13;
      if ( (unsigned int)v10 - v13 < v14 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1328LL;
        goto LABEL_84;
      }
      v15 = v14 + v13;
      v16 = 0;
      v17 = v15;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v4 + 12LL * v16 + 68);
        if ( (unsigned int)v10 - v17 < v18 )
          break;
        v17 += v18;
        if ( ++v16 >= (unsigned int)v6 )
        {
          v19 = 96 * v6;
          if ( !is_mul_ok(v6, 0x60uLL) )
            v19 = -1LL;
          v81 = (void *)operator new[](v19, 0x4B677844u, 256LL);
          if ( !v81 )
          {
            WdLogSingleEntry0(2LL);
            v7 = 1350LL;
            v8 = L"Failed to allocate pAllocationInfo";
            goto LABEL_85;
          }
          v20 = 8LL * *(unsigned int *)(v4 + 40);
          v21 = 0LL;
          if ( !is_mul_ok(*(unsigned int *)(v4 + 40), 8uLL) )
            v20 = -1LL;
          v76 = (void *)operator new[](v20, 0x4B677844u, 256LL);
          if ( !v76 )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 1358;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate pAllocationSizes",
              1358LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_82;
          }
          LODWORD(v72) = 72 * (*(_DWORD *)(v4 + 40) - 1) + 88;
          v75[0] = v17 + (_DWORD)v72 - v15;
          v21 = (_DWORD *)operator new[](v75[0], 0x4B677844u, 64LL);
          if ( !v21 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1368;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to allocate pOutput",
              1368LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_82;
          }
          memset(&Src, 0, sizeof(Src));
          v22 = *(_DWORD *)(v4 + 32);
          Src.hDevice = *(_DWORD *)(v4 + 24);
          Src.hResource = *(_DWORD *)(v4 + 28);
          if ( v22 )
          {
            Src.PrivateRuntimeDataSize = v22;
            Src.pPrivateRuntimeData = (const void *)(v4 + v67);
          }
          v23 = *(_DWORD *)(v4 + 36);
          if ( v23 )
          {
            Src.PrivateDriverDataSize = *(_DWORD *)(v4 + 36);
            Src.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v4 + v69);
          }
          v24 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v4 + 44);
          pAllocationInfo = (char *)v81;
          v26 = *(void **)(v4 + 48);
          v27 = *(_DWORD *)(v4 + 40);
          Src.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v81;
          Src.hPrivateRuntimeResourceHandle = v26;
          Src.NumAllocations = v27;
          Src.Flags = v24;
          if ( (*(_DWORD *)&v24 & 0x10000) != 0 )
          {
            if ( v23 < 0x18 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1395;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Standard allocation does not have valid data",
                1395LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_82;
            }
            Src.PrivateDriverDataSize = 0;
          }
          v28 = 0;
          if ( v27 )
          {
            while ( 1 )
            {
              v29 = 96LL * v28;
              v30 = *(_DWORD *)(v4 + 12LL * v28 + 68);
              v70 = v30;
              if ( (*(_DWORD *)(v4 + 44) & 0x20) != 0 )
              {
                *(_QWORD *)&pAllocationInfo[v29 + 8] = 4096LL;
                pAllocationInfo = (char *)Src.pAllocationInfo;
              }
              *(_DWORD *)&pAllocationInfo[v29 + 32] = *(_DWORD *)(v4 + 12LL * v28 + 64);
              *(UINT *)((char *)&Src.pAllocationInfo->PrivateDriverDataSize + v29) = v30;
              if ( v30 )
                *(void **)((char *)&Src.pAllocationInfo->pPrivateDriverData + v29) = (void *)(v4 + v15);
              if ( v73 >= 0x1E && (*(_BYTE *)(v4 + 56) & 2) != 0 )
              {
                if ( (*(UINT *)((_BYTE *)&Src.pAllocationInfo->Flags.Value + v29) & 1) == 0 || *(_DWORD *)(v4 + 40) != 1 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 1421;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"bVidPnSourceIsActuallyHostVidPnTarget must be used only with swapchain buffer",
                    1421LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_82;
                }
                if ( (int)DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
                            *(unsigned int *)(v4 + 24),
                            *(_DWORD *)(v4 + 12LL * v28 + 72),
                            (unsigned int *)((char *)&Src.pAllocationInfo->VidPnSourceId + v29)) < 0 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 1430;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Fail to locate VidPnSourceId",
                    1430LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_82;
                }
              }
              else
              {
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&Src.pAllocationInfo->VidPnSourceId + v29) = *(_DWORD *)(v4 + 12LL * v28 + 72);
              }
              v15 += v70;
              if ( ++v28 >= *(_DWORD *)(v4 + 40) )
                break;
              pAllocationInfo = (char *)Src.pAllocationInfo;
            }
          }
          v74 = 0;
          v31 = DxgkCreateAllocationInternal(&Src, &v74, (struct DXGALLOCATION **)v76);
          if ( v31 < 0 )
          {
            v65 = v31;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1555;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create allocation: 0x%I64x",
              v65,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            Flags = (char)Src.Flags;
            *v21 = Src.Flags;
            if ( (Flags & 0x40) != 0 )
            {
              if ( Src.hGlobalShare )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1449;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL == Args.hGlobalShare",
                  1449LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v21[2] = Src.hGlobalShare;
            }
            v21[1] = Src.hResource;
            v71 = (char *)v21 + (unsigned int)v72;
            v33 = 0LL;
            v68 = 0;
            if ( *(_DWORD *)(v4 + 40) )
            {
              v34 = v80;
              v35 = (volatile signed __int32 *)((char *)v80 + 248);
              while ( 1 )
              {
                v36 = *(&Src.pAllocationInfo->hAllocation + 24 * v33);
                DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v35);
                v37 = (v36 >> 6) & 0xFFFFFF;
                if ( v37 < *((_DWORD *)v34 + 74) )
                {
                  v38 = *(_DWORD *)(*((_QWORD *)v34 + 35) + 16LL * v37 + 8);
                  if ( ((v36 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v34 + 35) + 16LL * v37 + 8) & 0x60)
                    && (v38 & 0x2000) == 0
                    && (v38 & 0x1F) != 0 )
                  {
                    v39 = *((_QWORD *)v34 + 35);
                    if ( (*(_BYTE *)(v39 + 16LL * v37 + 8) & 0x1F) == 5 )
                    {
                      v40 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v37);
                      goto LABEL_64;
                    }
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 318;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Handle type mismatch",
                      318LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
                v40 = 0LL;
LABEL_64:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72, v40);
                _InterlockedAdd(v35 + 4, 0xFFFFFFFF);
                ExReleasePushLockSharedEx(v35, 0LL);
                KeLeaveCriticalRegion();
                v41 = v72;
                v42 = 9LL * v68;
                v43 = v21[18 * v68 + 6] ^ (*(_DWORD *)(v72[6].Count + 4) ^ v21[18 * v68 + 6]) & 1;
                v21[2 * v42 + 6] = v43;
                v44 = v43 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v43) & 2;
                v21[2 * v42 + 6] = v44;
                v45 = v44 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v44) & 4;
                v21[2 * v42 + 6] = v45;
                v46 = v45 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v45) & 8;
                v21[2 * v42 + 6] = v46;
                v47 = v46 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v46) & 0x20;
                v21[2 * v42 + 6] = v47;
                v48 = v47 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v47) & 0x800;
                v21[2 * v42 + 6] = v48;
                v49 = v48 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v48) & 0x1000;
                v21[2 * v42 + 6] = v49;
                v50 = v49 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v49) & 0x2000;
                v21[2 * v42 + 6] = v50;
                v51 = v50 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v50) & 0x4000;
                v21[2 * v42 + 6] = v51;
                v52 = v51 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v51) & 0x40000;
                v21[2 * v42 + 6] = v52;
                v53 = v52 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v52) & 0x80000;
                v21[2 * v42 + 6] = v53;
                v21[2 * v42 + 6] = v53 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v53) & 0x100000;
                v54 = Src.pAllocationInfo;
                v21[2 * v42 + 4] = *(&Src.pAllocationInfo->hAllocation + 24 * v68);
                v21[2 * v42 + 5] = *(_DWORD *)(v4 + 12LL * v68 + 68);
                *(_QWORD *)&v21[2 * v42 + 8] = *((_QWORD *)v76 + v68);
                memmove(
                  v71,
                  *((const void **)&v54->pPrivateDriverData + 12 * v68),
                  *(unsigned int *)(v4 + 12LL * v68 + 68));
                v55 = (char *)&v21[18 * v68];
                v71 += *(unsigned int *)(v4 + 12LL * v68 + 68);
                *((_QWORD *)v55 + 5) = *(_QWORD *)(v72[6].Count + 16);
                ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(v83 + 3168),
                  (struct _DXGKARG_DESCRIBEALLOCATION *)(v55 + 40));
                *((_QWORD *)v55 + 5) = 0LL;
                v56 = *(_BYTE *)(v4 + 56) & 1;
                if ( v73 < 0x1E )
                  v56 = *(_BYTE *)(v4 + 56);
                if ( v56 )
                {
                  Count = (struct DXGDEVICE *)v72[1].Count;
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86,
                    Count);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)Count, 0, v58, 0);
                  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v87, 0LL) >= 0
                    && DXGDEVICE::UmdManagesResidency(Count) )
                  {
                    v59 = *((_QWORD *)Count + 2);
                    v60 = (struct VIDMM_DEVICE *)*((_QWORD *)Count + 99);
                    v77 = 0LL;
                    v79 = 0LL;
                    VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v59 + 760), v60, 0, &v77, &v79);
                    v78 = 0LL;
                    v84 = 0LL;
                    Resident = VIDMM_EXPORT::VidMmMakeResident(
                                 *(VIDMM_EXPORT **)(v59 + 760),
                                 *(struct VIDMM_GLOBAL **)(v59 + 768),
                                 v77,
                                 (struct VIDMM_MULTI_ALLOC **)&v72[3],
                                 1u,
                                 3u,
                                 &v78,
                                 &v84);
                    if ( Resident >= 0 )
                    {
                      if ( Resident == 259 )
                        VIDMM_EXPORT::VidMmWaitForFences(
                          *(VIDMM_EXPORT **)(v59 + 760),
                          *(struct VIDMM_GLOBAL **)(v59 + 768),
                          &v79,
                          &v78);
                    }
                    else
                    {
                      v62 = Resident;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 1527;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                        v62,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
                }
                v63 = *(&Src.pAllocationInfo->hAllocation + 24 * v68);
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v35);
                v34 = v80;
                v64 = (v63 >> 6) & 0xFFFFFF;
                if ( v64 < *((_DWORD *)v80 + 74) )
                  *(_DWORD *)(16LL * v64 + *((_QWORD *)v80 + 35) + 8) &= ~0x4000u;
                *((_QWORD *)v35 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v35, 0LL);
                KeLeaveCriticalRegion();
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72);
                v33 = v68 + 1;
                v68 = v33;
                if ( (unsigned int)v33 >= *(_DWORD *)(v4 + 40) )
                {
                  v1 = v85;
                  break;
                }
              }
            }
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), v21, v75[0]);
            v2 = 1;
          }
LABEL_82:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v81);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v76);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
          return v2;
        }
      }
      WdLogSingleEntry0(2LL);
      v7 = 1339LL;
    }
LABEL_84:
    v8 = L"Invalid packet size";
LABEL_85:
    WdLogGlobalForLineNumber = v7;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
