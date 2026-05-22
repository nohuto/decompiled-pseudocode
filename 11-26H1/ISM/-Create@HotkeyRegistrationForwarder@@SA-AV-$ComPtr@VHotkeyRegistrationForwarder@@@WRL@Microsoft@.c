/*
 * XREFs of ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x18010811C
 * Callers:
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002E484 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180075778 (--$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotke.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 *__fastcall HotkeyRegistrationForwarder::Create(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>((HotkeyRegistrationForwarder **)a1);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
