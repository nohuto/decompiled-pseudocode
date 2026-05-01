/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180581840
 * Callers:
 *     ?add_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180585230 (-add_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_@@$0?0PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@U?$AggregateType@PEAVGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@3@PEAUIGuidedSnapAssistCompletedArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_@@@Z @ 0x1805828BC (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1805828BC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v14; // [rsp+48h] [rbp+28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v14 = &v13;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_df0e62eb_f053_5e02_8da4_f3e5f35c9191, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = (__int64 *)*v4;
    v15 = 0LL;
    *v5 = 0LL;
    v14 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v8 = v13;
  v13 = 0LL;
  v9 = 0LL;
  v15 = v8;
  v10 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v11 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>>::*)(Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_,-1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_,-1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>(
            v10,
            &v15);
    v14 = 0LL;
    v9 = (__int64 *)v11;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v14);
  v14 = v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v9 )
  {
    v14 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    AgileReference = -2147024882;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)AgileReference;
}
