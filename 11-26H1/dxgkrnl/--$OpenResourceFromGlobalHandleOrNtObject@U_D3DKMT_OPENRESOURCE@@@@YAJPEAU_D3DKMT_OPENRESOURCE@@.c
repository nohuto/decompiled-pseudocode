/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403CDBFC
 * Callers:
 *     DxgkOpenResource @ 0x1403CDAA0 (DxgkOpenResource.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140355588 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(unsigned int *Src, unsigned int a2)
{
  char CurrentThreadPreviousMode; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int *v7; // rsi
  struct DXGDEVICE *v8; // r15
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  char v16; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  void *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // di
  int StandardAllocation; // r14d
  struct DXGPROCESS *v25; // r12
  _DWORD *v26; // rdi
  unsigned int i; // edi
  unsigned int v28; // eax
  unsigned int v29; // eax
  ADAPTER_RENDER **v30; // rcx
  bool v31; // zf
  __int64 v33; // r8
  __int64 v34; // rdi
  unsigned int v35; // edx
  unsigned int v36; // r8d
  __int64 v38; // rdi
  void *v39; // rax
  int v40; // eax
  unsigned int v41; // r14d
  unsigned int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // edx
  struct DXGRESOURCE *v46; // rdi
  __int64 v47; // rcx
  unsigned int v48; // r14d
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // eax
  const void *v56; // rdx
  void *v57; // rdi
  _DWORD *v58; // rcx
  void *v59; // rax
  char v60; // [rsp+50h] [rbp-3C8h]
  char v61; // [rsp+51h] [rbp-3C7h]
  struct DXGPROCESS *v62; // [rsp+58h] [rbp-3C0h]
  struct _EX_RUNDOWN_REF *v63; // [rsp+60h] [rbp-3B8h] BYREF
  struct DXGDEVICE *v64; // [rsp+68h] [rbp-3B0h] BYREF
  void *v65; // [rsp+70h] [rbp-3A8h]
  void *v66; // [rsp+78h] [rbp-3A0h]
  unsigned int *v67; // [rsp+80h] [rbp-398h]
  void *Srca; // [rsp+88h] [rbp-390h]
  DXGSHAREDRESOURCE *v69; // [rsp+90h] [rbp-388h] BYREF
  struct DXGDEVICE *v70; // [rsp+98h] [rbp-380h] BYREF
  void *v71; // [rsp+A0h] [rbp-378h]
  _BYTE v72[16]; // [rsp+A8h] [rbp-370h] BYREF
  _BYTE v73[8]; // [rsp+B8h] [rbp-360h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-358h]
  char v75; // [rsp+C8h] [rbp-350h]
  void *v76; // [rsp+D0h] [rbp-348h]
  void *v77; // [rsp+D8h] [rbp-340h]
  _BYTE v78[16]; // [rsp+E0h] [rbp-338h] BYREF
  _DWORD *v79; // [rsp+F0h] [rbp-328h]
  __int64 v80; // [rsp+F8h] [rbp-320h]
  void *v81; // [rsp+100h] [rbp-318h]
  _BYTE v82[24]; // [rsp+108h] [rbp-310h] BYREF
  _BYTE v83[80]; // [rsp+120h] [rbp-2F8h] BYREF
  _QWORD v84[54]; // [rsp+170h] [rbp-2A8h] BYREF
  _DWORD v85[4]; // [rsp+320h] [rbp-F8h] BYREF
  __int64 v86; // [rsp+330h] [rbp-E8h]
  __int64 v87[20]; // [rsp+340h] [rbp-D8h] BYREF

  LODWORD(v63) = a2;
  v79 = Src;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v61 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v5);
  v62 = Current;
  v66 = 0LL;
  v65 = 0LL;
  Srca = 0LL;
  v60 = 0;
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11229;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v11;
  }
  memset(v83, 0, 0x48uLL);
  v7 = (unsigned int *)v83;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(v83, Src, 0x48uLL);
  else
    v7 = Src;
  v67 = v7;
  v80 = *((_QWORD *)v7 + 2);
  v76 = (void *)*((_QWORD *)v7 + 5);
  v81 = (void *)*((_QWORD *)v7 + 3);
  v77 = (void *)*((_QWORD *)v7 + 7);
  v64 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v70, *v7, (struct _KTHREAD **)Current, &v64);
  v8 = v64;
  if ( !v64 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, *v7, -1073741811LL);
    WdLogGlobalForLineNumber = 11267;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_54;
  }
  if ( !v7[16] && !v7[12] )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(3LL, v64, -1073741811LL);
    WdLogGlobalForLineNumber = 11277;
    goto LABEL_54;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72,
    v64);
  v74 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  v75 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)v8, 2, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v87, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v10);
    WdLogGlobalForLineNumber = 11293;
    goto LABEL_53;
  }
  if ( !a2 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 11359;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_53;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v78);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
  if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
  {
    v34 = *((_QWORD *)Current + 74);
    v71 = (void *)(v34 + 248);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v34 + 248));
    v35 = (a2 >> 6) & 0xFFFFFF;
    if ( v35 < *(_DWORD *)(v34 + 296)
      && (v36 = *(_DWORD *)(*(_QWORD *)(v34 + 280) + 16LL * v35 + 8), a2 >> 30 == ((v36 >> 5) & 3))
      && (v36 & 0x2000) == 0
      && (v36 & 0x1F) != 0 )
    {
      v38 = *(_QWORD *)(v34 + 280);
      if ( (*(_BYTE *)(v38 + 16LL * v35 + 8) & 0x1F) == 2 )
      {
        ObjectA = *(_QWORD *)(v38 + 16LL * v35);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        ObjectA = 0LL;
      }
    }
    else
    {
      ObjectA = 0LL;
    }
    v39 = v71;
    _InterlockedDecrement((volatile signed __int32 *)v71 + 4);
    ExReleasePushLockSharedEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  }
  if ( !ObjectA )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(3LL, v8, (unsigned int)v63, -1073741811LL);
    WdLogGlobalForLineNumber = 11337;
    goto LABEL_58;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v14 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v14 )
    {
      v11 = -1073741811;
      WdLogSingleEntry3(3LL, v8, (unsigned int)v63, -1073741811LL);
      WdLogGlobalForLineNumber = 11349;
LABEL_58:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
      goto LABEL_53;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v14 + 1, v14);
  }
  while ( v15 != v14 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
  v69 = (DXGSHAREDRESOURCE *)ObjectA;
  if ( (*(_DWORD *)(ObjectA + 12) & 0x10) != 0 )
  {
    WdLogSingleEntry2(4LL, ObjectA, -1073741823LL);
    WdLogGlobalForLineNumber = 11385;
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v69);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
    v11 = -1073741823;
    goto LABEL_54;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v82, Current);
  if ( !v16
    || (COREDEVICEACCESS::Release((COREDEVICEACCESS *)v87),
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73),
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v82, 1u),
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73),
        v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v87, 0LL),
        v41 = v40,
        v40 >= 0) )
  {
    if ( 80 * (unsigned __int64)v7[2] <= 0xFFFFFFFF )
    {
      v17 = 80LL * v7[2];
      if ( !is_mul_ok(v7[2], 0x50uLL) )
        v17 = -1LL;
      v71 = (void *)operator new[](v17, 0x4B677844u, 256LL);
      if ( !v71 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v8, v7[2], -1073741801LL);
        WdLogGlobalForLineNumber = 11435;
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
        if ( v69 )
          DXGSHAREDRESOURCE::ReleaseReference(v69, 0LL, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
        v30 = (ADAPTER_RENDER **)v70;
        if ( !v70 )
          return (unsigned int)StandardAllocation;
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
        goto LABEL_49;
      }
      v18 = v7[16];
      if ( v18 )
      {
        v65 = (void *)operator new[](v18, 0x4B677844u, 258LL);
        if ( !v65 )
        {
          StandardAllocation = -1073741801;
          WdLogSingleEntry3(3LL, v8, v7[16], -1073741801LL);
          WdLogGlobalForLineNumber = 11449;
LABEL_88:
          v25 = v62;
LABEL_89:
          if ( v60 )
          {
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v85, v25);
            v42 = v7[17];
            v43 = (v42 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v43 < *((_DWORD *)v25 + 74) )
            {
              v44 = *((_QWORD *)v25 + 35);
              v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
              if ( ((v42 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
                && (v45 & 0x2000) == 0
                && (v45 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v44 + 16LL * ((v42 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
                {
                  v46 = *(struct DXGRESOURCE **)(v44 + 16LL * ((v42 >> 6) & 0xFFFFFF));
                  if ( v46 )
                    *(_DWORD *)(v44 + 16LL * ((v42 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  goto LABEL_97;
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
            v46 = 0LL;
LABEL_97:
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v85);
            DXGDEVICE::DestroyAllocationInternal(v8, 0, 0LL, v46, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_45:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v65);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v66);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v71);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Srca);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
          if ( v69 )
            DXGSHAREDRESOURCE::ReleaseReference(v69, 0LL, 0);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
          v30 = (ADAPTER_RENDER **)v70;
          if ( !v70 )
            return (unsigned int)StandardAllocation;
          v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_49:
          if ( v31 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v30[2], (struct DXGDEVICE *)v30);
          return (unsigned int)StandardAllocation;
        }
      }
      if ( v7[12] )
      {
        v66 = (void *)operator new[](v7[12], 0x4B677844u, 258LL);
        if ( !v66 )
        {
          StandardAllocation = -1073741801;
          WdLogSingleEntry3(3LL, v8, v7[12], -1073741801LL);
          WdLogGlobalForLineNumber = 11465;
          goto LABEL_88;
        }
      }
      v19 = v7[8];
      if ( v19 )
      {
        v20 = (void *)operator new[](v19, 0x4B677844u, 258LL);
        Srca = v20;
        if ( !v20 )
        {
          StandardAllocation = -1073741801;
          WdLogSingleEntry3(3LL, v8, v7[8], -1073741801LL);
          WdLogGlobalForLineNumber = 11481;
          goto LABEL_88;
        }
      }
      else
      {
        v20 = Srca;
      }
      if ( (*((_BYTE *)v8 + 1917) & 1) != 0
        || (v21 = *((_QWORD *)v8 + 2), *(_QWORD *)(ObjectA + 80) == v21)
        && ((v22 = *((_QWORD *)v8 + 237)) == 0
         || *(_QWORD *)(v22 + 3168)
         || (v47 = *(_QWORD *)(ObjectA + 96)) == 0
         || v47 == v22) )
      {
        v23 = v61;
        if ( v61 == 1 )
        {
          *((_QWORD *)v7 + 7) = v65;
          *((_QWORD *)v7 + 5) = v66;
          *((_QWORD *)v7 + 3) = v20;
          *((_QWORD *)v7 + 2) = v71;
        }
        StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                               v8,
                               (__int64)v7,
                               (unsigned int)v63,
                               0LL,
                               0,
                               (struct COREDEVICEACCESS *)v87,
                               0,
                               0LL,
                               0LL,
                               0LL);
        if ( StandardAllocation >= 0 )
        {
          v60 = 1;
          v25 = v62;
          goto LABEL_33;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11662;
      }
      else
      {
        v48 = *(_DWORD *)(ObjectA + 12);
        if ( (v48 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(ObjectA + 132) != v7[2] )
          {
            WdLogSingleEntry4(3LL, v8, v7[2], *(unsigned int *)(ObjectA + 132), -1073741811LL);
            WdLogGlobalForLineNumber = 11517;
LABEL_87:
            StandardAllocation = -1073741811;
            goto LABEL_88;
          }
          v49 = *(_DWORD *)(ObjectA + 112);
          LODWORD(v63) = v49;
          v50 = v7[8];
          if ( v50 != v49 )
          {
            WdLogSingleEntry4(3LL, v8, v50, v49, -1073741811LL);
            WdLogGlobalForLineNumber = 11528;
            goto LABEL_87;
          }
          v51 = *(_DWORD *)(ObjectA + 216);
          if ( !v51 && *(_DWORD *)(*(_QWORD *)(v21 + 16) + 2320LL) < 0x5000u )
          {
            WdLogSingleEntry2(3LL, v8, -1073741811LL);
            WdLogGlobalForLineNumber = 11542;
            goto LABEL_87;
          }
          v86 = 0LL;
          v85[2] = v51;
          v85[0] = *(_DWORD *)(ObjectA + 208);
          v85[1] = *(_DWORD *)(ObjectA + 212);
          v85[3] = 7;
          memset(v84, 0, 424);
          v52 = (4 * (v48 & 0x40 | (32 * (v48 & 0x80)))) | 0x41;
          HIDWORD(v84[0]) = *v7;
          LODWORD(v84[2]) = 4;
          v84[3] = v85;
          v84[39] = *(_QWORD *)(ObjectA + 104);
          LODWORD(v84[40]) = (_DWORD)v63;
          v53 = *(_QWORD *)(ObjectA + 192);
          if ( (v48 & 0x200) != 0 )
            v84[42] = *(_QWORD *)(ObjectA + 192);
          else
            v84[41] = *(_QWORD *)(ObjectA + 192);
          v84[43] = *(_QWORD *)(ObjectA + 224);
          LODWORD(v84[6]) = *(_DWORD *)(ObjectA + 232);
          v84[44] = v66;
          LODWORD(v84[45]) = v7[12];
          v84[46] = v65;
          LODWORD(v84[47]) = v7[16];
          LODWORD(v84[0]) = v52 ^ (v52 ^ (v48 << 7)) & 0x400 | 0x200;
          v84[52] = *(_QWORD *)(ObjectA + 184);
          if ( (v48 & 0x200) != 0 )
          {
            v84[42] = v53;
          }
          else
          {
            if ( (v48 & 0x400) == 0 )
            {
LABEL_118:
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v8,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v84,
                                     (struct COREDEVICEACCESS *)v87);
              v25 = v62;
              if ( StandardAllocation < 0 )
                goto LABEL_44;
              v60 = 1;
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v62, (DXGRESOURCEREFERENCE *)&v63, v84[1])
                        + 128LL) = ObjectA;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v63);
              v56 = *(const void **)(ObjectA + 104);
              v57 = Srca;
              memmove(Srca, v56, v7[8]);
              v7[17] = v84[1];
              v58 = v71;
              *(_DWORD *)v71 = HIDWORD(v84[6]);
              v58[4] = v7[16];
              v59 = v65;
              *((_QWORD *)v58 + 1) = v65;
              *((_QWORD *)v7 + 2) = v58;
              *((_QWORD *)v7 + 3) = v57;
              *((_QWORD *)v7 + 5) = v66;
              *((_QWORD *)v7 + 7) = v59;
              v23 = v61;
LABEL_33:
              if ( v23 == 1 )
              {
                v26 = v79;
                RtlWriteULongToUser(v79 + 17, v7[17]);
                RtlWriteULongToUser(v26 + 16, v7[16]);
                for ( i = 0; i < v7[2]; ++i )
                {
                  v33 = 80LL * i;
                  *(_QWORD *)(*((_QWORD *)v7 + 2) + v33 + 8) = (char *)v77
                                                             + *(_DWORD *)(*((_QWORD *)v7 + 2) + v33 + 8)
                                                             - v7[14];
                  RtlCopyToUser((void *)(v33 + v80), (void *)(v33 + *((_QWORD *)v7 + 2)), 0x50uLL);
                }
                v28 = v7[8];
                if ( v28 )
                  RtlCopyToUser(v81, Srca, v28);
                if ( v7[12] )
                  RtlCopyToUser(v76, v66, v7[12]);
                v29 = v7[16];
                if ( v29 )
                  RtlCopyToUser(v77, v65, v29);
              }
LABEL_44:
              if ( StandardAllocation >= 0 )
                goto LABEL_45;
              goto LABEL_89;
            }
            v84[41] = v53;
          }
          v55 = *(_DWORD *)(ObjectA + 204);
          v54 = v52 ^ (v52 ^ (v48 << 7)) & 0x400 | 0x200;
          LODWORD(v84[0]) = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(v48 >> 7)) & 0x10;
          LODWORD(v84[49]) = v55;
          goto LABEL_118;
        }
        StandardAllocation = -1073741811;
        WdLogSingleEntry3(3LL, v8, 0LL, -1073741811LL);
        WdLogGlobalForLineNumber = 11639;
      }
      v25 = v62;
      goto LABEL_44;
    }
    v11 = -1073741675;
    WdLogSingleEntry2(3LL, v8, -1073741675LL);
    WdLogGlobalForLineNumber = 11424;
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v69);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
    goto LABEL_54;
  }
  WdLogSingleEntry2(3LL, v8, v40);
  WdLogGlobalForLineNumber = 11410;
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
  `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v69);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
  v11 = v41;
LABEL_54:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v70);
  return v11;
}
