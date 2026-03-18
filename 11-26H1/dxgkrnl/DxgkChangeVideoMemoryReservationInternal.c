/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1401BADEC
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1401BADD0 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140222FD0 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x140192FF0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1401A5BB0 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *Src,
        char a2,
        struct DXGADAPTER *a3)
{
  struct _KTHREAD **Current; // r14
  unsigned int v7; // edi
  struct DXGPROCESS *Process; // r12
  int v9; // eax
  int PairingAdapters; // esi
  __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  struct DXGADAPTER *v15; // rdi
  ADAPTER_RENDER *v16; // rsi
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp-178h] BYREF
  __int64 v19; // [rsp+58h] [rbp-170h]
  char v20; // [rsp+60h] [rbp-168h]
  struct DXGADAPTER *v21; // [rsp+68h] [rbp-160h] BYREF
  DXGADAPTER *v22[2]; // [rsp+70h] [rbp-158h] BYREF
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v23; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v24[2]; // [rsp+A0h] [rbp-128h] BYREF
  _BYTE v25[80]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v26[144]; // [rsp+100h] [rbp-C8h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2120);
  memset(&v23, 0, sizeof(v23));
  if ( a2 )
    RtlCopyFromUser(&v23, Src, 0x18uLL);
  else
    v23 = *Src;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14537;
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
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    }
    return v7;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v25, v23.hProcess, 0x200u);
  Process = (struct DXGPROCESS *)Current;
  if ( v23.hProcess )
  {
    v9 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v25, 1);
    PairingAdapters = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, v23.hProcess, v9);
      WdLogGlobalForLineNumber = 14555;
      goto LABEL_13;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v25);
  }
  v21 = a3;
  v22[0] = 0LL;
  if ( !a3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v24, v23.hAdapter, Current, &v21, 1);
    a3 = v21;
    if ( !v21 )
    {
      v7 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v23.hAdapter);
      WdLogGlobalForLineNumber = 14586;
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v24, v14);
LABEL_31:
      BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(v22);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v25);
      goto LABEL_32;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v21 + 3);
    v22[1] = (DXGADAPTER *)-1LL;
    v22[0] = a3;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v24, v13);
  }
  v21 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a3, 0, &v21, v24, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    v15 = v21;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v21, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
    DXGADAPTER::ReleaseReference(v15);
    if ( PairingAdapters >= 0 )
    {
      v16 = (ADAPTER_RENDER *)*((_QWORD *)v15 + 396);
      if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
        v23.PhysicalAdapterIndex = RtlReadULongFromUser(&Src->PhysicalAdapterIndex);
      v7 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v16, Process, &v23);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      goto LABEL_31;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 14600;
  }
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(v22);
LABEL_13:
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return (unsigned int)PairingAdapters;
}
