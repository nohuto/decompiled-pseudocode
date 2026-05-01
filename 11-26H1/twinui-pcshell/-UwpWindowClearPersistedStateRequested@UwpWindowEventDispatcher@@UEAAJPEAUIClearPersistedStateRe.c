/*
 * XREFs of ?UwpWindowClearPersistedStateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180424880
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested(
        UwpWindowEventDispatcher *this,
        __int64 (***a2)(void))
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 **); // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  __int64 (*v17)(void); // rbx
  int v18; // eax
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, PCWSTR, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v22; // rax
  const char *v23; // r9
  __int64 result; // rax
  int v25[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-30h] BYREF
  __int64 v27; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v30; // [rsp+68h] [rbp+10h] BYREF
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF
  HSTRING v32; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  v27 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x74D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v25[0]);
    v30 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 48LL))(v27, &v30);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x750,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v25[0]);
    v26 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 48LL))(*((_QWORD *)this + 38), v28);
    v9 = *(_QWORD *)v8;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(**(_QWORD **)v8 + 80LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v26);
    v11 = v10(v9, v30, &v26);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x753,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v25[0]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v28);
    *(_QWORD *)v25 = 0LL;
    v12 = *v26;
    *(_QWORD *)v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v12 + 48))(v26, v25);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x756,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        v25[0]);
    v32 = 0LL;
    v14 = *(_QWORD *)v25;
    v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)v25 + 48LL);
    WindowsDeleteString(0LL);
    v32 = 0LL;
    v16 = v15(v14, &v32);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x759,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v16,
        v25[0]);
    string = 0LL;
    v17 = (*a2)[6];
    WindowsDeleteString(0LL);
    string = 0LL;
    v18 = ((__int64 (__fastcall *)(__int64 (***)(void), HSTRING *))v17)(a2, &string);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x75C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v18,
        v25[0]);
    v19 = *((_QWORD *)this + 42);
    v20 = *(void (__fastcall **)(__int64, PCWSTR, PCWSTR))(*(_QWORD *)v19 + 40LL);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v22 = WindowsGetStringRawBuffer(v32, 0LL);
    v20(v19, v22, StringRawBuffer);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v32);
    v32 = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x762,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v23);
  }
  return result;
}
