/*
 * XREFs of _lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator() @ 0x180438FCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___::Run @ 0x18043DCF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804387C8 (--$query@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$com_ptr_t@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator()(_QWORD **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 **); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // r9
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-58h]
  HSTRING string; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-30h] BYREF
  __int64 v28[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v30; // [rsp+80h] [rbp+8h] BYREF
  char v31; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v32; // [rsp+90h] [rbp+18h] BYREF
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  v2 = (*a1)[16];
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x576,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::query<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
      &v27,
      v28);
    v26 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*a1[1];
    v5 = *v4;
    v26 = 0LL;
    v6 = (*v5)(v4, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v26);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v23);
    v32 = 0LL;
    v7 = *v26;
    v32 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v7 + 48))(v26, &v32);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v23);
    v31 = 0;
    LOBYTE(v30) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v32 + 56))(v32, &v30);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x583,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9,
        v23);
    while ( (_BYTE)v30 )
    {
      v25 = 0LL;
      v10 = *v32;
      v25 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v32, &v25);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x588,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v11,
          v23);
      string = 0LL;
      v33 = 0LL;
      v12 = v25;
      v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v14 = v13(v12, &string);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14,
          v23);
      v15 = v25;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 56LL);
      v17 = v33;
      v33 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v18 = v16(v15, &v33);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v18,
          v23);
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v28[0] + 80LL))(
              v28[0],
              string,
              v33,
              &v31);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v19,
          v23);
      v20 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v32 + 64))(v32, &v30);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x590,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v20,
          v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
      WindowsDeleteString(string);
      string = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v28);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x593,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v21);
  }
  return result;
}
