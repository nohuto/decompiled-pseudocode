/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8
 * Callers:
 *     DxgkQueryResourceInfo @ 0x1403536E0 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1403572F0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403C9A7C (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14043F948 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140355588 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v6; // r13d
  struct DXGPROCESS *Current; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rbx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ADAPTER_RENDER *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned int i; // r8d
  unsigned int v17; // edx
  __int64 v19; // rbx
  __int64 v20; // r13
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // rbx
  int v24; // eax
  int StandardAllocationDriverData; // eax
  __int64 v26; // r15
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  volatile signed __int32 *v29; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v30[16]; // [rsp+58h] [rbp-41h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v31; // [rsp+68h] [rbp-31h] BYREF
  _DWORD v32[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]

  v3 = a3;
  LODWORD(v29) = 0;
  v6 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8283;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(a1);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
  {
    v19 = *((_QWORD *)Current + 74);
    v20 = v19 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 248));
    v21 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v19 + 296)
      && (v22 = *(_DWORD *)(*(_QWORD *)(v19 + 280) + 16LL * v21 + 8),
          (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v19 + 280) + 16LL * v21 + 8) & 0x60))
      && (v22 & 0x2000) == 0
      && (v22 & 0x1F) != 0 )
    {
      v23 = *(_QWORD *)(v19 + 280);
      if ( (*(_BYTE *)(v23 + 16LL * v21 + 8) & 0x1F) == 2 )
      {
        ObjectA = *(_QWORD *)(v23 + 16LL * v21);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        ObjectA = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      ObjectA = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 16));
    ExReleasePushLockSharedEx(v20, 0LL);
    KeLeaveCriticalRegion();
    v6 = (unsigned int)v29;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
  }
  if ( !ObjectA )
  {
    WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 8265;
LABEL_25:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
    return 3221225485LL;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v10 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v10 )
    {
      WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
      WdLogGlobalForLineNumber = 8274;
      goto LABEL_25;
    }
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v10 + 1, v10);
  }
  while ( v11 != v10 );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  v12 = *(ADAPTER_RENDER **)(a1 + 16);
  v29 = (volatile signed __int32 *)ObjectA;
  if ( *(ADAPTER_RENDER **)(ObjectA + 80) != v12
    || (v13 = *(_QWORD *)(a1 + 1896)) != 0
    && !*(_QWORD *)(v13 + 3168)
    && (v14 = *(_QWORD *)(ObjectA + 96)) != 0
    && v14 != v13 )
  {
    if ( (*(_DWORD *)(ObjectA + 12) & 0x20) != 0 )
    {
      LODWORD(v33) = *(_DWORD *)(ObjectA + 216);
      v32[0] = *(_DWORD *)(ObjectA + 208);
      v24 = *(_DWORD *)(ObjectA + 212);
      *((_DWORD *)&v31.StandardAllocationType + 1) = 0;
      v32[1] = v24;
      v31.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v32;
      v34 = 0LL;
      HIDWORD(v33) = 7;
      memset(&v31.pAllocationPrivateDriverData, 0, 32);
      v31.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v31);
      v26 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData >= 0 )
      {
        AllocationPrivateDriverDataSize = v31.AllocationPrivateDriverDataSize;
        ResourcePrivateDriverDataSize = v31.ResourcePrivateDriverDataSize;
        if ( v31.AllocationPrivateDriverDataSize || v31.ResourcePrivateDriverDataSize )
        {
          a2[7] = *(_DWORD *)(ObjectA + 132);
          a2[6] = ResourcePrivateDriverDataSize;
          a2[4] = *(_DWORD *)(ObjectA + 112);
          a2[5] = AllocationPrivateDriverDataSize;
LABEL_21:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(ObjectA + 68), 0xFFFFFFFF) == 1 )
            DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
          return v6;
        }
        WdLogSingleEntry2(2LL, a1, -1073741811LL);
        WdLogGlobalForLineNumber = 8365;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriver"
                    "Data buffer, returning 0x%I64x",
          a1,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v26) = -1073741811;
      }
      else
      {
        WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
        WdLogGlobalForLineNumber = 8357;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
          a1,
          v26,
          0LL,
          0LL,
          0LL);
      }
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v29);
      return (unsigned int)v26;
    }
    WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8330;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. Returning 0x%I64x",
      a1,
      -1073741811LL,
      1LL,
      0LL,
      0LL);
    DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
    return 3221225485LL;
  }
  LODWORD(v34) = 0;
  v33 = ObjectA + 32;
  if ( ObjectA != -32 && *(struct _KTHREAD **)(ObjectA + 40) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v32);
  a2[5] = 0;
  v15 = *(_QWORD **)(ObjectA + 136);
  for ( i = 0; ; i = v17 )
  {
    if ( v15 == (_QWORD *)(ObjectA + 136) )
    {
      a2[6] = *(_DWORD *)(ObjectA + 128);
      a2[7] = *(_DWORD *)(ObjectA + 132);
      a2[4] = *(_DWORD *)(ObjectA + 112);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      goto LABEL_21;
    }
    v17 = i + *((_DWORD *)v15 - 2);
    if ( v17 < i )
      break;
    a2[5] = v17;
    v6 = 0;
    v15 = (_QWORD *)*v15;
  }
  a2[5] = -1;
  WdLogSingleEntry2(3LL, a1, -1073741675LL);
  WdLogGlobalForLineNumber = 8390;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
  return 3221225621LL;
}
