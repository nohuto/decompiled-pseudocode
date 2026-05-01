/*
 * XREFs of ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180514848
 * Callers:
 *     ?PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180514C50 (-PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180086860 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x180514388 (Windows--Internal--ComTaskPool--QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___.c)
 *     _lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_ @ 0x18051456C (_lambda_b97f6338922ac33e763b003ae07478e0_--__lambda_b97f6338922ac33e763b003ae07478e0_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerManager::NotifyAppLayoutChanged(
        RTL_SRWLOCK *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  int CallbackArray; // eax
  int v7; // ebx
  __int64 v8; // rcx
  struct IObjectArray *v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IObjectArray *v13; // [rsp+60h] [rbp+20h] BYREF
  struct IAppLayoutOperation *v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  CallbackArray = CGITRegistrationList::GetCallbackArray(this + 14, &v13);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v14 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v10 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v11[1] = (__int64)a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___(v8, &v10);
    lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_((__int64 *)&v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v7;
}
