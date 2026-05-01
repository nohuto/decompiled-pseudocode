/*
 * XREFs of _lambda_78435879237a5598503e840a3e952968_::_lambda_78435879237a5598503e840a3e952968_ @ 0x1803A40FC
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968_____lambda_78435879237a5598503e840a3e952968___ @ 0x18039EA00 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78435879237a5.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801D34A4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_78435879237a5598503e840a3e952968_::_lambda_78435879237a5598503e840a3e952968_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)a1,
    a2,
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)a1 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 328), (const struct winrt::hstring *)(a2 + 328));
  *(_BYTE *)(a1 + 336) = *(_BYTE *)(a2 + 336);
  *(_QWORD *)(a1 + 344) = *(_QWORD *)(a2 + 344);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 344));
  *(_BYTE *)(a1 + 352) = *(_BYTE *)(a2 + 352);
  v4 = (_QWORD *)(a2 + 360);
  *(_QWORD *)(a1 + 360) = 0LL;
  if ( a1 + 360 != a2 + 360 )
  {
    *(_QWORD *)(a1 + 360) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a2 + 368);
  return a1;
}
