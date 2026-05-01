/*
 * XREFs of ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B22D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18029200C (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v13; // rbx
  int v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, HSTRING, void **); // r14
  const WCHAR *v19; // rsi
  unsigned int v20; // eax
  UINT32 v21; // edx
  HRESULT v22; // eax
  int v23; // edx
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // eax
  void *v27; // [rsp+20h] [rbp-60h] BYREF
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  PCWSTR sourceString[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v27 = 0LL;
  v6 = (struct IApplicationViewIconLoader *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v27 = 0LL;
    v26 = AppViewIconFactory::CreateInstance(a2, v6, a3, &v27);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x137,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v26,
        (int)v27);
  }
  else if ( *((_QWORD *)this + 6) )
  {
    v28 = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v28);
    if ( v28 )
    {
      v29 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL))(v28, &v29);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x13F,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v7,
          (int)v27);
      v8 = *((_QWORD *)this + 6);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v8 + 48LL);
      v27 = 0LL;
      v10 = v9(v8, (unsigned int)v29, &v27);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x140,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v10,
          (int)v27);
    }
    else
    {
      sourceString[0] = 0LL;
      v13 = -1LL;
      sourceString[1] = (PCWSTR)-1LL;
      sourceString[2] = (PCWSTR)-1LL;
      v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, PCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, sourceString);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x145,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v14,
          (int)v27);
      v17 = *((_QWORD *)this + 6);
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING, void **))(*(_QWORD *)v17 + 56LL);
      v27 = 0LL;
      string = 0LL;
      v19 = sourceString[0];
      do
        ++v13;
      while ( sourceString[0][v13] );
      if ( v13 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v15, v16);
LABEL_23:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x14A,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v11,
          (int)v27);
      }
      v20 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v13, v15, v16);
      v21 = v20 - 1;
      if ( (unsigned int)v13 < v20 )
        v21 = v13;
      v22 = WindowsCreateStringReference(v19, v21, &hstringHeader, &string);
      if ( v22 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
        JUMPOUT(0x1801B25A8LL);
      }
      v25 = v18(v17, string, &v27);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x146,
          (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v25,
          (int)v27);
      if ( sourceString[0] )
        CoTaskMemFree((LPVOID)sourceString[0]);
    }
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v11 = (*(__int64 (__fastcall **)(const struct _GUID *, void *))(*(_QWORD *)&a3->Data1 + 96LL))(a3, v27);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_23;
  if ( v27 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL))(v27);
}
