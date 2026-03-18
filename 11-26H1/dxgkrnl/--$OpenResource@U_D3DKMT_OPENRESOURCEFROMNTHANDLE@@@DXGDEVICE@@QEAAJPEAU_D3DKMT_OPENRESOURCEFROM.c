/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401EE398 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035450C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140356CC0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1400748B0 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x14031276C (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r12d
  D3DDDI_ALLOCATIONINFO *v14; // r15
  ADAPTER_RENDER *v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  D3DDDI_ALLOCATIONINFO *v22; // rax
  __int64 v23; // rcx
  D3DDDI_ALLOCATIONINFO *v24; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v25; // r9
  size_t v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rax
  struct _EX_RUNDOWN_REF *v29; // r9
  unsigned int *v30; // r15
  _QWORD *v31; // rdi
  unsigned int v32; // edx
  int v33; // edi
  D3DKMT_HANDLE hResource; // eax
  unsigned int v35; // r10d
  _DWORD *v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v40; // ecx
  const void *v41; // rdx
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned int *v48; // r12
  unsigned int v49; // edx
  unsigned int v50; // r8d
  DXG_GUEST_VIRTUALGPU_VMBUS *v51; // rcx
  int v52; // r9d
  unsigned int v53; // eax
  struct DXGPROCESS *v54; // r15
  unsigned int v55; // eax
  int v56; // r9d
  __int64 v57; // rcx
  struct _EX_RUNDOWN_REF *v58; // rdx
  unsigned int v59; // r12d
  unsigned int v60; // eax
  int v61; // r9d
  __int64 v62; // rcx
  struct _EX_RUNDOWN_REF *v63; // rdx
  struct _EX_RUNDOWN_REF *v64; // r15
  unsigned int v65; // eax
  ULONG_PTR Count; // r13
  __int64 v67; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v69; // r8
  __int64 v70; // [rsp+28h] [rbp-D8h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  _BYTE v72[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *Current; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v78[3]; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEALLOCATION v79; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v80[80]; // [rsp+120h] [rbp+20h] BYREF
  D3DDDI_ALLOCATIONINFO *v81; // [rsp+180h] [rbp+80h]
  unsigned int v82; // [rsp+190h] [rbp+90h] BYREF
  struct _EX_RUNDOWN_REF *v83; // [rsp+198h] [rbp+98h] BYREF

  v82 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v79, 0, sizeof(v79));
  v15 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
  v82 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v15) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7891;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7891LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v16);
  v17 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
  if ( !a4 )
  {
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7944;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  v18 = *(_QWORD *)(a4 + 16);
  if ( !v18 )
  {
    v33 = -1073741811;
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 7913;
LABEL_40:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 136) - 44LL) & 2) != 0 )
  {
    v46 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v46 )
    {
      if ( !(*(unsigned int (**)(void))(v46 + 224))() )
      {
        v33 = -1073741790;
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 7954;
        goto LABEL_40;
      }
    }
  }
  v19 = *(unsigned int *)(a2 + 16);
  if ( *(_DWORD *)(v18 + 132) != (_DWORD)v19 )
  {
    v33 = -1073741811;
    WdLogSingleEntry4(2LL, a1, *(unsigned int *)(v18 + 132), v19, -1073741811LL);
    v71 = *(unsigned int *)(a2 + 16);
    v70 = *(unsigned int *)(v18 + 132);
    WdLogGlobalForLineNumber = 7966;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64"
                "x, returning 0x%I64x",
      (__int64)a1,
      v70,
      v71,
      -1073741811LL,
      0LL);
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(v18 + 12) & 4) != 0 )
  {
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7977;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  if ( !v17 )
  {
    v20 = *(unsigned int *)(v18 + 112);
    if ( *(_DWORD *)(a2 + 32) != (_DWORD)v20 )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, a1, *(unsigned int *)(a2 + 32), v20, -1073741811LL);
      WdLogGlobalForLineNumber = 7991;
      goto LABEL_40;
    }
    if ( (_DWORD)v20 )
      memmove(*(void **)(a2 + 40), *(const void **)(v18 + 104), (unsigned int)v20);
  }
  v21 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v21 = -1LL;
  v22 = (D3DDDI_ALLOCATIONINFO *)operator new[](v21, 0x4B677844u, 256LL);
  v23 = *(unsigned int *)(a2 + 16);
  v24 = v22;
  v81 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry3(3LL, a1, v23, -1073741801LL);
    WdLogGlobalForLineNumber = 8010;
    goto LABEL_37;
  }
  v25 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v26 = *(unsigned int *)(a2 + 48);
  v79.hDevice = *(_DWORD *)a2;
  v79.NumAllocations = v23;
  v79.hGlobalShare = 0;
  v79.pStandardAllocation = v25;
  v27 = *(_DWORD *)&v79.Flags & 0xFFFFFF7F | ((a7 & 1) << 7) | 0x41;
  v79.PrivateDriverDataSize = v26;
  v79.pAllocationInfo = v22;
  v79.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(v27 ^ (v27 ^ (32 * *(_DWORD *)(v18 + 12))) & 0x100000);
  if ( !v17 )
  {
    v28 = *(unsigned int *)(v18 + 128);
    if ( (_DWORD)v26 != (_DWORD)v28 )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v26, v28, -1073741811LL);
      WdLogGlobalForLineNumber = 8037;
      goto LABEL_35;
    }
  }
  if ( (_DWORD)v26 )
  {
    memmove(v25, *(const void **)(v18 + 120), v26);
    v24 = v81;
  }
  v29 = *(struct _EX_RUNDOWN_REF **)(a2 + 72);
  v30 = (unsigned int *)(a2 + 64);
  v31 = *(_QWORD **)(v18 + 136);
  v32 = 0;
  while ( 1 )
  {
    v83 = v29;
    if ( v10 >= *(_DWORD *)(a2 + 16) )
      break;
    v40 = *((_DWORD *)v31 - 2);
    if ( v40 + v32 < v32 )
    {
      v33 = -1073741675;
      WdLogSingleEntry2(3LL, a1, -1073741675LL);
      WdLogGlobalForLineNumber = 8063;
      goto LABEL_35;
    }
    v30 = (unsigned int *)(a2 + 64);
    if ( v40 + v32 > *(_DWORD *)(a2 + 64) )
    {
      WdLogSingleEntry2(3LL, a1, -1073741801LL);
      WdLogGlobalForLineNumber = 8072;
LABEL_37:
      v33 = -1073741801;
LABEL_35:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
      goto LABEL_27;
    }
    v41 = (const void *)*(v31 - 2);
    if ( v41 )
    {
      memmove(v29, v41, v40);
      v29 = v83;
      v24 = v81;
    }
    v42 = 96LL * v10;
    *(D3DKMT_HANDLE *)((char *)&v24->hAllocation + v42) = 0;
    *(const void **)((char *)&v24->pSystemMem + v42) = 0LL;
    v43 = *((_DWORD *)v31 - 11);
    *(UINT *)((char *)&v24->Flags.Value + v42) = 0;
    *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v24->VidPnSourceId + v42) = (v43 >> 6) & 0xF;
    v44 = *((_DWORD *)v31 - 11);
    *(void **)((char *)&v24->pPrivateDriverData + v42) = v29;
    *(UINT *)((char *)&v24->Flags.Value + v42) = v44 & 1 | (((v44 | (v44 >> 12)) & 2) != 0);
    *(UINT *)((char *)&v24->PrivateDriverDataSize + v42) = *((_DWORD *)v31 - 2);
    v45 = *((unsigned int *)v31 - 2);
    v29 = (struct _EX_RUNDOWN_REF *)((char *)v29 + v45);
    v31 = (_QWORD *)*v31;
    v32 = v45 + v82;
    v82 += v45;
    ++v10;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
  v33 = DXGDEVICE::CreateAllocation(
          a1,
          &v79,
          0,
          1u,
          (struct _DXGSHAREDALLOCOBJECT *)a4,
          0LL,
          a6,
          a5,
          a8,
          a9,
          a10,
          0LL,
          0LL,
          0LL,
          0);
  if ( v33 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 8103;
    goto LABEL_27;
  }
  hResource = v79.hResource;
  if ( !v79.hResource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8108;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateAlloc.hResource != 0", 8108LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v79.hResource;
    v30 = (unsigned int *)(a2 + 64);
  }
  v35 = 0;
  v36 = *(_DWORD **)(a2 + 24);
  *v30 = v82;
  v37 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 80) = hResource;
  if ( (_DWORD)v37 )
  {
    do
    {
      v38 = v35++;
      *v36 = *(&v79.pAllocationInfo->hAllocation + 24 * v38);
      v36 += 20;
      *((_QWORD *)v36 - 9) = *(_QWORD *)(a2 + 72)
                           + (unsigned int)(*((_DWORD *)&v79.pAllocationInfo->pPrivateDriverData + 24 * v38)
                                          - *(_DWORD *)(a2 + 72));
      *(v36 - 16) = *(&v79.pAllocationInfo->PrivateDriverDataSize + 24 * v38);
      v37 = *(unsigned int *)(a2 + 16);
    }
    while ( v35 < (unsigned int)v37 );
  }
  if ( (*((_BYTE *)a1 + 1917) & 1) != 0 )
  {
    v47 = 4 * v37;
    if ( !is_mul_ok(v37, 4uLL) )
      v47 = -1LL;
    v73 = (unsigned int *)operator new[](v47, 0x4B677844u, 256LL);
    v48 = v73;
    if ( !v73 )
    {
      v33 = -1073741801;
      goto LABEL_27;
    }
    v49 = *v30;
    v50 = *(_DWORD *)(a2 + 16);
    v51 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4712LL);
    v52 = *(_DWORD *)(v18 + 12) >> 3;
    v82 = 0;
    if ( (v52 & 1) != 0 )
      v53 = *(_DWORD *)(a4 + 40);
    else
      v53 = *(_DWORD *)(v18 + 28);
    v54 = Current;
    v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(v51, Current, a1, v52 & 1, v53, v50, v49, &v82, v73);
    if ( v33 < 0 )
      goto LABEL_92;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v80, (struct _KTHREAD **)v54);
    v55 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
    if ( v55 < *((_DWORD *)v54 + 74) )
    {
      v56 = *(_DWORD *)(*((_QWORD *)v54 + 35) + 16LL * v55 + 8);
      if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v54 + 35) + 16LL * v55 + 8) & 0x60)
        && (v56 & 0x2000) == 0
        && (v56 & 0x1F) != 0 )
      {
        v57 = *((_QWORD *)v54 + 35);
        if ( (*(_BYTE *)(v57 + 16LL * v55 + 8) & 0x1F) == 4 )
        {
          v58 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * v55);
          goto LABEL_66;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v58 = 0LL;
LABEL_66:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v78, v58);
    if ( !v78[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 8154;
      v33 = -1073741811;
      goto LABEL_91;
    }
    v59 = 0;
    HIDWORD(v78[0][2].Ptr) = v82;
    while ( 1 )
    {
      if ( v59 >= *(_DWORD *)(a2 + 16) )
      {
LABEL_90:
        v48 = v73;
LABEL_91:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v78);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
LABEL_92:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v48);
        goto LABEL_27;
      }
      v60 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v59) >> 6) & 0xFFFFFF;
      if ( v60 >= *((_DWORD *)v54 + 74) )
        goto LABEL_77;
      v61 = *(_DWORD *)(*((_QWORD *)v54 + 35) + 16LL * v60 + 8);
      if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v59) >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)v54 + 35)
                                                                                        + 16LL * v60
                                                                                        + 8) & 0x60)
        || (v61 & 0x2000) != 0
        || (v61 & 0x1F) == 0 )
      {
        goto LABEL_77;
      }
      v62 = *((_QWORD *)v54 + 35);
      if ( (*(_BYTE *)(v62 + 16LL * v60 + 8) & 0x1F) != 5 )
        break;
      v63 = *(struct _EX_RUNDOWN_REF **)(v62 + 16LL * v60);
LABEL_78:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v63);
      v64 = v83;
      if ( !v83 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8165;
        v33 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83);
        goto LABEL_90;
      }
      v65 = v73[v59];
      LOBYTE(v83[16].Count) |= 4u;
      HIDWORD(v64[2].Ptr) = v65;
      v82 = v65;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        Count = v64[5].Count;
        if ( Count )
        {
          v74 = *(_QWORD *)(Count + 48);
          v75 = *(unsigned int *)(Count + 16);
        }
        else
        {
          v74 = 0LL;
          v75 = 0LL;
        }
        v78[1] = (struct _EX_RUNDOWN_REF *)LODWORD(v64[2].Count);
        if ( Count )
          v76 = *(_QWORD *)(Count + 56);
        else
          v76 = 0LL;
        v67 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        CurrentProcessId = PsGetCurrentProcessId();
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          v76,
          &EventCreateDeviceAllocation,
          v69,
          CurrentProcessId,
          a1,
          v67,
          v64);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83);
      v54 = Current;
      ++v59;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_77:
    v63 = 0LL;
    goto LABEL_78;
  }
LABEL_27:
  v14 = v81;
LABEL_28:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  return (unsigned int)v33;
}
