/*
 * XREFs of ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC
 * Callers:
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140098620 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@AEBV0@@Z @ 0x1400358A0 (--0MONITOR_REF_ACCESSOR@@QEAA@AEBV0@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x14005AF10 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U?$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd@@@wistd@@QEAAXPEAVUSB4_POWERON_WORK_QUEUE@@@Z @ 0x1400988DC (-reset@-$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U-$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  struct DXGMONITOR *v8; // rdx
  MONITOR_REF_ACCESSOR *v9; // rdx
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  struct _KEVENT *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  LOBYTE(v16[0]) = 0;
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  CDisplayScenarioContextScope::ContextScopeConstructor(v16, 0LL, 0x18u, 0);
  v2 = v16[1];
  v5 = (_QWORD **)((char *)this + 40);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3) + 24) = this;
  WdLogGlobalForLineNumber = 187;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_18:
      __fastfail(3u);
    *v5 = v7;
    v8 = (struct DXGMONITOR *)(v6 - 19);
    v7[1] = v5;
    if ( !v6 )
      v8 = 0LL;
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v14, v8);
    if ( *(_DWORD *)(v15 + 280) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v14, v2);
    }
    else
    {
      if ( *(_QWORD *)(v15 + 296) )
      {
        MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR(
          (MONITOR_REF_ACCESSOR *)v17,
          (const struct MONITOR_REF_ACCESSOR *)(v15 + 288));
        MONITOR_REF_ACCESSOR::Release(v9);
        MONITOR_MGR::_DestroyPhysicalMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v17, v2);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v17);
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v14);
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v14);
  }
  v10 = (_QWORD **)((char *)this + 72);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == v10 )
      break;
    if ( (_QWORD **)v11[1] != v10 )
      goto LABEL_18;
    v12 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_18;
    *v10 = v12;
    v12[1] = v10;
    WdLogSingleEntry2(2LL, v11[2], v11[3]);
    WdLogGlobalForLineNumber = 255;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
  }
  v13 = (struct _KEVENT *)*((_QWORD *)this + 86);
  if ( v13 )
  {
    KeSetEvent(v13 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 86));
    *((_QWORD *)this + 86) = 0LL;
  }
  if ( *((MONITOR_MGR **)this + 7) != (MONITOR_MGR *)((char *)this + 56) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 299;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v16);
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 152));
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 104));
  wistd::unique_ptr<USB4_POWERON_WORK_QUEUE,wistd::default_delete<USB4_POWERON_WORK_QUEUE>>::reset(
    (USB4_POWERON_WORK_QUEUE **)this + 12,
    0LL);
}
