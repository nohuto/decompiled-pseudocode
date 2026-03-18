/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035450C
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
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
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
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
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140355588 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        unsigned int *Src,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        int a4)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rdi
  void *v9; // r14
  void **v10; // rsi
  struct DXGDEVICE *v11; // r15
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // r13d
  ULONG_PTR Count; // r13
  int v16; // eax
  char v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  void *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int StandardAllocation; // r14d
  void *v26; // r13
  __int64 i; // rax
  unsigned int v28; // edi
  unsigned int v30; // eax
  unsigned int v31; // eax
  DXGSHAREDRESOURCE *v32; // rcx
  ADAPTER_RENDER **v33; // rcx
  struct DXGPROCESS *v34; // r13
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // edx
  struct DXGRESOURCE *v39; // rdi
  ADAPTER_RENDER **v40; // rcx
  unsigned int v41; // edi
  __int64 v42; // rcx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // eax
  void *v48; // rdi
  _DWORD *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  char v52; // [rsp+50h] [rbp-3E8h]
  char v53; // [rsp+51h] [rbp-3E7h]
  int v55; // [rsp+54h] [rbp-3E4h]
  int v56; // [rsp+54h] [rbp-3E4h]
  struct DXGDEVICE *v57; // [rsp+58h] [rbp-3E0h] BYREF
  void *v58; // [rsp+60h] [rbp-3D8h]
  struct DXGDEVICE *v59[2]; // [rsp+68h] [rbp-3D0h] BYREF
  void *Srca; // [rsp+78h] [rbp-3C0h]
  void *v61; // [rsp+80h] [rbp-3B8h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+88h] [rbp-3B0h] BYREF
  void *v63; // [rsp+90h] [rbp-3A8h]
  _BYTE v64[16]; // [rsp+98h] [rbp-3A0h] BYREF
  char v65[8]; // [rsp+A8h] [rbp-390h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-388h]
  char v67; // [rsp+B8h] [rbp-380h]
  void *v68; // [rsp+C0h] [rbp-378h]
  DXGSHAREDRESOURCE *v69; // [rsp+C8h] [rbp-370h] BYREF
  _DWORD *v70; // [rsp+D0h] [rbp-368h]
  void *v71; // [rsp+D8h] [rbp-360h]
  struct DXGPROCESS *v72; // [rsp+E0h] [rbp-358h]
  char *v73; // [rsp+E8h] [rbp-350h]
  void *v74; // [rsp+F0h] [rbp-348h]
  _BYTE v75[24]; // [rsp+F8h] [rbp-340h] BYREF
  _BYTE v76[112]; // [rsp+110h] [rbp-328h] BYREF
  _QWORD v77[54]; // [rsp+180h] [rbp-2B8h] BYREF
  _DWORD v78[4]; // [rsp+330h] [rbp-108h] BYREF
  __int64 v79; // [rsp+340h] [rbp-F8h]
  __int64 v80[20]; // [rsp+350h] [rbp-E8h] BYREF

  v62 = a3;
  v70 = Src;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v53 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v7);
  v72 = Current;
  v58 = 0LL;
  v9 = 0LL;
  v61 = 0LL;
  Srca = 0LL;
  v52 = 0;
  if ( !Current )
  {
    v28 = -1073741811;
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
    return v28;
  }
  memset(v76, 0, 0x68uLL);
  v10 = (void **)v76;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(v76, Src, 0x68uLL);
  else
    v10 = (void **)Src;
  v59[1] = (struct DXGDEVICE *)v10;
  v73 = (char *)v10[3];
  v63 = v10[7];
  v74 = v10[5];
  v71 = v10[9];
  v57 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v59, *(_DWORD *)v10, (struct _KTHREAD **)Current, &v57);
  v11 = v57;
  if ( !v57 )
  {
    v28 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)v10, -1073741811LL);
    WdLogGlobalForLineNumber = 11267;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_36;
  }
  if ( !*((_DWORD *)v10 + 16) && !*((_DWORD *)v10 + 12) )
  {
    v28 = -1073741811;
    WdLogSingleEntry2(3LL, v57, -1073741811LL);
    WdLogGlobalForLineNumber = 11277;
    goto LABEL_36;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64,
    v57);
  v66 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  v67 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v11, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, v11, v13);
    WdLogGlobalForLineNumber = 11293;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
    v28 = v14;
    goto LABEL_36;
  }
  if ( !a3 )
  {
    v28 = -1073741811;
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 11359;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  Count = a3[2].Count;
  if ( !Count )
  {
    v28 = -1073741811;
    WdLogSingleEntry3(3LL, v11, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 11306;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(Count + 12);
  if ( (v16 & 0x1000) != 0 && !a4 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11311;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
    v28 = -1073741790;
    goto LABEL_36;
  }
  v69 = 0LL;
  if ( (v16 & 0x10) != 0 )
  {
    v28 = -1073741823;
    WdLogSingleEntry2(4LL, Count, -1073741823LL);
    WdLogGlobalForLineNumber = 11385;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
    v40 = (ADAPTER_RENDER **)v59[0];
    if ( v59[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v59[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v40[2], (struct DXGDEVICE *)v40);
    return v28;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v75, Current);
  if ( v17 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v75, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
    v28 = v50;
    if ( v50 < 0 )
    {
      WdLogSingleEntry2(3LL, v11, v50);
      WdLogGlobalForLineNumber = 11410;
      goto LABEL_34;
    }
  }
  v18 = *((unsigned int *)v10 + 4);
  if ( 80 * v18 > 0xFFFFFFFF )
  {
    v28 = -1073741675;
    WdLogSingleEntry2(3LL, v11, -1073741675LL);
    WdLogGlobalForLineNumber = 11424;
LABEL_34:
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v75);
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v69);
LABEL_35:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
LABEL_36:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v59);
    return v28;
  }
  v19 = 80LL * *((unsigned int *)v10 + 4);
  if ( !is_mul_ok(v18, 0x50uLL) )
    v19 = -1LL;
  v68 = (void *)operator new[](v19, 0x4B677844u, 256LL);
  if ( v68 )
  {
    v20 = *((_DWORD *)v10 + 16);
    if ( v20 )
    {
      v9 = (void *)operator new[](v20, 0x4B677844u, 258LL);
      v61 = v9;
      if ( !v9 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v11, *((unsigned int *)v10 + 16), -1073741801LL);
        WdLogGlobalForLineNumber = 11449;
        goto LABEL_60;
      }
    }
    if ( *((_DWORD *)v10 + 12) )
    {
      v58 = (void *)operator new[](*((unsigned int *)v10 + 12), 0x4B677844u, 258LL);
      if ( !v58 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v11, *((unsigned int *)v10 + 12), -1073741801LL);
        WdLogGlobalForLineNumber = 11465;
        goto LABEL_60;
      }
    }
    v21 = *((_DWORD *)v10 + 8);
    if ( v21 )
    {
      v22 = (void *)operator new[](v21, 0x4B677844u, 258LL);
      Srca = v22;
      if ( !v22 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v11, *((unsigned int *)v10 + 8), -1073741801LL);
        WdLogGlobalForLineNumber = 11481;
        goto LABEL_60;
      }
    }
    else
    {
      v22 = Srca;
    }
    if ( (*((_BYTE *)v11 + 1917) & 1) != 0
      || (v23 = *((_QWORD *)v11 + 2), *(_QWORD *)(Count + 80) == v23)
      && ((v24 = *((_QWORD *)v11 + 237)) == 0
       || *(_QWORD *)(v24 + 3168)
       || (v51 = *(_QWORD *)(Count + 96)) == 0
       || v51 == v24) )
    {
      if ( v53 == 1 )
      {
        v10[9] = v9;
        v10[7] = v58;
        v10[5] = v22;
        v10[3] = v68;
      }
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                             v11,
                             0,
                             (__int64)v80,
                             a4,
                             0LL,
                             0LL,
                             0LL);
      if ( StandardAllocation < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11662;
        goto LABEL_44;
      }
      v52 = 1;
      v26 = v61;
