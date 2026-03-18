/*
 * XREFs of ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC
 * Callers:
 *     ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z @ 0x18025CA54 (-Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180078D7C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801B60D4 (--1-$out_param_t@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_poli.c)
 *     CalculateDisplayBlankTime @ 0x1801DEDC4 (CalculateDisplayBlankTime.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18025C53C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@YAPEAUScribbleFrame@CComputeScribbleScheduler@@PEAU12@_KAEAV?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@0@@Z @ 0x18025C6BC (--$_Uninitialized_value_construct_n@V-$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18025C7D4 (--1-$out_param_t@V-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleSt.c)
 *     ?StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ @ 0x18025D220 (-StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18025ED94 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 *     ?CreateDDisplayDeviceAndTarget@CDDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x18029DA24 (-CreateDDisplayDeviceAndTarget@CDDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDisplayDevice@Core@Displa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Initialize(CComputeScribbleScheduler *this, struct IOverlaySwapChain *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  char v6; // cl
  __int64 (__fastcall **v7)(struct IOverlaySwapChain *, GUID *, __int64 *); // rax
  int v8; // eax
  int v9; // edi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  CDDisplayManager *v13; // rcx
  double v14; // xmm1_8
  struct _LUID v15; // rdx
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  struct ID3D12CommandQueue *v20; // rcx
  double v21; // xmm1_8
  double v22; // xmm0_8
  __int64 v23; // r12
  unsigned int i; // edi
  unsigned int v25; // eax
  __int64 (__fastcall **v26)(struct IOverlaySwapChain *, GUID *, __int64 *); // r8
  __int64 v27; // r15
  int v28; // eax
  int v29; // r14d
  __int64 v30; // rax
  __int64 *v31; // rdx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  int started; // eax
  _DWORD v36[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v37; // [rsp+38h] [rbp-38h] BYREF
  char *v38; // [rsp+40h] [rbp-30h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v39; // [rsp+48h] [rbp-28h] BYREF
  char v40; // [rsp+50h] [rbp-20h]
  __int64 *v41; // [rsp+58h] [rbp-18h] BYREF
  struct CComputeScribbleStopwatch *v42; // [rsp+60h] [rbp-10h] BYREF
  char v43; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v45; // [rsp+B8h] [rbp+48h] BYREF
  struct _LUID v46; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+58h] BYREF

  (*(void (__fastcall **)(struct IOverlaySwapChain *, struct _LUID *))(*(_QWORD *)a2 + 64LL))(a2, &v46);
  v4 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 248LL))(a2);
  v5 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 112LL))(a2);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 88LL))(v5, v36);
  if ( CCommonRegistryData::ConservativeInk )
  {
    if ( CCommonRegistryData::ConservativeInk == 1 )
    {
      v6 = 1;
      goto LABEL_7;
    }
    if ( CCommonRegistryData::ConservativeInk == 2 )
    {
      v6 = *(_BYTE *)((*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 40LL))(a2) + 1488);
      goto LABEL_7;
    }
  }
  v6 = 0;
LABEL_7:
  *((_BYTE *)this + 216) = v6;
  v7 = *(__int64 (__fastcall ***)(struct IOverlaySwapChain *, GUID *, __int64 *))a2;
  v47 = 0LL;
  v8 = (*v7)(a2, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v47);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 120LL;
    goto LABEL_15;
  }
  *((_BYTE *)this + 218) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
  *((_DWORD *)this + 10) = v36[0];
  *((_DWORD *)this + 11) = v36[1];
  v12 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 272LL))(a2);
  v13 = (CDDisplayManager *)v12;
  if ( v12 < 0 )
  {
    v13 = (CDDisplayManager *)(v12 & 1);
    v14 = (double)(int)((unsigned int)v13 | ((unsigned __int64)v12 >> 1))
        + (double)(int)((unsigned int)v13 | ((unsigned __int64)v12 >> 1));
  }
  else
  {
    v14 = (double)(int)v12;
  }
  v15 = v46;
  v38 = (char *)this + 24;
  v42 = 0LL;
  v43 = 1;
  v41 = (__int64 *)((char *)this + 32);
  v39 = 0LL;
  v40 = 1;
  *((double *)this + 6) = v14 / (double)(int)g_qpcFrequency.LowPart;
  v9 = CDDisplayManager::CreateDDisplayDeviceAndTarget(v13, v15, v4, &v39, &v42);
  wil::details::out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>((__int64)&v38);
  wil::details::out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>((__int64)&v41);
  if ( v9 < 0 )
  {
    v11 = 138LL;
LABEL_14:
    v10 = (unsigned int)v9;
    goto LABEL_15;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z();
  v9 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v10 = (unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
    v11 = 141LL;
    goto LABEL_15;
  }
  v17 = *((_QWORD *)this + 4);
  v45 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 64LL))(v17, &v45);
  v9 = v18;
  if ( v18 < 0 )
  {
    v10 = (unsigned int)v18;
    v11 = 144LL;
    goto LABEL_15;
  }
  v19 = CalculateDisplayBlankTime(
          v46.LowPart | (unsigned __int64)((__int64)v46.HighPart << 32),
          v45,
          (double *)this + 7);
  v9 = v19;
  if ( v19 < 0 )
  {
    v10 = (unsigned int)v19;
    v11 = 147LL;
    goto LABEL_15;
  }
  v20 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 2);
  v41 = (__int64 *)((char *)this + 96);
  v42 = 0LL;
  v43 = 1;
  v9 = CComputeScribbleStopwatch::Create(v20, &v42);
  wil::details::out_param_t<std::unique_ptr<CComputeScribbleStopwatch>>::~out_param_t<std::unique_ptr<CComputeScribbleStopwatch>>(&v41);
  if ( v9 < 0 )
  {
    v11 = 151LL;
    goto LABEL_14;
  }
  v21 = *((double *)this + 6);
  if ( (float)((float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0) <= v21 )
    v21 = (float)((float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0);
  *(double *)this = v21;
  v22 = DOUBLE_0_005;
  if ( (float)((float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0) <= 0.005 )
    v22 = (float)((float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0);
  *((double *)this + 1) = v22;
  v23 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 40LL))(a2);
  for ( i = 0; ; ++i )
  {
    v25 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 96LL))(a2);
    v26 = *(__int64 (__fastcall ***)(struct IOverlaySwapChain *, GUID *, __int64 *))a2;
    if ( i >= v25 )
      break;
    v27 = ((__int64 (__fastcall *)(struct IOverlaySwapChain *, _QWORD))v26[28])(a2, i);
    v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 192LL))(v27, v23);
    v29 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v28);
      v9 = v29;
      goto LABEL_45;
    }
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 200LL))(v27);
    v31 = (__int64 *)*((_QWORD *)this + 17);
    v37 = v30;
    if ( v31 == *((__int64 **)this + 18) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        (_QWORD *)this + 16,
        (__int64)v31,
        &v37);
    }
    else
    {
      *v31 = v30;
      *((_QWORD *)this + 17) += 8LL;
    }
  }
  v32 = ((__int64 (__fastcall *)(struct IOverlaySwapChain *))v26[12])(a2);
  v33 = (__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 5;
  if ( v32 >= v33 )
  {
    if ( v32 > v33 )
    {
      if ( v32 <= (unsigned __int64)((__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 19)) >> 5) )
        *((_QWORD *)this + 20) = std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(
                                   *((char **)this + 20),
                                   v32 - v33);
      else
        std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Resize_reallocate<std::_Value_init_tag>(
          (const void **)this + 19,
          v32);
    }
  }
  else
  {
    *((_QWORD *)this + 20) = *((_QWORD *)this + 19) + 32LL * v32;
  }
  started = CComputeScribbleScheduler::StartWorkerThread(this);
  v9 = started;
  if ( started >= 0 )
  {
    v9 = 0;
    goto LABEL_45;
  }
  v10 = (unsigned int)started;
  v11 = 174LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)v10);
LABEL_45:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v47);
  return (unsigned int)v9;
}
