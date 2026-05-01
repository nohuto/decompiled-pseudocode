/*
 * XREFs of ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18012CFF0
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18012BDCC (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18012C090 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x18012C244 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012C830 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012CD60 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18012CD90 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x18012D558 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180237210 (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804D8850 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x1804D8B00 (-InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnk.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804D9180 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804DA620 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPersistedPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800547BC (-GetPersistedPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShell.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18016FBF8 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA?AW4SHELL_POSITIONER_TYPE@@W4_TABLETMODESTATE@@H@Z @ 0x1804D8EB0 (-MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA-AW4SHELL_POSITIONER_TYPE@@W4.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1804EC730 (-PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerPriorityForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IShellPositionerPriority **a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IShellPositionerPriority **); // rbx
  ShellPositionerManager *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IShellPositionerPriority *v16; // [rsp+48h] [rbp+28h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v16 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  if ( v6(a2, &v16) < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    if ( (int)ShellPositionerManager::GetPersistedPositionerPriority(v7, a2, &v16) < 0 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        v8 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(
               *((unsigned int *)this + 36),
               *((unsigned int *)this + 37));
        v10 = PositionerPriority_CreateInstance(v8, v9, &v16);
        v11 = v10;
        if ( v10 < 0 )
        {
          v12 = 1198LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_16;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        v10 = PositionerPriority_CreateInstance(*((unsigned int *)this + 36), v13, &v16);
        v11 = v10;
        if ( v10 < 0 )
        {
          v12 = 1202LL;
          goto LABEL_10;
        }
      }
    }
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL))(
            a2,
            v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1207LL;
      goto LABEL_10;
    }
  }
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    *a3 = v16;
  }
  v11 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return v11;
}
