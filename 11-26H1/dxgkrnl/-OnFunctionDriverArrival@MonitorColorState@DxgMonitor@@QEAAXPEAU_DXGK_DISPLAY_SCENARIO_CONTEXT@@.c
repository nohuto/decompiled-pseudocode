/*
 * XREFs of ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027CF1C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x14000668C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140006728 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tl.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x140076EBC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x140194AA4 (-SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027D500 (-SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027D804 (-SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027D970 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x140363204 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnFunctionDriverArrival(
        DxgMonitor::MonitorColorState *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  _QWORD *v4; // rcx
  bool v5; // r12
  bool v6; // cf
  int v7; // edi
  bool v8; // si
  __int64 v9; // rcx
  char v10; // al
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  char v25; // si
  char v26; // r15
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h] BYREF
  __int16 v34; // [rsp+B0h] [rbp+40h] BYREF
  bool v35; // [rsp+C0h] [rbp+50h] BYREF
  int v36; // [rsp+C8h] [rbp+58h] BYREF

  v5 = DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  if ( !v5 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4) )
    goto LABEL_42;
  v6 = *((_BYTE *)this + 413) != 0;
  LOBYTE(v34) = 0;
  v36 = 0;
  v31 = 0;
  v7 = v6 ? 0x40000 : 0;
  DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
    this,
    (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)&v36,
    (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *)&v31,
    (bool *)&v34);
  v8 = v36 >= 0 && ((v36 & 0x40000000) != 0 || (v36 & 0x20000000) != 0);
  *((_DWORD *)this + 120) = v36 | v7;
  if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 121) = v31;
  v9 = *((_QWORD *)this + 1);
  v35 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v9 + 104LL))(
          v9,
          2LL,
          L"HDREnabled",
          &v35);
  v11 = v34;
  if ( v10
    || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, bool *))(**((_QWORD **)this + 1) + 104LL))(
         *((_QWORD *)this + 1),
         2LL,
         L"AdvancedColorEnabled",
         &v35) )
  {
    DxgMonitor::MonitorColorState::SetHdrEnabled(this, v35);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v12 = *((_QWORD *)this + 1);
      LOBYTE(v34) = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v12 + 104LL))(
              v12,
              1LL,
              L"EnableIntegratedPanelHdrByDefault",
              &v34) )
        (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
          *((_QWORD *)this + 1),
          8LL,
          L"EnableIntegratedPanelHdrByDefault",
          &v34);
      if ( !*((_BYTE *)this + 456) && (_BYTE)v34 )
      {
        DxgMonitor::MonitorColorState::SetHdrEnabled(this, 1);
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v13 + 112LL))(
          v13,
          0LL,
          a2);
      }
      goto LABEL_30;
    }
    if ( v8 || *((_BYTE *)this + 413) )
    {
      DxgMonitor::MonitorColorState::SetHdrEnabled(this, 1);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v14 + 112LL))(
        v14,
        0LL,
        a2);
      v15 = 10LL;
LABEL_24:
      WdDiagNotifyUser(0LL, v15, 0LL, 0LL);
      goto LABEL_30;
    }
    if ( *((_DWORD *)this + 120) && v11
      || (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)this + 121)
      && v11 )
    {
      v15 = 11LL;
      goto LABEL_24;
    }
  }
LABEL_30:
  IsEnabledDeviceUsageNoInline = Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline();
  v17 = *((_DWORD *)this + 120);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v17
      && *((_DWORD *)this + 121)
      && v11
      && (unsigned int)dword_140166660 > 5
      && tlgKeywordOn((__int64)&dword_140166660, 0x400000200000LL) )
    {
      v36 = v8;
      v34 = 3;
      v31 = v24;
      LODWORD(v32) = v23;
      v33 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (__int64)&unk_140146686,
        v22,
        v23,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v36);
    }
  }
  else if ( v17 && v11 && (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000200000LL) )
  {
    v36 = v8;
    v31 = v20;
    v34 = 2;
    v32 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      (__int64)&unk_140146717,
      v19,
      v20,
      (__int64)&v32,
      (__int64)&v34,
      (__int64)&v31,
      (__int64)&v36);
  }
LABEL_42:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    v25 = 0;
    v26 = 0;
    v27 = (_QWORD *)((char *)this + 8);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this)
      && (v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v27 + 56LL))(
                  *v27,
                  1LL,
                  L"MicrosoftApprovedAcmSupport")) != 0 )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v27 + 56LL))(
              *v27,
              1LL,
              L"EnableIntegratedPanelAcmByDefault");
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28) >= 3000
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
      {
        v25 = 1;
      }
    }
    DxgMonitor::MonitorColorState::SetWcgPolicySupported(this, v25);
    if ( v25 )
    {
      v29 = *v27;
      LOBYTE(v34) = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v29 + 104LL))(
             v29,
             2LL,
             L"AutoColorManagementEnabled",
             &v34)
        || !v5
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v27 + 104LL))(
             *v27,
             2LL,
             L"AdvancedColorEnabled",
             &v34)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v27 + 104LL))(
             *v27,
             1LL,
             L"EnableIntegratedPanelAcmByDefault",
             &v34)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v27 + 104LL))(
             *v27,
             8LL,
             L"EnableIntegratedPanelAcmByDefault",
             &v34) )
      {
        DxgMonitor::MonitorColorState::SetWcgEnabled(this, v34);
      }
      else if ( v26 )
      {
        DxgMonitor::MonitorColorState::SetWcgEnabled(this, 1);
        if ( !*((_BYTE *)this + 456) )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
          (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v30 + 112LL))(
            v30,
            0LL,
            a2);
        }
      }
    }
    else
    {
      *((_BYTE *)this + 457) = 0;
    }
  }
}
