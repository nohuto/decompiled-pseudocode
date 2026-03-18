/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1400A67B8 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400362C8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x14003768C (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038904 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x14003957C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003A398 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x14004CF94 (-SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z.c)
 *     DxgkpIsDrtEnabled @ 0x14004D064 (DxgkpIsDrtEnabled.c)
 *     ?Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z @ 0x14005B5D0 (-Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?Init@VIDMM_LOCKED_PAGE_HISTORY@@QEAAJK@Z @ 0x14009F1B0 (-Init@VIDMM_LOCKED_PAGE_HISTORY@@QEAAJK@Z.c)
 *     ?InitializeForwardProgressMdl@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009F2C8 (-InitializeForwardProgressMdl@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A7728 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400A9E80 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400ABE44 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializePagingHistory@VIDMM_GLOBAL@@QEAAXK@Z @ 0x1400AC318 (-InitializePagingHistory@VIDMM_GLOBAL@@QEAAXK@Z.c)
 *     ??0VIDMM_PHYSICAL_ADAPTER@@QEAA@PEAVVIDMM_GLOBAL@@GPEBUDXGK_PHYSICALADAPTERINFO@@PEBUDXGADAPTER_GPUMMUCAPS@@@Z @ 0x1400B39AC (--0VIDMM_PHYSICAL_ADAPTER@@QEAA@PEAVVIDMM_GLOBAL@@GPEBUDXGK_PHYSICALADAPTERINFO@@PEBUDXGADAPTER_.c)
 *     ?VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400B48B0 (-VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400C7AA0 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(VIDMM_GLOBAL *this, struct ADAPTER_RENDER *a2, unsigned int a3, char a4)
{
  _BYTE *v4; // rbx
  __int64 v5; // rax
  unsigned int v7; // r12d
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // rcx
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  char v18; // al
  char v19; // dl
  bool IsGpuVaIoMmuGlobalSupported; // al
  char v21; // cl
  int v22; // ecx
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int VaAllocator; // r14d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // r15
  int v35; // eax
  ADAPTER_RENDER *v36; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // r12
  VIDMM_PHYSICAL_ADAPTER *v38; // rax
  VIDMM_PHYSICAL_ADAPTER *v39; // rbx
  VIDMM_PHYSICAL_ADAPTER *v40; // rax
  int v41; // eax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  bool v45; // al
  int v46; // eax
  CVirtualAddressAllocator *v47; // rax
  CVirtualAddressAllocator *v48; // rax
  int (*v49)(unsigned __int64, unsigned __int64, void *); // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _RTL_BALANCED_NODE *v53; // rax
  VIDMM_PARTITION *v54; // r15
  int v55; // eax
  VIDMM_PARTITION **v56; // rcx
  VIDMM_PARTITION *v57; // rax
  VIDMM_PARTITION *i; // rcx
  unsigned __int16 j; // bx
  unsigned __int16 LocalNumaNode; // ax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rsi
  __int64 v64; // [rsp+50h] [rbp-20h] BYREF
  __int64 v65; // [rsp+58h] [rbp-18h]
  unsigned __int16 v66; // [rsp+B0h] [rbp+40h]
  __int64 v67; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v68; // [rsp+C0h] [rbp+50h]

  v68 = a3;
  *((_QWORD *)this + 2) = a2;
  v4 = (char *)this + 41065;
  v5 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v5;
  *((_DWORD *)this + 10) = a3;
  v7 = a3;
  byte_14008A63C |= (*(_DWORD *)(v5 + 444) & 0x200) != 0;
  v9 = *((_QWORD *)this + 3);
  if ( a3 >= 0x6000 )
    *v4 |= 2u;
  v10 = *v4 ^ (*v4 ^ ((unsigned __int8)DxgkpIsDrtEnabled() << 6)) & 0x40;
  v11 = *((_QWORD *)this + 3);
  *v4 = v10;
  v12 = v10 ^ (v10 ^ (32 * *(_BYTE *)(v11 + 5088))) & 0x20;
  *v4 = v12 ^ (v12 ^ (v12 >> 1)) & 0x10;
  v13 = *(_DWORD *)(v11 + 296);
  *((_DWORD *)this + 1738) = v13;
  if ( v13 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 64LL);
    WdLogGlobalForLineNumber = 1558;
LABEL_5:
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
  v16 = *((unsigned __int16 *)this + 3476);
  v17 = *(unsigned int *)(v9 + 2508);
  v66 = *((_WORD *)this + 3476);
  if ( (v17 & 0x20) != 0 )
  {
    v18 = *((_BYTE *)this + 41064) & 0xFD;
    LODWORD(v67) = 0;
    v19 = v18 | ((unsigned int)v17 >> 5) & 2;
    *((_BYTE *)this + 41064) = v19;
    *((_BYTE *)this + 41064) = v19 & 0xDF | (*(_DWORD *)(v9 + 2508) >> 2) & 0x20;
    SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v11 + 224), (union SYSMM_IOMMU_STATE *)&v67);
    *((_BYTE *)this + 41064) = *((_BYTE *)this + 41064) & 0xFB | (4 * ((v67 & 4) != 0));
    IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*((DXGADAPTER **)this + 3));
    v21 = *((_BYTE *)this + 41064) & 0xE7 | (IsGpuVaIoMmuGlobalSupported ? 8 : 0);
    LOBYTE(v17) = v21 | ((*((_BYTE *)this + 41064) & 6 | (IsGpuVaIoMmuGlobalSupported ? 8 : 0)) != 0 ? 0x10 : 0);
    *((_BYTE *)this + 41064) = v17;
    if ( (v21 & 0x20) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v22 = *(_DWORD *)(*((_QWORD *)this + 3) + 444LL), (v22 & 4) != 0)
        || (v23 = 64, (v22 & 8) != 0) )
      {
        v23 = 0;
      }
      v4 = (char *)this + 41065;
      *((_BYTE *)this + 41064) = v23 | v17 & 0xBF;
    }
    if ( v7 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *v4 |= 1u;
  }
  LOBYTE(v17) = *((_BYTE *)this + 41064);
  if ( (v17 & 0xC) == 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_BYTE *)this + 40098) = 1;
      *((_BYTE *)this + 40100) = 1;
      *((_BYTE *)this + 40144) = 1;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 2508) & 0x4000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1608;
        goto LABEL_5;
      }
      *((_BYTE *)this + 40099) = 1;
    }
  }
  *((_BYTE *)this + 4576) = (*(_DWORD *)(v9 + 2504) & 0x20) == 0;
  *v4 ^= (*v4 ^ (8 * (*(_DWORD *)(v9 + 2508) >> 14))) & 8;
  if ( (v17 & 0x10) != 0 && dword_14008A4EC )
  {
    v24 = 256LL;
    if ( (unsigned int)dword_14008A4EC <= 0x10000 )
      v24 = 64LL;
    DXGK_LOG::Initialize((__int64)this + 41168, v17, v24, (unsigned int)dword_14008A4EC, (unsigned int)dword_14008A4F0);
    v25 = 48LL * (unsigned int)dword_14008A4F4;
    if ( !is_mul_ok((unsigned int)dword_14008A4F4, 0x30uLL) )
      v25 = -1LL;
    v26 = operator new[](v25, 0x32356956u, 256LL);
    *((_QWORD *)this + 5150) = v26;
    if ( !v26 )
    {
      _InterlockedIncrement(&dword_14008A8C0);
      WdLogSingleEntry0(6LL);
      v28 = 1643;
LABEL_31:
      WdLogGlobalForLineNumber = v28;
      DxgkLogInternalTriageEvent(v27, 262145LL);
      VaAllocator = -1073741801;
LABEL_93:
      VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40512));
      return (unsigned int)VaAllocator;
    }
  }
  v30 = 8 * v16;
  if ( !is_mul_ok(v16, 8uLL) )
    v30 = -1LL;
  v31 = operator new[](v30, 0x30356956u, 64LL);
  *((_QWORD *)this + 5040) = v31;
  if ( v31 )
  {
    v34 = 0;
    if ( (_WORD)v16 )
    {
      while ( 1 )
      {
        v36 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 3032LL) + 352LL * v34;
        v67 = v34;
        GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(v36, v34);
        if ( (*((_BYTE *)this + 41065) & 0x20) != 0 )
        {
          v38 = (VIDMM_PHYSICAL_ADAPTER *)operator new(1976LL, 0x30356956u, 64LL);
          v39 = v38;
          if ( v38 )
          {
            VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER(
              v38,
              this,
              v34,
              (const struct DXGK_PHYSICALADAPTERINFO *)v16,
              GpuMmuCaps);
            *((_BYTE *)v39 + 556) &= ~1u;
            *(_QWORD *)v39 = &VIDMM_PHYSICAL_ADAPTER_PBMM::`vftable';
          }
          else
          {
            v39 = 0LL;
          }
          if ( !v39 )
          {
LABEL_45:
            _InterlockedAdd(&dword_14008A8A8, 1u);
            WdLogSingleEntry0(6LL);
            v33 = 1686;
            goto LABEL_36;
          }
        }
        else
        {
          v40 = (VIDMM_PHYSICAL_ADAPTER *)operator new(1888LL, 0x30356956u, 64LL);
          v39 = v40;
          if ( !v40 )
            goto LABEL_45;
          VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER(
            v40,
            this,
            v34,
            (const struct DXGK_PHYSICALADAPTERINFO *)v16,
            GpuMmuCaps);
          *((_BYTE *)v39 + 556) |= 1u;
          *(_QWORD *)v39 = &VIDMM_PHYSICAL_ADAPTER_LEGACY::`vftable';
          *((_QWORD *)v39 + 235) = (char *)v39 + 1872;
          *((_QWORD *)v39 + 234) = (char *)v39 + 1872;
        }
        *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v34) = v39;
        v41 = VidMmInitializePhysicalAdapter(v39);
        VaAllocator = v41;
        if ( v41 < 0 )
          break;
        *((_DWORD *)this + 928) += *((_DWORD *)v39 + 34);
        if ( GpuMmuCaps )
          *((_BYTE *)this + 40096) &= (*((_BYTE *)GpuMmuCaps + 20) & 1) == 0;
        *((_BYTE *)this + 41065) = *((_BYTE *)this + 41065) & 0xFB ^ (*((_BYTE *)this + 41065) | (4
                                                                                                * (*(_DWORD *)(v16 + 16) >> 5))) & 4;
        v42 = *(_BYTE *)(v16 + 50);
        LOWORD(v16) = v66;
        *((_BYTE *)v39 + 558) = *((_BYTE *)v39 + 558) & 0xEF | (v42 != 0 ? 0x10 : 0);
        if ( ++v34 >= v66 )
        {
          v7 = v68;
          goto LABEL_38;
        }
      }
      WdLogSingleEntry2(3LL, v67, v41);
      WdLogGlobalForLineNumber = 1698;
      goto LABEL_93;
    }
