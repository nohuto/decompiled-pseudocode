/*
 * XREFs of _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x18018EAC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___::Run @ 0x18018EAA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801113B0 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18020A844 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_eb4780c1661a573af0d01df637dfa0a8_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  unsigned int **v5; // rdi
  LayoutCompletedHelper *v6; // rsi
  unsigned int *v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  int v20[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 14);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v20[0]);
    v21[1] = 0LL;
    v4 = Windows::Internal::String::Initialize((Windows::Internal::String *)(*a1 + 78), (HSTRING *)a1[1]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x85,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v20[0]);
    v5 = a1 + 2;
    if ( *((_QWORD *)*a1 + 16) )
    {
      v6 = (LayoutCompletedHelper *)(int)**v5;
      EnumPropsExW((HWND)v6, LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 50));
      if ( IsWindowVisible((HWND)v6) )
      {
        v7 = *a1;
        v7[74] = **v5;
        UwpWindowReadyState::SetWindow((__int64)(v7 + 90), v6, *a1[3]);
      }
    }
    UwpWindowWrapperBase::CachePersistingStateName((__int64)*a1, **v5);
    if ( *a1[3] == 1 )
    {
      v8 = (__int64 *)*((_QWORD *)*a1 + 16);
      if ( v8 )
      {
        *(_QWORD *)v20 = 0LL;
        v9 = *v8;
        *(_QWORD *)v20 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 48))(v8, v20);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9D,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v10,
            v20[0]);
        wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
          v20,
          v21);
        if ( v21[0] )
        {
          v26 = 0LL;
          v11 = *(_QWORD *)v21[0];
          v26 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v11 + 112))(v21[0], &v26);
          if ( v12 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA4,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v12,
              v20[0]);
          v23 = 0;
          v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 48LL))(v26, &v23);
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA7,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v13,
              v20[0]);
          if ( v23 )
          {
            v14 = (__int64)*a1;
            *(_DWORD *)(v14 + 472) = v23;
            *(_BYTE *)(v14 + 476) = 1;
          }
          v25 = 0LL;
          v15 = *(_QWORD *)v21[0];
          v25 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v15 + 528))(v21[0], &v25);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB0,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v16,
              v20[0]);
          v24 = 0;
          v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 216LL))(v25, &v24);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB3,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v17,
              v20[0]);
          if ( v24 )
            *(_WORD *)((char *)*a1 + 477) = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
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
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v18);
  }
  return result;
}
