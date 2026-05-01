/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802BF928
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x180196CF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180196CF0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180051C40 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802230F8 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$QueueTaskWithDelay@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@Z @ 0x1804498E8 (--$QueueTaskWithDelay@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@.c)
 *     ??0_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z @ 0x18044CC48 (--0_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        IUnknown *a1)
{
  int v1; // eax
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  _lambda_f098a9da5198650a3311aee8b0466367_ *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  void (*v10)(void); // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v10 = (void (*)(void))StartWindowTelemetry::StartRecoveryDuringShutdown;
  v1 = CMarshaledInterface::Marshal(&v13, &GUID_94bd88e6_2b15_469b_8b49_352bb7d48d4e, a1, 1);
  if ( v1 < 0 )
  {
    v2 = (unsigned int)v1;
    v3 = 190LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v2);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v4 = _lambda_f098a9da5198650a3311aee8b0466367_::_lambda_f098a9da5198650a3311aee8b0466367_(
         (_lambda_f098a9da5198650a3311aee8b0466367_ *)v11,
         (const struct CMarshaledInterface *)&v13,
         &v10);
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>(
         v6,
         v5,
         v7,
         v4,
         v10);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(v11);
  if ( v8 < 0 )
  {
    v2 = (unsigned int)v8;
    v3 = 212LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
}
