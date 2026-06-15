/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C500 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180060CEC (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800837BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008E310 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AEB68 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011C120 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18011C364 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011D0AC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180120250 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // eax
  _UNKNOWN **v8; // rcx
  wchar_t *v9; // r8
  _UNKNOWN **v10; // rcx
  CMonitorManager::CaptureMonitor *v11; // rbx
  HMODULE ModuleHandleW; // rax
  int ActivationFactory; // eax
  int v14; // edi
  __int64 v15; // rdi
  const WCHAR *v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  CMonitor *v20; // rcx
  _UNKNOWN **v21; // rcx
  _QWORD *v22; // rax
  ATL::CAtlException *v23; // rbx
  bool v24; // [rsp+40h] [rbp-2F8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-2F0h] BYREF
  CMonitorManager::CaptureMonitor *v26; // [rsp+50h] [rbp-2E8h] BYREF
  unsigned __int16 *v27; // [rsp+58h] [rbp-2E0h] BYREF
  int v28; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-2C0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-2B8h] BYREF
  PCWSTR v33; // [rsp+88h] [rbp-2B0h]
  int v34; // [rsp+90h] [rbp-2A8h]
  __int64 v35; // [rsp+98h] [rbp-2A0h] BYREF
  LPCRITICAL_SECTION v36[2]; // [rsp+A0h] [rbp-298h] BYREF
  LPCRITICAL_SECTION v37[2]; // [rsp+B0h] [rbp-288h] BYREF
  __int64 (__fastcall *v38)(__int64, HSTRING, _QWORD); // [rsp+C0h] [rbp-278h]
  ATL::CAtlException *v39; // [rsp+C8h] [rbp-270h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-268h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-260h] BYREF
  WCHAR Buffer; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v43[526]; // [rsp+F2h] [rbp-246h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+0h]

  v4 = 0;
  v35 = 0LL;
  v27 = 0LL;
  v24 = 0;
  v28 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v36, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 1 )
  {
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v35);
    if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 24LL))(v35, &v28), v5 < 0) )
    {
LABEL_12:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Cu,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          v5);
      }
      goto LABEL_16;
    }
    v6 = v28;
    if ( v28 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(a2, &v27, &v24) )
        goto LABEL_10;
      v6 = v28;
    }
    if ( v6 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, &v27) )
      goto LABEL_16;
LABEL_10:
    pv = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v5 < 0 )
    {
      CoTaskMemFree(pv);
      goto LABEL_12;
    }
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x44u,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          v27);
        v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
        WPP_SF_((__int64)v8[2], 0x45u, (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids);
    }
    v26 = 0LL;
    v9 = (wchar_t *)&LocaleName;
    if ( !v24 )
      v9 = v27;
    v34 = CMonitorManager::CreateMonitor(this, (unsigned __int16 *)pv, v9, 0LL, 0, 0LL, &v26);
    v5 = v34;
    if ( v34 < 0 )
      goto LABEL_85;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v37, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v11 = v26;
    }
    else
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = v26;
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x46u,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          v26);
        v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      else
      {
        v11 = v26;
      }
      if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x800000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
        WPP_SF_S((__int64)v10[2], 0x47u, (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v32, pv);
    if ( !v32 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          v32 + 72,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          (const wchar_t *)pv);
      }
      try
      {
        v5 = 0;
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          (__int64 *)this + 14,
          (__int64)v11);
      }
      catch ( ATL::CAtlException *v39 )
      {
        v23 = v39;
        if ( *(_DWORD *)v39 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v33) = *(_DWORD *)v23;
        v5 = (int)v33;
        if ( (int)v33 >= 0 )
        {
          v11 = v26;
          goto LABEL_46;
        }
LABEL_84:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
        ATL::CCritSecLock::~CCritSecLock(v37);
LABEL_85:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
        CoTaskMemFree(pv);
        if ( v5 < 0 )
          goto LABEL_12;
LABEL_16:
        ATL::CCritSecLock::~CCritSecLock(v36);
        CoTaskMemFree(v27);
        v4 = v5;
        goto LABEL_17;
      }
LABEL_46:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x49u,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          v27);
      }
      memset_0(v43, 0, 0x206uLL);
      v29 = 0LL;
      Buffer = 0;
      ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
      if ( ModuleHandleW && LoadStringW(ModuleHandleW, 0x1F4u, &Buffer, 260) > 0 )
      {
        v31 = 0LL;
        if ( WindowsCreateStringReference(
               L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability",
               0x40u,
               &hstringHeader,
               &string) < 0 )
          RaiseException(0xC000000D, 1u, 0, 0LL);
        ActivationFactory = RoGetActivationFactory(string, &GUID_7c353e2a_46ee_44e5_af3d_6ad3fc49bd22, &v31);
        v14 = ActivationFactory;
        if ( ActivationFactory < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x988,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)ActivationFactory);
LABEL_56:
          wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v31);
          wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v29);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
          ATL::CCritSecLock::~CCritSecLock(v37);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
          CoTaskMemFree(pv);
          pv = 0LL;
          ATL::CCritSecLock::~CCritSecLock(v36);
          CoTaskMemFree(v27);
          v4 = v14;
          goto LABEL_17;
        }
        v30 = 0LL;
        v15 = v31;
        v38 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v31 + 64LL);
        v30 = 0LL;
        v16 = c_szCapabilityMicrophone;
        v33 = c_szCapabilityMicrophone;
        v17 = -1LL;
        do
          ++v17;
        while ( c_szCapabilityMicrophone[v17] );
        if ( v17 > 0xFFFFFFFF )
        {
          LODWORD(v17) = -1;
          RaiseException(0xC000000D, 1u, 0, 0LL);
          v16 = v33;
        }
        WindowsCreateStringReference(v16, v17, &hstringHeader, &string);
        v14 = v38(v15, string, &v30);
        if ( v14 < 0 )
        {
          v18 = 2443LL;
LABEL_63:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v30);
          goto LABEL_56;
        }
        v19 = v29;
        v29 = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v14 = (**v30)(v30, &GUID_11c7ccb6_c74f_50a3_b960_88008767d939, &v29);
        if ( v14 < 0 )
        {
          v18 = 2444LL;
          goto LABEL_63;
        }
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v30);
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v31);
      }
      v20 = (CMonitor *)*((_QWORD *)v11 + 26);
      if ( v34 )
        CMonitor::Terminate(v20, 1, 0LL);
      else
        CMonitor::Start(v20);
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v29);
      goto LABEL_84;
    }
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v22 = (_QWORD *)(v32 + 168);
        if ( *(_QWORD *)(v32 + 192) > 7uLL )
          v22 = (_QWORD *)*v22;
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Au,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          (const wchar_t *)pv,
          (__int64)v22);
        v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x800000) != 0 && *((_BYTE *)v21 + 25) >= 4u )
        WPP_SF_q(
          (__int64)v21[2],
          0x4Bu,
          (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          *((_QWORD *)v11 + 26));
    }
    CMonitorManager::CaptureMonitor::Uninitialize(v11);
    goto LABEL_84;
  }
  ATL::CCritSecLock::~CCritSecLock(v36);
  CoTaskMemFree(0LL);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
  return v4;
}
