/*
 * XREFs of _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18042D330
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run @ 0x180431B40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180073AAC (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18020A844 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180434DD8 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  HSTRING *v7; // rcx
  int v8; // eax
  HWND v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  HSTRING *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  const char *v24; // r9
  __int64 result; // rax
  HSTRING v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF
  HSTRING v31; // [rsp+70h] [rbp+18h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

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
        (int)v26);
    v26 = 0LL;
    v4 = *(_QWORD *)(*a1 + 320);
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 48LL);
    WindowsDeleteString(0LL);
    v26 = 0LL;
    v6 = v5(v4, &v26);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        (int)v26);
    v7 = (HSTRING *)(*a1 + 304);
    string = v26;
    v8 = Windows::Internal::String::Initialize(v7, &string);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x84,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        (int)v26);
    if ( *(_QWORD *)(*a1 + 128) )
    {
      v9 = (HWND)*(int *)a1[1];
      EnumPropsExW(v9, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *a1 + 200);
      if ( IsWindowVisible(v9) )
      {
        v10 = *a1;
        *(_DWORD *)(v10 + 296) = *(_DWORD *)a1[1];
        WindowReadyState::SetWindow(v10 + 360, v9, *(unsigned int *)a1[2]);
      }
    }
    v11 = *a1;
    if ( *(_DWORD *)(*a1 + 328) == 1 )
    {
      string = 0LL;
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v11 + 320),
        &v30);
      v12 = v30;
      v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 360LL);
      WindowsDeleteString(string);
      string = 0LL;
      v14 = v13(v12, &string);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14,
          (int)v26);
      v15 = (HSTRING *)(*a1 + 552);
      v31 = string;
      v16 = Windows::Internal::String::Initialize(v15, &v31);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v16,
          (int)v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
      WindowsDeleteString(string);
    }
    if ( *(_DWORD *)a1[2] == 1 )
    {
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 320),
        v27);
      if ( v27[0] )
      {
        v32 = 0LL;
        v17 = *(_QWORD *)v27[0];
        v32 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v17 + 112))(v27[0], &v32);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA7,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v18,
            (int)v26);
        LODWORD(string) = 0;
        v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 48LL))(v32, &string);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xAA,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v19,
            (int)v26);
        if ( (_DWORD)string )
        {
          v20 = *a1;
          *(_DWORD *)(v20 + 472) = (_DWORD)string;
          *(_BYTE *)(v20 + 476) = 1;
        }
        v31 = 0LL;
        v21 = *(_QWORD *)v27[0];
        v31 = 0LL;
        v22 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(v21 + 528))(v27[0], &v31);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB3,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v22,
            (int)v26);
        LODWORD(v30) = 0;
        v23 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v31 + 216LL))(v31, &v30);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v23,
            (int)v26);
        if ( (_DWORD)v30 )
          *(_WORD *)(*a1 + 477) = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v27);
    }
    WindowsDeleteString(v26);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0xBF,
                        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                        v24);
    return (unsigned int)string;
  }
  return result;
}
