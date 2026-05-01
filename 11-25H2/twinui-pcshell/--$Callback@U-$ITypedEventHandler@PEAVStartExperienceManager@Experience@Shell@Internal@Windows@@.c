/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@VXamlLauncherState@@PEAUIStartExperienceManager@Experience@Shell@Internal@3@H@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z@Z @ 0x180221424
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802522E0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-38h]

  *(_QWORD *)v8 = a2;
  v4 = *a3;
  *(__m128d *)&v8[8] = *a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v6 + 1) = *(_OWORD *)v8;
    *((_QWORD *)v6 + 4) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
    *(_QWORD *)v6 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::StartExperienceManager *,Windows::Internal::Shell::Experience::IStartExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::IStartExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6;
  return a1;
}
