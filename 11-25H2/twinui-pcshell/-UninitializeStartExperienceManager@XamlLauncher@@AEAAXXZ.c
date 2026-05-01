/*
 * XREFs of ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x1801819F4
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180251500 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncher::UninitializeStartExperienceManager(XamlLauncher *this)
{
  IUnknown **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (IUnknown **)((char *)this + 168);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 27) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x40C,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 27) = 0LL;
    }
    if ( *((_QWORD *)this + 28) )
    {
      v5 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[9].QueryInterface)(*v1);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x412,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 28) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      v6 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[10].AddRef)(*v1);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x418,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v6);
      *((_QWORD *)this + 29) = 0LL;
    }
    if ( *((_QWORD *)this + 30) )
    {
      v7 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[11].QueryInterface)(*v1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41E,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v7);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 31) )
    {
      v8 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[9].Release)(*v1);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x424,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v8);
      *((_QWORD *)this + 31) = 0LL;
    }
    IUnknown_SetSite(*v1, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1);
  }
}
