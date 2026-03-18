/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14036EF20
 * Callers:
 *     DxgkCreateDeviceInternal @ 0x14036EED8 (DxgkCreateDeviceInternal.c)
 *     DxgkCreateDevice @ 0x14036EF00 (DxgkCreateDevice.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036FBB0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x140065568 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *Src,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v9; // rbx
  struct DXGADAPTER **v10; // r9
  struct DXGADAPTER *v11; // r12
  struct DXGADAPTER *v12; // r15
  struct DXGADAPTER **v13; // rbx
  struct DXGADAPTER **v14; // rax
  struct DXGADAPTER *v15; // rdx
  __int64 v16; // rbx
  struct DXGADAPTER *v17; // r8
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  int v21; // ebx
  int v22; // edx
  _DWORD *p_hDevice; // rcx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v27; // rcx
  struct DXGADAPTER **v28; // rax
  const wchar_t *v29; // r9
  struct DXGADAPTER **v30; // rax
  int PairingAdapters; // eax
  __int64 v32; // r12
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  struct DXGADAPTER *v38; // rbx
  struct _KEVENT *v39; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned __int64 v41; // rdx
  int v42; // [rsp+28h] [rbp-1F0h]
  int v43; // [rsp+30h] [rbp-1E8h]
  int v44; // [rsp+38h] [rbp-1E0h]
  struct DXGADAPTER *v46; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-1A8h] BYREF
  int v48; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v49; // [rsp+80h] [rbp-198h]
  char v50; // [rsp+88h] [rbp-190h]
  struct DXGADAPTER *v51; // [rsp+90h] [rbp-188h] BYREF
  struct DXGADAPTER *v52; // [rsp+98h] [rbp-180h] BYREF
  unsigned __int64 v53; // [rsp+A0h] [rbp-178h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-168h]
  DXGADAPTER *v56[2]; // [rsp+B8h] [rbp-160h] BYREF
  DXGADAPTER *v57; // [rsp+C8h] [rbp-150h] BYREF
  unsigned __int64 v58; // [rsp+D0h] [rbp-148h] BYREF
  struct DXG_SET_GUEST_DATA **v59; // [rsp+D8h] [rbp-140h]
  struct DXGK_VIRTUAL_GPU_PARAV *v60; // [rsp+E0h] [rbp-138h]
  struct _D3DKMT_CREATEDEVICE *v61; // [rsp+E8h] [rbp-130h]
  struct DXGPROCESS *v62; // [rsp+F0h] [rbp-128h]
  __int64 v63; // [rsp+F8h] [rbp-120h]
  char *v64; // [rsp+100h] [rbp-118h]
  __int64 v65; // [rsp+108h] [rbp-110h]
  unsigned int v66[16]; // [rsp+110h] [rbp-108h] BYREF
  _BYTE v67[144]; // [rsp+150h] [rbp-C8h] BYREF

  v59 = a3;
  v60 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v61 = Src;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2009);
  Current = DXGPROCESS::GetCurrent(v7);
  v62 = Current;
  if ( !Current )
  {
    v21 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2129;
    v29 = L"Invalid process context, returning 0x%I64x";
LABEL_66:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v21;
  }
  if ( a2 )
    v9 = a2[2];
  else
    v9 = 0LL;
  v51 = v9;
  memset(v66, 0, sizeof(v66));
  if ( a4 )
  {
    RtlCopyFromUser(v66, Src, 0x40uLL);
  }
  else
  {
    *(_OWORD *)v66 = *(_OWORD *)&Src->hAdapter;
    *(_OWORD *)&v66[4] = *(_OWORD *)&Src->pCommandBuffer;
    *(_OWORD *)&v66[8] = *(_OWORD *)&Src->pAllocationList;
    *(_OWORD *)&v66[12] = *(_OWORD *)&Src->pPatchLocationList;
  }
  if ( (v66[2] & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v21 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2179;
    v29 = L"TestDevice flag cannot be used, returning 0x%I64x";
    goto LABEL_66;
  }
  v10 = &v51;
  if ( v9 )
    v10 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v56, v66[0], (struct _KTHREAD **)Current, v10, 1);
  v11 = v51;
  if ( !v51 )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, v66[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2188;
LABEL_38:
    if ( v56[0] )
      DXGADAPTER::ReleaseReference(v56[0]);
    goto LABEL_40;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v46 = 0LL;
    v52 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v52);
    v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v46);
    if ( (int)DxgkpGetPairingAdapters(v11, 0, v14, &v47, v13, &v53, 0) < 0 )
    {
      v30 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v46);
      PairingAdapters = DxgkpGetPairingAdapters(v11, 0, v30, &v47, 0LL, 0LL, 0);
      v32 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v66[0], PairingAdapters);
        WdLogGlobalForLineNumber = 2226;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
          v66[0],
          v32,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v52, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
        if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
        return (unsigned int)v32;
      }
      v11 = v51;
    }
    v15 = v46;
    if ( !v46 || !*((_QWORD *)v46 + 396) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2232;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2232LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = v46;
    }
    if ( v52 && !*((_QWORD *)v52 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2233;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2233LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = v46;
    }
    if ( v12 == v15 )
    {
      v21 = -1073741275;
      WdLogSingleEntry3(1LL, v15, v11, -1073741275LL);
      WdLogGlobalForLineNumber = 2245;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v46,
        (__int64)v11,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v52, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v41);
      goto LABEL_40;
    }
    v64 = (char *)Current + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v55 = *((_QWORD *)v46 + 396);
    v63 = v55;
    v16 = v55 + 24;
    v65 = v55 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    v12 = v46;
    v17 = v52;
    if ( v46 == v52 )
      break;
    v57 = 0LL;
    v28 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v57);
    v54 = DxgkpGetPairingAdapters(v51, 0, v28, &v58, 0LL, 0LL, 0);
    if ( (v54 & 0x80000000) != 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v57, 0LL);
      *(_QWORD *)(v55 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v52, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
      return v54;
    }
    v12 = v46;
    if ( v57 == v46 )
    {
      if ( v57 )
      {
        DXGADAPTER::ReleaseReference(v57);
        v12 = v46;
      }
      v57 = 0LL;
      v17 = v52;
      break;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2273;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v57, 0LL);
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v52, 0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
    v11 = v51;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v12, v17);
  v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67, 0LL);
  v19 = v18;
  if ( v18 >= 0 )
  {
    if ( !*((_BYTE *)v46 + 209) )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 929) )
      {
        v38 = v46;
        if ( (*DXGADAPTER::GetAdapterType(v46, (int *)&v54) & 0x10) != 0 )
        {
          v39 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 396)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 928LL))(*(_QWORD *)(*((_QWORD *)v38 + 396) + 744LL));
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v39);
          *((_BYTE *)v46 + 206) = 1;
        }
      }
    }
    v51 = 0LL;
    if ( v46 == v52 )
      v20 = (v66[2] >> 1) & 1;
    else
      LOBYTE(v20) = 0;
    LOBYTE(v44) = 0;
    LOBYTE(v43) = (v66[2] & 4) != 0;
    LOBYTE(v42) = v20;
    v21 = ADAPTER_RENDER::CreateDevice(
            *((_QWORD *)v46 + 396),
            &v51,
            v66[2],
            (v66[2] & 1) == 0,
            v52,
            v42,
            v43,
            v44,
            v60,
            v59,
            0);
    if ( v21 < 0 )
    {
      v24 = v55;
    }
    else
    {
      v22 = *((_DWORD *)v51 + 117);
      p_hDevice = &v61->hDevice;
      if ( a4 )
        RtlWriteULongToUser(p_hDevice, v22);
      else
        *p_hDevice = v22;
      v24 = v55;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    *(_QWORD *)(v24 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v65, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( v52 )
      DXGADAPTER::ReleaseReference(v52);
    v52 = 0LL;
    if ( v46 )
      DXGADAPTER::ReleaseReference(v46);
    v46 = 0LL;
    goto LABEL_38;
  }
  if ( v46 == v52 || *((_DWORD *)v46 + 50) == 1 && !*((_BYTE *)v46 + 3057) )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    *(_QWORD *)(v55 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( v52 )
      DXGADAPTER::ReleaseReference(v52);
    v52 = 0LL;
    if ( v46 )
      DXGADAPTER::ReleaseReference(v46);
    v46 = 0LL;
    if ( v56[0] )
      DXGADAPTER::ReleaseReference(v56[0]);
  }
  else
  {
    WdLogSingleEntry2(3LL, v46, v18);
    WdLogGlobalForLineNumber = 2292;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    *(_QWORD *)(v55 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v52, 0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v37);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
  return v19;
}
