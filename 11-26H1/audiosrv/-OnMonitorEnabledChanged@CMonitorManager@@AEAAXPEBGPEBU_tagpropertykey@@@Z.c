/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082590
 * Callers:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18011EE10 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18008233C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800837BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008E310 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x1800CFD64 (WPP_SF_qS.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011D0AC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  void *v6; // rbx
  _QWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  struct IMMDevice *v10; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v14; // [rsp+98h] [rbp+48h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v13 = 0;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
                                           v10,
                                           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                           &v12);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, a2);
  }
  CMonitorManager::FindMonitor(this, &v14, a2);
  if ( v14 )
  {
    v6 = 0LL;
    pv = 0LL;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40,
        (unsigned int)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        (_DWORD)v14,
        (__int64)a2);
      v7 = WPP_GLOBAL_Control;
    }
    if ( *((_BYTE *)v14 + 12) )
      goto LABEL_30;
    v8 = v13;
    if ( v13 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v10, (unsigned __int16 **)&pv, 0LL) )
        goto LABEL_19;
      v8 = v13;
      v6 = pv;
      v7 = WPP_GLOBAL_Control;
    }
    if ( v8 )
      goto LABEL_30;
    if ( !CMonitorManager::IsRenderMirrorEnabled(this, v10, (unsigned __int16 **)&pv) )
    {
      v6 = pv;
LABEL_29:
      v7 = WPP_GLOBAL_Control;
LABEL_30:
      if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x800000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
        WPP_SF_S(v7[2], 42LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, a2);
      CMonitorManager::RemoveMonitor(this, v14, 1);
      CoTaskMemFree(v6);
      goto LABEL_35;
    }
LABEL_19:
    v9 = (_QWORD *)((char *)v14 + 168);
    if ( *((_QWORD *)v14 + 24) > 7uLL )
      v9 = (_QWORD *)*v9;
    v6 = pv;
    if ( !(unsigned int)_o__wcsicmp(v9, pv) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids);
      }
      CoTaskMemFree(v6);
      goto LABEL_27;
    }
    goto LABEL_29;
  }
LABEL_35:
  MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v10);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
LABEL_27:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    goto LABEL_41;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
LABEL_37:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
      (unsigned int)MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_41:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
}
