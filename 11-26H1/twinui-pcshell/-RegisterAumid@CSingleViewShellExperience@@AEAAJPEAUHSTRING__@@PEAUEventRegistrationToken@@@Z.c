/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1800C0638
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800BFF10 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800C31B0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1806831C0 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::_lambda_d01d769641b0a3ac426af1e1f82876ea_ @ 0x180411DCC (_lambda_d01d769641b0a3ac426af1e1f82876ea_--_lambda_d01d769641b0a3ac426af1e1f82876ea_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v5; // bl
  __int64 v6; // rdi
  unsigned int v7; // ecx
  HSTRING v8; // r12
  HSTRING v9; // rax
  int v10; // r15d
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // esi
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  HSTRING v20; // [rsp+48h] [rbp-31h]
  __int64 v21; // [rsp+50h] [rbp-29h]
  __int64 (__fastcall *v22)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD *, struct EventRegistrationToken *); // [rsp+58h] [rbp-21h]
  _QWORD *v23; // [rsp+60h] [rbp-19h]
  __int64 v24[2]; // [rsp+68h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  HSTRING string; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v20 = a2;
  v5 = 0;
  LODWORD(v19) = 0;
  a3->value = 0LL;
  v6 = *((_QWORD *)this + 12);
  v19 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *((_DWORD *)this + 33);
  if ( (v7 & 2) != 0 )
  {
    string = 0LL;
    v16 = WindowsCreateStringReference(L"ShellExperience", 0xFu, &hstringHeader, &string);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
      JUMPOUT(0x1800C0880LL);
    }
    v5 = 1;
    v9 = string;
    v8 = string;
    v7 = *((_DWORD *)this + 33);
  }
  else
  {
    v8 = 0LL;
    v9 = string;
  }
  if ( (v5 & 1) != 0 )
    v9 = 0LL;
  string = v9;
  v10 = (v7 >> 3) & 1;
  if ( (v7 & 0x10) != 0 )
    goto LABEL_8;
  v21 = *((_QWORD *)this + 13);
  v22 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD *, struct EventRegistrationToken *))(*(_QWORD *)v21 + 48LL);
  v12 = (_QWORD *)lambda_d01d769641b0a3ac426af1e1f82876ea_::_lambda_d01d769641b0a3ac426af1e1f82876ea_(v24, &v19, this);
  v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    *v13 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v13 + 3) = 1;
    *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v14[2] = 0LL;
    if ( v14 + 2 != v12 )
    {
      v14[2] = *v12;
      *v12 = 0LL;
    }
    v14[3] = v12[1];
    *v14 = off_18071EC78;
  }
  else
  {
    v14 = 0LL;
  }
  v23 = v14;
  v15 = v22(v21, v20, v8, *((_QWORD *)this + 2), v10, v14, a3);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
  if ( v15 == -2147483629 || v15 >= 0 )
  {
LABEL_8:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    return (unsigned int)v15;
  }
}
