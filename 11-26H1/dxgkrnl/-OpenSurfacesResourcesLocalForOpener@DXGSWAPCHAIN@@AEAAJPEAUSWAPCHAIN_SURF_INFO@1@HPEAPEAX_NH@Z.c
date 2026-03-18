/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C
 * Callers:
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x140206AF4 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140050C1C (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x140206508 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4,
        bool a5,
        unsigned __int8 a6)
{
  __int64 v9; // rcx
  int v10; // eax
  struct DXGSYNCOBJECT *v11; // r13
  int v13; // ebx
  __int64 v14; // r15
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  char *v23; // r13
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  const wchar_t *v27; // r9
  unsigned int hSyncObject; // ebx
  int v29; // eax
  struct DXGGLOBAL *v30; // rax
  DXGGLOBAL *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  struct DXGPROCESS *v35; // r15
  char *v36; // r13
  unsigned int v37; // ecx
  __int64 v38; // r9
  int v39; // r8d
  unsigned __int64 v40; // r14
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGPROCESS *Current; // r15
  unsigned int v47; // ecx
  __int64 v48; // r9
  int v49; // r8d
  unsigned __int64 v50; // r14
  struct DXGADAPTERSYNCOBJECT **v51; // [rsp+20h] [rbp-99h]
  struct DXGADAPTERSYNCOBJECT **v52; // [rsp+20h] [rbp-99h]
  struct DXGADAPTERSYNCOBJECT **v53; // [rsp+20h] [rbp-99h]
  int v54; // [rsp+38h] [rbp-81h]
  int v55; // [rsp+38h] [rbp-81h]
  _QWORD v56[2]; // [rsp+50h] [rbp-69h] BYREF
  struct DXGSYNCOBJECT *v57[2]; // [rsp+60h] [rbp-59h] BYREF
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 v58; // [rsp+70h] [rbp-49h] BYREF
  __int64 v59; // [rsp+110h] [rbp+57h]
  unsigned int v60; // [rsp+120h] [rbp+67h] BYREF
  void **v61; // [rsp+128h] [rbp+6Fh]

  v61 = a4;
  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2492;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2492LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = DXGSWAPCHAIN::SwitchClient(v9, a3 == 0);
  v11 = *(struct DXGSYNCOBJECT **)((char *)this + (-(__int64)(v10 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 160);
  v57[0] = v11;
  if ( !v11 )
    return 3221225558LL;
  v13 = *((_DWORD *)this + 18);
  v14 = 6LL * v10;
  v59 = 48LL * (a3 == 0);
  v56[0] = (char *)a2 + v59 + 104;
  CurrentProcess = PsGetCurrentProcess((unsigned int)-v10);
  LOBYTE(v54) = 1;
  LODWORD(v51) = v13;
  v16 = ObDuplicateObject(v11, *((_QWORD *)a2 + v14 + 13), CurrentProcess, v56[0], v51, 0, 4, v54);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = PsGetCurrentProcess(v17);
    WdLogSingleEntry4(2LL, *((_QWORD *)a2 + v14 + 13), v11, v19, v18);
    WdLogGlobalForLineNumber = 2524;
    v21 = PsGetCurrentProcess(v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to dup NT handle 0x%I64x into from creator process 0x%I64x, to process 0x%I64x, status 0x%I64x",
      *((_QWORD *)a2 + v14 + 13),
      (__int64)v11,
      v21,
      v18,
      0LL);
LABEL_30:
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + (a3 != 0 ? 144LL : 96LL)));
    return (unsigned int)v18;
  }
  if ( v61 )
    *v61 = *(void **)v56[0];
  v60 = 0;
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v56);
    v42 = DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::OpenSyncObject(v42, *((_DWORD *)a2 + 7), v57, &v60, 0LL);
    if ( (int)v18 < 0 )
    {
      v44 = PsGetCurrentProcess(v43);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v44);
      WdLogGlobalForLineNumber = 2606;
      goto LABEL_29;
    }
    Current = DXGPROCESS::GetCurrent();
    v36 = (char *)Current + 248;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = v60;
    v47 = (v60 >> 6) & 0xFFFFFF;
    if ( v47 < *((_DWORD *)Current + 74) )
    {
      v48 = *((_QWORD *)Current + 35);
      v49 = *(_DWORD *)(v48 + 16LL * v47 + 8);
      if ( ((v60 >> 25) & 0x60) == (v49 & 0x60) && (v49 & 0x1F) != 0 )
      {
        v50 = 16 * (((unsigned __int64)v60 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v48 + v50 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(v50 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
      }
    }
LABEL_37:
    *((_QWORD *)v36 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v36, 0LL);
    KeLeaveCriticalRegion();
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56);
    goto LABEL_38;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v30 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56, v30, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v56);
    v31 = DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::OpenSyncObject(v31, *((_DWORD *)a2 + 7), v57, &v60, 0LL);
    if ( (int)v18 < 0 )
    {
      v33 = PsGetCurrentProcess(v32);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v33);
      WdLogGlobalForLineNumber = 2587;
LABEL_29:
      v45 = PsGetCurrentProcess(v34);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v45,
        0LL,
        0LL,
        0LL);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56);
      goto LABEL_30;
    }
    v35 = DXGPROCESS::GetCurrent();
    v36 = (char *)v35 + 248;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v35 + 248));
    hSyncObject = v60;
    v37 = (v60 >> 6) & 0xFFFFFF;
    if ( v37 < *((_DWORD *)v35 + 74) )
    {
      v38 = *((_QWORD *)v35 + 35);
      v39 = *(_DWORD *)(v38 + 16LL * v37 + 8);
      if ( ((v60 >> 25) & 0x60) == (v39 & 0x60) && (v39 & 0x1F) != 0 )
      {
        v40 = 16 * (((unsigned __int64)v60 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v38 + v40 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)v35 + 35) + v40 + 8) &= ~0x2000u;
      }
    }
    goto LABEL_37;
  }
  v23 = (char *)a2 + v59;
  v24 = PsGetCurrentProcess(v22);
  LOBYTE(v55) = 1;
  LODWORD(v52) = 0;
  v25 = ObDuplicateObject(v57[0], *((_QWORD *)a2 + v14 + 11), v24, (char *)a2 + v59 + 88, v52, 0, 6, v55);
  v18 = v25;
  if ( v25 >= 0 )
  {
    if ( a5 )
    {
      hSyncObject = *((_DWORD *)a2 + 7);
    }
    else
    {
      memset(&v58, 0, sizeof(v58));
      v58.hNtHandle = (HANDLE)*((_QWORD *)v23 + 11);
      v58.Flags.Value |= 0x83u;
      v58.hDevice = *(_DWORD *)((char *)this + (a3 != 0 ? 0x30 : 0) + 96);
      v29 = DxgkOpenSyncObjectFromNtHandle2Impl(&v58, 0, a6, a6, v53);
      v18 = v29;
      if ( v29 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v23 + 11), v29);
        v26 = *((_QWORD *)v23 + 11);
        v27 = L"Failed to open Fence Nt handle 0x%I64x, error 0x%I64x";
        WdLogGlobalForLineNumber = 2572;
        goto LABEL_13;
      }
      hSyncObject = v58.hSyncObject;
    }
LABEL_38:
    *(_DWORD *)((char *)a2 + v59 + 80) = hSyncObject;
    *((_BYTE *)a2 + v59 + 64) = 1;
    return (unsigned int)v18;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)a2 + v14 + 11), v25);
  v26 = *((_QWORD *)a2 + v14 + 11);
  v27 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
  WdLogGlobalForLineNumber = 2551;
LABEL_13:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, v18, 0LL, 0LL, 0LL);
  return (unsigned int)v18;
}
