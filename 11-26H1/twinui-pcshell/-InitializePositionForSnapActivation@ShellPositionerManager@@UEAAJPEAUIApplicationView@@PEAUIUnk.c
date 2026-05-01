/*
 * XREFs of ?InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x1804EB000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800613B0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802E7AA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::InitializePositionForSnapActivation(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int PositionerPriorityForView; // eax
  int v14; // ebx
  int PositionerForMonitor; // eax
  int v16; // eax
  struct IShellPositionerPriority *v18; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  int v20[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl) )
  {
    *a4 = 0;
    *a5 = 0LL;
    *(_QWORD *)v20 = 0LL;
    v9 = *((_QWORD *)this + 5);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v9 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
    v11 = v10(v9, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v20);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28F,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_13:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      return v12;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                  (ShellPositionerManager *)((char *)this - 112),
                                  a2,
                                  &v18);
    v12 = PositionerPriorityForView;
    if ( PositionerPriorityForView < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      goto LABEL_13;
    }
    v14 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v18 + 24LL))(v18);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v14,
                             *(IUnknown **)v20,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             (void **)&v19);
    v12 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      goto LABEL_12;
    }
    v21 = 0LL;
    (**v19)(v19, &GUID_78316bfe_418a_43f2_b998_912548d9625e, &v21);
    if ( v21 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *, unsigned int *, struct tagRECT *))(*(_QWORD *)v21 + 24LL))(
              v21,
              a2,
              a3,
              a4,
              a5);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29D,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v16);
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v21);
        goto LABEL_11;
      }
    }
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  }
  return 0LL;
}
