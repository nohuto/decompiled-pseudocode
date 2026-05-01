/*
 * XREFs of ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1804ED1AC
 * Callers:
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB6B0 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForPresentation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IInspectable *a5)
{
  char v8; // r15
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  void *v12; // rbx
  int (__fastcall *v13)(void *, _QWORD, GUID *, ShellPositionerManager **); // rdi
  bool v14; // zf
  unsigned int (__fastcall *v15)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *); // rax
  bool v16; // cc
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  ShellPositionerManager *v20; // [rsp+70h] [rbp+30h] BYREF

  v20 = this;
  v8 = 0;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v20 = 0LL;
      v12 = ppvOut[0];
      v13 = *(int (__fastcall **)(void *, _QWORD, GUID *, ShellPositionerManager **))(*(_QWORD *)ppvOut[0] + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      if ( v13(v12, v11, &GUID_ee010e17_919a_4068_868b_675acf787303, &v20) >= 0 )
      {
        v14 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                a2,
                v11) == 0;
        v15 = *(unsigned int (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v20 + 72LL);
        if ( !v14 )
        {
          if ( !v15(v20, a3, a5) )
          {
            if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
              v16 = v11 <= 2;
            else
              v16 = v11 <= 1;
            if ( !v16 )
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v11);
            goto LABEL_15;
          }
          goto LABEL_14;
        }
        if ( v15(v20, a3, a5) )
        {
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v11);
LABEL_14:
          v8 = 1;
        }
      }
LABEL_15:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      if ( ++v11 >= 0xB )
      {
        v10 = v8 == 0 ? 0x80070005 : 0;
        goto LABEL_17;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x534,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
