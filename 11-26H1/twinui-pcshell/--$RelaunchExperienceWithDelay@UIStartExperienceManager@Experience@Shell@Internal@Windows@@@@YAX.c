/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802B6824
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x180050190 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180072BA0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??$QueueTaskWithDelay@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_ce1d42a70e932870ef796d28de85f11b_@@@Z @ 0x18045611C (--$QueueTaskWithDelay@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Windows@.c)
 *     ??0_lambda_ce1d42a70e932870ef796d28de85f11b_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z @ 0x180459004 (--0_lambda_ce1d42a70e932870ef796d28de85f11b_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        IUnknown *a1)
{
  int v1; // eax
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  _lambda_ce1d42a70e932870ef796d28de85f11b_ *v4; // rax
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
    v3 = 193LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v2);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v4 = _lambda_ce1d42a70e932870ef796d28de85f11b_::_lambda_ce1d42a70e932870ef796d28de85f11b_(
         (_lambda_ce1d42a70e932870ef796d28de85f11b_ *)v11,
         (const struct CMarshaledInterface *)&v13,
         &v10);
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_ce1d42a70e932870ef796d28de85f11b_>(
         v6,
         v5,
         v7,
         v4,
         v10);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(v11);
  if ( v8 < 0 )
  {
    v2 = (unsigned int)v8;
    v3 = 215LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
}