LABEL_29:
      if ( v53 == 1 )
      {
        RtlWriteULongToUser(v70 + 20, *((_DWORD *)v10 + 20));
        RtlWriteULongToUser(v70 + 16, *((_DWORD *)v10 + 16));
        for ( i = 0LL; ; i = (unsigned int)(v55 + 1) )
        {
          v55 = i;
          if ( (unsigned int)i >= *((_DWORD *)v10 + 4) )
            break;
          *((_QWORD *)v10[3] + 10 * i + 1) = (char *)v71
                                           + (unsigned int)(*((_DWORD *)v10[3] + 20 * i + 2) - *((_DWORD *)v10 + 18));
          RtlCopyToUser(&v73[80 * i], (char *)v10[3] + 80 * i, 0x50uLL);
        }
        v30 = *((_DWORD *)v10 + 8);
        if ( v30 )
          RtlCopyToUser(v74, Srca, v30);
        if ( *((_DWORD *)v10 + 12) )
          RtlCopyToUser(v63, v58, *((unsigned int *)v10 + 12));
        v31 = *((_DWORD *)v10 + 16);
        if ( v31 )
          RtlCopyToUser(v71, v26, v31);
      }
LABEL_44:
      if ( StandardAllocation >= 0 )
        goto LABEL_45;
      goto LABEL_60;
    }
    v41 = *(_DWORD *)(Count + 12);
    if ( (v41 & 0x20) == 0 )
    {
      StandardAllocation = -1073741811;
      WdLogSingleEntry3(3LL, v11, v62, -1073741811LL);
      WdLogGlobalForLineNumber = 11639;
      goto LABEL_44;
    }
    if ( *(_DWORD *)(Count + 132) == *((_DWORD *)v10 + 4) )
    {
      v42 = *(unsigned int *)(Count + 112);
      v56 = v42;
      if ( *((_DWORD *)v10 + 8) == (_DWORD)v42 )
      {
        v43 = *(_DWORD *)(Count + 216);
        if ( !v43 && *(_DWORD *)(*(_QWORD *)(v23 + 16) + 2320LL) < 0x5000u )
        {
          WdLogSingleEntry2(3LL, v11, -1073741811LL);
          WdLogGlobalForLineNumber = 11542;
          goto LABEL_100;
        }
        v79 = 0LL;
        v78[2] = v43;
        v78[0] = *(_DWORD *)(Count + 208);
        v78[1] = *(_DWORD *)(Count + 212);
        v78[3] = 7;
        memset(v77, 0, 424);
        v44 = (4 * (v41 & 0x40 | (32 * (v41 & 0x80)))) | 0x41;
        HIDWORD(v77[0]) = *(_DWORD *)v10;
        LODWORD(v77[2]) = 4;
        v77[3] = v78;
        v77[39] = *(_QWORD *)(Count + 104);
        LODWORD(v77[40]) = v56;
        v45 = *(_QWORD *)(Count + 192);
        if ( (v41 & 0x200) != 0 )
          v77[42] = *(_QWORD *)(Count + 192);
        else
          v77[41] = *(_QWORD *)(Count + 192);
        v77[43] = *(_QWORD *)(Count + 224);
        LODWORD(v77[6]) = *(_DWORD *)(Count + 232);
        v77[44] = v58;
        LODWORD(v77[45]) = *((_DWORD *)v10 + 12);
        v77[46] = v9;
        LODWORD(v77[47]) = *((_DWORD *)v10 + 16);
        LODWORD(v77[0]) = v44 ^ (v44 ^ (v41 << 7)) & 0x400 | 0x200;
        v77[52] = *(_QWORD *)(Count + 184);
        if ( (v41 & 0x200) != 0 )
        {
          v77[42] = v45;
        }
        else
        {
          if ( (v41 & 0x400) == 0 )
            goto LABEL_81;
          v77[41] = v45;
        }
        v47 = *(_DWORD *)(Count + 204);
        v46 = v44 ^ (v44 ^ (v41 << 7)) & 0x400 | 0x200;
        LODWORD(v77[0]) = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(v41 >> 7)) & 0x10;
        LODWORD(v77[49]) = v47;
LABEL_81:
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v11,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v77,
                               (struct COREDEVICEACCESS *)v80);
        if ( StandardAllocation < 0 )
          goto LABEL_44;
        v52 = 1;
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v72, (DXGRESOURCEREFERENCE *)&v62, v77[1]) + 128LL) = Count;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v62);
        v48 = Srca;
        memmove(Srca, *(const void **)(Count + 104), *((unsigned int *)v10 + 8));
        *((_DWORD *)v10 + 20) = v77[1];
        v49 = v68;
        *(_DWORD *)v68 = HIDWORD(v77[6]);
        v49[4] = *((_DWORD *)v10 + 16);
        v26 = v61;
        *((_QWORD *)v49 + 1) = v61;
        v10[3] = v49;
        v10[5] = v48;
        v10[7] = v58;
        v10[9] = v26;
        goto LABEL_29;
      }
      WdLogSingleEntry4(3LL, v11, *((unsigned int *)v10 + 8), v42, -1073741811LL);
      WdLogGlobalForLineNumber = 11528;
    }
    else
    {
      WdLogSingleEntry4(3LL, v11, *((unsigned int *)v10 + 4), *(unsigned int *)(Count + 132), -1073741811LL);
      WdLogGlobalForLineNumber = 11517;
    }
