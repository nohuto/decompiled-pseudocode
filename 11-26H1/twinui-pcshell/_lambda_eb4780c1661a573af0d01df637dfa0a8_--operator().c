/*
 * XREFs of _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x180127F64
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___::Run @ 0x180127F40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18004C2A8 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18004C394 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801FDF84 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_eb4780c1661a573af0d01df637dfa0a8_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  unsigned int **v5; // rdi
  LayoutCompletedHelper *v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 result; // rax
  int v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v18[0]);
    v19[1] = 0LL;
    v4 = Windows::Internal::String::Initialize((HSTRING *)(*(_QWORD *)a1 + 312LL), *(HSTRING **)(a1 + 8));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x85,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v18[0]);
    v5 = (unsigned int **)(a1 + 16);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
    {
      v6 = (LayoutCompletedHelper *)(int)**v5;
      EnumPropsExW((HWND)v6, LightweightPropertySet::s_PropEnumCallback, *(_QWORD *)a1 + 200LL);
      if ( IsWindowVisible((HWND)v6) )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 296LL) = **v5;
        UwpWindowReadyState::SetWindow(*(_QWORD *)a1 + 360LL, v6, **(_DWORD **)(a1 + 24));
      }
    }
    UwpWindowWrapperBase::CachePersistingStateName(*(_QWORD *)a1, **v5);
    if ( **(_DWORD **)(a1 + 24) == 1 )
    {
      v7 = *(__int64 **)(*(_QWORD *)a1 + 128LL);
      if ( v7 )
      {
        *(_QWORD *)v18 = 0LL;
        v8 = *v7;
        *(_QWORD *)v18 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(v8 + 48))(v7, v18);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9D,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v9,
            v18[0]);
        wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
          v18,
          v19);
        if ( v19[0] )
        {
          v24 = 0LL;
          v10 = *(_QWORD *)v19[0];
          v24 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 112))(v19[0], &v24);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA4,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v11,
              v18[0]);
          v21 = 0;
          v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v21);
          if ( v12 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA7,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v12,
              v18[0]);
          if ( v21 )
          {
            *(_DWORD *)(*(_QWORD *)a1 + 456LL) = v21;
            *(_BYTE *)(*(_QWORD *)a1 + 460LL) = 1;
          }
          v23 = 0LL;
          v13 = *(_QWORD *)v19[0];
          v23 = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v13 + 528))(v19[0], &v23);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB0,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v14,
              v18[0]);
          v22 = 0;
          v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 216LL))(v23, &v22);
          if ( v15 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB3,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v15,
              v18[0]);
          if ( v22 )
          {
            *(_BYTE *)(*(_QWORD *)a1 + 462LL) = 0;
            *(_BYTE *)(*(_QWORD *)a1 + 461LL) = 1;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v18);
      }
    }
    WindowsDeleteString(0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v16);
  }
  return result;
}
