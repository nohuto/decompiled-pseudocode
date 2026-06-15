/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800601A8
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011D7F0 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002A460 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x180060810 (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180060E5C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x1800610B0 (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18008233C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800837BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008E310 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011C05C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011D81C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18011EC98 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        const unsigned __int16 *a3)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r13d
  CMonitorManager::CaptureMonitor *v4; // r14
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 *Next; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // r9
  unsigned __int64 v11; // rbx
  int v12; // esi
  unsigned int i; // ebx
  int v14; // eax
  int v15; // eax
  int MonitorForCaptureDeviceIfAppropriate; // eax
  unsigned __int16 *v17; // rcx
  char *v18; // rbx
  CMonitorManager *v19; // rcx
  const char *v20; // r9
  ATL::CAtlException *v21; // rbx
  _QWORD *v22; // [rsp+30h] [rbp-B8h] BYREF
  struct IMMDevice *v23; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int16 *v26; // [rsp+50h] [rbp-98h] BYREF
  struct IMMDevice *v27; // [rsp+58h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-88h] BYREF
  char v29; // [rsp+68h] [rbp-80h]
  __int64 v30; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-70h]
  __int64 v32; // [rsp+80h] [rbp-68h]
  int v33; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v34; // [rsp+90h] [rbp-58h] BYREF
  char v35; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v36; // [rsp+A0h] [rbp-48h] BYREF
  CMonitorManager::CaptureMonitor *v37; // [rsp+F0h] [rbp+8h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v38; // [rsp+F8h] [rbp+10h]
  const unsigned __int16 *v39; // [rsp+100h] [rbp+18h]
  __int64 v40; // [rsp+108h] [rbp+20h] BYREF

  v39 = a3;
  v38 = a2;
  v37 = this;
  v3 = a2;
  v4 = this;
  v34 = (LPCRITICAL_SECTION)((char *)this + 16);
  v35 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v34);
  if ( *((_DWORD *)v4 + 14) != 1 )
    goto LABEL_83;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 72);
  v29 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v25 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v6 = (unsigned __int16 *)*((_QWORD *)v4 + 14);
  v26 = v6;
  while ( v6 )
  {
    Next = (__int64 *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v26);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v22, *Next);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v9 = v22;
    }
    else
    {
      v9 = v22;
      v10 = v22 + 17;
      if ( v22[20] > 7uLL )
        v10 = (_QWORD *)*v10;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30,
        (unsigned int)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        (_DWORD)v10,
        *(_QWORD *)(v22[26] + 96LL));
      v8 = WPP_GLOBAL_Control;
    }
    if ( v3 == eRender && !v9[13] || v3 == eCapture && !v9[9] )
    {
      if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
        WPP_SF_(v8[2], 31LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids);
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v30,
          v9);
      }
      catch ( ATL::CAtlException *v36 )
      {
        v21 = v36;
        if ( *(_DWORD *)v36 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v40) = *(_DWORD *)v21;
        v4 = v37;
        v3 = v38;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    v6 = v26;
  }
  v11 = 0LL;
  if ( v31 )
  {
    v40 = 0LL;
    do
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        &v37,
        *(_QWORD *)(v30 + 8 * v11));
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids);
      }
      if ( *((_BYTE *)v37 + 49) )
        CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(v37);
      else
        CMonitorManager::RemoveMonitor(v4, v37, 1);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      ++v11;
    }
    while ( v11 < v31 );
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v4 + 8) + 24LL))(
          *((_QWORD *)v4 + 8),
          2LL,
          1LL,
          &v25);
  if ( v12 < 0
    || (v24 = 0, v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v24), v12 < 0) )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
LABEL_79:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        (unsigned int)v12);
    }
    goto LABEL_83;
  }
  for ( i = 0; i < v24; ++i )
  {
    v23 = 0LL;
    v22 = 0LL;
    v26 = 0LL;
    LOBYTE(v37) = 0;
    LODWORD(v40) = 0;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v25 + 32LL))(v25, i, &v23) < 0 )
    {
      CoTaskMemFree(0LL);
      if ( v22 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
LABEL_48:
      if ( v23 )
        ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->Release)(v23);
      continue;
    }
    if ( ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD **))v23->lpVtbl->QueryInterface)(
           v23,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v22) < 0
      || (*(int (__fastcall **)(_QWORD *, __int64 *))(*v22 + 24LL))(v22, &v40) < 0 )
    {
      v17 = 0LL;
      goto LABEL_65;
    }
    v14 = v40;
    if ( !(_DWORD)v40 )
    {
      v15 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(v4, v23, *((unsigned __int16 **)v4 + 42));
      if ( v15 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            33LL,
            &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
            (unsigned int)v15);
        }
        CoTaskMemFree(0LL);
        if ( v22 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        goto LABEL_48;
      }
      v14 = v40;
    }
    if ( v14 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v23, &v26, (bool *)&v37) && (_BYTE)v37 )
      {
LABEL_58:
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v4, v23);
        if ( MonitorForCaptureDeviceIfAppropriate < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            34LL,
            &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
            (unsigned int)MonitorForCaptureDeviceIfAppropriate);
        }
        goto LABEL_63;
      }
      v14 = v40;
    }
    if ( !v14 && CMonitorManager::IsRenderMirrorEnabled(v4, v23, &v26) )
      goto LABEL_58;
LABEL_63:
    v17 = v26;
LABEL_65:
    CoTaskMemFree(v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
  }
  v18 = (char *)v39;
  v12 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)v4 + 8) + 40LL))(
          *((_QWORD *)v4 + 8),
          v39,
          &v27);
  if ( v12 < 0 )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v30);
    if ( v27 )
      ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v29 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_79;
  }
  if ( v3 == eRender && !CMonitorManager::IsMonitorMirrorEligible(v19, v27) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v37,
      v18,
      0xFFFFFFFFFFFFFFFFuLL,
      v20);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (_QWORD *)v4 + 42,
      &v37);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v37);
    if ( !*((_QWORD *)v4 + 42) )
      v12 = -2147024882;
  }
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( v12 < 0 )
    goto LABEL_79;
LABEL_83:
  if ( v35 )
    LeaveCriticalSection(v34);
}