LABEL_100:
    StandardAllocation = -1073741811;
LABEL_60:
    if ( v52 )
    {
      v34 = v72;
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v78, v72);
      v35 = *((_DWORD *)v10 + 20);
      v36 = (v35 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v36 < *((_DWORD *)v34 + 74) )
      {
        v37 = *((_QWORD *)v34 + 35);
        v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
        if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60) && (v38 & 0x2000) == 0 && (v38 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v37 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
          {
            v39 = *(struct DXGRESOURCE **)(v37 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF));
            if ( v39 )
              *(_DWORD *)(v37 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            goto LABEL_68;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v39 = 0LL;
LABEL_68:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v78);
      DXGDEVICE::DestroyAllocationInternal(v11, 0, 0LL, v39, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
LABEL_45:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v61);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v58);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v68);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Srca);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v75);
    v32 = v69;
    if ( v69 && _InterlockedExchangeAdd((volatile signed __int32 *)v69 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(v32, 0LL, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
    v33 = (ADAPTER_RENDER **)v59[0];
    if ( !v59[0] )
      return (unsigned int)StandardAllocation;
    goto LABEL_49;
  }
  StandardAllocation = -1073741801;
  WdLogSingleEntry3(3LL, v11, *((unsigned int *)v10 + 4), -1073741801LL);
  WdLogGlobalForLineNumber = 11435;
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v75);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
  v33 = (ADAPTER_RENDER **)v59[0];
  if ( v59[0] )
  {
LABEL_49:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v33[2], (struct DXGDEVICE *)v33);
  }
  return (unsigned int)StandardAllocation;
}
