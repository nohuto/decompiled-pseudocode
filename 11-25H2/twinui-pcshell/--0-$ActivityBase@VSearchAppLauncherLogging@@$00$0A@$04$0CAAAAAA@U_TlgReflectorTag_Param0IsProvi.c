/*
 * XREFs of ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801D34A4
 * Callers:
 *     _lambda_78435879237a5598503e840a3e952968_::_lambda_78435879237a5598503e840a3e952968_ @ 0x1803A40FC (_lambda_78435879237a5598503e840a3e952968_--_lambda_78435879237a5598503e840a3e952968_.c)
 * Callees:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18001AFD8 (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031054 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // r14
  char *v5; // rbp
  __int64 v8; // rax
  bool v9; // zf

  v4 = a2 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v5 = (char *)a1 + 8;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a1 + 8,
    a2 + 8);
  *((_QWORD *)a1 + 35) = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 280) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    0LL,
    a3);
  v8 = *((_QWORD *)a1 + 35);
  if ( v8 )
    v5 = (char *)(v8 + 8);
  *((_QWORD *)a1 + 34) = v5;
  *((_QWORD *)a1 + 40) = v5 + 40;
  v9 = *(_DWORD *)(a2 + 312) == 0;
  *(_QWORD *)(a2 + 272) = v4;
  if ( !v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
