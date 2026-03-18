/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x140310614
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140007F0C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x14004DDF4 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x14005C5E0 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14007463C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402EAA6C (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1403B24BC (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1403BF724 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1403C06D0 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCEREFERENCE *a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        DXGFASTMUTEX **a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v14; // rcx
  unsigned __int8 *v15; // rbx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hResource; // edi
  D3DKMT_CREATEALLOCATIONFLAGS v18; // eax
  __int64 v20; // rbx
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // rcx
  struct DXGRESOURCE *v24; // rdx
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rbx
  DXGRESOURCE *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // r8
  __int64 v35; // rax
  int CurrentProcessSessionId; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  __int64 v45; // rdx
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  __int64 v48; // rcx
  bool v49; // r12
  struct _EPROCESS *v50; // rdx
  __int64 **v51; // rcx
  __int64 *i; // rax
  __int64 v53; // rcx
  __int64 v54; // rdi
  ADAPTER_RENDER *v55; // rcx
  __int64 v56; // r8
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  UINT v58; // r8d
  UINT v59; // eax
  DXGADAPTERALLOCATION_VGPU *v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int64 **v63; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rsi
  void *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  unsigned __int64 v75; // rax
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGDEVICE *v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  UINT PrivateDriverDataSize; // ecx
  struct DXGAUTOPUSHLOCK *v81; // rdi
  DXGAUTOPUSHLOCK *v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  UINT NumAllocations; // r10d
  __int64 v86; // rdx
  unsigned int v87; // edi
  unsigned __int64 v88; // rax
  __int64 v89; // r14
  __int64 v90; // rax
  void *v91; // rcx
  UINT v92; // r14d
  DXGADAPTERALLOCATION_VGPU *v93; // rax
  DXGADAPTERALLOCATION_VGPU *v94; // rax
  __int64 *v95; // rcx
  __int64 v96; // rax
  __int64 **v97; // rdx
  DXGRESOURCE *v98; // rax
  int v99; // eax
  __int64 v100; // r14
  unsigned int v101; // eax
  int v102; // r8d
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned int v105; // eax
  __int64 v106; // r9
  DXGADAPTER *v107; // rcx
  struct _EX_RUNDOWN_REF *v108; // [rsp+50h] [rbp-31h] BYREF
  __int128 v109; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v110[88]; // [rsp+68h] [rbp-19h] BYREF
  char v111; // [rsp+D0h] [rbp+4Fh]
  UINT v112; // [rsp+D0h] [rbp+4Fh]
  __int64 v113; // [rsp+D0h] [rbp+4Fh]
  UINT v114; // [rsp+D8h] [rbp+57h]
  D3DKMT_HANDLE hGlobalShare; // [rsp+D8h] [rbp+57h]
  __int64 v116; // [rsp+D8h] [rbp+57h]

  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2120;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2120LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = 0LL;
  v108 = 0LL;
  Current = DXGPROCESS::GetCurrent(v14);
  v109 = 0LL;
  v111 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  *a8 = 0;
  hResource = a2->hResource;
  if ( hResource )
  {
    v20 = *((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
    v21 = (hResource >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v20 + 296) )
    {
      v22 = *(_DWORD *)(*(_QWORD *)(v20 + 280) + 16LL * v21 + 8);
      if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v20 + 280) + 16LL * v21 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = *(_QWORD *)(v20 + 280);
        if ( (*(_BYTE *)(v23 + 16LL * v21 + 8) & 0x1F) == 4 )
        {
          v24 = *(struct DXGRESOURCE **)(v23 + 16LL * v21);
          goto LABEL_15;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v24 = 0LL;
LABEL_15:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&a8, v24);
    _InterlockedAdd((volatile signed __int32 *)(v20 + 264), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v20 + 248, 0LL);
    KeLeaveCriticalRegion();
    v15 = a8;
    v108 = (struct _EX_RUNDOWN_REF *)a8;
    a8 = 0LL;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a8);
    if ( !v15 )
    {
      v25 = -1073741816;
      WdLogSingleEntry3(3LL, this, a2->hResource, -1073741816LL);
      WdLogGlobalForLineNumber = 2161;
      goto LABEL_17;
    }
    Flags = a2->Flags;
    if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 2170;
      goto LABEL_167;
    }
    v77 = (DXGDEVICE *)*((_QWORD *)v15 + 1);
    if ( v77 == this )
    {
      if ( (*(_WORD *)&Flags & 0x800) == 0 || (v78 = *((_QWORD *)v15 + 7)) != 0 && (*(_DWORD *)(v78 + 12) & 0x20) != 0 )
      {
        if ( (*((_DWORD *)v15 + 1) & 1) != 0 )
        {
          v79 = *((_QWORD *)v15 + 7);
          if ( !v79 )
          {
            WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
            WdLogGlobalForLineNumber = 2212;
            goto LABEL_167;
          }
          PrivateDriverDataSize = a2->PrivateDriverDataSize;
          if ( *(_DWORD *)(v79 + 128) != PrivateDriverDataSize )
          {
            WdLogSingleEntry4(3LL, this, v79, PrivateDriverDataSize, -1073741811LL);
            WdLogGlobalForLineNumber = 2224;
            goto LABEL_167;
          }
          v81 = a11;
          v82 = a11;
          *((_QWORD *)a11 + 1) = v79 + 32;
          DXGAUTOPUSHLOCK::AcquireExclusive(v82);
          v83 = *((_QWORD *)v15 + 7);
          v84 = 0LL;
          NumAllocations = a2->NumAllocations;
          *(_QWORD *)&v109 = v81;
          while ( (unsigned int)v84 < NumAllocations )
          {
            v86 = a3[v84].PrivateDriverDataSize;
            if ( *(_DWORD *)(*(_QWORD *)(v83 + 136) - 8LL) != (_DWORD)v86 )
            {
              WdLogSingleEntry5(3LL, this, v83, (unsigned int)v84, v86, -1073741811LL);
              WdLogGlobalForLineNumber = 2249;
              goto LABEL_167;
            }
            v84 = (unsigned int)(v84 + 1);
          }
          if ( (*(_DWORD *)(v83 + 12) & 0x100) != 0 )
          {
            WdLogSingleEntry3(3LL, this, v83, -1073741811LL);
            WdLogGlobalForLineNumber = 2260;
            goto LABEL_167;
          }
          v87 = NumAllocations + *(_DWORD *)(v83 + 132);
          if ( v87 > 0x100 )
          {
            WdLogSingleEntry4(3LL, this, v83, 256LL, -1073741811LL);
            WdLogGlobalForLineNumber = 2272;
            goto LABEL_167;
          }
          *(_DWORD *)&a2->Flags |= 2u;
          if ( v87 > 1 )
          {
            v88 = 8LL * v87;
            if ( !is_mul_ok(v87, 8uLL) )
              v88 = -1LL;
            v89 = operator new[](v88, 0x4B677844u, 256LL);
            if ( !v89 )
            {
              WdLogSingleEntry3(3LL, this, v87, -1073741801LL);
              WdLogGlobalForLineNumber = 2290;
              goto LABEL_148;
            }
            v90 = *((_QWORD *)v15 + 7);
            v91 = *(void **)(v90 + 168);
            if ( v91 != (void *)(v90 + 160) )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v91);
            *(_QWORD *)(*((_QWORD *)v15 + 7) + 168LL) = v89;
          }
          v92 = 0;
          while ( v92 < a2->NumAllocations )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
            {
              v93 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
              if ( v93 )
                v94 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v93);
              else
                v94 = 0LL;
              if ( !v94 )
              {
LABEL_147:
                WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
                WdLogGlobalForLineNumber = 2311;
LABEL_148:
                DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE(&v109);
LABEL_103:
                v25 = -1073741801;
                goto LABEL_17;
              }
            }
            else
            {
              v94 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL);
              if ( !v94 )
                goto LABEL_147;
              *((_DWORD *)v94 + 1) = 0;
              *((_QWORD *)v94 + 1) = 0LL;
              *((_QWORD *)v94 + 2) = 0LL;
              *((_QWORD *)v94 + 4) = 0LL;
              *((_DWORD *)v94 + 10) = 0;
              *((_QWORD *)v94 + 7) = 0LL;
              *((_QWORD *)v94 + 6) = 0LL;
            }
            v95 = (__int64 *)((char *)v94 + 48);
            v96 = *((_QWORD *)v15 + 7) + 136LL;
            v97 = *(__int64 ***)(*((_QWORD *)v15 + 7) + 144LL);
            if ( *v97 != (__int64 *)v96 )
              goto LABEL_70;
            *v95 = v96;
            ++v92;
            v95[1] = (__int64)v97;
            *v97 = v95;
            *(_QWORD *)(v96 + 8) = v95;
          }
          *(_DWORD *)(*((_QWORD *)v15 + 7) + 132LL) = v87;
        }
        DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v15 + 80), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)a10);
        goto LABEL_6;
      }
      WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
      WdLogGlobalForLineNumber = 2198;
    }
    else
    {
      WdLogSingleEntry4(3LL, this, a2->hResource, v77, -1073741811LL);
      WdLogGlobalForLineNumber = 2184;
    }
