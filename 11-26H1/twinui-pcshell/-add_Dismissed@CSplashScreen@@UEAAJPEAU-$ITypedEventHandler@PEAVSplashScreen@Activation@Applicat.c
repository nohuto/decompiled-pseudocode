/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180306D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D120 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180072BA0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x180221EEC (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180306300 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x1803063D0 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--__lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ?Add@?$GitEventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18030668C (-Add@-$GitEventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 */

__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, IUnknown *a2, struct IUnknown **a3)
{
  int v5; // edi
  bool CanSendDismissedEvent; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  CSplashScreen *v10; // [rsp+28h] [rbp-8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  CSplashScreen *v12; // [rsp+68h] [rbp+38h] BYREF

  v5 = Windows::Internal::GitEventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         (__int64)this + 72,
         (__int64)a2,
         a3);
  if ( v5 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    CanSendDismissedEvent = CSplashScreen::_CanSendDismissedEvent(this);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( CanSendDismissedEvent )
    {
      v11 = 0LL;
      v5 = CMarshaledInterface::Marshal(&v11, &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe, a2, 2);
      if ( v5 >= 0 )
      {
        v12 = this;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef((__int64 *)&v12);
        v9 = v11;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
        v10 = this;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef((__int64 *)&v10);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(
               v7,
               (volatile signed __int32 *)&v9);
        lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_(&v9);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
  }
  return (unsigned int)v5;
}
