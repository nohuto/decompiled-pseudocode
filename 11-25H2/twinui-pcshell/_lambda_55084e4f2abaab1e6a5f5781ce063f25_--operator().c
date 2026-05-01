/*
 * XREFs of _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x180438F8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::Run @ 0x18043B2B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030568 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D4D10 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ??$SessionIdleTaskCompletionRemoved@I@ViewManagerInteropTraceLogging@@SAX$$QEAI@Z @ 0x1800FBF14 (--$SessionIdleTaskCompletionRemoved@I@ViewManagerInteropTraceLogging@@SAX$$QEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int *v4; // rax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v7; // [rsp+80h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 16),
    (wil::ActivityThreadWatcher *)v5);
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB9A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 240LL));
  v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 288LL))(
                *(_QWORD *)a1 + 16LL,
                &v7);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int>(v4);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16, 0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
}
