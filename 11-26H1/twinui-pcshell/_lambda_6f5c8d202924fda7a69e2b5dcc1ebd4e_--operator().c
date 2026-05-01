/*
 * XREFs of _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18043956C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run @ 0x18043DEB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18006BC10 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801FDF84 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180441148 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  int v7; // eax
  HWND v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  HSTRING v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  HSTRING v27; // [rsp+70h] [rbp+18h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 104);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x80,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        (int)v22);
    v22 = 0LL;
    v4 = *(_QWORD *)(*a1 + 320);
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 48LL);
    WindowsDeleteString(0LL);
    v22 = 0LL;
    v6 = v5(v4, &v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        (int)v22);
    string = v22;
    v7 = Windows::Internal::String::Initialize((HSTRING *)(*a1 + 304), &string);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x84,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        (int)v22);
    if ( *(_QWORD *)(*a1 + 128) )
    {
      v8 = (HWND)*(int *)a1[1];
      EnumPropsExW(v8, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *a1 + 200);
      if ( IsWindowVisible(v8) )
      {
        *(_DWORD *)(*a1 + 296) = *(_DWORD *)a1[1];
        WindowReadyState::SetWindow(*a1 + 360, v8, *(unsigned int *)a1[2]);
      }
    }
    v9 = *a1;
    if ( *(_DWORD *)(*a1 + 328) == 1 )
    {
      string = 0LL;
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v9 + 320),
        &v26);
      v10 = v26;
      v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 360LL);
      WindowsDeleteString(string);
      string = 0LL;
      v12 = v11(v10, &string);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v12,
          (int)v22);
      v27 = string;
      v13 = Windows::Internal::String::Initialize((HSTRING *)(*a1 + 536), &v27);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v13,
          (int)v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
      WindowsDeleteString(string);
    }
    if ( *(_DWORD *)a1[2] == 1 )
    {
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 320),
        v23);
      if ( v23[0] )
      {
        v28 = 0LL;
        v14 = *(_QWORD *)v23[0];
        v28 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 112))(v23[0], &v28);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA7,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v15,
            (int)v22);
        LODWORD(string) = 0;
        v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 48LL))(v28, &string);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xAA,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v16,
            (int)v22);
        if ( (_DWORD)string )
        {
          *(_DWORD *)(*a1 + 456) = (_DWORD)string;
          *(_BYTE *)(*a1 + 460) = 1;
        }
        v27 = 0LL;
        v17 = *(_QWORD *)v23[0];
        v27 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(v17 + 528))(v23[0], &v27);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB3,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v18,
            (int)v22);
        LODWORD(v26) = 0;
        v19 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v27 + 216LL))(v27, &v26);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v19,
            (int)v22);
        if ( (_DWORD)v26 )
        {
          *(_BYTE *)(*a1 + 462) = 0;
          *(_BYTE *)(*a1 + 461) = 1;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v23);
    }
    WindowsDeleteString(v22);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0xBF,
                        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                        v20);
    return (unsigned int)string;
  }
  return result;
}
