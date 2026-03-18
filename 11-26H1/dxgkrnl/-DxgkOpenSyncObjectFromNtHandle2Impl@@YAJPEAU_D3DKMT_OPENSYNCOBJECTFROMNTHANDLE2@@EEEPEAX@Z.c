/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0
 * Callers:
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x140206CB4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403F4984 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1403F49B0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140030B4C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14005A380 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline @ 0x14007F820 (Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        char a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rbx
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r15
  struct DXGGLOBAL *Global; // rax
  int v17; // eax
  int v18; // eax
  DXGSYNCOBJECT **v19; // r13
  struct DXGADAPTERSYNCOBJECT *v20; // rcx
  __int64 v21; // rcx
  struct DXGADAPTERSYNCOBJECT *v22; // rcx
  NTSTATUS v23; // eax
  signed int hSyncObject; // r15d
  __int64 v25; // rcx
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  int IsEnabledNoReportingNoInline; // eax
  struct DXGPROCESS *v34; // r15
  unsigned int v35; // ebx
  unsigned int v36; // edx
  unsigned int v37; // ebx
  unsigned int v39; // r8d
  __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v46; // [rsp+50h] [rbp-1E8h]
  int v49; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-1A8h]
  char v51; // [rsp+98h] [rbp-1A0h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v52[2]; // [rsp+A0h] [rbp-198h] BYREF
  char v53[8]; // [rsp+A8h] [rbp-190h] BYREF
  struct DXGADAPTERSYNCOBJECT *v54; // [rsp+B0h] [rbp-188h] BYREF
  char v55; // [rsp+B8h] [rbp-180h]
  _BYTE v56[16]; // [rsp+C0h] [rbp-178h] BYREF
  HANDLE Handle[12]; // [rsp+D0h] [rbp-168h] BYREF
  PVOID Object; // [rsp+130h] [rbp-108h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+138h] [rbp-100h] BYREF
  struct DXGPROCESS *v60; // [rsp+140h] [rbp-F8h]
  PVOID v61; // [rsp+148h] [rbp-F0h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v62; // [rsp+150h] [rbp-E8h]
  _DWORD *v63; // [rsp+158h] [rbp-E0h]
  _BYTE v64[16]; // [rsp+160h] [rbp-D8h] BYREF
  _BYTE v65[160]; // [rsp+170h] [rbp-C8h] BYREF

  v62 = a1;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2086);
  Current = DXGPROCESS::GetCurrent(v7);
  v60 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1861;
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
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  memset(Handle, 0, 0x58uLL);
  if ( a2 )
  {
    RtlCopyFromUser(Handle, a1, 0x58uLL);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&a1->hNtHandle;
    *(_OWORD *)&Handle[2] = *(_OWORD *)&a1->hSyncObject;
    *(_OWORD *)&Handle[4] = *(_OWORD *)&a1->Reserved[1];
    *(_OWORD *)&Handle[6] = *(_OWORD *)&a1->Reserved[3];
    *(_OWORD *)&Handle[8] = *(_OWORD *)&a1->Reserved[5];
    Handle[10] = (HANDLE)a1->Reserved[7];
  }
  LODWORD(Handle[2]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1897;
    goto LABEL_36;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1904;
  }
  *(_QWORD *)&v52[0].hSyncObject = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v53,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)v52);
  v9 = *(_QWORD *)&v52[0].hSyncObject;
  if ( !*(_QWORD *)&v52[0].hSyncObject )
  {
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1913;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_35:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v53);
    goto LABEL_36;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v56,
    *(struct DXGDEVICE **)&v52[0].hSyncObject,
    a3 == 0);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, v9, 0, v10, 0);
  if ( !a4 )
  {
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
    if ( v11 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
      return (unsigned int)v11;
    }
  }
  v14 = HIDWORD(Handle[1]);
  v63 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v15 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v54,
      (struct DXGGLOBAL *)((char *)Global + 40));
    if ( *(_DWORD *)(v15 + 16) )
    {
      v17 = *(_DWORD *)(*(_QWORD *)v15 + 8LL);
      if ( (v17 & 0x60) == 0 && (v17 & 0x2000) == 0 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)v15 + 8LL) & 0x1F;
        if ( v18 )
        {
          if ( v18 == 8 )
          {
            v19 = **(DXGSYNCOBJECT ****)v15;
            goto LABEL_31;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
LABEL_31:
    v61 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1950;
      if ( v55 )
      {
        v20 = v54;
        _InterlockedDecrement((volatile signed __int32 *)v54 + 4);
        ExReleasePushLockSharedEx(v20, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
      goto LABEL_35;
    }
    if ( v55 )
    {
      v22 = v54;
      _InterlockedDecrement((volatile signed __int32 *)v54 + 4);
      ExReleasePushLockSharedEx(v22, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_51;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  hSyncObject = v23;
  v19 = (DXGSYNCOBJECT **)Object;
  v61 = Object;
  if ( v23 != -1073741788 )
  {
    if ( v23 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0], v23);
      WdLogGlobalForLineNumber = 1986;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
LABEL_92:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
      return (unsigned int)hSyncObject;
    }
    v14 = v14 & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                     * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
LABEL_51:
    v54 = 0LL;
    v26 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, v26, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
    v46.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v14;
    v27 = *(_QWORD *)&v52[0].hSyncObject;
    hSyncObject = DXGSYNCOBJECT::Open(
                    *v19,
                    *(struct ADAPTER_RENDER **)(*(_QWORD *)&v52[0].hSyncObject + 16LL),
                    *(struct DXGDEVICE **)&v52[0].hSyncObject,
                    0LL,
                    (unsigned int *)&Handle[2],
                    &Handle[3],
                    (unsigned __int64 *)&Handle[4],
                    (unsigned int)Handle[5],
                    &v54,
                    1,
                    v46,
                    0LL,
                    0LL,
                    0,
                    *((_DWORD *)*v19 + 105) == 7,
                    0);
    v52[0].hSyncObject = hSyncObject;
    if ( hSyncObject >= 0 )
    {
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
      if ( bTracingEnabled )
      {
        if ( v54 ? *((_QWORD *)v54 + 4) : 0LL )
        {
          v31 = v54 ? *((_QWORD *)v54 + 4) : 0LL;
          v30 = *(_QWORD *)(v31 + 16);
        }
        else
        {
          v30 = 0LL;
        }
        v32 = v54 ? *((_QWORD *)v54 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v30, &EventOpenSyncObject, v28, v32, LODWORD(Handle[2]), v27, v30);
      }
      IsEnabledNoReportingNoInline = Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline();
      v34 = v60;
      if ( IsEnabledNoReportingNoInline )
      {
        v35 = (unsigned int)Handle[2];
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v60 + 248));
        v36 = (v35 >> 6) & 0xFFFFFF;
        v37 = v35 >> 30;
        if ( v36 < *((_DWORD *)v34 + 74) )
        {
          v39 = *(_DWORD *)(*((_QWORD *)v34 + 35) + 16LL * v36 + 8);
          if ( v37 == ((v39 >> 5) & 3) && (v39 & 0x1F) != 0 )
          {
            v40 = 16LL * v36;
            if ( (*(_DWORD *)(v40 + *((_QWORD *)v34 + 35) + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(v40 + *((_QWORD *)v34 + 35) + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v34 + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v34 + 248, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
      if ( a2 )
      {
        RtlCopyToUser(a1, Handle, 0x58uLL);
      }
      else
      {
        *(_OWORD *)&a1->hNtHandle = *(_OWORD *)Handle;
        *(_OWORD *)&a1->hSyncObject = *(_OWORD *)&Handle[2];
        *(_OWORD *)&a1->Reserved[1] = *(_OWORD *)&Handle[4];
        *(_OWORD *)&a1->Reserved[3] = *(_OWORD *)&Handle[6];
        *(_OWORD *)&a1->Reserved[5] = *(_OWORD *)&Handle[8];
        a1->Reserved[7] = (UINT64)Handle[10];
      }
      if ( !(unsigned int)Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline() )
      {
        v41 = LODWORD(Handle[2]);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v34 + 248));
        v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v42 < *((_DWORD *)v34 + 74) )
        {
          v43 = *((_QWORD *)v34 + 35);
          if ( (((unsigned int)v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
            && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0x1F) != 0 )
          {
            v44 = 16 * ((v41 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v44 + v43 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(v44 + *((_QWORD *)v34 + 35) + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v34 + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v34 + 248, 0LL);
        KeLeaveCriticalRegion();
      }
      hSyncObject = v52[0].hSyncObject;
    }
    else
    {
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
    }
    if ( (*v63 & 0x10) == 0 )
      ObfDereferenceObject(v19);
    goto LABEL_92;
  }
  WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
  WdLogGlobalForLineNumber = 1979;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
  return 3221225508LL;
}
