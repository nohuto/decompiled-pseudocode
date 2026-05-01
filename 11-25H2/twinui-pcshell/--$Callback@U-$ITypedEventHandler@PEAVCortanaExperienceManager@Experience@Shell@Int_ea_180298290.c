/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@H@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z@Z @ 0x180298290
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802522E0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@V_lambda_14e0adc8846f5ed94b2411cfa8a62754_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@H@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@H@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@H@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_14e0adc8846f5ed94b2411cfa8a62754_@@@Z @ 0x1802982E0 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@In.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,int>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v3 = *a3;
  v8 = a2;
  v9 = v3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::ICortanaExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,_lambda_14e0adc8846f5ed94b2411cfa8a62754_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,int>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,_lambda_14e0adc8846f5ed94b2411cfa8a62754_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,int>(
           v5,
           &v8);
  *a1 = v6;
  return a1;
}