LABEL_167:
    DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE(&v109);
    v25 = -1073741811;
    goto LABEL_17;
  }
  v18 = a2->Flags;
  if ( (*(_BYTE *)&v18 & 1) == 0 )
  {
LABEL_6:
    if ( *(_QWORD *)a7 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
    *(_QWORD *)a7 = v15;
    v108 = 0LL;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v108);
    return 0LL;
  }
  v25 = 0;
  if ( (*(_WORD *)&v18 & 0x1000) == 0 )
  {
    v26 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(128LL);
    v27 = v26;
    if ( v26 )
    {
      *(_DWORD *)(v26 + 4) = 0;
      *(_QWORD *)(v26 + 8) = this;
      *(_QWORD *)(v26 + 16) = 0LL;
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 32) = 0LL;
      *(_QWORD *)(v26 + 40) = 0LL;
      *(_QWORD *)(v26 + 48) = 0LL;
      *(_QWORD *)(v26 + 56) = 0LL;
      *(_QWORD *)(v26 + 64) = 0LL;
      *(_QWORD *)(v26 + 88) = 0LL;
      *(_QWORD *)(v26 + 96) = 0LL;
      *(_QWORD *)(v26 + 104) = 0LL;
      *(_DWORD *)(v26 + 112) = 0;
      *(_DWORD *)(v26 + 116) = -1;
      *(_DWORD *)(v26 + 120) = 76;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v26 + 72));
      v28 = (DXGRESOURCE *)v27;
      goto LABEL_22;
    }
