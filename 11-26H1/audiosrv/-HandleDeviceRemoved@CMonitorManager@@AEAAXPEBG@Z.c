/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180060E94
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180060D14 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180060E5C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x1800610B0 (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011C05C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18011EB70 (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1801202A0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  CMonitorManager::CaptureMonitor *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *Next; // rax
  unsigned __int64 i; // r14
  CMonitorManager::CaptureMonitor *v8; // rbx
  __int64 v9; // kr00_8
  ATL::CAtlException *v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  CMonitorManager::CaptureMonitor *v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int16 *v20; // [rsp+88h] [rbp+10h]
  int v21; // [rsp+90h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v22; // [rsp+98h] [rbp+20h] BYREF

  v20 = a2;
  v19 = this;
  v3 = this;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((_QWORD *)v3 + 14);
  v11 = v5;
  while ( v5 )
  {
    Next = (__int64 *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v11);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v22, *Next);
    if ( CMonitorManager::CaptureMonitor::IsConnectedTo(v22, v20) )
    {
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v15,
          v22);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v9 = v2;
        v10 = v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          _o__resetstkoflw();
        v21 = *(_DWORD *)v10;
        v2 = v9;
        v3 = v19;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    v5 = v11;
  }
  for ( i = 0LL; i < v16; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      &v19,
      *(_QWORD *)(v15 + 8 * i));
    v8 = v19;
    if ( *((_BYTE *)v19 + 49) )
    {
      CMonitor::Stop(*((CMonitor **)v19 + 26));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v8);
    }
    else
    {
      CMonitorManager::RemoveMonitor(v3, v19, 1);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v15);
}
