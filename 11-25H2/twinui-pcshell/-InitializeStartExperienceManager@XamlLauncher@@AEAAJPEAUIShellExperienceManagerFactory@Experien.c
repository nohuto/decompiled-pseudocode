/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18018165C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180181B88 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, __int64 *); // rdi
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  IUnknown **v12; // r15
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, char *); // rdi
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  int v19; // eax
  unsigned int v20; // edi
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  int v23; // eax
  unsigned int v24; // esi
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  int v27; // eax
  unsigned int v28; // r14d
  __int64 v29[3]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v29[0] = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  v8 = v4(a2, string, v29);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v8);
    v10 = v29[0];
    if ( v29[0] )
    {
      v29[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  v12 = (IUnknown **)((char *)this + 168);
  v13 = v29[0];
  v14 = **(__int64 (__fastcall ***)(__int64, GUID *, char *))v29[0];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  v15 = v14(v13, &GUID_94bd88e6_2b15_469b_8b49_352bb7d48d4e, (char *)this + 168);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30A,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
    return v9;
  }
  v16 = v29[0];
  if ( v29[0] )
  {
    v29[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  IUnknown_SetSite(*v12, *((IUnknown **)this + 2));
  v17 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v17;
  if ( v17 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v17);
    v18[2] = this;
    *v18 = &off_1806F3618;
  }
  else
  {
    v18 = 0LL;
  }
  v29[0] = (__int64)v18;
  v19 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v12)->lpVtbl[10].QueryInterface)(
          *v12,
          v18,
          (char *)this + 232);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    if ( v21 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v21);
      v22[2] = this;
      *v22 = &off_1806F35A0;
    }
    else
    {
      v22 = 0LL;
    }
    v29[1] = (__int64)v22;
    v23 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v12)->lpVtbl[10].Release)(
            *v12,
            v22,
            (char *)this + 240);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v25 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v25;
      if ( v25 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v25);
        v26[2] = this;
        *v26 = &off_18071AF90;
      }
      else
      {
        v26 = 0LL;
      }
      v29[2] = (__int64)v26;
      v27 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v12)->lpVtbl[9].AddRef)(
              *v12,
              v26,
              (char *)this + 248);
      v28 = v27;
      if ( v27 >= 0 )
      {
        if ( v26 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        if ( v22 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        if ( v18 )
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33B,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v27);
        if ( v26 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        if ( v22 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        if ( v18 )
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        return v28;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x321,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v23);
      if ( v22 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      if ( v18 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      return v24;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v19);
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
    return v20;
  }
}
