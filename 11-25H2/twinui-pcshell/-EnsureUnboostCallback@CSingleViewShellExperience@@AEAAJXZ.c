/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x18001A22C
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180019E60 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802230F8 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_820239a8925460678c838e86e23650d6_::_lambda_820239a8925460678c838e86e23650d6_ @ 0x1804070FC (_lambda_820239a8925460678c838e86e23650d6_--_lambda_820239a8925460678c838e86e23650d6_.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___ @ 0x18065B18C (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____lambda_820239a89254.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rdi
  int AgileReference; // eax
  unsigned int v6; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  char *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 152;
  if ( *((_QWORD *)this + 19) )
    return 0LL;
  v2 = lambda_820239a8925460678c838e86e23650d6_::_lambda_820239a8925460678c838e86e23650d6_(v10, (char *)this + 96, this);
  Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___(
    &v12,
    v2);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(v10);
  v3 = v12;
  if ( v12 )
  {
    v13 = v1;
    v4 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, v3, v4);
    v6 = AgileReference;
    if ( AgileReference >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      return 0LL;
    }
    v8 = (unsigned int)AgileReference;
    v9 = 1126LL;
  }
  else
  {
    v6 = -2147024882;
    v8 = 2147942414LL;
    v9 = 1125LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v8,
    v10[0]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v6;
}
