/*
 * XREFs of FormatMessageW_0 @ 0x18008F04F
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180093284 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall FormatMessageW_0(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPWSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return FormatMessageW(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
