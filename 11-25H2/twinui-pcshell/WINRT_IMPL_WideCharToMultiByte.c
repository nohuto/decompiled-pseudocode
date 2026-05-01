/*
 * XREFs of WINRT_IMPL_WideCharToMultiByte @ 0x1802D3540
 * Callers:
 *     ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18063F25C (-to_string@winrt@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_str.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall WINRT_IMPL_WideCharToMultiByte(
        UINT CodePage,
        DWORD dwFlags,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        LPCCH lpDefaultChar,
        LPBOOL lpUsedDefaultChar)
{
  return WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}
