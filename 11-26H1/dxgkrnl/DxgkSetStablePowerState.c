/*
 * XREFs of DxgkSetStablePowerState @ 0x1401F8F00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A5AF0 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A9A80 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(void *Src)
{
  struct DXGPROCESS *Current; // rsi
  struct DXGADAPTER *v3; // rbx
  unsigned __int64 v4; // rdx
  int PairingAdapters; // edi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-F0h]
  char v24; // [rsp+60h] [rbp-E8h]
  unsigned int v25[2]; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGADAPTER *v26; // [rsp+70h] [rbp-D8h] BYREF
  DXGADAPTER *v27[2]; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v29[144]; // [rsp+90h] [rbp-B8h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2124);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4601;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 4601LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v25 = 0LL;
  RtlCopyFromUser(v25, Src, 8uLL);
  v26 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v27, v25[0], (struct _KTHREAD **)Current, &v26, 1);
  v3 = v26;
  if ( !v26 )
  {
    WdLogSingleEntry2(2LL, Current, v25[0]);
    WdLogGlobalForLineNumber = 4625;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v25[0],
      0LL,
      0LL,
      0LL);
LABEL_21:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v27, v4);
    goto LABEL_22;
  }
  v26 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v26, &v28, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v9 = v26;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v26, 0LL);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    if ( v10 >= 0 )
    {
      v13 = *((_QWORD *)v9 + 396);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13 + 72, 0LL);
      *(_QWORD *)(v13 + 80) = KeGetCurrentThread();
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(Current, *((_DWORD *)v9 + 60));
      v15 = *((_QWORD *)v9 + 396);
      if ( !RenderAdapterInfo )
      {
        *(_QWORD *)(v15 + 80) = 0LL;
        ExReleasePushLockExclusiveEx(v15 + 72, 0LL);
        KeLeaveCriticalRegion();
        WdLogSingleEntry2(3LL, v9, Current);
        WdLogGlobalForLineNumber = 4676;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
        *((_QWORD *)Current + 28) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_21;
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v15 + 1800, 0LL);
      *(_QWORD *)(v15 + 1808) = KeGetCurrentThread();
      v17 = *((_DWORD *)RenderAdapterInfo + 15);
      if ( v25[1] )
      {
        if ( !v17 )
          ADAPTER_RENDER::AddStablePowerReference(*((ADAPTER_RENDER **)v9 + 396));
        ++*((_DWORD *)RenderAdapterInfo + 15);
      }
      else if ( v17 )
      {
        v18 = v17 - 1;
        *((_DWORD *)RenderAdapterInfo + 15) = v18;
        if ( !v18 )
          ADAPTER_RENDER::ReleaseStablePowerReference(*((ADAPTER_RENDER **)v9 + 396));
      }
      else
      {
        WdLogSingleEntry2(3LL, Current, v9);
        WdLogGlobalForLineNumber = 4708;
      }
      *(_QWORD *)(v15 + 1808) = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 1800, 0LL);
      KeLeaveCriticalRegion();
      v19 = *((_QWORD *)v9 + 396);
      *(_QWORD *)(v19 + 80) = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 72, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v27, v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4660;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v27, v11);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
      return (unsigned int)v10;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4636;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v27, v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return (unsigned int)PairingAdapters;
  }
}