LABEL_102:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2351;
    goto LABEL_103;
  }
  v98 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
  v28 = v98;
  if ( v98 )
  {
    DXGRESOURCE::DXGRESOURCE(v98, this);
    *((_DWORD *)v28 + 1) |= 4u;
    *((_QWORD *)v28 + 16) = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  v27 = (__int64)v28;
  if ( !v28 )
    goto LABEL_102;
LABEL_22:
  DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), (struct DXGRESOURCE *)v27);
  if ( !*(_DWORD *)(v27 + 16) )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2363;
LABEL_173:
    v25 = -1073741801;
    goto LABEL_174;
  }
  *(_QWORD *)(v27 + 48) = a2->hPrivateRuntimeResourceHandle;
  if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
    goto LABEL_54;
  *(_DWORD *)(v27 + 4) |= 1u;
  if ( a4 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v109);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v109);
    if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
    {
      if ( a6 )
      {
        v32 = *((_QWORD *)a6 + 2);
        v33 = (_QWORD *)(v27 + 56);
        *(_QWORD *)(v27 + 56) = v32;
        if ( v32 )
          goto LABEL_28;
        WdLogSingleEntry3(3LL, this, a6, -1073741811LL);
        WdLogGlobalForLineNumber = 2404;
      }
      else
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 2392;
        v33 = (_QWORD *)((char *)v28 + 56);
      }
      goto LABEL_98;
    }
    if ( !v111 )
    {
      Global = DXGGLOBAL::GetGlobal();
      ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
LABEL_96:
      v33 = (_QWORD *)(v27 + 56);
      *(_QWORD *)(v27 + 56) = ObjectA;
      if ( ObjectA )
        goto LABEL_28;
      WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
      WdLogGlobalForLineNumber = 2429;
LABEL_98:
      v25 = -1073741811;
LABEL_28:
      if ( *v33 )
      {
        *(_DWORD *)(*v33 + 12LL) |= 0x100u;
        v34 = *v33;
        if ( *(_DWORD *)(*v33 + 132LL) == a2->NumAllocations )
        {
          v35 = a2->PrivateDriverDataSize;
          if ( *(_DWORD *)(v34 + 128) == (_DWORD)v35 || v111 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29, v34, v31);
            v40 = *v33;
            if ( *(_DWORD *)(*v33 + 72LL) == CurrentProcessSessionId || (*(_DWORD *)(v40 + 12) & 8) != 0 )
            {
              v41 = *(_QWORD *)(v40 + 80);
              if ( v41 == *((_QWORD *)this + 2) )
              {
                v42 = *((_QWORD *)this + 237);
                if ( !v42
                  || *(_QWORD *)(v42 + 3168)
                  || (v106 = *(_QWORD *)(v40 + 96)) == 0
                  || v106 == v42
                  || (*((_BYTE *)this + 1917) & 1) != 0 && (*(_DWORD *)(v40 + 12) & 0x20) != 0 )
                {
                  if ( (*(_DWORD *)(v40 + 12) & 1) == 0
                    || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
                    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
                  {
                    v43 = 0LL;
                    v44 = *(_QWORD **)(*(_QWORD *)(v27 + 56) + 136LL);
                    while ( (unsigned int)v43 < a2->NumAllocations )
                    {
                      v56 = a3[v43].PrivateDriverDataSize;
                      if ( *((_DWORD *)v44 - 2) != (_DWORD)v56 )
                      {
                        WdLogSingleEntry5(3LL, this, *(_QWORD *)(v27 + 56), (unsigned int)v43, v56, -1073741811LL);
                        WdLogGlobalForLineNumber = 2541;
                        goto LABEL_85;
                      }
                      v44 = (_QWORD *)*v44;
                      v43 = (unsigned int)(v43 + 1);
                    }
                    if ( v25 >= 0 )
                    {
                      v45 = *(_QWORD *)(v27 + 56);
                      _m_prefetchw((const void *)(v45 + 68));
                      v46 = *(_DWORD *)(v45 + 68);
                      do
                      {
                        if ( !v46 )
                        {
                          *((_QWORD *)v28 + 7) = 0LL;
                          WdLogSingleEntry3(3LL, this, 0LL, -1073741811LL);
                          WdLogGlobalForLineNumber = 2599;
                          goto LABEL_85;
                        }
                        v47 = v46;
                        v46 = _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 68), v46 + 1, v46);
                      }
                      while ( v47 != v46 );
                      v48 = *(_QWORD *)(*((_QWORD *)v28 + 7) + 152LL);
                      if ( !v48 )
                        goto LABEL_51;
                      if ( *(DXGDEVICE **)(v48 + 80) == this )
                        ++*(_DWORD *)(v48 + 72);
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v109);
                      v49 = (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 4) != 0;
                      DXGAUTOMUTEX::DXGAUTOMUTEX(
                        (DXGAUTOMUTEX *)v110,
                        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v27 + 56) + 152LL) + 8LL),
                        0);
                      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v110);
                      v50 = a5;
                      if ( !a5 )
                        v50 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 56LL);
                      v51 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v27 + 56) + 152LL) + 56LL);
                      for ( i = *v51; i != (__int64 *)v51; i = (__int64 *)*i )
                      {
                        if ( v49 || !*((_BYTE *)i + 16) && v50 == (struct _EPROCESS *)i[3] )
                          goto LABEL_50;
                      }
                      WdLogSingleEntry3(3LL, this, *(_QWORD *)(v27 + 56), -1073741811LL);
                      WdLogGlobalForLineNumber = 2673;
                      v25 = -1073741811;