LABEL_38:
    v35 = VIDMM_GLOBAL::InitializeForwardProgressMdl(this);
    VaAllocator = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry1(3LL, v35);
      WdLogGlobalForLineNumber = 1722;
      goto LABEL_93;
    }
    if ( dword_14008A4A0 == 2 )
    {
      v43 = 7104LL;
      v44 = (__int64)this;
      v45 = (*(_DWORD *)(*((_QWORD *)this + 3) + 2492LL) & 4) != 0;
    }
    else
    {
      v43 = (__int64)this;
      v44 = 7104LL;
      v45 = dword_14008A4A0 == 1;
    }
    *(_BYTE *)(v44 + v43) = v45;
    *((_QWORD *)this + 5642) = qword_14008A5B0;
    VIDMM_GLOBAL::InitializePagingHistory(this, dword_14008A45C);
    if ( (*((_BYTE *)this + 41064) & 0x10) != 0 )
    {
      v46 = v7 >= 0x5023 ? dword_14008A4F8 : 4096 << *((_DWORD *)this + 10265);
      *((_DWORD *)this + 10285) = v46;
      VaAllocator = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40512), this);
      if ( VaAllocator < 0 )
        goto LABEL_93;
    }
    if ( DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*((DXGADAPTER **)this + 3)) )
    {
      v47 = (CVirtualAddressAllocator *)operator new(160LL, 0x4B677844u, 256LL);
      if ( v47 )
        v48 = CVirtualAddressAllocator::CVirtualAddressAllocator(v47);
      else
        v48 = 0LL;
      *((_QWORD *)this + 5615) = v48;
      if ( !v48 )
      {
        _InterlockedAdd(&dword_14008A8B8, 1u);
        WdLogSingleEntry0(6LL);
        v28 = 1803;
        goto LABEL_31;
      }
      VaAllocator = CVirtualAddressAllocator::InitializeVaAllocator(
                      v48,
                      1LL << *((_DWORD *)this + 10264),
                      *((_DWORD *)this + 10285),
                      this,
                      0LL);
      if ( VaAllocator < 0 )
      {
        WdLogSingleEntry1(1LL, *((_QWORD *)this + 5615));
        WdLogGlobalForLineNumber = 1811;
LABEL_70:
        DxgkLogInternalTriageEvent(v50, 0x40000LL);
        goto LABEL_93;
      }
      v51 = *((_QWORD *)this + 3);
      v52 = *((_QWORD *)this + 5615);
      v65 = 0LL;
      v64 = v52;
      SysMmIterateHardwareReservedRanges(*(struct SYSMM_ADAPTER **)(v51 + 224), v49, &v64);
      VaAllocator = v65;
      if ( (int)v65 < 0 )
      {
        WdLogSingleEntry1(1LL, *(_QWORD *)(*((_QWORD *)this + 3) + 224LL));
        WdLogGlobalForLineNumber = 1827;
        goto LABEL_70;
      }
    }
    KeInitializeTimer((PKTIMER)((char *)this + 45304));
    KeInitializeThreadedDpc((PRKDPC)this + 709, (PKDEFERRED_ROUTINE)VidMmDelayedEvictionDpc, this);
    VaAllocator = VIDMM_GLOBAL::CreateWorkerThread(this);
    if ( VaAllocator >= 0 )
    {
      DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
        (DXGAUTOEXPUSHLOCKSHARED *)&v64,
        (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
      v53 = VIDMM_PARTITION::_PartitionTree;
      v54 = 0LL;
      while ( v53 )
      {
        v54 = (VIDMM_PARTITION *)v53;
        v53 = v53->Children[0];
      }
      while ( v54 )
      {
        v55 = VIDMM_PARTITION::EnsureAdapter(v54, this);
        VaAllocator = v55;
        if ( v55 < 0 )
        {
          WdLogSingleEntry3(1LL, this, v54, v55);
          WdLogGlobalForLineNumber = 1864;
          DxgkLogInternalTriageEvent(v61, 0x40000LL);
          DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)&v64);
          goto LABEL_93;
        }
        v56 = (VIDMM_PARTITION **)*((_QWORD *)v54 + 1);
        v57 = v54;
        if ( v56 )
        {
          v54 = (VIDMM_PARTITION *)*((_QWORD *)v54 + 1);
          for ( i = *v56; i; i = *(VIDMM_PARTITION **)i )
            v54 = i;
        }
        else
        {
          while ( 1 )
          {
            v54 = (VIDMM_PARTITION *)(*((_QWORD *)v54 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v54 || *(VIDMM_PARTITION **)v54 == v57 )
              break;
            v57 = v54;
          }
        }
      }
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)&v64);
      *((_BYTE *)this + 44697) = *(_QWORD *)(*((_QWORD *)this + 3) + 1768LL) != 0LL;
      *((_QWORD *)this + 983) = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)this + 984) = MEMORY[0xFFFFF78000000014];
      VIDMM_LOCKED_PAGE_HISTORY::Init((VIDMM_GLOBAL *)((char *)this + 45256), dword_14008A344);
      if ( KeQueryHighestNodeNumber() )
      {
        for ( j = 0; j < (unsigned __int16)v16; ++j )
        {
          LocalNumaNode = DpiGetLocalNumaNode(*(_QWORD *)(*((_QWORD *)this + 3) + 216LL), j);
          if ( j )
          {
            if ( LocalNumaNode != *((_DWORD *)this + 11324) )
              goto LABEL_97;
          }
          else
          {
            *((_DWORD *)this + 11324) = LocalNumaNode;
          }
        }
      }
      else
      {
LABEL_97:
        *((_DWORD *)this + 11324) = 0;
      }
      DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        (DXGAUTOEXPUSHLOCKEXCLUSIVE *)&v64,
        (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
      v62 = (_QWORD *)qword_14008A6A8;
      v63 = (_QWORD *)((char *)this + 45240);
      if ( *(PVOID **)qword_14008A6A8 != &VIDMM_GLOBAL::_AdapterListHead )
        __fastfail(3u);
      *v63 = &VIDMM_GLOBAL::_AdapterListHead;
      v63[1] = v62;
      *v62 = v63;
      qword_14008A6A8 = (__int64)v63;
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)&v64);
      return (unsigned int)VaAllocator;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1844;
    goto LABEL_70;
  }
  _InterlockedIncrement(&dword_14008A8A4);
  WdLogSingleEntry0(6LL);
  v33 = 1653;
LABEL_36:
  WdLogGlobalForLineNumber = v33;
  DxgkLogInternalTriageEvent(v32, 262145LL);
  return 3221225495LL;
}
