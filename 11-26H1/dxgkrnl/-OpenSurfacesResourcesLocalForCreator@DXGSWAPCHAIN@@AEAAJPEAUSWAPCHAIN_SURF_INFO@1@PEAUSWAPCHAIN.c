/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x140206CB4
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1400823B8 (McTemplateK0pqp_EtwWriteTransfer.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4,
        int a5,
        bool a6)
{
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdi
  const wchar_t *v13; // r9
  PVOID v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  PVOID **v30; // r13
  int v31; // eax
  __int64 v32; // rsi
  D3DKMT_HANDLE hSyncObject; // ebx
  PVOID *v34; // rax
  bool v35; // cf
  int v36; // eax
  struct DXGGLOBAL *v37; // rax
  DXGGLOBAL *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  struct DXGPROCESS *Current; // r15
  char *v44; // r14
  unsigned int v45; // ecx
  __int64 v46; // r9
  int v47; // r8d
  unsigned __int64 v48; // rdi
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // r9
  int v55; // r8d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v56; // rax
  PVOID *Object; // [rsp+20h] [rbp-99h]
  PVOID *Objecta; // [rsp+20h] [rbp-99h]
  PVOID *Objectb; // [rsp+20h] [rbp-99h]
  PVOID *Objectc; // [rsp+20h] [rbp-99h]
  int v61; // [rsp+38h] [rbp-81h]
  int v62; // [rsp+38h] [rbp-81h]
  struct DXGSYNCOBJECT *v63; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v64[24]; // [rsp+58h] [rbp-61h] BYREF
  _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 v65; // [rsp+70h] [rbp-49h] BYREF
  PVOID v66; // [rsp+110h] [rbp+57h] BYREF
  __int64 v67; // [rsp+118h] [rbp+5Fh] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v68; // [rsp+120h] [rbp+67h]

  v68 = a3;
  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2325;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2325LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)a2 = 0LL;
  v66 = 0LL;
  v10 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v66, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v10);
    v13 = L"Failed to verify Surface Nt handle 0x%I64x, error 0x%I64x";
    WdLogGlobalForLineNumber = 2342;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)a4, v12, 0LL, 0LL, 0LL);
    return (unsigned int)v12;
  }
  v15 = v66;
  if ( v66 )
  {
    v16 = *((_QWORD *)v66 + 2);
    if ( v16 )
    {
      v17 = (_QWORD *)(v16 + 136);
      v18 = 0LL;
      if ( (_QWORD *)*v17 != v17 )
        v18 = *(_QWORD *)(*v17 - 40LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
      {
        LODWORD(Object) = -858993459 * (((__int64)a2 - *((_QWORD *)this + 8)) >> 5);
        McTemplateK0pqp_EtwWriteTransfer(0xCCCCCCCCCCCCCCCDuLL, v18, v11, this, Object, v18);
      }
    }
  }
  ObfDereferenceObject(v15);
  v67 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v19);
  v22 = PsGetCurrentProcess(v21);
  LOBYTE(v61) = 1;
  LODWORD(Object) = 0;
  v23 = ObDuplicateObject(v22, a4, CurrentProcess, &v67, Object, 0, 6, v61);
  v12 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v23);
    v13 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
    WdLogGlobalForLineNumber = 2373;
    goto LABEL_5;
  }
  *((_QWORD *)a3 + 5) = v67;
  *((_QWORD *)a3 + 4) = a4;
  LODWORD(v66) = 0;
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
    v50 = DXGGLOBAL::GetGlobal();
    LODWORD(v32) = DXGGLOBAL::OpenSyncObject(v50, *((_DWORD *)a2 + 7), &v63, (unsigned int *)&v66, 0LL);
    if ( (int)v32 < 0 )
    {
      v52 = PsGetCurrentProcess(v51);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v52);
      WdLogGlobalForLineNumber = 2454;
      goto LABEL_25;
    }
    Current = DXGPROCESS::GetCurrent();
    v44 = (char *)Current + 248;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = (unsigned int)v66;
    v53 = ((unsigned int)v66 >> 6) & 0xFFFFFF;
    if ( v53 < *((_DWORD *)Current + 74) )
    {
      v54 = *((_QWORD *)Current + 35);
      v55 = *(_DWORD *)(v54 + 16LL * v53 + 8);
      if ( (((unsigned int)v66 >> 25) & 0x60) == (v55 & 0x60) && (v55 & 0x1F) != 0 )
      {
        v48 = 16 * (((unsigned __int64)(unsigned int)v66 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v54 + v48 + 8) & 0x2000) == 0 )
        {
LABEL_37:
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
LABEL_38:
        *(_DWORD *)(v48 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
      }
    }
LABEL_39:
    *((_QWORD *)v44 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v44, 0LL);
    KeLeaveCriticalRegion();
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
    goto LABEL_40;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v37 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, v37, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
    v38 = DXGGLOBAL::GetGlobal();
    LODWORD(v32) = DXGGLOBAL::OpenSyncObject(v38, *((_DWORD *)a2 + 7), &v63, (unsigned int *)&v66, 0LL);
    if ( (int)v32 < 0 )
    {
      v40 = PsGetCurrentProcess(v39);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v40);
      WdLogGlobalForLineNumber = 2436;
LABEL_25:
      v42 = PsGetCurrentProcess(v41);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v42,
        0LL,
        0LL,
        0LL);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
      return (unsigned int)v32;
    }
    Current = DXGPROCESS::GetCurrent();
    v44 = (char *)Current + 248;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = (unsigned int)v66;
    v45 = ((unsigned int)v66 >> 6) & 0xFFFFFF;
    if ( v45 < *((_DWORD *)Current + 74) )
    {
      v46 = *((_QWORD *)Current + 35);
      v47 = *(_DWORD *)(v46 + 16LL * v45 + 8);
      if ( (((unsigned int)v66 >> 25) & 0x60) == (v47 & 0x60) && (v47 & 0x1F) != 0 )
      {
        v48 = 16 * (((unsigned __int64)(unsigned int)v66 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v46 + v48 + 8) & 0x2000) == 0 )
          goto LABEL_37;
        goto LABEL_38;
      }
    }
    goto LABEL_39;
  }
  v25 = PsGetCurrentProcess(v24);
  v26 = *((_QWORD *)a2 + 5);
  v27 = v25;
  v29 = PsGetCurrentProcess(v28);
  LOBYTE(v62) = 1;
  v30 = (PVOID **)((char *)a3 + 24);
  LODWORD(Objecta) = 0;
  v31 = ObDuplicateObject(v29, v26, v27, (char *)a3 + 24, Objecta, 0, 6, v62);
  v32 = v31;
  if ( v31 >= 0 )
  {
    if ( a6 )
    {
      hSyncObject = *((_DWORD *)a2 + 7);
    }
    else
    {
      memset(&v65, 0, sizeof(v65));
      v34 = *v30;
      v35 = a5 != 0;
      a5 = -a5;
      v65.hNtHandle = v34;
      v65.Flags.Value |= 0x83u;
      v65.hDevice = *(_DWORD *)((char *)this + (v35 ? 0x30 : 0) + 96);
      v36 = DxgkOpenSyncObjectFromNtHandle2Impl(&v65, 0, 1u, 1u, Objectb);
      v32 = v36;
      if ( v36 < 0 )
      {
        WdLogSingleEntry2(2LL, *v30, v36);
        Objectc = *v30;
        WdLogGlobalForLineNumber = 2419;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open Fence Nt handle 0x%I64x, error 0x%I64x",
          (__int64)Objectc,
          v32,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v32;
      }
      hSyncObject = v65.hSyncObject;
    }
LABEL_40:
    v56 = v68;
    *((_DWORD *)v68 + 4) = hSyncObject;
    *(_BYTE *)v56 = 1;
    return (unsigned int)v32;
  }
  WdLogSingleEntry2(2LL, a4, v31);
  WdLogGlobalForLineNumber = 2398;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x",
    (__int64)a4,
    v32,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v32;
}
