/*
 * XREFs of ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x180245894
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245B10 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncher::UninitializeCortanaExperienceManager(XamlLauncher *this)
{
  __int64 *v1; // rdi
  int v3; // eax
  __int64 *v4; // rsi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 176);
  if ( *((_QWORD *)this + 32) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 240LL))(*v1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C8,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 32) = 0LL;
  }
  v4 = v1;
  if ( *((_QWORD *)this + 33) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 256LL))(*v1);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5CE,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v5);
      v4 = (__int64 *)((char *)this + 176);
    }
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( *((_QWORD *)this + 34) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 288LL))(*v1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5D4,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6);
    *((_QWORD *)this + 34) = 0LL;
    v1 = v4;
  }
  if ( *((_QWORD *)this + 35) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 304LL))(*v1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5DA,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v7);
    *((_QWORD *)this + 35) = 0LL;
  }
  if ( *((_QWORD *)this + 36) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 192LL))(*v1);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E0,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v8);
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 224LL))(*((_QWORD *)this + 22));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E6,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v9);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 39) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 448LL))(*((_QWORD *)this + 22));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5EC,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v10);
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 432LL))(*((_QWORD *)this + 22));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F1,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v11);
    *((_QWORD *)this + 38) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
}
