/*
 * XREFs of ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006697C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke @ 0x1800668B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800668B0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180022614 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180024180 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180067D04 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180174590 (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180174988 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::OnViewStateChanged(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v7; // eax
  int v8; // ecx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v21; // [rsp+58h] [rbp+28h] BYREF
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+68h] [rbp+38h] BYREF

  v21 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v22 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v7 = v6(a2, &v22);
  v5 = v7;
  if ( v7 < 0 )
  {
    v15 = 361LL;
    goto LABEL_23;
  }
  v8 = v21;
  if ( !v21 )
  {
    v17 = CSingleViewShellExperience::OnViewCreatedBase(this, (char *)&v22);
    v5 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16E,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v17);
      v18 = (__int64)v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v5;
    }
    v5 = 0;
    goto LABEL_24;
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))this[3];
  if ( v9 && v22 )
  {
    if ( v22 != (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v9 )
    {
      v19 = 0LL;
      v23 = 0LL;
      if ( (**v22)(v22, &GUID_00000000_0000_0000_c000_000000000046, &v19) < 0 )
        goto LABEL_16;
      v10 = (**v9)(v9, &GUID_00000000_0000_0000_c000_000000000046, &v23);
      if ( v10 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v10 < 0 || v19 != v23 )
        goto LABEL_16;
      v8 = v21;
    }
    v11 = v8 - 1;
    if ( !v11 )
    {
      v7 = CSingleViewShellExperience::OnViewPropertiesChangedBase((CSingleViewShellExperience *)this, a2);
      v5 = v7;
      if ( v7 >= 0 )
        goto LABEL_16;
      v15 = 380LL;
      goto LABEL_23;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = CSingleViewShellExperience::OnEventQueued((CSingleViewShellExperience *)this, a2);
      v5 = v7;
      if ( v7 >= 0 )
        goto LABEL_16;
      v15 = 384LL;
      goto LABEL_23;
    }
    v16 = v12 - 1;
    if ( !v16 )
    {
      v7 = CSingleViewShellExperience::OnViewDestroyedBase(this);
      v5 = v7;
      if ( v7 >= 0 )
        goto LABEL_16;
      v15 = 388LL;
      goto LABEL_23;
    }
    if ( v16 == 1 )
    {
      v7 = CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase((CSingleViewShellExperience *)this);
      v5 = v7;
      if ( v7 < 0 )
      {
        v15 = 392LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v7);
LABEL_24:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        return v5;
      }
    }
  }
LABEL_16:
  v13 = (__int64)v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
