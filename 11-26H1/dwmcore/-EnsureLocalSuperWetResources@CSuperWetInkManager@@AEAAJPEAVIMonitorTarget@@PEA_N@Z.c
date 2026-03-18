/*
 * XREFs of ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180230334
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x1801D131C (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x1802185CC (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAA_NXZ @ 0x180231498 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QE.c)
 *     ?TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ @ 0x1802982AC (-TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::EnsureLocalSuperWetResources(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        bool *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  CD3DDevice *v9; // rsi
  struct ID3D12Device *InkDevice; // rax
  int HighPriorityComputeCommandQueueNoRef; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  CSuperWetInkManager *v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  struct ID3D12CommandQueue *v17; // [rsp+68h] [rbp+48h] BYREF

  v15 = this;
  *a3 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableInkInVRR>::GetImpl'::`2'::impl)
    || !(*(unsigned __int8 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 176LL))(a2) )
  {
    v6 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 224LL))(a2);
    v16 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
           v6,
           &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f,
           &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_27:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
      return v8;
    }
    v9 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    InkDevice = CD3DDevice::TryGetInkDevice(v9);
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      &v15,
      (__int64)InkDevice);
    if ( !v15 )
      goto LABEL_16;
    v17 = 0LL;
    HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v9, &v17);
    v8 = HighPriorityComputeCommandQueueNoRef;
    if ( HighPriorityComputeCommandQueueNoRef < 0 )
    {
      v12 = 742LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      goto LABEL_27;
    }
    if ( !v17 )
      goto LABEL_16;
    v17 = 0LL;
    HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetDirectInkSuperWetRendererNoRef(
                                             v9,
                                             (struct IDCompositionDirectInkSuperWetRenderer **)&v17);
    v8 = HighPriorityComputeCommandQueueNoRef;
    if ( HighPriorityComputeCommandQueueNoRef < 0 )
    {
      v12 = 751LL;
      goto LABEL_11;
    }
    if ( v17 )
    {
      HighPriorityComputeCommandQueueNoRef = (*(__int64 (__fastcall **)(__int64, struct IMonitorTarget *))(*(_QWORD *)v16 + 40LL))(
                                               v16,
                                               a2);
      v8 = HighPriorityComputeCommandQueueNoRef;
      if ( HighPriorityComputeCommandQueueNoRef < 0 )
      {
        v12 = 759LL;
        goto LABEL_11;
      }
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16) )
      {
        *a3 = 1;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
            5LL);
        LOBYTE(v13) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, v13);
        *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16) + 49) = 1;
      }
    }
    else
    {
LABEL_16:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
    v8 = 0;
    goto LABEL_27;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      21LL);
  return 0LL;
}
