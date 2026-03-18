/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140005984 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@@.c)
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x14019146C (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x140275E0C (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140277020 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x140277EC0 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E1FC (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403E0320 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct MONITOR_REF_ACCESSOR *a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  struct DXGKMON_USB4_HOSTROUTER_INFO *v8; // r15
  __int64 v11; // r12
  DXGMONITOR *v12; // rax
  DXGMONITOR *v13; // rsi
  USB4_HOSTROUTER_MGR *v15; // rcx
  void (__fastcall ***v16)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int MonitorInstance; // eax
  DXGMONITOR *v24; // rdi
  int v25; // ebx
  __int64 v26; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27; // r13
  __int64 v28; // rax
  MONITOR_REF_ACCESSOR *v29; // rbx
  void (__fastcall ***v30)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // [rsp+20h] [rbp-E0h]
  void (__fastcall ***v33)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  DXGMONITOR *v37; // [rsp+78h] [rbp-88h]
  DXGMONITOR *v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  DXGMONITOR *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h] BYREF
  int v42; // [rsp+9Ch] [rbp-64h] BYREF
  int v43; // [rsp+A0h] [rbp-60h] BYREF
  int v44; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v45[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v46; // [rsp+B8h] [rbp-48h]
  MONITOR_REF_ACCESSOR *v47; // [rsp+C0h] [rbp-40h]
  _BYTE v48[20]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v49; // [rsp+DCh] [rbp-24h]
  int v50; // [rsp+E4h] [rbp-1Ch]
  void **v51; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v52; // [rsp+F8h] [rbp-8h]
  _BYTE v53[96]; // [rsp+100h] [rbp+0h] BYREF
  int v54; // [rsp+160h] [rbp+60h]
  __int64 retaddr; // [rsp+1C8h] [rbp+C8h]

  v8 = 0LL;
  v11 = a2;
  v47 = a6;
  v46 = a8;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1649;
  }
  if ( (_DWORD)v11 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1650;
  }
  MONITOR_REF_ACCESSOR::Release(a6);
  v34 = retaddr;
  v35 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
  v12 = (DXGMONITOR *)operator new(0x3B0uLL, 0x4D677844u, 64LL);
  if ( v12 )
    v13 = DXGMONITOR::DXGMONITOR(v12, this);
  else
    v13 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  v35 = v13;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
  if ( !v13 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1663;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
    return 3221225495LL;
  }
  DxgMonitor::CreateMonitorDriverInterface((__int64 *)&v33, (__int64)v13, *((_QWORD *)this + 3), v11, (__int64)a3);
  if ( v33 )
  {
    memset(v48, 0, sizeof(v48));
    v49 = 0LL;
    v50 = 0;
    if ( a7 )
    {
      v18 = USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(v15, *((_DWORD *)a7 + 1), (struct _UNICODE_STRING *)&v48[16]);
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1700;
        if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 0x400000002000LL) )
        {
          v45[0] = (__int64)v46;
          v41 = *((_DWORD *)a7 + 1);
          v42 = *(_DWORD *)a7;
          v43 = v18;
          v44 = 1;
          v36 = 16779264LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v19,
            (__int64)&unk_140145C95,
            v20,
            v21,
            (__int64)&v36,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v41,
            v45);
        }
      }
      else
      {
        v8 = (struct DXGKMON_USB4_HOSTROUTER_INFO *)v48;
        *(_OWORD *)v48 = *(_OWORD *)a7;
      }
    }
    LOBYTE(v31) = a4;
    v22 = DXGMONITOR::_InitializeMonitorNoDriver((__int64)v13, (__int64 *)&v33, v11, (__int64)a3, v31, a5, 1, v8);
    LODWORD(v17) = v22;
    if ( v22 >= 0 )
    {
      v36 = retaddr;
      v37 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v11, 0, (struct MONITOR_REF_ACCESSOR *)&v36);
      v24 = v37;
      v25 = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( v37 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1754;
        }
        if ( v25 != -1073741275 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1755;
        }
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v34);
      }
      else
      {
        if ( !v37 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1745;
        }
        if ( *((_DWORD *)v24 + 70) == 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1746;
        }
        if ( !*((_QWORD *)v24 + 37) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1747;
        }
        MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
          (MONITOR_REF_LOCK_ACCESSOR *)&v38,
          (const struct MONITOR_REF_ACCESSOR *)&v36);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v24, (const struct MONITOR_REF_ACCESSOR *)&v34);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v38);
      }
      v51 = &MonitorEventDeferral::`vftable';
      memset(v53, 0, sizeof(v53));
      v54 = 0;
      v45[1] = 0LL;
      v45[0] = retaddr;
      v52 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v45);
      v38 = v13;
      MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v13 + 40));
      v39 = retaddr;
      v26 = 2LL;
      do
      {
        v40 = v13;
        --v26;
      }
      while ( v26 );
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
      v27 = v46;
      v17 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                   v13,
                   (const struct MONITOR_REF_ACCESSOR *)v45,
                   (struct DxgMonitor::IMonitorDeferredEventSource *)&v51,
                   v46);
      ExReleaseResourceLite((PERESOURCE)((char *)v13 + 40));
      KeLeaveCriticalRegion();
      v38 = 0LL;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
      if ( v38 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v38 + 40));
        KeLeaveCriticalRegion();
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v45);
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v51, v27);
      if ( v24 )
      {
        v38 = v24;
        MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v24 + 40));
        v39 = retaddr;
        v28 = 2LL;
        do
        {
          v40 = v24;
          --v28;
        }
        while ( v28 );
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
        MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v24 + 288));
        ExReleaseResourceLite((PERESOURCE)((char *)v24 + 40));
        KeLeaveCriticalRegion();
        v38 = 0LL;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
        if ( v38 )
        {
          ExReleaseResourceLite((PERESOURCE)((char *)v38 + 40));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v34);
      }
      if ( (int)v17 >= 0 )
      {
        v29 = v47;
        MONITOR_REF_ACCESSOR::Release(v47);
        *(_QWORD *)v29 = v34;
        v51 = &MonitorEventDeferral::`vftable';
        *((_QWORD *)v29 + 1) = v13;
        v35 = 0LL;
        if ( v54 && v52 )
          MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v51, 0LL);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
        v30 = v33;
        v33 = 0LL;
        if ( v30 )
          (**v30)((__int64 (__fastcall ***)(_QWORD, __int64))v30, 1LL);
        LODWORD(v17) = 0;
        goto LABEL_54;
      }
      WdLogSingleEntry2(2LL, v11, v17);
      WdLogGlobalForLineNumber = 1795;
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v51);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    }
    else
    {
      WdLogSingleEntry2(2LL, v11, v22);
      WdLogGlobalForLineNumber = 1720;
    }
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v33,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v16 = v33;
    WdLogGlobalForLineNumber = 1678;
    v33 = 0LL;
    if ( v16 )
      (**v16)((__int64 (__fastcall ***)(_QWORD, __int64))v16, 1LL);
    LODWORD(v17) = -1073741801;
  }
LABEL_54:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  return (unsigned int)v17;
}
