/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke @ 0x18002F000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18002F0C8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::___Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v5 = 0LL;
  v13 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
      v6,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v13);
    v5 = v13;
  }
  if ( v5 )
  {
    v7 = CSingleViewShellExperience::OnViewStateChanged(*(CSingleViewShellExperience **)(a1 + 24), a3);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7,
        v11);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 < 0 )
      Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v8);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
