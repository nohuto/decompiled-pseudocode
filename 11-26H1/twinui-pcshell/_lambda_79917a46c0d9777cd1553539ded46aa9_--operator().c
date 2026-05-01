/*
 * XREFs of _lambda_79917a46c0d9777cd1553539ded46aa9_::operator() @ 0x180445AE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::Run @ 0x180447990 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A048 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800B3728 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x1802B4A48 (--$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_79917a46c0d9777cd1553539ded46aa9_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int *v4; // rax
  int ppv; // [rsp+20h] [rbp-68h]
  _BYTE v7[80]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v9; // [rsp+90h] [rbp+8h] BYREF
  LPVOID v10; // [rsp+98h] [rbp+10h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v7);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v2 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v10);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB83,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      ppv);
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(
         v10,
         *(unsigned int *)(a1 + 24),
         0x80000000LL);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB83,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      ppv);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(*(_QWORD *)a1 + 240LL), &v10);
  v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 288LL))(
                *(_QWORD *)a1 + 16LL,
                &v9);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
    v4,
    (__int64 *)(a1 + 16),
    (unsigned int *)(a1 + 24));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32, 0);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
  return 0LL;
}
