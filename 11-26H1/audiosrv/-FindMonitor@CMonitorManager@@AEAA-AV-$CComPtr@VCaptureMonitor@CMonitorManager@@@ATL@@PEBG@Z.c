/*
 * XREFs of ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011D0AC
 * Callers:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082590 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011F210 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011F330 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011F530 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800502B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180060CEC (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown *__fastcall CMonitorManager::FindMonitor(__int64 a1, struct IUnknown *a2, const wchar_t *a3)
{
  void *v6; // rcx
  _QWORD *v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rbx
  const wchar_t *v10; // r9
  struct IUnknown *v11; // rcx
  LPCRITICAL_SECTION v13[3]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a2;
  a2->lpVtbl = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v13, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x52u, (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, a3);
  }
  v7 = *(_QWORD **)(a1 + 112);
  v14 = v7;
  while ( v7 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v6, &v14);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
    v9 = v15;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = (const wchar_t *)&v15[17];
      if ( v15[20].lpVtbl > (struct IUnknownVtbl *)7 )
        v10 = *(const wchar_t **)v10;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x53u,
        (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        v10,
        (__int64)v15[26].lpVtbl[4].QueryInterface);
    }
    v11 = v9 + 17;
    if ( v9[20].lpVtbl > (struct IUnknownVtbl *)7 )
      v11 = (struct IUnknown *)v11->lpVtbl;
    if ( !(unsigned int)_o__wcsicmp(v11, a3) )
    {
      if ( (struct IUnknown *)a2->lpVtbl != v9 )
        ATL::AtlComPtrAssign((struct IUnknown **)a2, v9);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x54u,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          a2->lpVtbl);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    v7 = v14;
  }
  ATL::CCritSecLock::~CCritSecLock(v13);
  return a2;
}
