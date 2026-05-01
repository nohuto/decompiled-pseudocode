/*
 * XREFs of ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B9B60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18029AA78 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall AppViewDataSourceAdapterBase::UpdateIcon(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  struct IApplicationViewIconLoader *v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, void **); // rdi
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, HSTRING, void **); // r14
  const WCHAR *v20; // rsi
  unsigned int v21; // eax
  UINT32 v22; // edx
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  int v26; // eax
  int v27; // eax
  void *v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  PCWSTR sourceString[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v28 = 0LL;
  v6 = (struct IApplicationViewIconLoader *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v28 = 0LL;
    v27 = AppViewIconFactory::CreateInstance(a2, v6, a3, &v28);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x137,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v27,
        (int)v28);
  }
  else if ( *((_QWORD *)this + 6) )
  {
    v29 = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v29);
    if ( v29 )
    {
      v30 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v30);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x13F,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v7,
          (int)v28);
      v8 = *((_QWORD *)this + 6);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v8 + 48LL);
      v28 = 0LL;
      v10 = v9(v8, (unsigned int)v30, &v28);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x140,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v10,
          (int)v28);
    }
    else
    {
      sourceString[0] = 0LL;
      v13 = *(_QWORD *)a2;
      v14 = -1LL;
      sourceString[1] = (PCWSTR)-1LL;
      sourceString[2] = (PCWSTR)-1LL;
      v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, PCWSTR *))(v13 + 136))(a2, sourceString);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x145,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v15,
          (int)v28);
      v18 = *((_QWORD *)this + 6);
      v19 = *(__int64 (__fastcall **)(__int64, HSTRING, void **))(*(_QWORD *)v18 + 56LL);
      v28 = 0LL;
      string = 0LL;
      v20 = sourceString[0];
      do
        ++v14;
      while ( sourceString[0][v14] );
      if ( v14 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v16, v17);
LABEL_23:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x14A,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v11,
          (int)v28);
      }
      v21 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v14, v16, v17);
      v22 = v21 - 1;
      if ( (unsigned int)v14 < v21 )
        v22 = v14;
      v23 = WindowsCreateStringReference(v20, v22, &hstringHeader, &string);
      if ( v23 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
        JUMPOUT(0x1801B9E38LL);
      }
      v26 = v19(v18, string, &v28);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x146,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v26,
          (int)v28);
      if ( sourceString[0] )
        CoTaskMemFree((LPVOID)sourceString[0]);
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v11 = (*(__int64 (__fastcall **)(const struct _GUID *, void *))(*(_QWORD *)&a3->Data1 + 96LL))(a3, v28);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_23;
  if ( v28 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16LL))(v28);
}
