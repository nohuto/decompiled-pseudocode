/*
 * XREFs of ??$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@@Z @ 0x18048F68C
 * Callers:
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x180490900 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802AFCF0 (--$ActivateInstance@V-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18044AF10 (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once<_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_,>(union _RTL_RUN_ONCE *a1, __int64 *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  WINBOOL fPending; // [rsp+20h] [rbp-48h] BYREF
  union _RTL_RUN_ONCE *v7; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v7 = a1;
    v8 = 4LL;
    v4 = *a2;
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
      0x43u,
      0x42u);
    v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>>(
           v10,
           (__int64 *)(v4 + 48));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v5,
        fPending);
    LODWORD(v8) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v7);
  }
}