LABEL_50:
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v110);
                      if ( v25 >= 0 )
                      {
LABEL_51:
                        v53 = *(_QWORD *)(v27 + 56);
                        v54 = *(_QWORD *)(v53 + 136);
                        if ( (*(_DWORD *)(v54 - 44) & 2) != 0 )
                        {
                          if ( *(_DWORD *)(v53 + 132) != 1 )
                          {
                            v107 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                            if ( *((_DWORD *)v107 + 74) <= 1u || !DXGADAPTER::IsDxgmms2(v107) )
                            {
                              WdLogSingleEntry0(1LL);
                              WdLogGlobalForLineNumber = 2690;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->Get"
                                          "PhysicalAdapterCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                                2690LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                          }
                          *((_QWORD *)this + ((*(_DWORD *)(v54 - 44) >> 6) & 0xF) + 83) = v27;
                        }
                      }
                    }
                    goto LABEL_52;
                  }
                  WdLogSingleEntry3(3LL, this, *(_QWORD *)(v27 + 56), -1073741811LL);
                  WdLogGlobalForLineNumber = 2522;
                }
                else
                {
                  WdLogSingleEntry4(3LL, this, *v33, v106, -1073741811LL);
                  WdLogGlobalForLineNumber = 2511;
                }
              }
              else
              {
                WdLogSingleEntry4(3LL, this, *v33, *(_QWORD *)(v41 + 16), -1073741811LL);
                WdLogGlobalForLineNumber = 2487;
              }
            }
            else
            {
              v105 = PsGetCurrentProcessSessionId(v40, v37, v38, v39);
              WdLogSingleEntry5(3LL, this, *v33, *(unsigned int *)(*v33 + 72LL), v105, -1073741811LL);
              WdLogGlobalForLineNumber = 2477;
            }
          }
          else
          {
            WdLogSingleEntry4(3LL, this, v34, v35, -1073741811LL);
            WdLogGlobalForLineNumber = 2465;
          }
        }
        else
        {
          WdLogSingleEntry4(3LL, this, v34, a2->NumAllocations, -1073741811LL);
          WdLogGlobalForLineNumber = 2449;
        }
