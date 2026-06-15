/*
 * XREFs of ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800F8BA0
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC4A0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC5F0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JPEAUSystemAudioStream@@@Z @ 0x1800FFEC4 (-RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,SYSTEM_AUDIO_STREAM_DESCRIPTOR * &,IAudioGraphCallback * &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,__int64,SystemAudioStream * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v15 = v10;
  if ( v10 )
  {
    *v10 = &CStreamInstanceProxyImpl::`vftable';
    v10[2] = 0LL;
    v10[3] = 0LL;
    v10[4] = 0LL;
    *((_DWORD *)v10 + 13) = 1;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
    v10[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
    v11[5] = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
    v15 = 0LL;
    v12 = CStreamInstanceProxy::RuntimeClassInitialize((_DWORD)v11, *a2, *a3, a4, *a5, *a6, v11);
    v13 = *v11;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v13)(
              v11,
              &GUID_7c01617e_f40d_4988_9ebf_87ce94f8fca6,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v13 + 16))(v11);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v15);
  return (unsigned int)v12;
}
