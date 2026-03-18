/*
 * XREFs of ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14040B864
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x14005EBC0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1400612A8 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14040BA9C (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rax
  _QWORD *v3; // r15
  DxgMonitor::EDIDCACHE *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, _QWORD *, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *); // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // eax
  bool v9; // di
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // r9
  bool v13; // dl
  int v14; // ebx
  __int64 result; // rax
  void *v16; // rbx
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v17; // [rsp+80h] [rbp+8h] BYREF
  void *v18; // [rsp+88h] [rbp+10h] BYREF
  char v19; // [rsp+90h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 656;
  }
  if ( *((_QWORD *)this + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 657;
  }
  v2 = operator new(0x98uLL, 0x4D677844u, 256LL);
  v3 = (_QWORD *)v2;
  if ( v2 )
  {
    memset((void *)(v2 + 24), 0, 0x80uLL);
    v4 = DxgMonitor::EDIDCACHE::s_pEdidCache;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 128LL;
    v5 = *((_QWORD *)this + 14);
    v17 = D3DKMDT_MCO_UNINITIALIZED;
    v6 = *(_QWORD *)v4;
    v18 = v3;
    v7 = *(__int64 (__fastcall **)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, _QWORD *, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *))(v6 + 24);
    v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    v9 = IsInternalVideoOutput(v8);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                      *((_QWORD *)this + 14),
                      &v19);
    LOBYTE(v12) = v9;
    v14 = v7(v4, *v11, v10, v12, v3 + 3, &v17);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 688;
LABEL_10:
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v18,
        0LL);
      return (unsigned int)v14;
    }
    if ( (int)EDIDV1_IsEDIDBaseBlock((const unsigned __int8 *)v3 + 24, v13) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 701;
      v14 = -1073741275;
      goto LABEL_10;
    }
    ConvertMonitorCapablitiesOrigin(v17, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v3 + 1));
    *((_DWORD *)v3 + 3) = 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)v3,
      0LL);
    DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v18, (char *)this + 128);
    v16 = v18;
    *((_QWORD *)this + 20) = *((_QWORD *)this + 16);
    if ( v16 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v16);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 668;
  }
  return result;
}
