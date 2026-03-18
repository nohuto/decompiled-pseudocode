/*
 * XREFs of ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14041476C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1400673B8 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA?AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ @ 0x14027C1D4 (-EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA-AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnInitialized(DxgMonitor::MonitorColorState *this)
{
  char v2; // al
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r9
  const wchar_t *v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  char v12; // di
  char v13; // al
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  char v20; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    v10 = 1;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"HDREnabled",
           0LL);
    v3 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 456) = v2;
    *((_BYTE *)this + 457) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)v3 + 56LL))(
                               v3,
                               2LL,
                               L"AutoColorManagementEnabled",
                               0LL);
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
             *((_QWORD *)this + 1),
             2LL,
             L"HdrFlavor",
             0LL);
      if ( v4 != 1 && v4 != 2 )
        v4 = DxgMonitor::MonitorColorState::EvaluateDefaultHdrFlavor((__int64)this);
      *((_DWORD *)this + 116) = v4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v5 = 1000LL;
      v6 = L"DefaultIntegratedSdrWhiteLevel";
    }
    else
    {
      v5 = 3000LL;
      v6 = L"DefaultExternalSdrWhiteLevel";
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           8LL,
           v6,
           v5);
    *((_DWORD *)this + 119) = v7;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"SDRWhiteLevel",
           v7);
    v9 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 119) = v8;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)v9 + 56LL))(
            v9,
            2LL,
            L"AutoColorManagementSupported",
            0LL);
  }
  *((_BYTE *)this + 468) = v10;
  if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = *((_QWORD *)this + 1);
    v20 = 0;
    v12 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v11 + 104LL))(
           v11,
           2LL,
           L"EnableExternalBrightessByDefault",
           &v20) )
    {
      v12 = 1;
      *((_BYTE *)this + 517) = v20;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            2LL,
            L"ExternalBrightnessEnabled",
            0LL);
    v14 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 519) = v13;
    *((_BYTE *)this + 518) = v12;
    *((_DWORD *)this + 131) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v14 + 40LL))(
                                v14,
                                2LL,
                                L"HdrBrightnessMode",
                                2LL);
  }
  if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 40LL))(
            *((_QWORD *)this + 1),
            8LL,
            L"HdrBrightnessSdrLuminanceFactor",
            2000LL);
    v16 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 133) = v15;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v16 + 40LL))(
            v16,
            8LL,
            L"HdrBrightnessHeadroomClampFactor",
            1000LL);
    v18 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 134) = v17;
    LOBYTE(v19) = 1;
    *((_BYTE *)this + 528) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v18 + 56LL))(
                               v18,
                               8LL,
                               L"HdrBrightnessSdrLuminanceClamp",
                               v19);
  }
}
