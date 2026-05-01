/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1801B2640
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x1802EB440 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B2864 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1801B2934 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18021DD30 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall LoadDataFromStateRepository(PCWSTR sourceString, HSTRING *a2)
{
  int v4; // edx
  unsigned int v5; // r8d
  __int64 (__fastcall *v6)(__int64, _QWORD, HSTRING, struct Windows::Internal::StateRepository::IApplication **); // r15
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  UINT32 v9; // edx
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int LocalizedDisplayNameForApp; // eax
  int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-88h]
  _BYTE v21[8]; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v22; // [rsp+38h] [rbp-70h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h]
  PCWSTR v24; // [rsp+48h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-58h] BYREF
  HSTRING string; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v24 = sourceString;
  try
  {
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>();
    v22 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v23 + 240LL);
    string = 0LL;
    v7 = -1LL;
    do
      ++v7;
    while ( sourceString[v7] );
    if ( v7 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v4, v5);
    }
    else
    {
      v8 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v7, v4, v5);
      v9 = v8 - 1;
      if ( (unsigned int)v7 < v8 )
        v9 = v7;
      v10 = WindowsCreateStringReference(sourceString, v9, &hstringHeader, &string);
      if ( v10 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
        __debugbreak();
      }
      v13 = v6(v23, 0LL, string, &v22);
      v14 = retaddr;
      if ( v13 >= 0 )
      {
        WindowsDeleteString(*a2);
        *a2 = 0LL;
        LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v22, a2);
        if ( LocalizedDisplayNameForApp < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x71,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)LocalizedDisplayNameForApp);
          v19 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(a2, &v24);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x74,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v19);
        }
        v21[0] = 0;
        v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v22 + 104LL))(
                v22,
                v21);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x78,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v16);
        else
          *((_BYTE *)a2 + 26) = v21[0] != 0;
        if ( v22 )
          (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x6F,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v13,
      v20);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v17);
  }
  return result;
}
