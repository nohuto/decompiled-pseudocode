/*
 * XREFs of ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180060AC0
 * Callers:
 *     ?SetACLineStatus@CStreamConnectionManagerImpl@@UEAAXE@Z @ 0x180060AB0 (-SetACLineStatus@CStreamConnectionManagerImpl@@UEAAXE@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180060E5C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180121BFC (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnPowerStateChanged(CMonitorManager *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *Next; // rax
  __int64 v7; // rbx
  _QWORD *v8; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *((_QWORD *)this + 14);
  v12 = v5;
  while ( v5 )
  {
    Next = (__int64 *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v12);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *Next);
    v7 = (__int64)v11;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = v11 + 17;
      if ( v11[20] > 7uLL )
        v8 = (_QWORD *)*v8;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        49,
        (unsigned int)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        (_DWORD)v8,
        *(_QWORD *)(v11[26] + 96LL));
    }
    CMonitor::OnPowerStateChanged(*(CMonitor **)(v7 + 208), a2);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
    v5 = v12;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
