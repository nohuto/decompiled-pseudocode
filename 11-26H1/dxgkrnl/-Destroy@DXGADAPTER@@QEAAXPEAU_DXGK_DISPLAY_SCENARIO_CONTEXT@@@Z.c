/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x140196D84 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x14006F9B0 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14018F670 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x140196538 (-VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x140197AD8 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x140198168 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401A2A70 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401DF9E8 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DFF84 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401E008C (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z @ 0x140203388 (-ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x14020E548 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     ?VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z @ 0x14022BA24 (-VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z.c)
 *     DpiFreeAdapterInfo @ 0x140238878 (DpiFreeAdapterInfo.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReportAdapter @ 0x1403BC628 (DpiReportAdapter.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, struct _LUID *a2)
{
  int v2; // eax
  char *v3; // rsi
  int v4; // r15d
  DXGADAPTER *v6; // rdi
  DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v8; // rcx
  ADAPTER_RENDER *v9; // rcx
  void (__fastcall *v10)(_QWORD); // rax
  void (__fastcall *v11)(_QWORD); // rax
  int v12; // r9d
  void *v13; // rcx
  int updated; // eax
  __int64 v15; // rbx
  unsigned int v16; // edx
  struct _LUID *v17; // rdx
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  DXGGLOBAL *v22; // rax
  int v23; // [rsp+C0h] [rbp-78h]
  int v24; // [rsp+D8h] [rbp-60h]
  _BYTE v25[16]; // [rsp+100h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+140h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 111);
  v3 = (char *)this + 1784;
  v4 = *((_DWORD *)this + 474);
  *((_BYTE *)this + 208) = 1;
  v6 = this;
  if ( (v2 & 0x10) != 0 && !*((_QWORD *)this + 395) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v25);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal() + 124) == v6 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReference(v6);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
    this = v6;
  }
  v8 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 395);
  if ( v8 )
    ADAPTER_DISPLAY::Destroy(v8);
  v9 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 396);
  if ( v9 )
    ADAPTER_RENDER::Destroy(v9);
  v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 270);
  if ( v10 )
  {
    v10(*((_QWORD *)v6 + 268));
    memset((char *)v6 + 2136, 0, 0xB8uLL);
  }
  v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 294);
  if ( v11 )
  {
    v11(*((_QWORD *)v6 + 292));
    memset((char *)v6 + 2328, 0, 0x70uLL);
  }
  if ( *((_BYTE *)v6 + 4856) )
  {
    v26 = 0;
    if ( DXGADAPTER::IsAdapterSessionized(v6, a2, &v26, 0LL) )
      v13 = &WNF_DX_REMOTE_ADAPTER_STOP;
    else
      v13 = &WNF_DX_CONSOLE_ADAPTER_STOP;
    updated = ZwUpdateWnfStateData(v13, a2, (unsigned int)(v12 + 16));
    if ( updated < 0 )
    {
      v15 = updated;
      WdLogSingleEntry2(2LL, v6, updated);
      WdLogGlobalForLineNumber = 8614;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
        (__int64)v6,
        v15,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)v6 + 4856) = 0;
  }
  DpiFreeAdapterInfo(v3);
  DXGADAPTER::DestroyPhysicalAdapterData(v6);
  memset((char *)v6 + 288, 0, 0x5D8uLL);
  memset(v3, 0, 0x160uLL);
  if ( *((_BYTE *)v6 + 209) )
  {
    v16 = *((_DWORD *)v6 + 1200);
    if ( v16 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCloseAdapter((DXGADAPTER *)((char *)v6 + 4712), v16);
      *((_DWORD *)v6 + 1200) = 0;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop((DXGADAPTER *)((char *)v6 + 4712));
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)v6 + 4712));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x16u )
      DXGADAPTER::DeleteRegistryKeys(v6);
  }
  v17 = (struct _LUID *)*((unsigned int *)v6 + 60);
  if ( (_DWORD)v17 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)v6 + 2), (unsigned int)v17);
    *((_DWORD *)v6 + 60) = -1;
  }
  if ( *((_DWORD *)v6 + 61) != -1 )
  {
    v26 = 0;
    DXGADAPTER::IsAdapterSessionized(v6, v17, &v26, 0LL);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)v6 + 2) + 984LL),
                                       v26);
    if ( SessionDataForSpecifiedSession )
    {
      DXGSESSIONDATA::ReleaseSessionAdapterOrdinal(SessionDataForSpecifiedSession, *((_DWORD *)v6 + 61));
      *((_DWORD *)v6 + 61) = -1;
    }
  }
  v19 = *((_QWORD *)v6 + 27);
  if ( v19 )
  {
    DpiReportAdapter(v19, v6);
    if ( bTracingEnabled )
    {
      v20 = *((_DWORD *)v6 + 623);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        v21 = v20 >> 14;
        LOBYTE(v21) = v21 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
          v21,
          &EventDestroyAdapter,
          v20 >> 31,
          *((_QWORD *)v6 + 27),
          (char)v6,
          v4,
          *((_QWORD *)v6 + 305),
          *((_DWORD *)v6 + 612),
          *((_QWORD *)v6 + 307),
          *((_DWORD *)v6 + 616),
          *((_DWORD *)v6 + 617),
          *((_DWORD *)v6 + 619),
          *((_DWORD *)v6 + 620),
          *((_DWORD *)v6 + 621),
          *((_DWORD *)v6 + 624),
          *((_DWORD *)v6 + 618),
          *((_DWORD *)v6 + 622),
          v20,
          (v20 >> 10) & 0xF,
          v21,
          (v20 >> 17) & 7,
          (v20 & 0x80000000) != 0,
          *((_DWORD *)v6 + 625),
          *((_DWORD *)v6 + 626),
          v23,
          *((_DWORD *)v6 + 628),
          *((_DWORD *)v6 + 629),
          v24,
          0,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)v6 + 72));
    *((_DWORD *)v6 + 40) = 0;
    *((_QWORD *)v6 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)v6 + 209) )
  {
    v22 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::SetVirtualRenderAdapter(v22, 0LL);
    if ( *((_BYTE *)v6 + 211) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
