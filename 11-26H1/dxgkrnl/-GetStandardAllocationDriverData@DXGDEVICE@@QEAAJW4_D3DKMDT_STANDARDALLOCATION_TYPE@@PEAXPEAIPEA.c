/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x140397368
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::GetStandardAllocationDriverData(
        DXGDEVICE *this,
        enum _D3DKMDT_STANDARDALLOCATION_TYPE a2,
        D3DKMDT_SHAREDPRIMARYSURFACEDATA *a3,
        unsigned int *a4,
        void **a5)
{
  ADAPTER_RENDER *v6; // rcx
  void *v9; // r14
  int StandardAllocationDriverData; // eax
  __int64 v11; // rdi
  void *v12; // rax
  ADAPTER_RENDER *v14; // rcx
  int v15; // eax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v16; // [rsp+50h] [rbp-30h] BYREF

  memset(&v16, 0, sizeof(v16));
  v16.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v16.pCreateSharedPrimarySurfaceData = a3;
  v9 = 0LL;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v6, &v16);
  v11 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7425;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v11,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
  if ( v16.AllocationPrivateDriverDataSize || v16.ResourcePrivateDriverDataSize )
  {
    v12 = (void *)operator new[](v16.AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
    *a5 = v12;
    if ( v12 )
    {
      if ( !v16.ResourcePrivateDriverDataSize
        || (v9 = (void *)operator new[](v16.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL)) != 0LL )
      {
        v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v16.pAllocationPrivateDriverData = *a5;
        v16.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        v16.pCreateSharedPrimarySurfaceData = a3;
        v16.pResourcePrivateDriverData = v9;
        v15 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v14, &v16);
        v11 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry2(1LL, this, v15);
          WdLogGlobalForLineNumber = 7485;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Device 0x%I64x: Driver failed to generate pPrivateDriverData buffer, returning 0x%I64x",
            (__int64)this,
            v11,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *a4 = v16.AllocationPrivateDriverDataSize;
        }
      }
      else
      {
        LODWORD(v11) = -1073741801;
        WdLogSingleEntry2(3LL, v16.ResourcePrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7466;
      }
    }
    else
    {
      LODWORD(v11) = -1073741801;
      WdLogSingleEntry2(3LL, v16.AllocationPrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7449;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    if ( (int)v11 < 0 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a5);
    return (unsigned int)v11;
  }
  WdLogSingleEntry2(2LL, this, -1073741823LL);
  WdLogGlobalForLineNumber = 7434;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and                             "
              "pResourcePrivateDriverData buffer, returning 0x%I64x",
    (__int64)this,
    -1073741823LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
