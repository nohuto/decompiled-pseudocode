/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x140208210 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x140208FC0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140209190 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1402094A0 (DxgkUnOrderedPresentSwapChain.c)
 *     DxgkAcquireSwapChain @ 0x140300AB0 (DxgkAcquireSwapChain.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403015D4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x14001695C (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x140301748 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3,
        char a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v13; // rbp
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  struct _KEVENT *v23; // rbp
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 result; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  _BYTE v32[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h]
  char v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-68h]

  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v9 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v9 + 48) )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225558LL;
    WdLogGlobalForLineNumber = 4334;
  }
  else
  {
    if ( *(_BYTE *)this != 1 )
      goto LABEL_6;
    v10 = (__int64 *)(v9 + 160);
    if ( !*((_BYTE *)this + 16) )
      v10 = (__int64 *)(v9 + 112);
    v11 = *v10;
    if ( PsGetCurrentProcess(v8) != v11 )
    {
      CurrentProcessId = PsGetCurrentProcessId();
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 1), CurrentProcessId);
      result = 3221225506LL;
      WdLogGlobalForLineNumber = 4343;
    }
    else
    {
LABEL_6:
      Current = DXGPROCESS::GetCurrent(v8);
      v13 = Current;
      if ( a2 )
      {
        *a2 = 0LL;
        v14 = 0;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
        v15 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
        v16 = *(unsigned int *)(v15 + *((_QWORD *)this + 1) + 96);
        v17 = (*(_DWORD *)(v15 + *((_QWORD *)this + 1) + 96) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v17 < *((_DWORD *)v13 + 74) )
        {
          v18 = *((_QWORD *)v13 + 35);
          v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
          if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
            && (v19 & 0x2000) == 0
            && (v19 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v18 + 16 * (((unsigned __int64)(unsigned int)v16 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 3 )
            {
              WdLogSingleEntry0(2LL);
              v20 = 0LL;
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_18;
            }
            v20 = *(_QWORD *)(v18 + 16 * (((unsigned __int64)(unsigned int)v16 >> 6) & 0xFFFFFF));
            if ( !v20 )
            {
LABEL_18:
              WdLogSingleEntry2(3LL, v16, v13);
              WdLogGlobalForLineNumber = 4383;
              v14 = -1073741811;
LABEL_19:
              _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
              ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
              KeLeaveCriticalRegion();
              if ( !v20 || !a3 )
              {
LABEL_30:
                if ( v14 >= 0 )
                {
                  v26 = *((_QWORD *)this + 1);
                  if ( !*(_DWORD *)(v26 + 48) )
                  {
                    *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v26 + 104) = v20;
                    *a2 = (struct DXGDEVICE *)v20;
                    return (unsigned int)v14;
                  }
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 4440;
                  v14 = -1073741738;
                }
                DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
                return (unsigned int)v14;
              }
              DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
              v23 = *(struct _KEVENT **)(v20 + 16);
              if ( !KeReadStateEvent(v23 + 4) )
                KeWaitForSingleObject(&v23[4], Executive, 0, 0, 0LL);
              if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && a4 )
              {
                KeEnterCriticalRegion();
                if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 0) )
                  goto LABEL_25;
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v30, (__int64)"g");
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 1u);
              }
              else
              {
                KeEnterCriticalRegion();
                if ( ExAcquireResourceSharedLite(*(PERESOURCE *)(v20 + 136), 0) )
                {
LABEL_25:
                  *((_BYTE *)this + 41) = 1;
                  v24 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
                  v34 = v24;
                  v35 = 0;
                  v36 = 0LL;
                  if ( v24 )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
                    v33 = -1LL;
                  }
                  COREACCESS::operator=((__int64)this + 56, (unsigned __int64)v32);
                  COREACCESS::~COREACCESS((COREACCESS *)v32, v25);
                  COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), 0LL);
                  if ( *(_DWORD *)(v20 + 608) == 1 )
                  {
                    *((_BYTE *)this + 43) = 1;
                  }
                  else
                  {
                    COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
                    v14 = -1073741130;
                    WdLogSingleEntry2(3LL, v20, -1073741130LL);
                    WdLogGlobalForLineNumber = 4424;
                  }
                  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
                  goto LABEL_30;
                }
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v29, (__int64)"g");
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v20 + 136), 1u);
              }
              DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
              goto LABEL_25;
            }
            _m_prefetchw((const void *)(v20 + 64));
            v21 = *(_QWORD *)(v20 + 64);
            while ( v21 )
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 64), v21 + 1, v21);
              if ( v22 == v21 )
              {
                *((_BYTE *)this + 42) = 1;
                *((_QWORD *)this + 6) = v20;
                goto LABEL_19;
              }
            }
          }
        }
        v20 = 0LL;
        goto LABEL_18;
      }
      return 0LL;
    }
  }
  return result;
}
