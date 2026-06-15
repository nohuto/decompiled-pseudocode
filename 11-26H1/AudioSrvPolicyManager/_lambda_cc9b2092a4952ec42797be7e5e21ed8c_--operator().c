/*
 * XREFs of _lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator() @ 0x18003F418
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cc9b2092a4952ec42797be7e5e21ed8c__long_IAudioSessionInfo___::_Do_call @ 0x180040BE0 (std--_Func_impl_no_alloc__lambda_cc9b2092a4952ec42797be7e5e21ed8c__long_IAudioSessi_ea_180040BE0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180001718 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000BBC0 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002393C (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180028134 (--0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV-$shared_ptr@VDuckingDescrip.c)
 *     ??$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA?AV?$shared_ptr@UIDuckingDescriptor@@@0@AEBV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@@Z @ 0x1800299D4 (--$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA-AV-$shared.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator()(
        __int64 *a1,
        int (__fastcall ***a2)(__int64, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  int (__fastcall **v8)(__int64, GUID *, __int64 *); // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 *v14; // rsi
  std::_Ref_count_base *v15; // rax
  std::_Ref_count_base *v16; // rbx
  int v17; // edi
  __int64 v18; // rdx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v23; // [rsp+38h] [rbp-18h]
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v27; // [rsp+78h] [rbp+28h] BYREF
  __int64 v28; // [rsp+80h] [rbp+30h] BYREF
  _OWORD *v29; // [rsp+88h] [rbp+38h] BYREF

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v5 = (__int64)v4;
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x40000LL) )
  {
    v27 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[8])(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v5,
      (__int64)&unk_18005AE03,
      v6,
      v7,
      (void **)&v27);
  }
  v8 = *a2;
  v28 = 0LL;
  if ( (*v8)((__int64)a2, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v28) < 0 )
    goto LABEL_28;
  v27 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28);
  v10 = *a1;
  if ( !v9 )
  {
    v13 = (_QWORD *)(v10 + 440);
    v14 = (__int64 *)a1[1];
    v15 = (std::_Ref_count_base *)operator new(0x30uLL);
    v16 = v15;
    if ( v15 )
    {
      *((_DWORD *)v15 + 2) = 1;
      *((_DWORD *)v15 + 3) = 1;
      *(_QWORD *)v15 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
      DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor((_QWORD *)v15 + 2, *v14, v13);
    }
    else
    {
      v16 = 0LL;
    }
    v22 = (__int64)v16 + 16;
    v23 = v16;
    if ( v16 == (std::_Ref_count_base *)-16LL )
    {
      v17 = -2147024882;
      v18 = 875LL;
    }
    else
    {
      v19 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v24, &v22);
      v29 = &DuckingPolicyGuid;
      v27 = 0LL;
      v17 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v27,
              &v29,
              v19);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      if ( v17 >= 0 )
      {
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        goto LABEL_25;
      }
      v18 = 877LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v17);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    v12 = v17;
    goto LABEL_22;
  }
  v11 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v22, (__int64 *)(v10 + 424));
  v29 = &DuckingPolicyGuid;
  v27 = 0LL;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
          &v27,
          &v29,
          v11);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v12 >= 0 )
  {
LABEL_25:
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL))(v28, v27);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        880LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v20);
    wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>((volatile signed __int32 **)&v27);
LABEL_28:
    v12 = 0;
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x360,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_22:
  wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>((volatile signed __int32 **)&v27);
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  return (unsigned int)v12;
}
