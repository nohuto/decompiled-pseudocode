/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18009B2E0
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$1 @ 0x1806DD3EF (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x1806DD503 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$5.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18009B37C (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18009BEF4 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18009BFD0 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsGetStringRawBuffer_0 @ 0x1802CA433 (WindowsGetStringRawBuffer_0.c)
 *     WindowsDeleteString_0 @ 0x1802CA6C2 (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::MaybeGetExceptionString(__int64 a1, wchar_t *a2, unsigned __int64 a3)
{
  HSTRING PlatformExceptionMessage; // rbx
  HSTRING v6; // rdi
  PCWSTR StringRawBuffer_0; // rax

  if ( a2 )
  {
    PlatformExceptionMessage = (HSTRING)wil::details::GetPlatformExceptionMessage();
    v6 = (HSTRING)__abi_winrt_ptrto_string_ctor(PlatformExceptionMessage);
    WindowsDeleteString_0(PlatformExceptionMessage);
    if ( v6 )
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, 0LL);
    else
      StringRawBuffer_0 = L"(null Message)";
    StringCchPrintfW(a2, a3, L"Platform::Exception^: %ws", StringRawBuffer_0);
    WindowsDeleteString_0(v6);
  }
}
