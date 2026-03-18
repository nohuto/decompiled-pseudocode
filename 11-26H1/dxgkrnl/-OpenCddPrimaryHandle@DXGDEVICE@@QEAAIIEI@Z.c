/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14043F948
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140045E34 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1401A3470 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  char v6; // r12
  ADAPTER_DISPLAY *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v13; // r15d
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // r14
  void *v17; // r13
  int v18; // r14d
  _BYTE *Pool2; // rax
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rax
  __int128 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v28; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v30[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v31; // [rsp+238h] [rbp+138h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v8 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3160LL);
  v9 = a2;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9888;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 9888LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9889;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9889LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9890;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
      9890LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *((_QWORD *)this + v9 + 83);
  v11 = v9;
  if ( v10 && *((_DWORD *)this + 116) == 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v26, (struct DXGFASTMUTEX *const)(v10 + 80), 0);
    if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
    if ( (*(_DWORD *)(*((_QWORD *)this + v9 + 83) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9904;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
        9904LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v9 + 83) + 24LL) + 16LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9905;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
        9905LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v9 + 83) + 24LL) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
  }
  if ( !*((_QWORD *)this + v9 + 83) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, v9);
    v13 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v26 = 0LL;
      DWORD1(v26) = CddPrimaryShareResourceHandle;
      v27 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v26,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v14 = DWORD1(v27);
        v15 = DWORD1(v27) + DWORD2(v27);
        if ( (unsigned int)(DWORD1(v27) + DWORD2(v27)) >= DWORD1(v27) )
        {
          v16 = v15;
          v17 = (void *)operator new[](v15, 0x4B677844u, 256LL);
          if ( v17 )
          {
            memset(&v28, 0, 0x48uLL);
            v18 = HIDWORD(v27);
            P = 0LL;
            v31 = 0;
            if ( HIDWORD(v27) <= 4 )
            {
              Pool2 = v30;
              P = v30;
              if ( HIDWORD(v27) )
              {
                memset(v30, 0, 80LL * HIDWORD(v27));
                Pool2 = P;
              }
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v27) < 0x50 )
                goto LABEL_30;
              Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v27), 1265072196LL);
              P = Pool2;
            }
            v31 = v18;
            if ( !Pool2 )
            {
LABEL_30:
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 9946;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
                9946LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
              if ( P != v30 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
              }
              return 0LL;
            }
            *(&v28.hPagingQueue + 1) = v13;
            LODWORD(v28.BaseAddress) = v18;
            v28.MinimumAddress = (D3DGPU_VIRTUAL_ADDRESS)Pool2;
            if ( DWORD2(v27) )
              v28.OffsetInPages = (D3DGPU_SIZE_T)v17 + v14;
            else
              v28.OffsetInPages = 0LL;
            LODWORD(v28.SizeInPages) = DWORD2(v27);
            v28.Protection.Value = (UINT64)v17;
            LODWORD(v28.DriverProtection) = v14;
            if ( (_DWORD)v27 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9968;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"QueryResInfo.PrivateRuntimeDataSize == 0",
                9968LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v13 = *(&v28.hPagingQueue + 1);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)&v28,
                        v13,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              WdLogSingleEntry2(4LL, this, v11);
              WdLogGlobalForLineNumber = 9983;
            }
            else
            {
              *((_BYTE *)this + v11 + 648) = 1;
              if ( !*((_QWORD *)this + v11 + 83) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 9979;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pCddPrimaryResource[nOutput]",
                  9979LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
            if ( P != v30 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v31 = 0;
          }
          else
          {
            WdLogSingleEntry2(6LL, this, v16);
            WdLogGlobalForLineNumber = 9990;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Device 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
              (__int64)this,
              v16,
              0LL,
              0LL,
              0LL);
          }
          v5 = a4;
        }
        v6 = a3;
      }
    }
  }
  v21 = *((_QWORD *)this + v11 + 83);
  if ( !v21 )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v26, (struct DXGFASTMUTEX *const)(v21 + 80), 0);
  if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
  if ( (*(_DWORD *)(*((_QWORD *)this + v11 + 83) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10005;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
      10005LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v11 + 83) + 24LL) + 16LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10006;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
      10006LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v6
    && (memset(&v28, 0, sizeof(v28)),
        v22 = *((_QWORD *)this + 2),
        v28.Protection.Value = 1LL,
        v28.MinimumAddress = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 2992LL),
        v23 = *((_QWORD *)this + v11 + 83),
        v28.MaximumAddress = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 3000LL),
        (int)VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
               *(VIDMM_EXPORT **)(v22 + 760),
               *(struct VIDMM_GLOBAL **)(v22 + 768),
               0LL,
               *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v23 + 24) + 24LL),
               &v28,
               0,
               v5) < 0) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10028;
    DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v11 + 83) + 24LL) + 16LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
  return v4;
}
