/*
 * XREFs of ??R_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@QEBA@XZ @ 0x18047ED9C
 * Callers:
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x18047FCD0 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@1@@Z @ 0x18023FD54 (--$ActivateInstance@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Found.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *a1;
  v5 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
    0x43u,
    0x42u);
  v2 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v1 + 48));
  result = Windows::Foundation::ActivateInstance<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>(
             v2,
             (_QWORD *)(v1 + 48));
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)result,
      (int)hstringHeader.Reserved.Reserved1);
  return result;
}
