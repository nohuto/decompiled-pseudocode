/*
 * XREFs of ?subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180333CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180331758 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::subscribe_to_services(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this,
        struct IServiceProvider *a2)
{
  _QWORD *v4; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbp
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    v4 = (_QWORD *)((char *)this + 152);
    if ( *((struct IServiceProvider **)this + 19) != a2 )
    {
      if ( *v4 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
      *v4 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 19);
    }
  }
  QueryService = a2->lpVtbl->QueryService;
  if ( *((_QWORD *)this + 18) )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
         &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
         (char *)this + 144);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
      (const char *)(unsigned int)v6,
      v7);
}
