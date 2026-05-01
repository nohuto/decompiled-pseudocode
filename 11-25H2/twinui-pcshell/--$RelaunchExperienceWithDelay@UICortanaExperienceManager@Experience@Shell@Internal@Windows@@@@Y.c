/*
 * XREFs of ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180050694
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802AC2B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802AC2B0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180051AC0 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802230F8 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$QueueTaskWithDelay@V_lambda_f098a9da5198650a3311aee8b0466367_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_f098a9da5198650a3311aee8b0466367_@@@Z @ 0x18044997C (--$QueueTaskWithDelay@V_lambda_f098a9da5198650a3311aee8b0466367_@@@ComTaskPool@Internal@Windows@.c)
 *     ??0_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z @ 0x18044CC48 (--0_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  _lambda_f098a9da5198650a3311aee8b0466367_ *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  void (*v11)(void); // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[24]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF
  int v15; // [rsp+58h] [rbp+18h] BYREF
  int v16; // [rsp+5Ch] [rbp+1Ch]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF

  v16 = HIDWORD(a2);
  v14 = 0LL;
  v17 = a1;
  v15 = 1;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v14,
         &GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931,
         &v17,
         &v15,
         StartWindowTelemetry::CortanaRecoveryDuringShutdown);
  if ( v2 < 0 )
  {
    v3 = (unsigned int)v2;
    v4 = 190LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v3);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  v5 = _lambda_f098a9da5198650a3311aee8b0466367_::_lambda_f098a9da5198650a3311aee8b0466367_(
         (_lambda_f098a9da5198650a3311aee8b0466367_ *)v12,
         (const struct CMarshaledInterface *)&v14,
         &v11);
  v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_f098a9da5198650a3311aee8b0466367_>(v7, v6, v8, v5);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(v12);
  if ( v9 < 0 )
  {
    v3 = (unsigned int)v9;
    v4 = 212LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
}
