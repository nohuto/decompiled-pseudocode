/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140396E10
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401EE398 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x140396410 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1403967E0 (DxgkQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x1403FAD2C (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHA.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  ADAPTER_RENDER *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  unsigned int i; // r8d
  unsigned int v12; // edx
  unsigned int v14; // edi
  int v15; // eax
  int StandardAllocationDriverData; // eax
  __int64 v17; // r15
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v21; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v22[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]

  if ( !a4 )
  {
    v14 = -1073741811;
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
    return v14;
  }
  v6 = *(_QWORD *)(a4 + 16);
  if ( !v6 )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 8233;
    return v14;
  }
  v7 = *(ADAPTER_RENDER **)(a1 + 16);
  v20 = 0LL;
  if ( *(ADAPTER_RENDER **)(v6 + 80) == v7 )
  {
    v8 = *(_QWORD *)(a1 + 1896);
    if ( !v8 || *(_QWORD *)(v8 + 3168) || (v9 = *(_QWORD *)(v6 + 96)) == 0 || v9 == v8 )
    {
      LODWORD(v24) = 0;
      v23 = v6 + 32;
      if ( v6 != -32 && *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
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
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v22);
      a2[7] = 0;
      v10 = *(_QWORD **)(v6 + 136);
      for ( i = 0; ; i = v12 )
      {
        if ( v10 == (_QWORD *)(v6 + 136) )
        {
          a2[8] = *(_DWORD *)(v6 + 128);
          a2[9] = *(_DWORD *)(v6 + 132);
          a2[6] = *(_DWORD *)(v6 + 112);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
          return 0LL;
        }
        v12 = i + *((_DWORD *)v10 - 2);
        if ( v12 < i )
          break;
        a2[7] = v12;
        v10 = (_QWORD *)*v10;
      }
      v14 = -1073741675;
      a2[7] = -1;
      WdLogSingleEntry2(3LL, a1, -1073741675LL);
      WdLogGlobalForLineNumber = 8390;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
      return v14;
    }
  }
  if ( (*(_DWORD *)(v6 + 12) & 0x20) == 0 )
  {
    v14 = -1073741811;
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
    return v14;
  }
  LODWORD(v23) = *(_DWORD *)(v6 + 216);
  v22[0] = *(_DWORD *)(v6 + 208);
  v15 = *(_DWORD *)(v6 + 212);
  *((_DWORD *)&v21.StandardAllocationType + 1) = 0;
  v22[1] = v15;
  v21.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v22;
  v24 = 0LL;
  HIDWORD(v23) = 7;
  memset(&v21.pAllocationPrivateDriverData, 0, 32);
  v21.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v7, &v21);
  v17 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 8357;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      a1,
      v17,
      0LL,
      0LL,
      0LL);
LABEL_29:
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v20);
    return (unsigned int)v17;
  }
  AllocationPrivateDriverDataSize = v21.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v21.ResourcePrivateDriverDataSize;
  if ( !v21.AllocationPrivateDriverDataSize && !v21.ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8365;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData"
                " buffer, returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v17) = -1073741811;
    goto LABEL_29;
  }
  a2[9] = *(_DWORD *)(v6 + 132);
  a2[8] = ResourcePrivateDriverDataSize;
  a2[6] = *(_DWORD *)(v6 + 112);
  a2[7] = AllocationPrivateDriverDataSize;
  return 0LL;
}
