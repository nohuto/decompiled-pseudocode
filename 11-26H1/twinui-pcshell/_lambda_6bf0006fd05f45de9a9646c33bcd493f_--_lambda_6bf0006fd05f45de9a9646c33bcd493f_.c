/*
 * XREFs of _lambda_6bf0006fd05f45de9a9646c33bcd493f_::_lambda_6bf0006fd05f45de9a9646c33bcd493f_ @ 0x1803AD134
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f_____lambda_6bf0006fd05f45de9a9646c33bcd493f___ @ 0x1803A72CC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6bf0006fd05f4.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18021C194 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_18021C194.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6bf0006fd05f45de9a9646c33bcd493f_::_lambda_6bf0006fd05f45de9a9646c33bcd493f_(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // r8d
  _QWORD *v5; // rcx

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)a1,
    a2,
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)a1 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 328), (const struct winrt::hstring *)(a2 + 328), v4);
  *(_BYTE *)(a1 + 336) = *(_BYTE *)(a2 + 336);
  *(_QWORD *)(a1 + 344) = *(_QWORD *)(a2 + 344);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 344));
  *(_BYTE *)(a1 + 352) = *(_BYTE *)(a2 + 352);
  v5 = (_QWORD *)(a2 + 360);
  *(_QWORD *)(a1 + 360) = 0LL;
  if ( a1 + 360 != a2 + 360 )
  {
    *(_QWORD *)(a1 + 360) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a2 + 368);
  return a1;
}