LABEL_85:
        v25 = -1073741811;
      }
LABEL_52:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v109);
      goto LABEL_53;
    }
    v99 = *((_DWORD *)Current + 102);
    if ( (v99 & 0x100) != 0 )
      v100 = *((_QWORD *)Current + 74);
    else
      v100 = (unsigned __int64)Current & -(__int64)((v99 & 0x80u) != 0);
    hGlobalShare = a2->hGlobalShare;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v100 + 248));
    v101 = (hGlobalShare >> 6) & 0xFFFFFF;
    if ( v101 < *(_DWORD *)(v100 + 296)
      && (v102 = *(_DWORD *)(*(_QWORD *)(v100 + 280) + 16LL * v101 + 8),
          ((hGlobalShare >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v100 + 280) + 16LL * v101 + 8) & 0x60))
      && (v102 & 0x2000) == 0
      && (v102 & 0x1F) != 0 )
    {
      v103 = *(_QWORD *)(v100 + 280);
      if ( (*(_BYTE *)(v103 + 16LL * v101 + 8) & 0x1F) != 2 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v116 = 0LL;
LABEL_189:
        _InterlockedAdd((volatile signed __int32 *)(v100 + 264), 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v100 + 248, 0LL);
        KeLeaveCriticalRegion();
        ObjectA = v116;
        goto LABEL_96;
      }
      v104 = *(_QWORD *)(v103 + 16LL * v101);
    }
    else
    {
      v104 = 0LL;
    }
    v116 = v104;
    goto LABEL_189;
  }
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                     *((struct ADAPTER_RENDER **)this + 2),
                     *((struct DXGADAPTER **)this + 237),
                     (*(_DWORD *)&a2->Flags & 0x800) != 0);
  *(_QWORD *)(v27 + 56) = SharedResource;
  if ( !SharedResource )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2709;
    goto LABEL_173;
  }
  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    *((_DWORD *)SharedResource + 3) |= 0x8000u;
  v58 = a2->NumAllocations;
  v59 = 0;
  v114 = v58;
  while ( 1 )
  {
    v112 = v59;
    if ( v59 >= v58 )
    {
      *(_DWORD *)(*(_QWORD *)(v27 + 56) + 132LL) = v58;
      *(_DWORD *)(v27 + 4) |= 2u;
      goto LABEL_72;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
      break;
    v60 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL);
    if ( !v60 )
      goto LABEL_116;
    *((_DWORD *)v60 + 1) = 0;
    *((_QWORD *)v60 + 1) = 0LL;
    *((_QWORD *)v60 + 2) = 0LL;
    *((_QWORD *)v60 + 4) = 0LL;
    *((_DWORD *)v60 + 10) = 0;
    *((_QWORD *)v60 + 7) = 0LL;
    *((_QWORD *)v60 + 6) = 0LL;
LABEL_69:
    v61 = (__int64 *)((char *)v60 + 48);
    v62 = *(_QWORD *)(v27 + 56) + 136LL;
    v63 = *(__int64 ***)(*(_QWORD *)(v27 + 56) + 144LL);
    if ( *v63 != (__int64 *)v62 )
      goto LABEL_70;
    v58 = v114;
    *v61 = v62;
    v61[1] = (__int64)v63;
    *v63 = v61;
    *(_QWORD *)(v62 + 8) = v61;
    v59 = v112 + 1;
  }
  v60 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
  if ( v60 )
    v60 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v60);
  if ( v60 )
    goto LABEL_69;
LABEL_116:
  WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
  v58 = v114;
  v25 = -1073741801;
  WdLogGlobalForLineNumber = 2733;
LABEL_72:
  if ( a9 )
    *(_QWORD *)(*(_QWORD *)(v27 + 56) + 184LL) = *((_QWORD *)a9 + 52);
  *(_DWORD *)(*(_QWORD *)(v27 + 56) + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v27 + 56) + 12LL) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 8;
  if ( v25 >= 0 && v58 > 1 )
  {
    v75 = 8LL * v58;
    v113 = v58;
    if ( !is_mul_ok(v58, 8uLL) )
      v75 = -1LL;
    *(_QWORD *)(*(_QWORD *)(v27 + 56) + 168LL) = operator new[](v75, 0x4B677844u, 256LL);
    if ( !*(_QWORD *)(*(_QWORD *)(v27 + 56) + 168LL) )
    {
      WdLogSingleEntry3(3LL, this, v113, -1073741801LL);
      WdLogGlobalForLineNumber = 2769;
      v25 = -1073741801;
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 4) == 0
    && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
  {
    *(_DWORD *)(*(_QWORD *)(v27 + 56) + 12LL) |= 1u;
  }
  v64 = a2->Flags;
  if ( (*(_DWORD *)&v64 & 0x200000) != 0 )
  {
    if ( (*(_WORD *)&v64 & 0x400) != 0 && a2->NumAllocations && (a3->Flags.Value & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v27 + 56) + 12LL) |= 0x4000u;
    }
    else
    {
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 2802;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Attempting to create shared displayable resource without expected flags, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v25 = -1073741811;
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
  {
    if ( v25 < 0 )
      goto LABEL_106;
    goto LABEL_54;
  }
  if ( v25 < 0 )
    goto LABEL_106;
  v65 = operator new(0x58uLL, 0x4B677844u, 64LL);
  v66 = v65;
  if ( !v65 )
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2821;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Out of memory allocating DXGSHAREDRESOURCEACCESS class, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_105;
  }
  *(_QWORD *)(v65 + 16) = 0LL;
  *(_QWORD *)(v65 + 24) = 0LL;
  *(_QWORD *)(v65 + 32) = 0LL;
  *(_DWORD *)(v65 + 40) = 0;
  *(_DWORD *)(v65 + 44) = 36;
  *(_DWORD *)(v65 + 48) = 76;
  *(_DWORD *)(v65 + 72) = 1;
  *(_QWORD *)(v65 + 80) = this;
  *(_QWORD *)(v65 + 64) = v65 + 56;
  *(_QWORD *)(v65 + 56) = v65 + 56;
  *(_QWORD *)(*(_QWORD *)(v27 + 56) + 152LL) = v65;
  v67 = *((_QWORD *)this + 5);
  if ( (*(_DWORD *)(v67 + 408) & 4) != 0 )
  {
    v69 = operator new(0x28uLL, 0x4B677844u, 256LL);
    if ( v69 )
    {
      *(_BYTE *)(v69 + 24) = 1;
      *(_QWORD *)(v69 + 32) = 0LL;
    }
    v68 = 0LL;
    if ( !v69 )
      goto LABEL_215;
LABEL_92:
    v70 = v66 + 56;
    v71 = (_QWORD *)(v69 + 8);
    v72 = *(_QWORD *)v70;
    if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) == v70 )
    {
      *v71 = v72;
      v71[1] = v70;
      *(_QWORD *)(v72 + 8) = v71;
      *(_QWORD *)v70 = v71;
      goto LABEL_54;
    }
LABEL_70:
    __fastfail(3u);
  }
  v68 = *(void **)(v67 + 56);
  ObfReferenceObject(v68);
  v69 = operator new(0x28uLL, 0x4B677844u, 256LL);
  if ( v69 )
  {
    *(_BYTE *)(v69 + 24) = 0;
    *(_QWORD *)(v69 + 32) = v68;
    goto LABEL_92;
  }
LABEL_215:
  if ( v68 )
    ObfDereferenceObject(v68);
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 2858;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_105:
  v25 = -1073741801;
LABEL_106:
  DXGSHAREDRESOURCE::ReleaseReference(*(DXGSHAREDRESOURCE **)(v27 + 56), 0LL, 0);
  *(_QWORD *)(v27 + 56) = 0LL;
LABEL_53:
  if ( v25 < 0 )
  {
LABEL_174:
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v55, (struct DXGRESOURCE *)v27, 0LL);
    DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)v27);
    goto LABEL_17;
  }
LABEL_54:
  *a8 = 1;
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v27);
  if ( *(_QWORD *)a7 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
  *(_QWORD *)a7 = v27;
  a8 = 0LL;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a8);
LABEL_17:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v108);
  return (unsigned int)v25;
}
